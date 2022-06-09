#include<iostream>

using namespace std;

int main(){
    int row=4,column=5,sum=0;
    bool isPrint;
    int matrix[row][column]={{1,2,3,4,5},
                      {14,15,16,17,6},
                      {13,20,19,18,7},
                      {12,11,10,9,8}};

    cout << "Boundary elements are: " << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i==0 || j==0 || i==row-1 || j==column-1){
                isPrint=true;
                sum+=matrix[i][j];
            }
            else{
                isPrint=false;
            }
            if(isPrint==true){
                cout << matrix[i][j] << " ";
            }
            else{
                for(int k=0;k<column-3;k++){
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    cout << "Summation of boundary elements of matrix is: " << sum << endl;
}