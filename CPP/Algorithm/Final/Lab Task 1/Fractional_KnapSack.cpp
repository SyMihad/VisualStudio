#include<iostream>
#include<queue>

using namespace std;

class Item{
    public:
        char name;
        int weight;
        int amount;
        double amountPerUnit;
        double chosenAmount;

        Item(char name, int weight, int amount){
            this->name=name;
            this->weight=weight;
            this->amount=amount;
            amountPerUnit=amount/weight;
            chosenAmount=0;
        }
        
        bool operator < (const Item &O) const{
            return amountPerUnit < O.amountPerUnit;
        }
};

void display(priority_queue<Item> Items){
    while(!Items.empty()){
        Item k = Items.top();
        Items.pop();
        cout<< "Item= " << k.name << " chosen " << k.chosenAmount << "kg" << endl;
    }
}

void fractionalKnapSack(priority_queue<Item> items, int maxWeight){
    priority_queue<Item> finalList;
    double remaining=maxWeight;
    int benefit=0;
    while(!items.empty()){
        Item i = items.top();
        items.pop();
        if(remaining>i.weight){
            i.chosenAmount=i.weight;
            remaining-=i.weight;
        }
        else{   
        i.chosenAmount=(remaining/i.weight)*i.weight;
        remaining-=i.chosenAmount;
        }
        benefit+=i.chosenAmount*i.amountPerUnit;
        finalList.push(i);
    }
    display(finalList);
    cout << "Benefit= " << benefit << endl;
}

int main(){
    priority_queue<Item> items;

    char names[]={'A', 'B', 'C', 'D', 'E'};
    int weights[]={3,2,4,2,4};
    int amounts[]={3,4,6,2,5};
    int n=sizeof(names)/sizeof(names[0]);
    for(int i=0;i<n;i++){
        Item k(names[i], weights[i], amounts[i]);
        items.push(k);
    }
    int maxWeight=7;
    fractionalKnapSack(items, maxWeight);
}
