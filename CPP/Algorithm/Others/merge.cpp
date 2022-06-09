#include <iostream>

using namespace std;

void Merge(int *arr, int l, int mid, int r){

int n1=mid-l+1;
int n2=r-mid;
int a[n1+1];
int b[n2+1]; //temp array
for(int i=0;i<n1;i++)
{
    a[i]=arr[l+i];

}
for(int i=0;i<n2;i++)
{
    b[i]=arr[mid+1+i];

}
int i=0;
int j=0;
int k=l;
while(i<n1 && j<n2)
{
    if(a[i]<=b[j])
    {
        arr[k]=arr[i];
        //k++;
        i++;
    }
    else{
        arr[k]=b[j];
        //k++;
        j++;
        }
    k++;
}
while(i<n1){
 arr[k]=arr[i];
        k++;
        i++;
}
while(j<n2){
   arr[k]=b[j];
        k++;
        j++;
}
}

void MergeSort(int *arr, int l, int r){
// if (l<r){
// int mid=(l+r)/2;
// MergeSort(arr,l,mid);
// MergeSort(arr,mid+1, r);

// Merge(arr, l,mid,r);

// }
    if(l>=r){
        return;
    }
    int mid=(l+r)/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1, r);
    Merge(arr, l,mid,r);

}
int main()
{
    //int arr[]={5,4,3,2,1};
    int n;
cout<<"Enter the size of the array: ";
cin>>n;
int arr[n];
cout<< "Enter elements of an array: "<<endl;
for (int i=0; i<n; i++)
{
cin>>arr[i];
}
    for(int i=0; i<n;i++){
        cout<<arr[i]<< " ";
    }
    MergeSort(arr,0,n-1);
    for(int i=0; i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout << endl;
    return 0;
}