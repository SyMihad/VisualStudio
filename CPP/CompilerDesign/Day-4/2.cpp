#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream MyFile("input.txt");
  char str[50];
  cin.getline(str, 50);
  MyFile << str << endl;
  MyFile.close();

  ifstream MyReadFile("input.txt");
  string myText;
  bool flag1 = false;
  bool flag2 = false;
  while (getline (MyReadFile, myText)) {
    for(int i=0; i<myText.length(); i++){
        if((myText[i]=='(')){
        flag1 = true;
        }
        else if((myText[i]==')')){
        flag2 = true;
        }
    }
  }
  if(flag1==true && flag2==true){
      cout << "Correct";
  }
  else if(flag1==false && flag2==true){
      cout << "Syntax Error. '(' is missing.";
  }
  else if(flag1==true && flag2==false){
      cout << "Syntax Error. ')' is missing.";
  }
  MyReadFile.close();

  
}