#include<iostream>

using namespace std;

// int binarySearch(int array[], int num, int low, int high){
//     while(low<=high){
//         int mid= low + (high-low) /2;
//         if(array[mid]==num){
//             return mid;
//         }
//         if(array[mid]<num){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return -1;
// }

int main(){
    int array[6]={1, 3, 6, 5, 2, 4};
    int n=sizeof(array)/sizeof(array[0]);
    for(int i=1;i<n;i++){
        for (int j = 0; j < n-i; j++)
        {
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
        
    }

    cout << endl;
    for(int i=0;i<n;i++){
        cout << array[i] << " " ;
    }
    cout << endl;
    // int n,num;
    // cout << "Enter number you want to search: ";
    // cin >> num;
    // n=sizeof(array)/sizeof(array[0]);
    // int result=binarySearch(array,num,0,n-1);
    // if(result==-1){
    //     cout << num << " was not found in array."<< endl;
    // }
    // else{
    //     cout << num << " was found in index " << result << endl;
    // }
}
