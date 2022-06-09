#include <iostream>

using namespace std;

#define size 10

template<class type>

class Stack{
    type stack[size];
    int top;

    public:
    Stack(){
        top=-1;
    }

    void push(type x){
        if(top==size-1){
            cout << "Stack is full";
        }
        else{
            top++;
            stack[top]=x;
            cout << x << " was successfully added into stack."<< endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is empty.";
        }
        else{
            type y;
            stack[top]=y;
            top--;
            cout << "element successfully deleted." << endl;
        }
    }

    void currentStatus(){
        if(top==size-1){
            cout << "Stack is full." << endl;
        }
        else if(top==-1){
            cout << "Stack is empty." << endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Stack<int> obj1;
    obj1.currentStatus();
    obj1.push(1);
    obj1.push(2);
    obj1.push(3);
    obj1.push(4);
    obj1.push(5);
    obj1.push(6);
    obj1.push(7);
    obj1.currentStatus();
    obj1.pop();
    obj1.pop();
    obj1.currentStatus();

}