#include<iostream>

using namespace std;

void printOddNumber(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout << i << " ";
        }
    }
}

int main(){
    int start,last;
    cin >> start;
    cin >> last;
    printOddNumber(start,last);
    cout << endl;

}