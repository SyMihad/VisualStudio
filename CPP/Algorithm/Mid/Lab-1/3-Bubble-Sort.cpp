#include<iostream>

using namespace std;

int* bubbleSort(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}

int main(){
    int array[]={1,4,2,3,6,5,10,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    int* sortedArray = bubbleSort(array, n);
    cout << "Bubble Sorted array= ";
    for(int i=0;i<n;i++){
        cout << sortedArray[i] << " ";
    }
    cout << endl;
}