#include<iostream>

using namespace std;

#define N 2

void add(int a[N][N],int b[N][N]){
    int c[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<< c[i][j];
        }
        cout << endl;
    }
}

int main(){
    int a[N][N]={{1,1},
                 {2,2}};

    int b[N][N]={{1,1},
                 {2,2}};
    cout << endl;
    add(a,b);
    cout << endl;
}