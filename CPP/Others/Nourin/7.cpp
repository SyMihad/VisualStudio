#include<iostream>

using namespace std;

int main(){
    int numbers[10] = {1,2,5,3,2,7,9,5,6,9};
    for(int i=9;i>=0;i--){
        cout << numbers[i] << " ";
    }
}