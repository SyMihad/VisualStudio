#include <iostream>
#include <string.h>

using namespace std;

struct Node{
    int id;
    string name;
    float cgpa;
    Node *left;
    Node *right;
};

bool search(Node *root, int id){
    bool flag=false;
    if(root==NULL){
        return false;
    }
    if(root->id==id){
        return true;
    }
    else if(root->id > id){
        flag=search(root->left,id);
    }
    else{
        flag=search(root->right,id);
    }
    return flag;
}

Node *insert(Node *node, int id, string name, float cgpa){
    if(!search(node,id)){
        if(node==NULL){
            node=new Node();
            node->id=id;
            node->name=name;
            node->cgpa=cgpa;
            node->left=NULL;
            node->right=NULL;
        }
        else if(id< node->id){
            node->left = insert(node->left, id, name, cgpa);
        }
        else{
            node->right = insert(node->right, id, name, cgpa);
        }
    }
    else{
        cout << "You must use an unique ID." << endl;
    }
    return node;
}

void display(Node *root){
    if(root!=NULL){
        display(root->left);
        cout << "ID= " << root->id << " Name= " << root->name << " CGPA= " << root->cgpa << endl;
        display(root->right);
    }
}

void preTraversal(Node *root){
    if(root==NULL){
        return;
    }
    cout << "ID= " << root->id << " Name= " << root->name << " CGPA= " << root->cgpa << endl;
    preTraversal(root->left);
    preTraversal(root->right);
}

void postTraversal(Node *root){
    if(root==NULL){
        return;
    }
    postTraversal(root->left);
    postTraversal(root->right);
    cout << "ID= " << root->id << " Name= " << root->name << " CGPA= " << root->cgpa << endl;
}

void inOrderTraversal(Node *root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout << "ID= " << root->id << " Name= " << root->name << " CGPA= " << root->cgpa << endl;
    inOrderTraversal(root->right);
}

int main(){
    Node *root=NULL;
    root=insert(root,01,"Mihad",3.75);
    root=insert(root,03,"Rahik",3.50);
    root=insert(root,02,"Helal",3.65);
    root=insert(root,02,"Anika",3.25);
    root=insert(root,07,"Fahim",3.75);
    root=insert(root,04,"Nipun",3.5);
    cout << "Display from root-" << endl;
    display(root);
    cout << endl << "In Order Traversal: " << endl;
    inOrderTraversal(root);
    cout << endl << "Pre Order Traversal: " << endl;
    preTraversal(root);
    cout << endl << "Post Order Traversal: " << endl;
    postTraversal(root);
    bool found = search(root,03);
    if(found){
        cout << endl << "Node is found in the Binary Search Tree. " << endl;
    }else{cout << endl << "Node is not found in the Binary Search Tree. " << endl;}
}