#include<iostream>

using namespace std;

int main(){
    int numbers[10] = {1,2,5,3,2,7,9,5,6,9};
    int max=0,min;
    for(int i=0;i<10;i++){
        if(numbers[i]>max){
            max=numbers[i];
        }
        if(numbers[i]<min){
            min=numbers[i];
        }
    }

    cout << "Max=" << max << endl;
    cout << "Min=" << min << endl;
}