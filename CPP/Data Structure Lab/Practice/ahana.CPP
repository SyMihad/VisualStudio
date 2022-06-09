#include <iostream>

using namespace std;

void bubbleSort(int array[], int size){
    for(int i=1;i<size;i++){
        int temp;
        for(int j=0;j<=size-i;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    cout << "Bubble Sorted array: ";
    for(int i=0;i<size;i++){
        cout << array[i] <<  " ";
    }
}

void insertionSort(int array[], int size){
    int i,j,key;
    for(i=0;i<size;i++){
        key=array[i];
        j=i-1;
        if(array[j]>key && j>=0){
            array[j+1]=array[j];
            --j;
        }
        array[j+1]=key;
    }

    cout << "Insertion Sorted array: ";
    for(int i=0;i<size;i++){
        cout << array[i] << " " ;
    }
}

void selectionSort(int array[], int size)  
{  
    int i, j, min_idx;  
   
    for (i = 0; i < size-1; i++)  
    {   
        min_idx = i;  
        for (j = i+1; j < size; j++){
            if (array[j] < array[min_idx]){
                min_idx = j;
            }  
            int temp=array[min_idx];
            array[min_idx]=array[i];
            array[i]=temp;
        }

    }

    cout << "Selection Sorted array: ";
    for(int i=0;i<size;i++){
        cout << array[i] << " ";
    }  
}  

void linearSearch(int array[], int size, int num){
    int count=0;
    for(int i=0;i<size;i++){
        if(array[i]==num){
            count++;
        }
    }

    if(count>0){
        cout << num << " found in array" <<  endl;
    }
    else{
        cout << num << " was not found ." << endl;
    }
}

int main(){
    int array[]={1,4,5,2,3,8,6,9,7,10,11,12};
    int size=sizeof(array)/sizeof(array[0]);
    bubbleSort(array,size);
    cout << endl;
    insertionSort(array,size);
    cout << endl;
    selectionSort(array,size);
    cout << endl;
    linearSearch(array,size, 5);
    cout << endl;
}