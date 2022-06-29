#include<iostream>

using namespace std;

class palindrome{
    public:
        palindrome(){
            
        }

        bool isPalindrome(int num){
            bool flag = false;
            int n, digit, rev = 0;
            n = num;
            do
            {
                digit = num % 10;
                rev = (rev * 10) + digit;
                num = num / 10;
            } while (num != 0);

            if (n == rev)
                flag=true;
            else
                flag=false;
            
            return flag;
        }

        void calculate(){
            int n;
            cin>>n;
            for(int i=0;i<n;i++){
                int input,t, sum=0, remainder;
                cin >> input;

                t = input;

                while (t != 0)
                {
                    remainder = t % 10;
                    sum       = sum + remainder;
                    t         = t / 10;
                }

                if(isPalindrome(sum)==true){
                    cout<< "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }

        ~palindrome(){

        }
};

int main(){
    palindrome p;
    p.calculate();
}