#include<iostream>

using namespace std;

int binarySearch(int array[], int num, int low, int high){
    while(low<=high){
        int mid= low + (high-low) /2;
        if(array[mid]==num){
            return mid;
        }
        if(array[mid]<num){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int array[10]={2,3,5,7,8,9,10,13,16,19};
    int n,num;
    cout << "Enter number you want to search: ";
    cin >> num;
    n=sizeof(array)/sizeof(array[0]);
    int result=binarySearch(array,num,0,n-1);
    if(result==-1){
        cout << num << " was not found in array."<< endl;
    }
    else{
        cout << num << " was found in index " << result << endl;
    }
}
