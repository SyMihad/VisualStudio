#include <iostream>

using namespace std;

int main(){
    cout << "Enter n: " ;
    int n;
    cin >> n;
    int sum = 0;
    for(int i=1;i <=n ; i++){
        sum += i*i;
    }
    cout << sum;
}