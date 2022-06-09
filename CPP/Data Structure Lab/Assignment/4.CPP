#include<iostream>

using namespace std;

#define size 20

class Stack{
    private:
        int stack[size];
        int *top;
        int next[size];
        int k;
        int free;
    public:
        Stack(int k){
            this->k=k;
            top = new int[k];
            for(int i = 0; i < k; i++){
                top[i] = -1;
            }
  
            free = 0; 
            for(int i=0; i<size-1; i++){
                next[i] = i+1; 
                next[size-1] = -1;
            }
        }
        bool isFull(){
            if(free==-1){
                return true;
            }
        }
        bool isEmpty(int serial){
            if(top[serial]==-1){
                return true;
            }
        }
        void push(int item, int serial){
            if(isFull()){
                cout << "Stack is full" << endl;
                return;
            }
            int i=free;
            free=next[i];
            next[i]=top[serial];
            top[serial]=i;
            stack[i]=item;
            cout << "Element " << item << " added into Stack" << serial << endl;
        }
        void pop(int serial){
            if(isEmpty(serial)){
                cout << "Stack is empty" << endl;
            }
            int i=top[serial];
            top[serial]=next[i];
            next[i]=free;
            free=i;
            cout << "Element " << stack[i] << " deleted from Stack"<<serial<< endl;
        }
};

int main(){
    int k=3;
    Stack s(k);
    s.push(10,1);
    s.push(20,1);
    s.push(30,1);
    s.push(40,2);
    s.push(50,2);
    s.push(60,2);
    s.push(70,3);
    s.push(80,3);
    s.push(90,3);
    s.pop(1);
    s.pop(2);
    s.pop(3);
}