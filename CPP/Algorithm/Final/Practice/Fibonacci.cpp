#include<iostream>

using namespace std;

int FibonacciRecursion(int n){
    if(n<=1){
        return n;
    }
    else{
        return FibonacciRecursion(n-1)+FibonacciRecursion(n-2);
    }
}



int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Fibonacci number is: ";
    cout << FibonacciRecursion(n);
    cout << endl;
} 