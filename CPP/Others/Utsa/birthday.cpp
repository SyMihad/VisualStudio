#include<iostream>

using namespace std;

class birthday{
    public:
        int inputYear;
        int birthYear;

        birthday(int inputYear){
            birthYear=1992;
            this->inputYear = inputYear;
        }

        bool leapYear(int y){
            bool isLeapYear = false;
            if (y % 4 == 0) {
                if (y % 100 == 0) {
                    if (y % 400 == 0) {
                        isLeapYear = true;
                    }
                } 
                else isLeapYear = true;
            }
            return isLeapYear;
        }

        void claculateBirthday(){
            if(leapYear(inputYear)!=true){
                cout << "Please check another" << endl;
            }
            else{
                int count=0;
                for(int i=birthYear; i<=inputYear; i++){
                    if(leapYear(i)==true){
                        count++;
                    }
                }

                cout << "Case 1: " << count-1 << "th" << endl;
            }
        }

        ~birthday(){

        }
};

int main(){
    int input;
    cin >> input;
    int year;
    cin >> year;
    birthday d1(year);
    d1.claculateBirthday();
}