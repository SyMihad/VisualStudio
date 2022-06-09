#include<iostream>

using namespace std;

int main(){
    int count=0,num;
    int array[10];
    cout << "Enter elements of array: ";
    for(int i=0;i<10;i++){
        cin >> array[i];
    }
    for(int i=0;i<10;i++){
        count=0;
        int temp=array[i];
        for(int j=0;j<10;j++){
            if(temp==array[j]){
                count++;
            }
        }
        cout << temp << " occures = " << count << " times." << endl;
    }
}