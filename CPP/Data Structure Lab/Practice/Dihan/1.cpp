#include<iostream>

using namespace std;

int addAtEnd(int array[], int n, int value){
    array[n] = value;
    return n+1;
}

int deleteByPosition(int array[], int n, int index){
    for(int i=index; i<n;i++){
        array[i] = array[i+1];
    }

    return n-1;
}

int deletebyValue(int array[], int n, int value){
    int i;
    for (i=0; i<n; i++)
        if (array[i] == value)
            break;
    
    if (i < n)
    {
        n = n - 1;
        for (int j=i; j<n; j++)
            array[j] = array[j+1];
    }
    
    return n;
}

int main(){
    int array[50] = {1,2,3,4,5};
    int n=5;
    cout << "Array is=";
    for(int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "1) Add value ay end" << endl;
    cout << "2) Delete any index" << endl;
    cout << "3) Delete by value" << endl;
    cout << "Select an option:" ;
    int option;
    cin >> option;
    switch (option)
    {
    case 1:
        int value1;
        cout << "Enter value:";
        cin >> value1;
        n = addAtEnd(array, n, value1);
        cout << "Array is=";
        for(int i=0;i<n;i++){
            cout << array[i] << " ";
        }
        cout << endl;
        break;

    case 2:
        int value2;
        cout << "Enter index:";
        cin >> value2;
        n = deleteByPosition(array, n, value2);
        cout << "Array is=";
        for(int i=0;i<n;i++){
            cout << array[i] << " ";
        }
        cout << endl;
        break;

    case 3:
        int value3;
        cout << "Enter value:";
        cin >> value3;
        n = deletebyValue(array, n, value3);
        cout << "Array is=";
        for(int i=0;i<n;i++){
            cout << array[i] << " ";
        }
        cout << endl;
        break;
    
    default:
        break;
    }


}