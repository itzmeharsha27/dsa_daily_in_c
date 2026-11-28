#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

class FileSystem {
    struct Node {
        bool isFile = false;
        string content;
        map<string, Node*> children;
    };

    Node* root;

    vector<string> split(const string& path) {
        vector<string> parts;
        string part;
        stringstream ss(path);

        while (getline(ss, part, '/')) {
            if (!part.empty())
                parts.push_back(part);
        }

        return parts;
    }

    Node* getNode(const string& path) {
        Node* node = root;

        for (const string& part : split(path))
            node = node->children[part];

        return node;
    }

public:
    FileSystem() {
        root = new Node();
    }

    vector<string> ls(string path) {
        Node* node = getNode(path);

        if (node->isFile) {
            string name = split(path).back();
            return {name};
        }

        vector<string> result;

        for (const auto& [name, child] : node->children)
            result.push_back(name);

        return result;
    }

    void mkdir(string path) {
        Node* node = root;

        for (const string& part : split(path)) {
            if (!node->children.count(part))
                node->children[part] = new Node();

            node = node->children[part];
        }
    }

    void addContentToFile(string filePath, string content) {
        vector<string> parts = split(filePath);
        Node* node = root;

        for (int i = 0; i < parts.size() - 1; i++) {
            if (!node->children.count(parts[i]))
                node->children[parts[i]] = new Node();

            node = node->children[parts[i]];
        }

        string fileName = parts.back();

        if (!node->children.count(fileName))
            node->children[fileName] = new Node();

        Node* file = node->children[fileName];
        file->isFile = true;
        file->content += content;
    }

    string readContentFromFile(string filePath) {
        return getNode(filePath)->content;
    }
};