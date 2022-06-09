#include<iostream>
#include<queue>

using namespace std;

class Details{
    public:
        string name;
        string regDate;
        int age;
        int type;

        Details(string name, string regDate, int age, int type){
            this->name=name;
            this->regDate=regDate;
            this->age=age;
            this->type=type;
        }

        bool operator < (const Details &O) const{
            return type > O.type;
        }
};

void display(priority_queue<Details> Detailss){
    cout << "Selected activities=" <<  endl ;
    while(!Detailss.empty()){
        Details k = Detailss.top();
        Detailss.pop();
        cout  << "Index= " << k.index << "    Starting time= " << k.startingTime << "    Ending time= " << k.endingTime << endl ;
    }
}

void selectDetails(priority_queue<Details> detail){
    priority_queue<Details> finalList;
    while(!detail.empty()){
        Details k=detail.top();
        if(k.startingTime>=endingTime){
            endingTime=k.endingTime;
            finalList.push(k);
        }
        detail.pop();
    }
    display(finalList);
}

int main(){
    priority_queue<Details> activities;
    int indexes[]={1,2,3,4,5,6,7,8,9,10,11};
    int startingTimes[]={1,5,0,3,6,5,3,12,8,2,8};
    int endingTimes[]={4,7,6,5,10,9,9,16,12,14,11};
    int n=sizeof(indexes)/sizeof(indexes[0]);
    for(int i=0;i<n;i++){
        Details k(indexes[i], startingTimes[i], endingTimes[i]);
        activities.push(k);
    }
    selectDetails(activities);
}