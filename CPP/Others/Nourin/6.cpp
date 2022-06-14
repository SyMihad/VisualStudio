#include<iostream>

using namespace std;

int main(){
    char s[6];
    for(int i=0;i<6;i++){
        char input;
        cin >> input;
        s[i]=input;
    }
    
    for(int i=0;i<6;i++){
        cout << s[i] << " " ;
    }
}