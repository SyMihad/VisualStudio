#include<iostream>

using namespace std;



float Average(int array[10]){
    int sum=0;
    for(int i=0;i<10;i++){
       sum=sum+array[i];
    }
    float result;
    result = sum/10;
    return result;
}

int main(){
    int inputArray[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> inputArray[i];
    }
    float result;
    result=Average(inputArray);
    cout << "Average= " << result;
}