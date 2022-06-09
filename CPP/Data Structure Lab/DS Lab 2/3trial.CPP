#include<iostream>

using namespace std;

int main(){
    int n,count=0;
    cout << "Enter array size(it's must be more then 5): ";
    cin >> n;
    while(n<=5){
        cout << "Enter again. Array size must be more than 5: ";
        cin >> n;
    }
    int array[n],finalArray[n];
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> array[n];
    }
		
		for(int i=0;i<n;i++){
			int tempCount=0;
			int element=array[i];
			for(int j=0;j<n;j++){
				if(element==array[j]){
					tempCount++;
				}
			}
			if(tempCount>=1){
				if(count==0){
					finalArray[count]=element;
					count++;
				}
				else if(count!=0){
					for(int j=0;j<count;j++){
						int breakcount=0;
						for(int k=0;k<=count-1;k++){
							if(finalArray[k]==element){
								breakcount++;
								break;
							}
						}
						if(breakcount>=1){
								break;
						}
						else if(finalArray[j]!=element){
							finalArray[count]=element;
							count++;
							break;
						}
					}
				}
			}
		}
        if(count>0){
        for(int i=0;i<count-1;i++){
            cout << array[i] << " ";
        }
    }
    else{
        cout << "Array already unique." << endl;
    }
    cout << endl;

}