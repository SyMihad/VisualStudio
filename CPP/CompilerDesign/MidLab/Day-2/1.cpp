#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char keyWord[2][4] = {"a+", "ab+"};
    string input;
    getline(cin, input);
    bool flag1 = false;
    bool flag2 = false;
    for(int i=0; i<=input.length(); i++){
         string sub  = input.substr(i, 2 );
        if(sub=="a+"){
            flag1 = true;
            cout << "true i= " <<i <<endl;
        }
    }
    int previous2 = 0;
    for(int i=0; i<input.length(); i++){
        string sub = input.substr(i, 3);
        if(sub == "ab+"){
            flag2 = true;
        }
        previous2=i;
    }

     if(flag1==true || flag2==true){
        cout << input << " is recognized" << endl;
    }
    else{
        cout << input << " is not recognized." << endl;
    }
    
}