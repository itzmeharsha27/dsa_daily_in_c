#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

class FileSystem {
    struct Node {
        map<string, Node*> children;
        string content;
        bool isFile;

        Node() {
            isFile = false;
        }
    };

    Node* root;

    vector<string> splitPath(string path) {
        vector<string> parts;
        string part;
        stringstream ss(path);

        while (getline(ss, part, '/')) {
            if (!part.empty())
                parts.push_back(part);
        }

        return parts;
    }

public:
    FileSystem() {
        root = new Node();
    }

    void mkdir(string path) {
        Node* node = root;

        for (const string& part : splitPath(path)) {
            if (!node->children.count(part))
                node->children[part] = new Node();

            node = node->children[part];
        }
    }

    void addContentToFile(string filePath, string content) {
        Node* node = root;

        vector<string> parts = splitPath(filePath);

        for (const string& part : parts) {
            if (!node->children.count(part))
                node->children[part] = new Node();

            node = node->children[part];
        }

        node->isFile = true;
        node->content += content;
    }

    vector<string> ls(string path) {
        return {};
    }

    string readContentFromFile(string filePath) {
        return "";
    }
};