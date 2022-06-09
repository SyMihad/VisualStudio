#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *link;
};

struct Node *head=NULL;

void insertAtBeginning(int num){
    struct Node *ptr = new Node();
    ptr->data=num;
    ptr->link=head;
    head=ptr;
}

void insertAtEnd(int num){
    struct Node *ptr=new Node();
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

void searchElement(int num){
    struct Node *temp=head;
    int count=0;
    while(temp->link!=NULL){
        count++;
        if(temp->data==num){
            break;
        }
        temp=temp->link;
    }
    if(count==0){
        cout<<"Element is not present in this Linked List;" << endl;
    }
    else{
        cout << "Element found at " << count << "th Node." << endl;
    }
}

int main(){
    insertAtBeginning(3);
    insertAtBeginning(2);
    insertAtBeginning(1);
    insertAtEnd(4);
    insertAtEnd(5);
    insertAtEnd(6);
    insertAtEnd(7);
    searchElement(6);
}