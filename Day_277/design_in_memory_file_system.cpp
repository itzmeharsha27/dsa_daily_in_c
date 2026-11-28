#include <string>
#include <vector>
#include <map>
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