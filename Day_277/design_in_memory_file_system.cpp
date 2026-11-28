#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

class FileSystem {
    struct Node {
        string name;
        bool isFile;
        string content;
        map<string, Node*> children;

        Node(string name = "", bool isFile = false) {
            this->name = name;
            this->isFile = isFile;
        }
    };

    Node* root;

    vector<string> split(string path) {
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
        root = new Node("/");
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