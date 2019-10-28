#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string inputFileName = "mytext.txt";
    ifstream inputFile;
    inputFile.open(inputFileName);
    if(inputFile.is_open()){
        while(inputFile){
            string text;
            // inputFile >> text;
            getline(inputFile,text);
            cout << text << endl;
        }
    }
    inputFile.close();
    return 0;
}