#include <bits/stdc++.h>
using namespace std;
class trieNode{
    public : 
        char data;
        trieNode *ar[26];
        bool terminal;
        trieNode(char data){
            this->data = data;
            for(int i = 0;i<26;i++){
                ar[i] = NULL;
            }
            terminal = false;
        }
};

class trie{
    public : 
        trieNode *root;
        trie(){
            root = new trieNode('\n');
        }
        void insertWord(trieNode *root,string word){
            //base condition
            if(word.length() == 0){
                root->terminal = true;
                return;
            }

            //calculating the position 
            int index = word[0] - 'a';
            trieNode *child;

            //if present
            if(root->ar[index] != NULL){
                child = root->ar[index];
            }
            //if not present/absent
            else{
                child = new trieNode(word[0]);
                root->ar[index] = child;
            }
            //recursion
            insertWord(root,word.substr(1));
        }
        void insert(string word){
            insertWord(root,word);
        }

        bool searchUtil(trieNode *root,string word){
            if(word.length() == 0)
                return root->terminal;
            int index = word[0] - 'a';
            trieNode *child;
            if(root->ar[index] != NULL)
                child = root->ar[index];
            else
                return false;
            searchUtil(root,word.substr(1));
        }
        bool search(string word){
            return searchUtil(root,word);
        }

        void removeUtil(trieNode *root,string word){
            if(word.length() == 0){
                if(root->terminal)
                    root->terminal = false;
            }

            int index = word[0] - 'a';
            trieNode *child;
            
            if(root->ar[index] != NULL){
                child = root->ar[index];
            }
            else{
                return;
            }
            removeUtil(root,word.substr(1));
        }
        void remove(string word){
            removeUtil(root,word);
        }
};

int main()
{
    trie *t = new trie();
    t->insert("hello");
    t->insert("pleasant");
    bool ans = t->search("hello");
    if(ans > 1)
        cout<<"word is present in the tree\n";
    else 
        cout<<"not present in the tree\n";

    t->remove("hello");
    ans = t->search("hello");
    if(ans > 1)
        cout<<"word is present in the tree\n";
    else 
        cout<<"not present in the tree\n";
    
    return 0;
}
