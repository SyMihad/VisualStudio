#include<iostream>
#include<queue>

using namespace std;

class Activity{
    public:
        int index;
        int startingTime;
        int endingTime;

        Activity(int index, int startingTime, int endingTime){
            this->index=index;
            this->startingTime=startingTime;
            this->endingTime=endingTime;
        }

        bool operator < (const Activity &O) const{
            return endingTime > O.endingTime;
        }
};

void display(priority_queue<Activity> Activitys){
    cout << "Selected activities=" <<  endl ;
    while(!Activitys.empty()){
        Activity k = Activitys.top();
        Activitys.pop();
        cout  << "Index= " << k.index << "    Starting time= " << k.startingTime << "    Ending time= " << k.endingTime << endl ;
    }
}

void selectActivity(priority_queue<Activity> activities){
    priority_queue<Activity> finalList;
    int endingTime=0;
    while(!activities.empty()){
        Activity k=activities.top();
        if(k.startingTime>=endingTime){
            endingTime=k.endingTime;
            finalList.push(k);
        }
        activities.pop();
    }
    display(finalList);
}

int main(){
    priority_queue<Activity> activities;
    int indexes[]={1,2,3,4,5,6,7,8,9,10,11};
    int startingTimes[]={1,5,0,3,6,5,3,12,8,2,8};
    int endingTimes[]={4,7,6,5,10,9,9,16,12,14,11};
    int n=sizeof(indexes)/sizeof(indexes[0]);
    for(int i=0;i<n;i++){
        Activity k(indexes[i], startingTimes[i], endingTimes[i]);
        activities.push(k);
    }
    selectActivity(activities);
}