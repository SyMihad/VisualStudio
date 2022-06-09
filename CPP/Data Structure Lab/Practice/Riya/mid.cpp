#include<iostream>

using namespace std;

#define size 5

class Messages{
    public:
        string queue[size];
        int rear;
        int front;


        Messages(){
        rear=-1;
        front=-1;
        }
        void enQueue(string data){
            if(rear==size-1){
                cout << "Queue is full" << endl;
            }
            else{
                rear++;
                queue[rear]=data;
            }
        }
        string deQueue(){
            string ret;
            if(front==rear){
                cout << "Queue is empty." << endl;
            }
            else{
                
                front++;
                ret=queue[front];
            }
            return ret;
        }
        void printQuestions(){
            for(int i=0; i<size; i++){
                string temp = queue[i];
                int length = temp.length();
                if(temp[length-1]=='?'){
                    cout << temp << endl;
                }
            }
                
        }
};

int main(){
    Messages obj;
    obj.enQueue("I am having problem with my device.");
    obj.enQueue("Is customer care booth open on next Sunday?");
    obj.enQueue("Where can I get the premium packages?");
    obj.enQueue("Summer package for the corporate staff was excellent.");
    obj.enQueue("When will I get my bill adjustment?");
    obj.printQuestions();
    

}