#include<iostream>

using namespace std;


void insertionSort(int *arr, int n){
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j >=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int n;
    cout << "Enter total type of coin: ";
    cin >> n;
    int coin[n];
    cout << "Enter the value of coin:"<<endl;
    for(int i=0;i<n;i++){
        cout << "Coin " << i+1 << "=";
        cin>> coin[i];
    }
    insertionSort(coin, n);
    int amount;
    cout<< "Amount to change: ";
    cin >> amount;
    int choose[n];
    int remaining=amount;
    for(int i=0;i<n;i++){
        choose[i]=(int)remaining/coin[i];
        remaining-=choose[i]*coin[i];
    }
    for(int i=0;i<n;i++){
        cout << coin[i] << " coin need " << choose[i] << " times." << endl;
    }
    
    return 0;
}