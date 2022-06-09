#include<iostream>

using namespace std;

int calculateEvenNumber(int array[10]){
    int count=0;
    for(int i=0;i<10;i++){
        if(array[i]%2==0){
            count++;
        }
    }
    return count;
}

int calculateOddNumber(int array[10]){
    int count=0;
    for(int i=0;i<10;i++){
        if(array[i]%2!=0){
            count++;
        }
    }
    return count;
}

int main(){
    int inputArray[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> inputArray[i];
    }
    int x;
    x=calculateEvenNumber(inputArray);
    cout << endl;
    cout<< "Even Number: " << x << endl;
    x=calculateOddNumber(inputArray);
    cout << "Odd Number: " << x << endl;
    
}