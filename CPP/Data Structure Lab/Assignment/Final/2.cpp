#include <iostream>

using namespace std;

int evenCount=0,oddCount=0;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *insert(Node *node, int n){
    if(node == NULL){
        node=new Node();
        node->data=n;
        node->left=NULL;
        node->right=NULL;
    }
    else if(node->data > n){
        node->left = insert(node->left,n);
    }
    else{
        node->right=insert(node->right,n);
    }

    return node;
}

void preOrderTraversal(Node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);


}

void countEven(Node *root){
    if(root != NULL){
        countEven(root->left);
        if(root->data%2==0){
            evenCount++;
            cout << "Even= " << root->data << endl;
        }
        countEven(root->right);
    }
}

void countOdd(Node *root){
    if(root != NULL){
        countOdd(root->left);
        if(root->data%2!=0){
            oddCount++;
            cout << "Odd= " << root->data << endl;
        }
        countOdd(root->right);
    }
}

int main(){
    Node *root = NULL;
    root= insert(root, 10);
    root= insert(root, 15);
    root= insert(root, 22);
    root= insert(root, 6);
    root= insert(root, 18);
    root= insert(root, 35);
    root= insert(root, 8);
    root= insert(root, 42);
    root= insert(root, 4);
    root= insert(root, 30);

    //preOrderTraversal(root);

    countEven(root);
    cout << "Total even= " << evenCount << endl;

    countOdd(root);
    cout << "Total odd= " << oddCount << endl;

