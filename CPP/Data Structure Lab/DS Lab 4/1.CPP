/*#include <iostream>

using namespace std;
#define size 5

class Stack{
    int stack[size];
    int top;
    public:
    Stack(){
        top=-1;
    }
    void push(int num){
        if(top==size-1){
            cout << "Stack is full"<<endl;
        }
        else{
            top++;
            stack[top]=num;
            cout << num << " was sucessfully added to stack."<< endl;
        }
    }

    void pop(){
        if(top==-1){
            cout << "Stack is empty"<< endl;
        }
        else{
            int number;
            stack[top]=number;
            top--;
            cout << "Sucessfully deleted."<< endl;
        }
    }
    void currentStatus(){
        if(top==-1){
            cout << "Stack is empty."<< endl;
        }
        else if(top==size-1){
            cout << "Stack is full"<< endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout << stack[i] << " ";
            }
        }
    }

};

int main(){
    Stack s;
    s.currentStatus();
    s.push(10); 
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.currentStatus();
    s.pop();
    s.pop();
    s.currentStatus();
}*/

#include <iostream>

using namespace std;
#define size 5

class Stack{
    int stack[size];
    int top;
    public:
    Stack(){
        top=-1;
    }
    void push(int num){
        if(top==size-1){
            cout << "Stack is full"<<endl;
        }
        else{
            top++;
            stack[top]=num;
            cout << num << " was sucessfully added to stack."<< endl;
        }
    }

    void pop(){
        if(top==-1){
            cout << "Stack is empty"<< endl;
        }
        else{
            int number;
            stack[top]=number;
            top--;
            cout << "Sucessfully deleted."<< endl;
        }
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

int main(){
    Stack s;
    cout << s.isEmpty() << endl;
    s.push(10); 
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout << s.isEmpty() << endl;
    s.pop();
    s.pop();
    cout << s.isEmpty() << endl;
}