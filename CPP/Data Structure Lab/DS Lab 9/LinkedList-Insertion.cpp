#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *link;
};

struct Node *head=NULL;

void insertAtBeginning(int num){
    struct Node *ptr=new Node;
    ptr->data=num;
    ptr->link=head;
    head=ptr;
}

void insertAtEnd(int num){
    struct Node *ptr= new Node;
    ptr->data=num;
    ptr->link=NULL;
    if(head==NULL){
        head=ptr;
    }
    else{
        struct Node *temp= head;
        while(temp->link!=NULL){
            temp=temp->link;
        }
        temp->link=ptr;
    }
}

void insertAtPosition(int position, int num){
    if(head==NULL){
        insertAtBeginning(num);
        return;
    }
    else{
        struct Node *temp=head;
        for(int i=1;i<position;i++){
            temp=temp->link;
        }
        struct Node *ptr = new Node;
        ptr->data=num;
        ptr->link=temp->link;
        temp->link=ptr;
    }
}

void checkElements(){
    struct Node *temp=head;
    cout << "next head= " << temp->link->data << endl;
    cout << "All item in this Linked List: ";
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->link;
    }
    cout << endl;
}

int main(){
    insertAtBeginning(1);
    insertAtBeginning(2);
    insertAtBeginning(3);
    insertAtBeginning(4);
    insertAtBeginning(6);
    checkElements();
    insertAtEnd(10);
    checkElements();
    insertAtPosition(4,5);
    checkElements();
}