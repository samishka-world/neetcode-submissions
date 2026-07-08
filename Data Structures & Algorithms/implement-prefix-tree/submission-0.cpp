class Node
{
    public:
    unordered_map<char,Node*> children;
    bool isend;
    Node()
    {
        isend=false;
    }
};
class PrefixTree {
public:
    Node* root;
    PrefixTree() {
        root= new Node();
    }
    
    void insert(string word) {
        Node* temp= root;
        for(int i=0;i<word.size();i++)
        {
            if(temp->children.count(word[i])==0)
            {
                temp->children[word[i]]=new Node();
            }
            temp=temp->children[word[i]];
        }
        temp->isend=true;
    }
    
    bool search(string word) {
        Node* temp=root;
        for(int i=0;i<word.size();i++)
        {
            if(temp->children.count(word[i]))
            {
                temp=temp->children[word[i]];
            }
            else
            return false;
        }
        return temp->isend;
    }
    
    bool startsWith(string prefix) {
        Node* temp = root;

        for(int i = 0; i < prefix.size(); i++)
        {
            if(temp->children.count(prefix[i]))
            {
                temp = temp->children[prefix[i]];
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};
