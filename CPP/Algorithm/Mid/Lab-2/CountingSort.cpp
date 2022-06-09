#include<iostream>
#include <cstdlib>

using namespace std;

void countingSort(int A[], int B[], int n){
    int negative=0;
    int k=A[0];
    for(int i=0; i<n;i++){
        if(A[i]<0){
            if(abs(A[i])>k){
                k=abs(A[i]);
            }
            if(abs(A[i])>negative){
                negative=abs(A[i]);
            }
        }
        else{
            if(A[i]>k){
                k=A[i];
            }
        }
    }
    int C[k*2+1];
    for(int i=0;i<=k*2;i++){
        C[i]=0;
    }

    for(int j=0; j<n; j++){
        if(A[j]<0){
            C[negative-abs(A[j])]++;
        }
        else{
            C[A[j]+negative]++;
        }
    }

    for(int i=1; i<=k*2; i++){
        C[i]= C[i]+C[i-1];
    }

    for(int j=0; j<n; j++){
        if(A[j]<0){
            B[C[negative-abs(A[j])]-1]=A[j];
            C[negative-abs(A[j])]--;
        }
        else{
            B[C[A[j]+negative]-1]=A[j];
            C[A[j]+negative]--;
        }
    }
}

int main(){
    //int array[]={3,4,2,1,6,5,10,7,8,9};
    //int array[]={3,4,2,1,6,5,10,7,8,9,-5,-4, -1, -3, -2, 0};
    //int array[] = {1,2,3,4,5,1,2,3,4,5,7,-7,-4,0};
    int array[]={-10,1,4,2,5,5,6,8,-5,-9,-4,3};
    //int array[]={-1,-2,-3,-4,0,-5,-4,6,8,-1};
    int n=sizeof(array)/sizeof(array[0]);
    int sortedArray[n];
    countingSort(array, sortedArray, n);
    cout << "Counting Sorted array= ";
    for(int i=0;i<n;i++){
        cout << sortedArray[i] << " ";
    }
    cout << endl;
    int arrayy[]={10, 20 , 30 ,40 };
    int *ptr = &arrayy[0];
    cout << *(--ptr+3);
}