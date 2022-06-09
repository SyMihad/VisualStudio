#include<iostream>
#include<string.h>

using namespace std;



int main(){
    bool flag=true;
    char number[] = {'1','2','3','4','5','6','7','8','9','0'};
    string input;
    getline(cin, input);

    for(int i=0;i<input.length(); i++){
        if(isdigit(input[i])==false){
            flag = false;
        }
    }

    if(flag==true){
        cout << "Numberic Constant" << endl;
    }
    else if(flag==false){
        cout << "Not Numeric" << endl;
    }
}