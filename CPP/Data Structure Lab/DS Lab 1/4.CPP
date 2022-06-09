#include<iostream>

using namespace std;

#define N 3

void addArray(int a[N][N], int b[N][N], int c[N][N]){
    int finalArray [N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
                finalArray[i][j]=a[i][j]+b[i][j]+c[i][j];
        }
    }
    cout << endl;
    cout << "Addition result: " << endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
                cout << finalArray[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int matrix1 [N][N]={{12,13,14},
                           {15,16,17},
                           {18,19,20}};

    int matrix2 [N][N]={{1,2,3},
                           {4,5,6},
                           {7,8,9}};

    int matrix3 [N][N]={{101,102,103},
                           {104,105,106},
                           {107,108,109}};

    addArray(matrix1,matrix2,matrix3);
}