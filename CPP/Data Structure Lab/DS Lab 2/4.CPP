#include<iostream>

using namespace std;

int main(){
    int n,count=0,num;
    cout << "Enter the size of array: ";
    cin >> n;
    int array[n];
    cout << "Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    cout << "Enter the elements: ";
    cin >> num;
    for(int i=0;i<n;i++){
        if(array[i]==num){
            count++;
        }
    }
    cout << "The element is " << count << " times in array.";
}