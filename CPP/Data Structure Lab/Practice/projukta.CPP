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

int main()
{
        Stack s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        Stack y;
        y.push(1);
        y.push(2);
        y.push(3);
        y.push(4);
        y.push(5);
        for(int i=0;i<5;i++){
            int tempS, tempY;
            tempS=s.pop();
            tempY=y.pop();
            cout << tempS << "+" << tempY << "  ";
        }
        return 0;
}
