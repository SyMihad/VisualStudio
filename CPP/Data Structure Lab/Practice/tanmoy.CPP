#include <iostream>

using namespace std;

int main(){
int sum=0;
for(int i=1;i<=10;i++){
int n;cin>>n;
sum+=(n%10);
}
cout<<sum;
}