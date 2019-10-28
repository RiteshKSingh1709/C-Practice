#include<iostream>
#include<fstream>

using namespace std;

int main() {
    string outFileName = "mytext.txt";
    ofstream outFile;
    outFile.open(outFileName);
    if(outFile.is_open()){
        outFile << "This is first string" << endl;
        outFile << "this is second string" << endl;
    }
    outFile.close();
    return 0;
}