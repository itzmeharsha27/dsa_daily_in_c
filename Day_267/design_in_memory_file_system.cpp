#include <string>
#include <vector>
#include <map>
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