#include<iostream>
#include<fstream>

using namespace std;

#pragma pack(push,1)
struct  Person
{
    /* data */
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

int main(){
    Person someone = {"ritesh",25,64};
    string fileName = "test.bin";
    ofstream outputFile;

    //// write binary files /////
    outputFile.open(fileName,ios::binary|ios::out);
    if(outputFile.is_open()){
        // outputFile.write((char *)&someone,sizeof(Person));
        outputFile.write(reinterpret_cast<char *>(&someone),sizeof(Person));
        outputFile.close();
    }
    else{
        cout << "Could not create file" + fileName;
    }

    /////  Read binary files /////
    ifstream inputFile;
    Person someoneElse = {};
    inputFile.open(fileName,ios::binary|ios::out);
    if(inputFile.is_open()){
        // outputFile.write((char *)&someone,sizeof(Person));
        inputFile.read(reinterpret_cast<char *>(&someoneElse),sizeof(Person));
        inputFile.close();
    }
    else{
        cout << "Could not read file" + fileName;
    }
    cout << someoneElse.name << " , " << someoneElse.age << " , " << someoneElse.weight << endl;
    return 0;
    
}