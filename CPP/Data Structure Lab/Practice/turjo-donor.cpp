/*#include<iostream>

using namespace std;

class donor{
    private:
        int donorId;
        string donorName;
        string bloodGroup;

    public:
        void setDonorId(int donorId){
            this->donorId=donorId;
        }
        void setDonorName(string donorName){
            this->donorName=donorName;
        }
        void setBloodGroup(string bloodGroup){
            this->bloodGroup=bloodGroup;
        }
        int getDonorId(){
            return donorId;
        }
        string getDonorName(){
            return donorName;
        }
        string getBloodGroup(){
            return bloodGroup;
        }

};

int main(){
    donor d1;
    d1.setDonorName("Mr. Akash");
    d1.setDonorId(101);
    d1.setBloodGroup("O+");
    cout << "Donor Name= " << d1.getDonorName() << endl;
    cout << "Donor ID= " << d1.getDonorId() << endl;
    cout << "Donor Blood Group= " << d1.getBloodGroup() << endl;
} */

#include<iostream>

using namespace std;

class donor{
    private:
        int donorid;
        string donorname;
        string bloodgroup;

    public:
        void setdonorid(int did){
            donorid=did;
        }
        void setdonorname(string dname){
            donorname=dname;
        }
        void setbloodgroup(string bgroup){
            bloodgroup=bgroup;
        }
        int getDonorId(){
            return donorid;
        }
        string getDonorname(){
            return donorname;
        }
        string getbloodgroup(){
            return bloodgroup;
        }

};

int main(){
    donor d1;
    d1.setdonorname("Anushka");
    d1.setdonorid(504);
    d1.setbloodgroup("Ab-");
    cout << "Donor Name= " << d1.getDonorname() << endl;
    cout << "Donor ID= " << d1.getDonorId() << endl;
    cout << "Donor Blood Group= " << d1.getbloodgroup() << endl;
} 