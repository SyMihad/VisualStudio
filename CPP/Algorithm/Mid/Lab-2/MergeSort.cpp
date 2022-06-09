#include<iostream>
#include <limits.h>

using namespace std;

void merge(int *arr, int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1], R[n2+1];
    for(int i=0;i<n1;i++){
        L[i]=arr[p+i];
    }
    for(int j=0; j<n2;j++){
        R[j] = arr[q+j+1];
    }
    L[n1]=INT_MAX;
    R[n2]=INT_MAX;
    int i=0;
    int j=0;
    for(int k=p; k<=r; k++){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;

        }
        else{
            arr[k]=R[j];
            j++;
        }
    }
}

void mergeSort(int *arr, int p, int r){
    if(p<r){
        int q= (p+r)/2;
        mergeSort(arr, p, q);
        mergeSort(arr, q+1, r);
        merge(arr, p, q, r);
    }
}


int main(){
    int array[]={3,4,2,1,6,5,10,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    mergeSort(array, 0, n-1);
    cout << "Merge Sorted array= ";
    for(int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    cout << endl;
}