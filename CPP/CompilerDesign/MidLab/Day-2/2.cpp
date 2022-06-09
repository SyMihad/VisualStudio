#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(){
    ifstream readForWord("program.cpp");
    string word;
    bool flag=false;
    string variableName[10] ;
    int variableNameCount = 0;
    string flagWord;
    // while(readForWord >> word){
    //     if(flag==true){
    //         for(int i=0; i<word.length(); i++){
    //             int countPos=0;
    //             if(word[i]=='=' || word[i]==',' || word[i]==' '){
    //                 countPos=i;
                    
    //             }
    //             if(countPos>0){
    //                 variableName[variableNameCount] = word.substr(0, countPos);
    //                 variableNameCount++;
    //             }
    //         }
    //     }
        
        
    //         if(word == "int"  || word == "double" || word == "float" || word == "char" || word == ","){
    //             flag=true;
    //             flagWord = word;
    //         }
    //         else{
    //             flag=false;
    //         }
        
    // }

    //char inputs[1000][10];
    string inputs[1000];
    int inputCount=0;

     while(readForWord >> word){
         inputs[inputCount] = word;
         inputCount++;
     }

     for(int i=0;i<inputCount; i++){
         if(flag==true){
             int iCount = i;
             
             while(flag==true){
                 
                 for(int j=0; j<inputs[i].length(); j++){
                    int countPos=0;
                    if(inputs[i][j]=='=' || inputs[i][j]==',' || inputs[i][j]==' '){
                        countPos=j;
                        
                    }
                    if(inputs[i+1][j]==';'){
                        if(inputs[i+1].substr(0, countPos) != ""){
                        variableName[variableNameCount] = inputs[i+1].substr(0, countPos);
                        variableNameCount++;
                        i=j;
                        }
                    }
                    if(countPos>0){
                        variableName[variableNameCount] = inputs[i].substr(0, countPos);
                        variableNameCount++;
                        i=j;
                    }
                    

                }
                iCount++;
                i=iCount;
                    if(inputs[i][iCount]==';'){
                        flag=false;
                        i=iCount;
                    }
             }
             
         }
        
         if(inputs[i]=="int"){
             flag=true;
             
         }
        //  else{
        //      flag=false;
        //  }
     }



    for(int i=0; i<variableNameCount; i++){
        cout << "Variable-" << i+1 << ": " << variableName[i] << endl; 
    }
    
}