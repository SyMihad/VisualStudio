#include<iostream>

using namespace std;

#define size 10

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
            }
        }
        int deQueue(){
            int num;
            if(front==rear){
                cout << "Queue is empty." << endl;
            }
            else{
                
                front++;
                num=queue[front];
                //cout << "An element " << num << " was deleted from Queue." << endl;
            }
            return num;
        }
        void checkElements(){
            cout << "Elements are: ";
            for(int i=front+1;i<=rear;i++){
                cout << queue[i] << " ";
            }
            cout << endl;
        }


};

Queue reverse(Queue q){
    Queue forReturn;
    int count=1;
    for(int i=9;i>=0;i--){
        if(count==1){
            forReturn.enQueue(q.deQueue());
        }
        else{
            if(count%3==0){
                forReturn.enQueue(q.deQueue());
            }
        }

        count++;
        q.deQueue();
    }

    return forReturn;
}

int main(){
    Queue obj;
    obj.enQueue(1);
    obj.enQueue(2);
    obj.enQueue(3);
    obj.enQueue(4);
    obj.enQueue(5);
    obj.enQueue(6);
    obj.enQueue(7);
    obj.enQueue(8);
    obj.enQueue(9);
    obj.enQueue(10);
    obj.enQueue(11);
    //obj.checkElements();
    

    Queue obj2;
    obj2=reverse(obj);
    obj2.checkElements();
}