#include<iostream>

using namespace std;

int main(){
    int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
    int count=0;
    for(int i=0;i<10;i++){
        int p=0;
        for(int j=1;j<=numbers[i];j++){
            if(numbers[i]%j==0){
                p++;
            }
        }
        if(p==2){
            count++;
            cout << numbers[i] << endl;
        }
    }
    cout << "Total prime numbers= " << count << endl;
}