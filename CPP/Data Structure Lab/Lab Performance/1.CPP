#include <iostream>
#include <string.h>

using namespace std;

#define size 50

class Queue{
      private:
          int front;
          int rear;
          char queue[size];
      public:
      Queue(){
            front=-1;
            rear=-1;
        }
      void enQueue(char ch){
            if(rear==size-1){
                cout << "Queue is full" << endl;
            }
            else{
                rear++;
                queue[rear]=ch;
                cout << ch << " inserted into Queue." << endl;
            }
        }
        void deQueue(){
            if(front==rear){
                cout << "Queue is empty." << endl;
            }
            else{
                char ch;
                front++;
                ch=queue[front];
                cout << "An element " << ch << " was deleted from Queue." << endl;
            }
        }

     void checkStatus(){
            if(rear==size-1){
                cout<<"Queue is full"<<endl;
            }
            else if(front==rear){
                cout<<"Queue is empty"<<endl;
            }
        }

    void delete2nd(){
        char temp;
        temp=queue[front+1];
        front++;
        queue[front+1]=temp;
        cout << "temp = " << temp;
        cout << "After deleting 2nd element: ";
        for(int i=front+1;i<=rear;i++){
                cout<<queue[i]<<" ";
            }
    }


};

int main(){
    Queue q;
    char name[]="shajaratul";
    int i=0;
    int j=sizeof(name) / sizeof(name[0]);
    while(i<=j){
        q.enQueue(name[i]);
        i++;
    }
    q.delete2nd();
    q.checkStatus();

}
