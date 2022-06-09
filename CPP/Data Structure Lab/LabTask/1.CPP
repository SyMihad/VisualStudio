#include <iostream>

using namespace std;

void mergeArray(char arrayChar[], int arrayNum[], int size){
    char finalArray[1000];
    int count=0;
    for(int i=0;i<size;i++){
        int temp;
        temp=arrayNum[i];
        for(int j=0;j<temp;j++){
            finalArray[count]=arrayChar[i];
            count++;
        }
    }
    cout << "Merged array: ";
    for(int i=0;i<count;i++){
        cout << finalArray[i] << " ";
    }
}

int main(){
    int arrayInt[]={1,2,3,4,5};
    char arrayChar[]={'a','b','c','d','e'};
    int n=5;
    mergeArray(arrayChar,arrayInt,n);
}