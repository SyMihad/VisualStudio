#include<iostream>

using namespace std;

int main(){
    bool singleComment = false;
    bool multiComment = false;
    string input;
    getline(cin, input);
    if(input[0]=='/' && input[1]=='/'){
        singleComment=true;
    }
    if(singleComment==false){
        if(input[0]=='/' && input[1]=='*'){
            if(input[input.length()-1]=='/' && input[input.length()-2]=='*'){
                multiComment = true;
            }
        }
    }

    if(singleComment==true){
        cout << "Single Line comment" << endl;
    }
    else if(multiComment==true){
        cout << "MultiLine Comment" << endl;
    }
}