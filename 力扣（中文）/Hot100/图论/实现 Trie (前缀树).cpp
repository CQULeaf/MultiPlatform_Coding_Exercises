class Trie {
    private:
        struct TrieNode {
            bool isEnd;
            unordered_map<char, TrieNode*> children;
            
            TrieNode() : isEnd(false) {}
        };
        
        TrieNode* root;
    
    public:
        Trie() {
            root = new TrieNode();
        }
        
        void insert(string word) {
            TrieNode* node = root;
            for (char c : word) {
                if (node->children.find(c) == node->children.end()) {
                    node->children[c] = new TrieNode();
                }
                node = node->children[c];
            }
            node->isEnd = true;
        }
        
        bool search(string word) {
            TrieNode* node = root;
            for (char c : word) {
                if (node->children.find(c) == node->children.end()) {
                    return false;
                }
                node = node->children[c];
            }
            return node->isEnd;
        }
        
        bool startsWith(string prefix) {
            TrieNode* node = root;
            for (char c : prefix) {
                if (node->children.find(c) == node->children.end()) {
                    return false;
                }
                node = node->children[c];
            }
            return true;
        }
    };