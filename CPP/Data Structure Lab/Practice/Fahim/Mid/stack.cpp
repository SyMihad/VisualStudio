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
    void print(){
        if(top==-1){
            cout << "Stack is empty."<< endl;
        }
        else if(top==size-1){
            cout << "Stack is full"<< endl;
        }
        else{
            cout << "Stack is= ";
            for(int i=top;i>=0;i--){
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
    int getTopElement(){
        return stack[top];
    }


};

int main(){
    Stack s;
    bool repeat = true;
    while(repeat==true){
            cout<<"What do you want?"<<endl<<endl;
            cout<<"1. Push an Element"<<endl;
            cout<<"2. Pop an Element"<<endl;
            cout<<"3. Get the top Element"<<endl;
            cout<<"4. Print the stack"<<endl;
            cout<<"5. Evaluate a Postfix Expression"<<endl;
            cout<<"6. Exit"<<endl;
            
            int choice;
            cin>>choice;
            
            switch(choice)
            {
                case 1:
                    int x;
                    cout << "Enter element: ";
                    cin >> x;
                    s.push(x);
                    break;
                    
                case 2:
                    s.pop();
                    break;
                    
                case 3:
                    int num;
                    num=s.getTopElement();
                    cout << "Top element is= " << num << endl;
                    break;
                    
                case 4: 
                    s.print();
                    break;
                    
                case 5:
                
                    //evaluateExpression();
                    break;
                    
                case 6:
                
                    repeat = false;
                    cout<<"You have choose to Exit...."<<endl;
                    break;
                
                default:
                    
                    cout<<"Invalid Choice..."<<endl;
                    break;
            }
}
}