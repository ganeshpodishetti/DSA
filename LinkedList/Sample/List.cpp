#include <bits/stdc++.h>
  using namespace std;
  
  struct Node
  {
    /* data */
    int data;
    Node *next;
  };

  /* 
  class Node {
    public:
    int data;
    Node *next;
  }
  */

  void print(Node *n)
  {
    while(n!=NULL){
      cout<<n->data<<" ";
      n = n->next;
    }
       
  }
  int main()
  {
    //write your code here
    Node* head = NULL;  
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data=1;
    head->next = second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;
    
    print(head);
    return 0;
  }