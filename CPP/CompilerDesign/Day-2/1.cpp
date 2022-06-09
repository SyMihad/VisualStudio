#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char keyword[10][10] = {"int", "double", "if", "else", "for", "while", "char", "long", "break", "continue"};
    string input;
    getline(cin, input);
    bool flag= false;
    for(int i=0; i<10; i++){
        if(input == keyword[i]){
            flag = true;
        }
    }
    if(flag==true){
        cout << input << " is a keyword." << endl;
    }
    else{
        cout << input << " is not a keyword." << endl;
    }
}