#include <iostream>

using namespace std;

void MAX(int num1, int num2, int num3){
    if(num1 > num2 && num1 > num3){
        cout << num1+num2+num3;
    }
    else if (num2>num1 && num2>num3)
    { 
        cout << num1 << " " << num2 << " " << num3;
    }
    else{
        cout << (num1+num2+num3)/3;
    }
    
}

int main(){
    cout << "Enter three number:";
    int num1;
    cin >> num1;
    
    int num2;
    cin >> num2;
    
    int num3;
    cin >> num3;

    MAX(num1, num2, num3);


}
