#include<iostream>

using namespace std;

int partition(int arr[], int start, int end){
    int i=start+1;
    int piv = arr[start];
    for(int j=start+1; j<=end; j++){
        if(arr[j]<piv){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    int temp = arr[start];
    arr[start] = arr[i-1];
    arr[i-1] = temp;

    return (i-1);
}

void quickSort(int arr[], int start, int end){
    if(start<end){
        int piv_pos = partition(arr, start, end);
        quickSort(arr, start, piv_pos-1);
        quickSort(arr, piv_pos+1, end);
    }
}

int main(){
    //int array[]={3,4,2,1,6,5,10,7,8,9,-5,-4, -1, -3, -2, 0};
    int array[]={-10,1,4,2,5,5,6,8,-5,-9,-4,3};
    int n=sizeof(array)/sizeof(array[0]);
    quickSort(array, 0, n-1);
    cout << "Quick Sorted array= ";
    for(int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    cout << endl;
}