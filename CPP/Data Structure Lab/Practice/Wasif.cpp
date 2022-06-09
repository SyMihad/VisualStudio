#include <iostream>
#define soa 10
using namespace std;

class Account
{
	int accountNumber;
	float balance;

	public:
	
	void setAccountNumber(int accountNumber){
		this->accountNumber = accountNumber;
	}
	void setBalance(float balance){
		this->balance = balance;
	}
	int getAccountNumber(){return accountNumber;}
	float getBalance(){return balance;}
};

void printArray(Account accounts[])
{
	cout<<endl<<"### Printing array elements ###"<<endl;
    for(int i=0; i<soa; i++)
    {
		cout<<"In ["<<i<<"] index:"<<endl;
        cout<<"Account Number: "<<accounts[i].getAccountNumber()<<endl;
		cout<<"Account Balance: "<<accounts[i].getBalance()<<endl;
    }
    cout<<endl;
}

void bubbleSortAN(Account accounts[])
{
	//complete this method by sorting the array by account number.
    for(int i=1;i<soa;i++){
        for (int j = 0; j < soa-i; j++)
        {
            if(accounts[j].getAccountNumber()>accounts[j+1].getAccountNumber()){
                Account temp=accounts[j];
                accounts[j]=accounts[j+1];
                accounts[j+1]=temp;
            }
        }
        
    }
}

void bubbleSortB(Account accounts[])
{
	//complete this method by sorting the array by account balance.
    for(int i=1;i<soa;i++){
        for (int j = 0; j < soa-i; j++)
        {
            if(accounts[j].getBalance()>accounts[j+1].getBalance()){
                Account temp=accounts[j];
                accounts[j]=accounts[j+1];
                accounts[j+1]=temp;
            }
        }
        
    }
}

int binarySearchAN(Account accounts[], int value)
{
	int position = -1;
	//complete this method by searching an account number in the array.
    int low=0;
    int high=soa-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(accounts[mid].getAccountNumber()==value){
            position = mid;
        }
        if(accounts[mid].getAccountNumber()<value){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
	return position;
}

int main()
{
	Account accounts[soa];

	for(int i=0; i<soa; i++)
	{
		int an;
		float b;

		cout<<"Enter the Account Number: ";
		cin>>an;
		cout<<"Enter the Balance: ";
		cin>>b;

		accounts[i].setAccountNumber(an);
		accounts[i].setBalance(b);
	}
	printArray(accounts);
	
	bubbleSortB(accounts);
	printArray(accounts);
	
	bubbleSortAN(accounts);
	printArray(accounts);

	int number;
	cout<<"Enter an Account Number to search : ";
	cin>>number;
	int position = binarySearchAN(accounts, number);

	if(position == -1)
	{
		cout<<number<<" Does NOT Exists"<<endl;
	}
	else
	{
		cout<<number<<" Exists in Index ["<<position<<"]."<<endl;
	}
	return 0;
}