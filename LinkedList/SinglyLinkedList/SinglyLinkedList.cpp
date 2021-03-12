/**
 * ! Linked List are implemented in 2 ways
 * ? 1. Structure, memory allocation using malloc, deallocate memory using free() -> library function
 * ? 2. Class, memory allocation using new operator faster than malloc, dealloacate memory using delete -> delete operator calls deconstructor
 * * class with free can cause memory leak.
 * * structure allocate memory for data members at once
 * * new operator allocates memory when constructor created
 * * Structure Implementation
 * struct Node{
 * int data;
 * Node *next
 * }
 * * Class Implemation 
 * class Node{
 * public:
 * int data;
 * Node *next;
 * //constructor 
 * Node(int val)
 * {
 *   data = value;
 *   next = NULL;
 * }
 * };
 * 
*/
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* head = NULL;

// insert at end to the list
void insertAtEnd(int newValue)
{
  Node* newNode = new Node(newValue);
  if(head == NULL){
     head = newNode;
     return;
  }
  Node* temp = head;
  while(temp->next != NULL){
      temp = temp->next;
  }
  temp->next = newNode;
}

// insert at front to the list
void insertAtFront(int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

// display list
void display()
{
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
    } else {
        while(head != NULL){
            cout<<head->data<<" ";
            head = head ->next;
        }
    }
    cout<<endl;
}

// search element in list
bool search(int key){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    for(int i=0; i<5; i++)
    {
        // insert array of elements at end
        insertAtEnd(a[i]);
    }
    // insert elements at front
    insertAtFront(10);
    insertAtFront(9);
    insertAtFront(8);

    // search an element
    cout<<search(1)<<endl;

    // display head of the list
    cout<<head->data<<endl;

    // display the list
    display();

    return 0;
}