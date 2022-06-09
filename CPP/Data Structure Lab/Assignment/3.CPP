#include<iostream>

using namespace std;

#define size 20

class Stack{
    private:
        int stack[size];
        int top1;
        int top2;
    public:
        Stack(){
            top1=-1;
            top2=size;
        }
        void push(string option, int num){
            if(option=="stack1"){
                if(top1<top2-1){
                    top1++;
                    stack[top1]=num;
                    cout << "Element " << num << " inserted into Stack1" << endl;
                }
                else{
                    cout << "Stack is full" << endl;
                }
            }
            else if(option=="stack2"){
                if(top1<top2-1){
                    top2--;
                    stack[top2]=num;
                    cout << "Element " << num << " inserted into Stack2" << endl;
                }
                else{
                    cout << "Stack is full" << endl;
                }
            }
        }
        void pop(string option){
            if(option=="stack1"){
                if(top1>0){
                    cout << "Element " << stack[top1] << " deleted from Stack1" << endl;
                    top1--;
                }
                else{
                    cout << "Stack is empty" << endl;
                }
            }
            else if(option=="stack2"){
                if(top2<size){
                    cout << "Element " << stack[top2] << " deleted form Stack2" << endl;
                    top2++;
                }
                else{
                    cout << "Stack is empty" << endl;
                }
            }
        }
};

int main(){
    Stack s;
    s.push("stack1",10);
    s.push("stack1",20);
    s.push("stack1",30);
    s.push("stack2",40);
    s.push("stack2",50);
    s.push("stack2",60);
    s.pop("stack1");
    s.pop("stack2");

}