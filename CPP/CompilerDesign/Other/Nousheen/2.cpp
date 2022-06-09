#include<iostream>
#include<string.h>

using namespace std;


int main(){
    string input;
    getline(cin, input);
    char operatorr[] = {'+','-','*','/','='};
    for(int i=0; i<input.length(); i++){
        for(int j=0; j<sizeof(operatorr); j++){
            if(operatorr[j]==input[i]){
                cout << input[i] << " is a : Operator" << endl;
            }
        }
    }
}