#include<iostream>
#include<string.h>

using namespace std;
void test(string txt, int n){
    // string result="";
    // int length=0;
    // for(int i=0;txt[i]!='\0';++i){
    //     length++;
    // }
    // for(int i=0;i<length;i++){
    //     if(isupper(txt[i])){
    //         cout << "upper: " << txt[i] << endl;
    //     }
    //     else{
    //         cout << "lower: " << txt[i] << endl;
    //     }
    // }
    char a='z';
    char out=int(a+3-97)%26+97;
    cout << "out= " << out << endl;
}
void encode(string str, int n){
    string final="";
    int length=0,check=0;
    bool toChange;
    for(int i=0;str[i]!='\0';++i){
        length++;
    }
    // for(int i=0;i<length;i++){
    //     check++;
    //     if(check==n+1){
    //         if(str[i]!=32){
    //             str[i]=str[i]+2;
    //         }
    //     }
    //     if(check==n+1){
    //         check=0;
    //     }
    // }
    for(int i=0;i<length;i++){
        check++;
        if(check==n+1){
            if(str[i]!=32){
                if(isupper(str[i])){
                    str[i]=int((str[i]+2-65)%26+65);
                }
                else{
                    str[i]=int((str[i]+2-97)%26+97);
                }
                //str[i]=str[i]+2;
            }
        }
        if(check==n+1){
            check=0;
        }
    }
    cout << "Encoded String: " << str<< endl;
}

int main(){
    int j;
    string s;
    cout << "Enter your string: ";
    getline(cin,s);
    cout << "Enter integer: ";
    cin >> j;
    encode(s,j);
    //test(s,j);
}