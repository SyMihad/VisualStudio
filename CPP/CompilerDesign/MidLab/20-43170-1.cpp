#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(){
    char opera[4][1] = {'+', '-', '*', '/'};
    char returnType[5][10] = {"int", "double", "float", "char", "void"};
    bool plus = false;
    bool minus = false;
    bool mul = false;
    bool div = false;
    bool assign = false;
    ifstream MyReadFile("program.cpp");
    string  myText;
    while (getline (MyReadFile, myText)){
        for(int j=0; j<myText.length(); j++){
            if(myText[j] == '+'){
                plus = true;
            }
            else if(myText[j] == '-'){
                minus = true;
            }
            else if(myText[j] == '*'){
                mul = true;
            }
            else if(myText[j] == '/'){
                div = true;
            }
            else if(myText[j] == '='){
                assign = true;
            }
        }
    }
    ifstream readForWord("program.cpp");
    string word;
    bool flag=false;
    string funName[10] ;
    int funNameCount = 0;
    string flagWord;
    while(readForWord >> word){
        if(flag==true){
            for(int i=0; i<word.length(); i++){
                int countPos=0;
                if(word[i]=='('){
                    countPos=i;
                    
                }
                if(countPos>0){
                    funName[funNameCount] = word.substr(0, countPos);
                    funNameCount++;
                }
            }
        }
        // for(int i=0; i<5; i++){
        //     if(word == returnType[i]){
        //         flag=true;
        //         flagWord = word;
        //     }
        //     else{
        //         flag=false;
        //     }
        // }
        
            if(word == "int"  || word == "double" || word == "float" || word == "char" || word == "void"){
                flag=true;
                flagWord = word;
            }
            else{
                flag=false;
            }
        
    }
    int countTotalFunction=0;
    for(int i=0; i<funNameCount; i++){
        if(funName[i] != "main"){
            cout << "Function " << i+1 << " = " << funName[i] << endl;
            countTotalFunction++;
        }
     }
    cout << "Total number of user defined function= " << countTotalFunction << endl;

    if(plus == true && minus == true && mul == true && div == true && assign == true){
        cout << "Operator1 = addition" << endl;
        cout << "Operator2 = Subtractor" << endl;
        cout << "Operator3 = Multiplicator" << endl;
        cout << "Operator4 = divisor" << endl;
        cout << "Operator5 = assignment" << endl;
        cout << "Total number of operator= 5" <<endl;
    }
    else if(plus == false && minus == true && mul == true && div == true && assign == true){
        cout << "Operator1 = Subtractor" << endl;
        cout << "Operator2 = Multiplicator" << endl;
        cout << "Operator3 = divisor" << endl;
        cout << "Operator4 = assignment" << endl;
        cout << "Total number of operator= 4" <<endl;
    }
    else if(plus == true && minus == true && mul == true && div == false && assign == true){
        cout << "Operator1 = addition" << endl;
        cout << "Operator2 = Subtractor" << endl;
        cout << "Operator3 = Multiplicator" << endl;
        cout << "Operator4 = assignment" << endl;
        cout << "Total number of operator= 4" <<endl;
    }


}