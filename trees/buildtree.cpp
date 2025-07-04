#include<iostream>
using namespace std;
class Node{
  int data;
  Node* left = NULL;
  Node* right=NULL;
  Node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
}
Node* buildTree(Node* &root){
  int data;
   cout << "Enter data" ;
   cin >> data;
   root = new Node(data);
   if(data == -1){
    return;
   }
   cout << "Enter data for inserting into left of" << data;
   root->left = buildTree(root->left);
   count << "Enter data for inserting into right of" << data;
   root->right = buildTree(root->right);
   return root;
}
void levelOrderTraversal(Node* root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    Node* temp = q.front();
    q.pop();
    if(temp == NULL){
       cout << endl;
       if(!q.empty()){
        q.push(NULL);
       }
    }else{
       cout << temp->data << endl;
       if(temp->left){
        q.push(temp->left);
       }
       if(temp->right){
        q.push(temp->right);
       }
    }
  }
}
int main(){
  Node* root = NULL;
  root = buildTree(root);
  levelOrderTraversal(root);
  return 0;
}