#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *link;
};

struct Node *head=NULL;

void insertAtEnd(int num){
    struct Node *ptr=new Node;
    ptr->data=num;
    ptr->link=NULL;
    if(head==NULL){
        head=ptr;
    }
    else{
        struct Node *temp=head;
        while(temp->link!=NULL){
            temp=temp->link;
        }
        temp->link=ptr;
    }
}

void deleteAtBeginning(){
    if(head==NULL){
        cout << "List is empty" << endl;
    }
    else{
        struct Node *ptr=head;
        head=head->link;
        free(ptr);
    }
}

void deleteAtTheEnd(){
    struct Node *ptr;
    if(head==NULL){
        cout << "List is empty" << endl;
    }
    else if(head->link==NULL){
        ptr=head;
        head=NULL;
        free(ptr);
    }
    else{
        struct Node *previous;
        ptr=head;
        while(ptr->link!=NULL){
            previous=ptr;
            ptr=ptr->link;
        }
        previous->link=NULL;
        free(ptr);

    }

}

void deleteAtPosition(int position){
    struct Node *temp=head;
    struct Node *previous;
    struct Node *next;
    for(int i=1;i<position;i++){
        previous=temp;
        temp=temp->link;
    }
    next=temp->link;
    //cout << "Previous="<< previous->data << "  Position=" << temp->data <<"  Next=" << next->data << endl;
    previous->link=next;
    free(temp);

}

void checkElements(){
    struct Node *temp=head;
    cout << "Elements are: ";
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->link;
    }
    cout << endl;
}


int main(){
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    insertAtEnd(6);
    insertAtEnd(7);
    checkElements();
    deleteAtBeginning();
    checkElements();
    deleteAtTheEnd();
    checkElements();
    deleteAtPosition(4);
    checkElements();
    
}