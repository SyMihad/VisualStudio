#include<iostream>

using namespace std;

#define size 100

class Stack{
    private:
        int top;
        char stack[size];
    public:
        Stack(){
            top=-1;
        }
        void push(char c){
            if(top==size-1){
                cout << "Stack is full" << endl;
            }
            else{
                top++;
                stack[top]=c;
            }
        }
        char pop(){
            char retu;
            retu = stack[top];
            top--;
            return retu;
        }
};

int main(){
    Stack obj;
    char str[size];
    char input;
    int count=0;
    while(cin.get(input) && input!='\n'){
        obj.push(input);
        count++;
    }
    for(int i=0;i<count;i++){
        str[i]=obj.pop();
    }
    cout << "Reverse string: ";
    for(int i=0;i<count;i++){
        cout << str[i];
    }
    cout << endl;
}       