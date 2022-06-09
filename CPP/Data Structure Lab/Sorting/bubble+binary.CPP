#include<iostream>

using namespace std;

int binarySearch(int array[], int num, int low, int high){
    while(low<=high){
        int mid=low+(high-low)/2;
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
    int array[10]={1,8,9,5,4,7,2,6,3,10};
    int n=sizeof(array)/sizeof(array[0]);
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    cout << "Enter the number you want to search: ";
    int num;
    cin >> num; 
    int result=binarySearch(array,num,0,n);
    if(result== -1){
        cout << num << " was not found in array." << endl;
    }
    else{
        cout << num << " was found in index " << result << endl;
    }
}