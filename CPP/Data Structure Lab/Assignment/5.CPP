#include <iostream>
#define SIZE 5

using namespace std;
class Stack{
       private:
       int stack[SIZE];
       int top;
       public:
       Stack()
       {
          top=-1;
       }
       void push(int number)
        {
            if(top==SIZE-1)
            {
             cout<<"Stack is Full";
            }
            else
            {
                top++;
                stack[top]=number;
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
            }
            return number;
        }

        void CurrentStatusofAStack()
        {
                if(top==-1)
                {
                        cout<<"Stack is empty"<<endl;
                }
                else if(top==SIZE-1)
                {
                        cout<<"Stack is full"<<endl;
                }
                else
                {
                       cout<<"Stack Elements: ";
                       for(int i=top;i>=0;i--)
                       {
                           cout<<stack[i]<<" ";
                       }
                       cout << endl;
               }
       }
       bool isEmpty(){
        return (top==-1);
       }

};

Stack reverseStack(Stack st){
    Stack forReturn;
    while(!st.isEmpty()){
        int temp;
        temp=st.pop();
        forReturn.push(temp);
    }
    return forReturn;
}

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    Stack reverse;
    reverse=reverseStack(s);
    cout << "Before reverse: " ;
    s.CurrentStatusofAStack();
    cout << "After reverse: ";
    reverse.CurrentStatusofAStack();
}