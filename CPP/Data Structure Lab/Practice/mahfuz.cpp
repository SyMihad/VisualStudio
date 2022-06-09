#include <iostream>

using namespace std;

int main(){
    string s;
    char ch;
    cout << "Enter string: ";
    getline(cin, s);
    cout << "Enter charecter: ";
    cin >> ch;
    int atPoint = -1;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==ch){
            atPoint=i;
            break;
        }
    }
    if(atPoint==-1){
        cout << "Character " << ch << " does not occure in the given string" << endl;
    }
    else{
        for(int i=atPoint+1;i<n;i++){
            cout<< s[i];
        }
        cout << endl;
    }
}