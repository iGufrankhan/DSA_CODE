
#include<bits/stdc++.h>
using namespace std;

class TrieNode{
 
 public:
 TrieNode *child[26];
 bool isend;
 TrieNode(){

isend=false;
for(int i=0;i<26;i++)child[i]=NULL;


 }

};
class Trie
{

TrieNode * root;
public:
Trie(){
    root=new TrieNode();
}
//indering

void insert(string word){
  TrieNode *node=root;
  for(char c:word){
    int index=c-'a';
    if(node->child[index]==NULL){
        node->child[index]=new TrieNode();
     
    }
  
        node=node->child[index];
    
  }
    node->isend=true;

}




// searching
bool search(string word){

TrieNode *node=root;
for(char c:word){
    int index=c-'a';
    if(node->child[index]==NULL){
        return 0;
      }
  node=  node->child[index];
}
return node->isend;


}



bool isempty(TrieNode *node){
    for(int i=0;i<26;i++){
        if(node->child[i])return 0;
    }
    return 1;
}

bool delete_the_word(string word,TrieNode *node,int dep){

if(dep==word.size()){

if(node->isend==0)return 0;
else {

    node->isend=0;
    return isempty(node);
}


}

int index=word[dep]-'a';
if(node->child[index]==NULL)return 0;

bool wnated=delete_the_word(word,node->child[index],dep+1);

if(wnated){
    delete node->child[index];
    node->child[index]=NULL;
    return !node->isend&& isempty(node);
}

return 0;




}









void delete_the(string word){
 delete_the_word(word,root,0);


}




};
int main(){

Trie *trie= new Trie();
trie->insert("apple");
trie->insert("appex");
trie->insert("money");
cout<<trie->search("appex")<<endl;
trie->delete_the("appex");
cout<<trie->search("apple");

}