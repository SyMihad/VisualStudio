#include <iostream>

using namespace std;
#define size 5
class Stack{
    private:
        int stack[size];
        int top;
    public:
        Stack(){
            top=-1;
        }
        bool push(int num){
            if(top==size-1){
                //cout << "Stack is full" << endl;
                return false;
            }
            else{
                stack[++top]=num;
                return true;
            }
        }
        int pop(){
            int x;
            if(top==-1){
                cout << "Stack is empty" << endl;
            }
            else{
                x=stack[top];
                top--;
            }
            return x;
        }
        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
};

class Queue{
    private:
        Stack stack1;
        Stack stack2;
    public:
        Queue(){

        }
        void enQueue(int num){
            stack1.push(num);
            cout << num << " inserted into Queue" << endl; 
        }
        void deQueue(){
            int x,y;
            while(!stack1.isEmpty()){
                x=stack1.pop();
                stack2.push(x);
            }
            y=stack2.pop();
            while(!stack2.isEmpty()){
                x=stack2.pop();
                stack1.push(x);
            }
            cout << y << " deleted from Queue" << endl;
        }
};

int main(){
    Queue qu;
    qu.enQueue(10);
    qu.enQueue(20);
    qu.enQueue(30);
    qu.enQueue(40);
    qu.deQueue();
}