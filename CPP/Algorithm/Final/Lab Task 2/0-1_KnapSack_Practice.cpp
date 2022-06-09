#include<iostream>

using namespace std;

void KnapSack(int weight[], int benefit[], int n, int w, int **b){
    for(int i=0;i<w;i++){
        b[0][i]=0;
    }
    for(int i=0;i<n;i++){
        b[0][i]=0;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=w;j++){
            if(weight[i]<=j){
                if((benefit[i]+b[i-1][j-weight[i]])>(b[i-1][j])){
                    b[i][j]=benefit[i]+b[i-1][j-weight[i]];
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
    int w=5;
    int item[]={1,2,3,4};
    int weight[]={2,3,4,5};
    int benefit[]={3,4,5,6};
    int n=4;
    int b[n+1][w+1];
    
    // int** b=new int*[w];
    // for(int i=0;i<n;i++){
    //     b[i]=new int[n];
    // }
    // //cout << sizeof(b)/sizeof(b[0]);
    // KnapSack(weigth, benefit, n, w, b);


    for(int i=0;i<=n;i++){
        b[i][0]=0;
    }
    for(int i=0;i<=w;i++){
        b[0][i]=0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            if(weight[i-1]<=j){
                //1
                if((benefit[i-1]+b[i-1][j-weight[i-1]])>(b[i-1][j])){
                    //2
                    //cout << "in 2: " << "i=" << i << " j=" << j << " benefit[i]=" << benefit[i] << " b[i-1][j-weight[i]]=" << b[i-1][j-weight[i]] << endl;
                    //cout << "in 2: " << "i=" << i << " bi=" << benefit[i-1] << " weight=" <<  weight[i-1] << " w(j)=" << j << " w-wi=" << j-weight[i-1] << endl;
                    b[i][j]=benefit[i-1]+b[i-1][j-weight[i-1]];
                    //cout << "benefit[i-1]=" << benefit[i-1] << " b[i-1][j-weight[i-1]]=" << b[i-1][j-weight[i-1]] << "=" << benefit[i-1]+b[i-1][j-weight[i-1]] << " assigned to " << i << "*" << j << " b=" <<  b[i][j] << endl << endl;
                }
                else{
                    //3
                    // cout << "in 3: " << "i=" << i << " j=" << j << " b[i-1][j]=" << b[i-1][j] << endl;
                    //cout << "in 3: " << "i=" << i << " bi(benefit[i])=" << benefit[i-1] << " weight=" <<  weight[i-1] << " w(j)=" << j << " w-wi=" << j-weight[i] << endl;
                    b[i][j]=b[i-1][j];
                    //cout << b[i-1][j] << " assigned to " << i << "*" << j << " b=" <<  b[i][j] << endl << endl;
                }
            }
            else{
                //4
                //cout << "in 4: " << "i=" << i << " j=" << j << " b[i-1][j]=" << b[i-1][j] << endl;
                //cout << "in 4: " << "i=" << i << " bi(benefit[i])=" << benefit[i-1] << " weight=" <<  weight[i-1] << " w(j)=" << j << " w-wi=" << j-weight[i] << endl;
                b[i][j]=b[i-1][j];
                //cout << b[i-1][j] << " assigned to " << i << "*" << j << " b=" <<  b[i][j] << endl << endl;
            }
        }
    }


    for(int i=0;i<=w;i++){
        for(int j=0;j<=n;j++){
            //cout << "j=" << j << ",i=" << i << " b=" << b[j][i] << "   ";
            cout << b[j][i] << " ";
        }
        cout << endl;
    }

    int pickedItem[n];
    int count=0;
    int remaining=w;

    for(int i=w;i>=0;i--){
        for(int j=n;j>=0;j--){
            if(b[j][i]>b[j-1][i]){
                pickedItem[count]=j;
                count++;
                remaining-=weight[j-1];
                i=remaining;
                //j=j-1;
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