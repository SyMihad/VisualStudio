#include <iostream>

using namespace std;

void insertionSort(int array[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        int x=array[i];
        int j=i-1;
        while(j>=1 && array[j]>x){
            cout << array[j+1] << " exchanging with " << array[j] << endl;
            array[j+1]=array[j];

            j--;
            count++;
        }
        array[j+1]=x;
    }
    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    cout << endl << "Total number of operation: " << count ;
}

int main(){
    int array[]={1,3,5,4,2,6,8,7,9,10};
    int n=sizeof(array)/sizeof(array[0]);
    insertionSort(array,n);
    cout << endl;
}