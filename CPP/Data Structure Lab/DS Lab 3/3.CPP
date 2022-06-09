#include<iostream>

using namespace std;

struct studentInformation{
    //char studentName[50];
    int studentID;
    float cgpa;
    int credits;
}s[5];

int main(){
    cout <<"Enter students information: "<< endl;
    for(int i=0;i<5;i++){
        // cout << "Student ID: " ;
        // s[i].studentID=i+1;
        cout << "Student ID: " ;
        cin >> s[i].studentID;
        cout << "CGPA: ";
        cin >> s[i].cgpa;
        cout << "Complete Credits: ";
        cin >> s[i].credits;
    }
    cout << "Display the students information who has more than 3.75 and completed more than 50 credits: " << endl;
    for(int i=0;i<5;i++){
        if(s[i].cgpa>=3.75 && s[i].credits>=50){
            cout << "Student id : " << s[i].studentID;
        }
    }
}