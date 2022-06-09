#include<iostream>

using namespace std;

int main(){
    int n1,n2;
    cout << "Enter the size of 1st array:";
    cin >> n1;
    cout << "Enter the size of 2nd array: ";
    cin >> n2;
    int arr1[n1],arr2[n2],count=0;
    cout << "Enter the elements of 1st array: ";
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    cout << "Enter the elements of 2nd array: ";
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                count++;
                cout << arr1[i] << " ";
            }
        }
    }
    if(count==0){
        cout << "No common elements."<< endl;
    }
}