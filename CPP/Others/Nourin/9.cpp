#include<iostream>

using namespace std;

int main(){
    int numbers[10] = {1,2,5,3,2,7,9,5,6,9};
    int even = 0;
    int odd = 0;
    for(int i=0;i<10;i++){
        if(numbers[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "Even= " << even << endl;
    cout << "Odd= " << odd << endl;
}