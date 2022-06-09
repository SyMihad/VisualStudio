#include<iostream>

using namespace std;

void makeSwap(int *a, int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int a,b;
    cout << "Enter a= ";
    cin >> a;
    cout << "Enter b= ";
    cin >> b;
    makeSwap(&a,&b);
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
}
