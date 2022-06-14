#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char name[] = "Nourin";
    char name2[10];
    strcpy(name2, name);
    cout << "Name2= " << name2 << endl;
}