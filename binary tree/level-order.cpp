#include <iostream>
#include <queue>
using namespace std;
class Node{
    public:
      int data;
      Node* left = NULL;
      Node* right = NULL;
      
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        
    }
};
void levelOrderTraversal(Node* root){
    queue<Node*> q#include <iostream>
#include <queue>
using namespace std;
class Node{
    public:
      int data;
      Node* left = NULL;
      Node* right = NULL;
      
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        
    }
};
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node*  temp = q.front();
        q.pop();
        if(temp==NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
Node* buildTree(Node* root){
    cout << " Enter data for the tree" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    cout << "Enter data for the left tree" << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for right tree" << data << endl;
    root -> right = buildTree(root->right);
    return root;
  //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1  
    
}
int main(){
   Node* root = NULL;
   root = buildTree(root);
   levelOrderTraversal(root);
   return 0;
    
}
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node*  temp = q.front();
        q.pop();
        if(temp==NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }else{
                q.push(temp->right);
            }
        }
    }
}
Node* buildTree(Node* root){
    cout << " Enter data for the tree" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    cout << "Enter data for the left tree" << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for right tree" << data << endl;
    root -> right = buildTree(root->right);
    return root;
  //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1  
    
}
int main(){
   Node* root = NULL;
   root = buildTree(root);
   levelOrderTraversal(root);
   return 0;
    
}