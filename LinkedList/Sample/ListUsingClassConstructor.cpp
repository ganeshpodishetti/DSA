#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
    // class constructor
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* head = NULL;

// inserting elements in given order same as inserting elements at end
void insertAtEnd(int value) 
{
    // allocating memory for class objects
    Node* newNode = new Node(value);
    if(head == NULL){
       head = newNode;
       return;
    }    
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = newNode;
}

void insertAtFront(int value)
{
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void display()
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

bool search(int k){
    if(head == NULL){
        return false;
    }
    while(head!=NULL){
        if(head->data==k){
            return true;
        }
        head = head->next;
    }
    return false;
}
int main()
{
    /*
    int n, value;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>value;
        insertAtFront(value);
    }
    */
    insertAtFront(1);
    insertAtFront(2);
    insertAtFront(3);
    insertAtFront(4);
    insertAtEnd(5);
    insertAtEnd(6);
    insertAtEnd(7);
    insertAtEnd(8);
    display();
    cout<<search(8)<<endl;
}

