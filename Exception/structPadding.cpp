#include <iostream>

using namespace std;

//it will have size near to 2^n
struct Person{
    int age;
    char name[50];
    char test,test1,test3;
};

#pragma pack(push,1)
struct Person1{
    int age;
    char name[50];
    double score;
};
#pragma pop

int main(){
    Person p;
    cout << "the size of p : " << sizeof(p) << endl;
    Person1 p1;
    cout << "the size of p1 : " << sizeof(p1) << endl;
}