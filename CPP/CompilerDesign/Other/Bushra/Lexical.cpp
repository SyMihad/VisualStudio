#include<iostream>
#include<string.h>

using namespace std;

void lex(string input){
    char number[] = {'1','2','3','4','5','6','7','8','9','0'};
    char operatorr[] = {'+','-','*','/','='};
    char identifier[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int i=0; i<input.length(); i++){
        for(int j=0; j<sizeof(number); j++){
            if(number[j]==input[i]){
                cout << input[i] << " is a : Number" << endl;
            }
        }
        for(int j=0; j<sizeof(operatorr); j++){
            if(operatorr[j]==input[i]){
                cout << input[i] << " is a : Operator" << endl;
            }
        }
        for(int j=0; j<sizeof(identifier); j++){
            if(identifier[j]==input[i]){
                cout << input[i] << " is a : Identifier" << endl;
            }
        }
    }
    
}


int main(){
    string input;
    getline(cin, input);
    lex(input);
}