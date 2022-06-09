/* #include <iostream>

using namespace std;

#define size 3
//int size;

class Stack{
    int stack[limit];
    int top;
    int limit;
    public:
    Stack(){
        top=-1;
        limit=size;
    }
    void push(int num){
        if(top==limit-1){
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
    void print(){
        if(top==-1){
            cout << "Stack is empty."<< endl;
        }
        else if(top==limit-1){
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
    s.print();
    s.push(10); 
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.print();
    s.pop();
    s.pop();
    s.print();
} */

  #include <stdio.h>
	    int main()
	    {
	        int i = 97, *p = &i;
	        foo(&i);
	        printf("%d ", *p);
	    }
	    void foo(int *p)
	    {
	        int j = 2;
	        p = &j;
	        printf("%d ", *p);
	    }