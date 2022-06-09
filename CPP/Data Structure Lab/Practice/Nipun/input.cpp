#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char input[100][100];
    int i=0;
    while(true){
        cin >> input[i];
        if((strcmp(input[i], "."))==0){
            break;
        }
        i++;
    }
    
    for(int j=0; j<i; j++){
        if((strcmp(input[j], "Hajj"))==0){
            cout << "Hajj-A-Akbar" << endl;
        }
        else if((strcmp(input[j], "Umrah"))==0){
            cout << "Hajj-A-Aksar" << endl;
        }
    }
}