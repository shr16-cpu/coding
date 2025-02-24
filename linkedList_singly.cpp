#include<iostream>
using namespace std;
class Node{
    
    public:
      int data;
      Node* next;
      Node(int data){
          this->data = data;
          this->next = NULL;
      }
      ~Node(){
          if(this->next !=NULL){
              delete next;
              this->next = NULL;
          }
      }
    
};
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
    
}
void insertAtMiddle(int pos, Node* &head ,int data,Node* tail){
    Node* nodeToInsert = new Node(data);
    Node* temp = head;
    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    int count = 1;
    while(count<pos-1){
        temp = temp->next;
        count++;
    }
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data <<" ";
        temp = temp ->next;
    }
}
void deleteNode(int pos,Node* &head){
   
    if(pos==1){
      Node* temp = head;
      head = head ->next;
      temp->next = NULL;
      delete temp;
      
    }else{
         Node* prev = NULL;
         Node* curr = head;
         int count =1;
         while(count<=1){
             prev = curr;
             curr = curr -> next;
             count++;
             
        }
        prev->next = curr -> next;
        curr->next = NULL;
        delete curr;
    
        
    }
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,12);
    insertAtTail(tail,13);
    insertAtMiddle(3,head,15,tail);
    insertAtMiddle(1,head,23,tail);
    insertAtMiddle(6,head,25,tail);
    deleteNode(1,head);
    deleteNode(5,head);
    
    print(head);
    return 0;
}