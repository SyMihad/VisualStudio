#include<iostream>

using namespace std;

void selectionSort(int array[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << array[i] <<" ";
    }
}

int main(){
    int array[]={7,6,8,5,9,4,10,3};
    int n=sizeof(array)/sizeof(array[0]);
    selectionSort(array,n);
}