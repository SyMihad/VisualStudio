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
    for(int i=0; i<myText.length(); i++){
        if((myText[i]=='+') || (myText[i]=='-') || (myText[i]=='*') || (myText[i]=='/')){
        cout << myText[i] << " ";
        }
    }
  }
  MyReadFile.close();

  
}