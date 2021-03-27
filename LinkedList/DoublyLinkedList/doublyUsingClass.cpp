#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

// Insert at head
void insertAtHead(node* &head, int value)
{
    node* newNode = new node(value);
    newNode->next=head;
    if(head!=NULL){
        head->prev=newNode;
    }
    head=newNode;
}

// Insert at end
void insertAtEnd(node* &head, int value)
{
    if(head == NULL){
        insertAtHead(head, value);
        return;
    }
    node* newNode = new node(value);
    node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// delete at head
void deleteAtHead(node* &head){
    node* toDelete = head;
    head = head->next;
    head->prev = NULL;

    delete toDelete;
}

// delete at position
void deleteAtPos(node* &head, int pos)
{
    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    int count = 1;

    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }

    temp->prev->next=temp->next;
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }
    delete temp;
}

// display list
void display(node* head)
{
    node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head = NULL;
    for(int i=1; i<=5; i++){
        // insert at end
        insertAtEnd(head, i);
    }
    
    // print insert at end
    cout<<"Insert at end : ";
    display(head);

    // print insert at head
    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 8);
    cout<<"Insert at head : ";
    display(head);

    // delete at position
    cout<<"delete at position 3 : ";
    deleteAtPos(head, 3);
    display(head);

    //delete at head
    cout<<"delete at head : ";
    deleteAtHead(head);
    display(head);
        
    return 0;
}

