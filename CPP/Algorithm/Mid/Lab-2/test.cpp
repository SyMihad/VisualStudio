#include<iostream>
#include <cstdlib>

using namespace std;


int main(){
    //int A[]={3,4,2,1,6,5,10,7,8,9,-5,-4, -1, -3, -2, 0};
    //int A[]={-2, 1, 3};
    //int A[]={1,2,3,4,5,1,2,3,4,5};
    int A[]={3,5,6,7,-5,-3,0};
    int n=sizeof(A)/sizeof(A[0]);
    int B[n];
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
    //cout << "k= " << k << "  negative= " << negative << "   n= " << n << endl;

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
        //cout << "In loop. j= " << j << endl;
        if(A[j]<0){
           // cout << "In if. j= " << j << endl;
            B[C[negative-(abs(A[j]))]-1]=A[j];
            //C[(negative-A[j])-1]=C[(negative-A[j])-1]-1;
            //C[(negative-abs(A[j]))-1]--;
            C[negative-(A[j])]--;
        }
        else{
            //cout << "In else. j= " << j << endl;
            B[C[A[j]+negative]-1]=A[j];
            C[A[j]+negative]=C[A[j]+negative]-1;
        }
        // if(j==10){
        //     break;
        // }
        // B[C[A[j]]-1]=A[j];
        // C[A[j]]=C[A[j]]-1;

    }

    for(int i=0;i<n;i++){
        cout << B[i] << " ";
    }

}