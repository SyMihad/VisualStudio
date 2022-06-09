#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n>=1 && n<= 1000000){
        string name[n];
        for(int i=0;i<n;i++){
            cin >> name[i];
        }

        for(int i=n-1;i>=0;i--){
            cout << name[i] << endl;
        }
    }

    return 0;
}