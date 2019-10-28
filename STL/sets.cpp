#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Test{
    private:
        int age;
        string name;

    public:
        Test(): age(0),name(""){

        }

        Test(int age,string name): age(age),name(name){

        }

        void print() const{
            cout << age << " : " << name << endl;
        }

        bool operator<(const Test &other) const{
            return name < other.name;
        }

        ~Test(){
            cout << "Object destroyed" << endl;
        }

};

int main(){
    set<int> numbers;
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(20);
    numbers.insert(30);

    for(auto it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl; 
    }

    if(numbers.count(20)){
        cout << "Number found" << endl;
    }
    else{
        cout << "Number not found" << endl;
    }

    set<Test> tests;
    tests.insert(Test(20,"Mike"));
    tests.insert(Test(300,"Mitchell"));
    tests.insert(Test(40,"Tom"));

    cout<<endl;
    for(auto it = tests.begin(); it != tests.end(); it++){
        it->print();
    }
    return 0;
}