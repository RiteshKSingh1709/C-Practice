#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string inputFileName = "anotherText.txt";
    ifstream inputFile;
    inputFile.open(inputFileName);
    if(inputFile.is_open()){
        while(inputFile)
        {
            string text;
            int population;
            getline(inputFile,text,':');
            inputFile >> population;
            inputFile >> ws;
            if(!inputFile){
                break;
            }
            cout << text << " : " << population << endl; 
        }
    }
    return 0;
}