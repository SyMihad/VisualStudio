#include<iostream>

using namespace std;

void KnapSack(int weight[], int benefit[], int n, int w, int **b){
    for(int i=0;i<=n;i++){
        b[i][0]=0;
    }
    for(int i=0;i<=w;i++){
        b[0][i]=0;
    }

    for(int i=1;i<=n;i++){
        cout << endl;
        for(int j=1;j<=w;j++){
            if(weight[i-1]<=j){
                if((benefit[i-1]+b[i-1][j-weight[i-1]])>(b[i-1][j])){
                    b[i][j]=benefit[i-1]+b[i-1][j-weight[i-1]];
                }
                else{
                    b[i][j]=b[i-1][j];
                }
            }
            else{
                b[i][j]=b[i-1][j];
            }
        }
    }
}

int main(){
    // int w=5;
    // int item[]={1,2,3,4};
    // int weight[]={2,3,4,5};
    // int benefit[]={3,4,5,6};
    // //int n=4;  
    // int n=sizeof(weight)/sizeof(weight[0]);

    int w=60;
    int item[]={1,2,3,4};
    int weight[]={20,30,40,70};
    int benefit[]={70,80,90,200};
    //int n=4;
    int n=sizeof(weight)/sizeof(weight[0]);
    
    
    int** b=new int*[w+1];
    for(int i=0;i<=n;i++){
        b[i]=new int[n+1];
    }
    KnapSack(weight, benefit, n, w, b);

    for(int i=0;i<=w;i++){
        for(int j=0;j<=n;j++){
            cout << b[j][i] << "\t";
        }
        cout << endl;
    }


    int pickedItem[n];
    int count=0;
    int remaining=w;

    for(int i=w;i>0;i--){
        for(int j=n;j>0;j--){
            if(b[j][i]>b[j-1][i]){
                pickedItem[count]=item[j-1];
                count++;
                remaining-=weight[j-1];
                i=remaining;
            }
        }
    }

    cout << "Total benefit= " << b[n][w] << endl;
    cout << "Picked Items= " ;
    for(int i=0;i<count;i++){
        cout << pickedItem[i] << ", ";
    }
    cout << endl;
}