#include <iostream>

using namespace std;


class Node{

public:
    int data = 0;
    Node *next;
};


class LinkedList{

private:
    Node *head;
    Node *tail;

public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }

    void createNewNode(int data){
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    Node* mid_node(Node* start, Node* last){
        if (start == NULL)
            return NULL;
        struct Node* slow = start;
        struct Node* fast = start -> next;
        while (fast != last){
            fast = fast -> next;
            if (fast != last){
                slow = slow -> next;
                fast = fast -> next;
            }
        }
        return slow;
    }

    Node* binarySearch(int value){
        Node* start = head;
        Node* last = NULL;
        do{
            Node* mid = mid_node(start, last);
            if (mid == NULL)
                return NULL;
            if (mid -> data == value)
                return mid;
            else if (mid -> data < value)
                start = mid -> next;
            else
                last = mid;
            }
        while (last == NULL || last != start);
            return NULL;
    }
};

int main()
{

   LinkedList *myList = new LinkedList();
    for(int i=0;i<9;i++){
        int input;
        cin >> input;
        myList->createNewNode(input);
    }
   cout << "Enter search item=" ;
   int search;
   cin >> search;
   if (myList -> binarySearch(search) == NULL)
      cout << "Not Present";
   else
      cout << "Present";

    return 0;
}
