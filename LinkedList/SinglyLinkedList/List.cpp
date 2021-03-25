#include <bits/stdc++.h>
using namespace std;

// create linked list
class node{
    public:
    int data;
    node* next;
    // constructor
    node(int value){
        data = value;
        next = NULL;
    }
};

// Insert at the end
void insertAtEnd(node* &head, int value)
{
    node* newNode = new node(value);

    if(head==NULL){
        head = newNode;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=newNode;
}

// Insert at the front
void insertAtFront(node* &head, int value)
{
    node* newNode = new node(value);
    newNode->next = head;
    head = newNode;
}

// search an element
bool search(node* head, int k)
{
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==k){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

// delete at head
void deleteAtHead(node* &head)
{
    node* toDelete = head;
    head = head->next;

    delete toDelete;
}

// Delete at the value
void deleteValue(node* &head, int value)
{
    // empty list
    if(head == NULL){
        return;
    }
    
    // only one element
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    
    // delete value
    node* temp = head;
    while(temp->next->data!=value){
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

// Display the list
void display(node* head)
{
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head = NULL;
    for(int i=1; i<=10; i++){
        // inserting at the end
        insertAtEnd(head, i);
    }

    // display list
    cout<<"display original list : ";
    display(head);

    // inserting at the head
    cout<<"Inserting at the head : ";
    insertAtFront(head, 11);
    insertAtFront(head, 12);
    insertAtFront(head, 13);
    display(head);

    // search an element
    cout<<"search an element : ";
    search(head, 3) ? cout<<"found"<<endl : cout<<"Not found"<<endl;

    // Delete the particular value
    cout<<"Delete particular value : ";
    deleteValue(head, 5);
    display(head);

    // Delete at head
    cout<<"Delete at head : ";
    deleteAtHead(head);
    display(head);

    return 0;
}