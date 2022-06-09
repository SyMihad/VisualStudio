#include <iostream>

using namespace std;

class LeapYear{
    private:
        bool isLeapYear;

    public:

    LeapYear(){
        isLeapYear=false;
    }

    bool determineLeapYear(int year){
        if((year%4==0 && year%100!=100) || (year%400==0))
            {
                isLeapYear=true;
            }
            else
            {
                isLeapYear=false;
            }
        return isLeapYear;
    }
};

class AgeinDays : public LeapYear{
    private:

        int presentDate;
        int presentMonth;
        int presentYear;
        int birthDate;
        int birthMonth;
        int birthYear;
        int ageinDays;
        string name;

    public:
        AgeinDays(string name, int presentDate, int presentMonth, int presentYear, int birthDate, int birthMonth, int birthYear){
            this->name=name;
            this->presentDate=presentDate;
            this->presentMonth=presentMonth;
            this->presentYear=presentYear;
            this->birthDate=birthDate;
            this->birthMonth=birthMonth;
            this->birthYear=birthYear;
            ageinDays=0;
        }

        int calculateDays(){
            int present_date=presentDate, present_month=presentMonth, present_year=presentYear, birth_date=birthDate, birth_month=birthMonth, birth_year=birthYear;
            int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
            if (birth_date > present_date) {
                present_date = present_date + month[birth_month - 1];
                present_month = present_month - 1;
            }
            if (birth_month > present_month) {
                present_year = present_year - 1;
                present_month = present_month + 12;
            }
            int final_date = present_date - birth_date;
            int final_month = present_month - birth_month;
            int final_year = present_year - birth_year;


            int countLeapYear=0;
            for(int i=birthYear; i<= presentYear ; i++){
                if(determineLeapYear(i)==true){
                    countLeapYear++;
                }
            }

            ageinDays+=final_date;
            ageinDays+=final_month*30;
            ageinDays+=(final_year-countLeapYear)*365;
            ageinDays+=countLeapYear*366;

            return ageinDays; 
        }

        void showInfo(){
            cout << "Name= " << name << endl;
            cout << "Birth Date: " << birthDate << "/" << birthMonth << "/" << birthYear << endl;
            cout << "Age in days: " << calculateDays() << endl;
        }
};

int main(){
    AgeinDays mihad("Mihad",20,4,2021, 20, 2, 1999);
    mihad.showInfo();
}