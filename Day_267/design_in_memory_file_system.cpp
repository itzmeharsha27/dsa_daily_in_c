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

    vector<string> ls(string path) {
        return {};
    }

    void mkdir(string path) {
    }

    void addContentToFile(string filePath, string content) {
    }

    string readContentFromFile(string filePath) {
        return "";
    }
};