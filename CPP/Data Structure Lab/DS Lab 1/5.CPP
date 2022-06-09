#include<iostream>

using namespace std;

bool checkPrime(int x){
    int count=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}

int findFactorial(int x){
    int sum=1;
    for(int i=x;i>0;i--){
        sum*=i;
    }
    return sum;
}

int main(){
    int num;
    cin>>num;
    bool check=checkPrime(num);
    if(check==true){
        cout << "Factorial is: " << findFactorial(num) << endl;
    }
    else{
        cout << "Error! Not a prime number." << endl;
    }
}