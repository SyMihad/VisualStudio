#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    //int data;
    Node *left = NULL;
    Node *right = NULL;
};

class LinkedList
{
public:
    Node *head = NULL, *current = NULL;
    Node *createNode(int value)
    {
        Node *temp = new Node();
        temp->data = value;
        temp->next = NULL;
        return temp;
    }
    void insertAtLast(int value)
    {
        Node *temp = createNode(value);
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = temp;
        }
    }
    void insertAtFirst(int value)
    {
        Node *temp = createNode(value);
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }

    void insertAfterValue(int value, int searchValue)
    {
        Node *temp = createNode(value);
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            Node *p = head;
            while (p != NULL)
            {
                if (p->data == searchValue)
                {
                    temp->next = p->next;
                    p->next = temp;
                    break;
                }
                else
                {
                    p = p->next;
                }
            }
        }
    }
    void deleteFromFirst()
    {
        Node *p = head;
        head = head->next;
        delete p;
    }
    void deleteFromLast()
    {
        Node *temp = head, *p;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        p = temp->next;
        temp->next = NULL;
        current = temp;
        delete p;
    }

    int getCount()
    {
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    int findMax()
    {
        int max = -1;
        while (head != NULL)
        {
            if (max < head->data)
                max = head->data;
            head = head->next;
        }
        return max;
    }
    void displayLinkedList()
    {
        Node *p = head;
        while (p != NULL)
        {
            if (p->next == NULL)
                cout << p->data << endl;
            else
                cout << p->data << " -> ";
            p = p->next;
        }
    }
    int pop(){
        Node *temp = head;
        int tempint = temp->data;
        temp = temp->next;
        return tempint;
    }
};

class BST
{
public:
    Node *createNode(int num)
    {
        Node *ptr = new Node();
        ptr->data = num;
        ptr->left = NULL;
        ptr->right = NULL;
        return ptr;
    }

    Node *insertNode(Node *ptr, int num)
    {
        if (ptr == NULL)
        {
            ptr = createNode(num);
        }
        else if (num < ptr->data)
        {
            ptr->left = insertNode(ptr->left, num);
        }
        else if (num > ptr->data)
        {
            ptr->right = insertNode(ptr->right, num);
        }
        return ptr;
    }
    void inorder(Node *ptr)
    {
        if (ptr != NULL)
        {
            inorder(ptr->left);
            cout << ptr->data << " ";
            inorder(ptr->right);
        }
    }

    Node *searchNode(Node *ptr, int num)
    {
        if (ptr == NULL)
        {
            return ptr;
        }
        else if (num < ptr->data)
        {
            ptr = searchNode(ptr->left, num);
        }
        else if (num > ptr->data)
        {
            ptr = searchNode(ptr->right, num);
        }
        return ptr;
    }

    Node *deleteNode(Node *ptr, int num)
    {
        ptr = searchNode(ptr, num);
        if (ptr == NULL)
        {
            return ptr;
        }
        else
        {
            //Node->Leaf node
            if (ptr->left == NULL && ptr->right == NULL)
            {
                delete ptr;
                ptr = NULL;
            }
            //Node->with left child
            else if (ptr->right == NULL)
            {
                Node *temp = ptr;
                ptr = ptr->left;
                delete temp;
            }
            //Node->with right child
            else if (ptr->left == NULL)
            {
                Node *temp = ptr;
                ptr = ptr->right;
                delete temp;
            }
            //Node->with sub-tree
            else
            {
            }
        }
    }
};
int main()
{
    LinkedList lst;
    int n;
    //Node *head = NULL;
    int num;

    cout << "Enter the size : " << endl;
    cin >> n;
    cout << endl;
    cout << "Enter " << n << " number: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num;

        lst.insertAtLast(num);
    }

    lst.displayLinkedList();
    cout << "Max value: " << lst.findMax() << endl;
    cout << "Number of nodes : " << lst.getCount() << endl;
    // cout << "Inorder : " << endl;
    BST bst;
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int temp = lst.pop();
        root = bst.insertNode(root, temp);
    }
    cout << "Done0";
    //root=bst.insertNode(root,num);
    bst.inorder(root);
    cout << endl;

    return 0;
}