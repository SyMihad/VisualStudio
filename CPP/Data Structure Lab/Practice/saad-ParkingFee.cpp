#include <iostream>

using namespace std;

float measureBill(int hours){
    double bill=0.0;
    if(hours<24){
        if(hours<=5){
            bill=hours*1;
        }
        else{
            bill=  5*1 + (hours-5)*0.5;
        }
    }
    else{
        bill=15+(hours-24)*0.5;
    }

    return bill;
}

int main(){
    cout << measureBill(26);
}