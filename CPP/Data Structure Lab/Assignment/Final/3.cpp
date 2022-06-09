#include <iostream>

using namespace std;

void min_heapify(int *a,int i,int n)
{
    int j, temp;
    temp=a[i];
    j=2*i;
    while(j<=n)
    {
        if(j<n&&a[j+1]<a[j])
            j=j+1;
        if(temp<a[j])
            break;
        else if(temp>=a[j])
        {
            a[j/2]=a[j];
            j=2*j;
        }
    }
    a[j/2]=temp;
    return;
}
void build_minheap(int *a, int n)
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        min_heapify(a,i,n);
    }
}
int main()
{
    int array[]={2,16,74,58,36,4,28,15,35,82,6};
    int n=sizeof(array)/sizeof(array[1]);
    build_minheap(array, n);
    cout<<"Min Heap: ";
    for (int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout << endl;
}