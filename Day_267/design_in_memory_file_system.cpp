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

    Node* getNode(string path) {
        Node* node = root;

        for (const string& part : splitPath(path)) {
            if (!node->children.count(part))
                return nullptr;

            node = node->children[part];
        }

        return node;
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

        for (const string& part : splitPath(filePath)) {
            if (!node->children.count(part))
                node->children[part] = new Node();

            node = node->children[part];
        }

        node->isFile = true;
        node->content += content;
    }

    string readContentFromFile(string filePath) {
        Node* node = getNode(filePath);
        return node->content;
    }

    vector<string> ls(string path) {
        return {};
    }
};