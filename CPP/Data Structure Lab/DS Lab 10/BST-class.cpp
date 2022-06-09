#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *insert(Node *node, int n){
    if(node == NULL){
        node = new Node();
        node -> data = n;
        node->left = NULL;
        node->right = NULL;
    }
    else if(n<node -> data){
        node->left = insert(node->left, n);
    }
    else{
        node->right = insert(node->right, n);
    }

    return node;
}
//Node *search(Node *root, int key){
 //   if(root == NULL || root->data == key) return root;
 //   if(root->data > key) return search(root->right, key);
 //   return search(root->left, key);
//}
bool search(Node *root, int key){
    bool found=false;
    if(root == NULL)
        return false;
    if(key == root->data ){
            return true;
    }
    else if(root->data > key){
        found = search(root->left, key);
    }
    else{
       found = search(root->right, key);
    }

    return found;
}
void preOrderTraversal(Node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);


}
void inOrderTraversal(Node *root){
    if(root==NULL) return;
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);

}
void postOrderTraversal(Node *root){
    if(root==NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";

}
void display(Node *root){
    if(root!=NULL){
        display(root->left);
        cout<<root->data<<" ";
        display(root->right);
    }
}

int main()
{
    /* Let us create following BST
              40
             /  \
           30   60
                    \
                   65
                      \
                     70*/
    // 30 70 65 60 40

    Node *root = NULL;
    root = insert(root, 40);
    root = insert(root, 30);
    root = insert(root, 60);
    root = insert(root, 65);
    root = insert(root, 70);
    // root = insert(root, 70);
    // root = insert(root, 40); 
    // root = insert(root, 65);
    // root = insert(root, 30);
    // root = insert(root, 60);
    //display(root);
     cout <<endl;;
    cout<<"Post Order Traversal: ";
    postOrderTraversal(root);
    cout<<endl;
    cout<<"In Order Traversal: ";
    inOrderTraversal(root);
    cout<<endl;
    cout<<"Pre-order Traversal: ";
    preOrderTraversal(root);
    cout<<endl;
    int f=search(root, 70);
    if (f==0){
        cout<<"Node is not found in the binary search tree"<<endl;
    }
    else{

       cout<<"Node is found in the binary search tree"<<endl;
    }

    return 0;
}
