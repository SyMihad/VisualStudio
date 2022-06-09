#include <iostream>

using namespace std;

#define SIZE 5


struct information{
    std::string name;
    int age;
    std::string dop;
};

class Stack{
       private:
       struct information info[SIZE];
       int top;
       public:
       Stack()
       {
          top=-1;
       }
       void store(string n, int a, string dp)
        {
            if(top==SIZE-1)
            {
             cout<<"Stack is Full";
            }
            else
            {
                top++;
                info[top].name=n;
                info[top].age=a;
                info[top].dop=dp;
            }
        }

        void deletee()
        {
            int number;
            if(top==-1)
            {
               cout<<"Stack is empty";
            }
            else
            {
                top--;
            }
        }

        void print()
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
                           cout << "Name= " << info[i].name << endl;
                           cout << "Age= " << info[i].age << endl;
                           cout << "Date of Purchase= " << info[i].dop << endl;
                           cout << endl;
                       }
               }
       }

};

int main(){
    Stack s;
    s.store("Rahik",28,"10/03/2021");
    s.store("Abidul",26,"09/03/2021");
    s.store("Jisan",25,"08/03/2021");
    s.store("Asif",30,"05/03/2021");
    s.deletee();
    s.print();
}