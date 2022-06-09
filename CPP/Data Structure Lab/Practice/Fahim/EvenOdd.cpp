#include <iostream>

using namespace std;

int main(){
    cout << "Enter the size of array: ";
    int n;
    cin >> n;
    int array[n];
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>> array[i];
    }
    int evenCount=0;
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            evenCount++;
        }
    }
    int evenArray[evenCount];
    int oddArray[n-evenCount];
    int evenIndex=0;
    int oddIndex=0;
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            evenArray[evenIndex]=array[i];
            evenIndex++;
        }
        else{
            oddArray[oddIndex]=array[i];
            oddIndex++;
        }
    }
    cout << "Even array is= ";
    for(int i=0; i<evenIndex; i++){
        cout << evenArray[i] << " ";
    }
    cout << endl;
    cout << "Odd array is= ";
    for(int i=0; i<oddIndex; i++){
        cout << oddArray[i] << " ";
    }
}