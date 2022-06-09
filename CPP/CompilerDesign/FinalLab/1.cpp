#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream MyFile("input.txt");
  char str[50];
  cout << "Enter expression: " ;
  cin.getline(str, 50);
  MyFile << str << endl;
  MyFile.close();


  ifstream MyReadFile("input.txt");
  string myText;
  bool flag1 = false;
  bool flag2 = false;
  bool flagSemi = false;
  while (getline (MyReadFile, myText)) {
    for(int i=0; i<myText.length(); i++){
        if((myText[i]=='(') && flag2==false){
        flag1 = true;
        }
        else if((myText[i]==')')){
        flag2 = true;
        }
        if(myText[myText.length()-1]==';'){
            flagSemi = true;
        }
    }
  }
  if(flag1==true && flag2==true && flagSemi==true){
      cout << "Correct";
  }
  else if(flag1==false && flag2==false && flagSemi==true){
     cout << "Correct";
  }
  else if(flag1==false && flag2==true && flagSemi==true){
      cout << "Syntax Error. '(' is missing.";
  }
  else if(flag1==true && flag2==false && flagSemi==true){
      cout << "Syntax Error. ')' is missing.";
  }
  else if(flag1==true && flag2==true && flagSemi==false){
      cout << "Statement is false. (;) missing";
  }
  else if(flag1==false && flag2==false && flagSemi==false){
      cout << "Statement is false. (;) missing";
  }
  else if(flag1==false && flag2==true && flagSemi==false){
      cout << "Statement is false. '(' missing. (;) expected";
  }
   else if(flag1==true && flag2==false && flagSemi==false){
      cout << "Statement is false. ')' missing. (;) expected";
  }
  MyReadFile.close();

  //cout << "Flag1=" << flag1 << "  Flag2=" << flag2 << "  FlagSemi==" << flagSemi << endl;
}