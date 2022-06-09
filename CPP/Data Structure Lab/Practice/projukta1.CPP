#include<iostream>
#include<cstring>

using namespace std;

void checkPassword(string pass1, string pass2){
    if(pass1==pass2){
        int length=0;
        int countUppercase=0,countLowercase=0,countSpecial=0;
        for(int i=0;pass1[i]!='\0';i++){
            length++;
        }
        for(int i=0;i<length;i++){
            if(pass1[i]>=65 && pass1[i]<=90){
                countUppercase++;
            }
            else if(pass1[i]>=97 && pass1[i]<=122){
                countLowercase++;
            }
            else if(pass1[i]=='#'  || pass1[i]=='$' || pass1[i]=='&'){
                countSpecial++;
            }
        }
        
        if(length>=8 && countLowercase>=1 && countSpecial>=1 && countUppercase>=1){
            cout << "Your password is valid" << endl;
        }
        else{
            cout << "Your password is weak" << endl;
        }
    }
    else{cout<< "Password didn't match.";}
}

int main(){
    string pass1,pass2;
    cout << "Enter password: ";
    getline(cin,pass1);
    cout << "Confirm password: ";
    getline(cin,pass2);
    checkPassword(pass1,pass2);
}