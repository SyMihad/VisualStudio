#include<iostream>

using namespace std;

#define SIZE 10

class CircularQueue{
    private:
        char queue[SIZE];
        int front;
        int rear;
    public:
    CircularQueue(){
        front=-1;
        rear=-1;
    }
    void enQueue(char ch){
        if((rear+1)%SIZE==front){
            cout<<"Queue is full"<<endl;
        }
        else{
            if(front==-1){
                front=0;
            }
        rear=(rear+1)%SIZE;
        queue[rear]=ch;
        cout<<ch<<" is added in the queue"<<endl;
        }
    }
    void deQueue(){
        char ch;
        if(front==-1 && rear==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            ch=queue[front];
            front=(front+1)%SIZE;

            cout<<ch<<" is deleted from the queue"<<endl;
        }

    }

    void checkElements(){
        int i;
        if(front<=rear){
            cout << endl;
        for(i=front;i<=rear;i++){
            cout<<queue[i];
        }
        }
        else{
            i=front;
            while(i<SIZE){
                cout<<queue[i];
                i++;
            }
            i=0;
            while(i<=rear){
                cout<<queue[i];
                i++;
            }

        }

    }
    void delete2nd(){
        char temp;
        temp=queue[front];
        front=(front+1)%SIZE;
        queue[front]=temp;
        cout << "temp = " << temp;
        cout << "After deleting 2nd element: ";
        for(int i=front;i<=rear;i++){
                cout<<queue[i]<<" ";
            }
    }




};

int main()
{
    CircularQueue q;
    char name[]="shajaratul";
    int i=0;
    int j=sizeof(name) / sizeof(name[0]);
    while(i<=j){
        q.enQueue(name[i]);
        i++;
    }
    q.delete2nd();
    q.checkElements();
    cout << endl;
    return 0;
}