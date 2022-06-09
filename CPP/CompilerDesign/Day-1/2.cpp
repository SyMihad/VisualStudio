#include <iostream>

using namespace std;

int main()
{
    int numArray[]={1,2,3,4,5,6,7,8,9,10};
    int num;
    cout << "Enter number: ";
    cin >> num;
    bool flag=false;
    for(int i=0;i<sizeof(numArray); i++){
        if(numArray[i]==num){
            flag = true;
        }
    }
    if(flag==true){
        cout << "Yes";
    }
    else{
        cout << "False";
    }
    return 0;
}
