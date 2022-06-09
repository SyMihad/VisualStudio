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

class Stack{
       private:
       int stack[size];
       int top;
       public:
       Stack()
       {
          top=-1;
       }
       void push(int number)
        {
            if(top==size-1)
            {
             cout<<"Stack is Full";
            }
            else
            {
                top++; //top=-1-top=0
                stack[top]=number;
                cout<<"The number " <<number<<" is successfully added in the stack"<<endl;
            }
        }

        int pop()
        {
            int number;
            if(top==-1)
            {
               cout<<"Stack is empty";
            }
            else
            {
                number=stack[top];
                top--;
                //cout<<"\nThe element"<<number<<" is successfully popped from the stack "<<endl;
            }
            return number;
        }

        void CurrentStatusofAStack()
        {
                if(top==-1)
                {
                        cout<<"Stack is empty"<<endl;
                }
                else if(top==size-1)
                {
                        cout<<"Stack is full"<<endl;
                }
                else
                {
                       cout<<"Stack Elements"<<endl;
                       for(int i=top;i>=0;i--)
                       {
                           cout<<stack[i]<<" ";
                       }
               }
       }

};

Queue return2nd(Queue q){
    Queue forReturn;
    Stack tempStack;
    int count=0;
    for(int i=0;i<10;i++){
        tempStack.push(q.deQueue());
    }

    for(int i=0;i<10;i++){
        if(count==1){
            forReturn.enQueue(tempStack.pop());
            count++;
        }
        else{
            if(count%2==0){
                forReturn.enQueue(tempStack.pop());
                count++;
            }
        }

        count++;
        tempStack.pop();
        if(count>10){
            break;
        }
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

    Queue obj2;
    obj2=return2nd(obj);
    obj2.checkElements();
}