#include<iostream>

using namespace std;

int main(){
    int flag = 0;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            flag++;
        }
    }
    if(flag>2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}