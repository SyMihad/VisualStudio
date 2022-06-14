#include<iostream>

using namespace std;

int main(){
    int numbers[10] = {1,2,5,3,2,7,9,5,6,9};
    int count=0;
    for(int i=0;i<10;i++){
        int temp=0;
        for(int j=0;j<10;j++){
            if(numbers[i]==numbers[j]){
                temp++;
            }
        }
        if(temp>1){
            cout << numbers[i] << endl;
            count++;
        }
    }
    cout << "Total duplicate element: " << count << endl;
}