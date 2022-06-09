#include<iostream>

using namespace std;

int main(){
    int inputArray[10];
    for(int i=0;i<10;i++){
        cin >> inputArray[i];
    }
    cout<<endl;
    cout << "Dexcending order: ";
    for(int i=9;i>=0;i--){
        cout << inputArray[i] << " ";
    }
    cout << endl;
}