#include<iostream>

using namespace std;

#define size 10

class Queue{
    private:
        int queue[size];
        int front;
        int rear;
    public:
        Queue(){
            front=-1;
            rear=-1;
        }
        void enQueue(int num){
            if(rear==size-1){
                cout << "Queue is full" << endl;
            }
            else{
                rear++;
                queue[rear]=num; 
            }
        }
        int deQueue(){
            int temp;
            if(front==rear){
                cout <<"Queue is empty" << endl;
            }
            else{
                front++;
                temp=queue[front];
            }
            return temp;
        }
        bool isEmpty(){
            if(front==rear){
                return true;
            }
            else{
                return false;
            }
        }
};

class Stack{
    private:
        Queue q1;
        Queue q2;
    public:
        void push(int num){
            while(!q1.isEmpty()){
                int temp;
                temp=q1.deQueue();
                q2.enQueue(temp);
            }
            q1.enQueue(num);
            while(!q2.isEmpty()){
                int temp;
                temp=q2.deQueue();
                q1.enQueue(temp);
            }
            cout << num << " inserted into Stack" << endl;
        }
        void pop(){
            int temp;
            temp=q1.deQueue();
            cout <<  temp << " was deleted from stack." << endl;
        }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
}