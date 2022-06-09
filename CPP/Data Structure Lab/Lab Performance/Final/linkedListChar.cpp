#include <iostream>

using namespace std;

struct Node{
    char data;
    Node *link;
};

struct Node *head=NULL;

void insertAtBeginning(char ch){
    struct Node *ptr=new Node;
    ptr->data=ch;
    ptr->link=head;
    head=ptr;
}

void insertAtEnd(char ch){
    struct Node *ptr= new Node;
    ptr->data=ch;
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

void insertAtPosition(int position, char ch){
    if(head==NULL){
        insertAtBeginning(ch);
        return;
    }
    else{
        struct Node *temp=head;
        for(int i=1;i<position;i++){
            temp=temp->link;
        }
        struct Node *ptr = new Node;
        ptr->data=ch;
        ptr->link=temp->link;
        temp->link=ptr;
    }
}

void checkElements(){
    struct Node *temp=head;
    cout << "All item in this Linked List: ";
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->link;
    }
    cout << endl;
}

int main(){
    insertAtBeginning('s');
    insertAtEnd('h');
    insertAtEnd('a');
    insertAtEnd('j');
    insertAtEnd('r');
    insertAtEnd('a');
    insertAtEnd('t');
    insertAtEnd('l');
    checkElements();
    insertAtPosition(4, 'a');
    insertAtPosition(8, 'u');
    checkElements();
}