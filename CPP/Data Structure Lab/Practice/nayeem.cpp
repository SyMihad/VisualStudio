#include<iostream>

using namespace std;

class PERSON{
    public:
        string name;
        int age;
};

class Teacher : public PERSON{
    public:
        string subName;
};

int main(){
    Teacher t1;
    t1.name="Nayeem Uddin";
    t1.age=30;
    t1.subName="Biology";
    cout << "Name= " << t1.name << endl;
    cout << "Age= " << t1.age <<endl;
    cout << "Subject Name= " << t1.subName << endl;
}