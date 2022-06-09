#include<iostream>

using namespace std;

void selectionSort(int array[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j]){
                cout << array[i] << " & " << array[j] << " exchanging." << endl;
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                count++;
            }
        }
    }
    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << array[i] <<" ";
    }

    cout << endl << "Total number of operation: "<< count << endl;
}

int main(){
    int array[]={7,6,8,5,9,4,10,3};
    int n=sizeof(array)/sizeof(array[0]);
    selectionSort(array,n);
}