/*#include<iostream>

using namespace std;

void countingSort(int A[], int B[], int n){
    int k=A[0];
    for(int i=0; i<n;i++){
        if(A[i]>k){
            k=A[i];
        }
    }
    int C[k+1];
    for(int i=0;i<=k;i++){
        C[i]=0;
    }
    for(int j=0; j<n; j++){
        C[A[j]]++;
    }
    for(int i=1; i<=k; i++){
        C[i]= C[i]+C[i-1];
    }
    for(int j=0; j<n; j++){
        B[C[A[j]]-1]=A[j];
        C[A[j]]=C[A[j]]-1;
    }
}

int main(){
    int array[]={3,4,2,1,6,5,10,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    int sortedArray[n];
    countingSort(array, sortedArray, n);
    cout << "Counting Sorted array= ";
    for(int i=0;i<n;i++){
        cout << sortedArray[i] << " ";
    }
    cout << endl;
} */



#include<iostream>
#include <cstdlib>

using namespace std;

void countingSort(int A[], int B[], int n){
    int negative=A[0];
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
            C[abs(A[j])-1]++;
        }
        else if(A[j]==0){
            C[negative]++;
        }
        else{
            C[A[j]+negative]++;
        }
    }

    

    for(int i=1; i<=k*2; i++){
        C[i]= C[i]+C[i-1];
    }
    for(int j=0; j<n; j++){
        //cout << "j= " << j << endl;
        if(A[j]<0){
            //cout << "In if, A[j]= " << A[j] << "  ;abs(A[j])= " << abs(A[j]) << "   ;C[abs(A[j])]= " << C[abs(A[j])] << "  ;B[C[abs(A[j])]-1]= " << B[C[abs(A[j])]-1] << "  ;A[j]= " << A[j] << endl << endl;
            //B[C[abs(A[j])]-2]=A[j];
            B[C[negative-(abs(A[j]))]-1]=A[j];
            //C[A[j]-1]=C[A[j]-1]-1;
            //C[A[j]-1]--;
            C[negative-(A[j])]--;
        }
        else{
            B[C[A[j]+negative]-1]=A[j];
            //cout << "In else, A[j]= " << A[j]  << "   ;C[A[j]+negative]= " << C[A[j]+negative] << "  ;B[C[A[j]+negative]-1]= " << B[C[A[j]+negative]-1] << "  ;A[j]= " << A[j] << endl << endl;
            C[A[j]+negative]=C[A[j]+negative]-1;
        }
    }
}

int main(){
    int array[]={3,4,2,1,6,5,10,7,8,9,-5,-4, -1, -3, -2, 0};
    //int array[] = {1,2,3,4,5,1,2,3,4,5,-7};
    //int array[]={-10,1,4,2,5,5,6,8,-5,-9,-4,3};
    int n=sizeof(array)/sizeof(array[0]);
    int sortedArray[n];
    countingSort(array, sortedArray, n);
    cout << "Counting Sorted array= ";
    for(int i=0;i<n;i++){
        cout << sortedArray[i] << " ";
    }
    cout << endl;
}