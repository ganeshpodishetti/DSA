#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int value){
        data = value;
        next = NULL;
    }
};

void insertAtEnd(node* &head, int value)
{
    node* newNode = new node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

node* reverse(node* &head)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

node* reverseUsingRec(node* &head)
{
    if(head == NULL || head->next==NULL){
        return head;
    }

    node* newHead = reverseUsingRec(head->next);
    head->next->next=head;
    head->next=NULL;

    return newHead;
}

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
        insertAtEnd(head, i);
    }
    display(head);

    node* newNode = reverseUsingRec(head);
    display(newNode);

    //node* Node = reverseUsingRec(head);
    //display(Node);

    return 0;
}