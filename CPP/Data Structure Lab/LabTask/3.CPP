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
                else if(top==SIZE-1)
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

void split(Stack x, int v, int num){
    Stack stack1;
    Stack stack2;
    int temp;
    for(int i=0;i<num;i++){
        temp=x.pop();
        if(temp==x){
            stack1.push(temp);
        }
        else{
            stack2.push(temp);
        }
    }
}

int main()
{
        Stack s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.push(60);
        s.push(70);
        int num=7;
        s.pop();
        return 0;
}
