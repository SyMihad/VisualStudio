#include<iostream>

using namespace std;

#define size 5

class Queue{
    private:
        int queue[size];
        int rear;
        int front;

    public:
        Queue(){
        rear=-1;
        front=-1;
        }
        void enQueue(int num){
            if(rear==size-1){
                cout << "Queue is full" << endl;
            }
            else{
                rear++;
                queue[rear]=num;
                cout << num << " inserted into Queue." << endl;
                cout << "front= " << front << "   rear= " << rear << endl;
            }
        }
        void deQueue(){
            if(front==rear){
                cout << "Queue is empty." << endl;
            }
            else{
                int num;
                front++;
                num=queue[front];
                cout << "An element " << num << " was deleted from Queue." << endl;
            }
        }
        void checkElements(){
            cout << "Elements are: ";
            for(int i=front+1;i<=rear;i++){
                cout << queue[i] << " ";
            }
            cout << endl;
        }


};

int main(){
    Queue obj;
    // obj.enQueue(1);
    // obj.enQueue(2);
    // obj.enQueue(3);
    // obj.enQueue(4);
    // obj.enQueue(5);
    // obj.enQueue(6);
    // obj.enQueue(7);
    // obj.enQueue(8);
    // obj.enQueue(9);
    // obj.enQueue(10);
    // obj.enQueue(11);
    // obj.checkElements();
    // obj.deQueue();
    // obj.deQueue();
    // obj.deQueue();
    // obj.deQueue();
    // obj.deQueue();
    // obj.deQueue();
    // obj.deQueue();
    // obj.deQueue();
    // obj.deQueue();
    // obj.deQueue();
    // obj.deQueue();
    // obj.checkElements();
    obj.enQueue(1);
    obj.enQueue(2);
    obj.enQueue(3);
    obj.deQueue();
    obj.enQueue(4);
    

}