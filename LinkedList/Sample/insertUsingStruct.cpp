#include <bits/stdc++.h>
#include <cstddef>
  using namespace std;
  
  struct Node {
        int data;
        Node* next;
  };
  
  /*class Node{
    public:
    int data;
    Node* next;
  };
  */
  Node* head = NULL;
  
  /*  insert at end  */
  void insert(int value)
  {
    // allocating memory
      Node* newNode = new Node;
      newNode->data = value;
      newNode->next = NULL;
      if(head == NULL){
        head = newNode;
        return;
      }
      Node* temp = head;
      while(temp->next!=NULL)
      {
        temp=temp->next;
      }
      temp->next=newNode;
  }
  void insertAtFront(int value)
  {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;

  }

  void display() //void display()
  {
    /*
    struct Node* n = head;
    */
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
  }

  int main()
  {   
    //write your code here
    
    insert(1);
    insert(2);
    insert(3);
    insertAtFront(10);
    display();
    //display();
    return 0;
  }