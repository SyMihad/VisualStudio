#include<iostream>
#include<string.h>

using namespace std;

void LCS_length(char X[], char Y[], int m, int n, char **b, int **c){
    for(int i=0;i<=m;i++){
        c[i][0]=0;
        b[i][0]='0';
    }
    for(int i=0;i<=n;i++){
        c[0][i]=0;
        b[0][i]='0';
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(X[i-1]==Y[j-1]){
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='c';
            }
            else if(c[i-1][j]>=c[i][j-1]){
                c[i][j]=c[i-1][j];
                b[i][j]='x';
            }
            else{
                c[i][j]=c[i][j-1];
                b[i][j]='y';
            }
            }
        }
}

void print_LCS( char **b, char X[], int i, int j){
    if(i==0 || j==0){
        return;
    }
    if(b[i][j]=='c'){
        print_LCS(b, X, i-1, j-1);
        cout << X[i-1] << " ";
    }
    else if(b[i][j]=='x'){
        print_LCS(b, X, i-1, j);
    }
    else{
        print_LCS(b, X, i, j-1);
    }
}

int main(){
    char X[]="sreathabose";
    char Y[]="madhab bose";
    int m=strlen(X);
    int n=strlen(Y);
    int** c=new int*[m+1];
    char** b=new char*[m+1];
    for(int i=0;i<=n;i++){
        c[i]=new int[n+1];
        b[i]=new char[n+1];
    }

    LCS_length(X, Y, m, n, b, c);

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout << c[j][i] << " ";
        }
        cout << endl;
    }

    cout << "Length of longest common sub-sequence is= " << c[m][n] << endl; 

    cout << "Longest common sub0sequence is= ";
    print_LCS(b, X, m, n);
    cout << endl;
}