#include<iostream>

using namespace std;

int main(){
    int n1,n2;
    
    cout << "Enter the size of 1st array:";
    cin >> n1;
    cout << "Enter the size of 2nd array: ";
    cin >> n2;
    int arr1[n1],arr2[n2],arr3[n1+n2];
    cout << "Enter the elements of 1st array: ";
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    cout << "Enter the elements of 2nd array: ";
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    for(int i=0;i<n1+n2;i++){
        if(i<n1){
            arr3[i]=arr1[i];
        }
        else{
            arr3[i]=arr2[i-n1];
        }
    }
    for(int i=(n1+n2)-1;i>=0;i--){
        cout << arr3[i] << " ";
    }
    cout << endl;
}