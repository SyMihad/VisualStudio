#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char integers[10][1] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    string input;
    getline(cin, input);
    bool flag=false;
    for(int i=0; i<10; i++){
        if(integers[i]==input){
            flag = true;
        }
    }
    if(flag==true){
        cout << input << " is a number." << endl;
    }
    else{
        cout << input << " is not a number." << endl;
    }
}