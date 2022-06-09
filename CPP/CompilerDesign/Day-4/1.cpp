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
  while (getline (MyReadFile, myText)) {
    if(myText[myText.length()-1]==';'){
        cout << "Statement is correct.";
    }
    else{
        cout << "Statement is false. ; missing";
    }
  }
  MyReadFile.close();

  
}