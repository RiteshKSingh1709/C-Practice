#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Test{
    private:
        int id;
        string name;
    public:
        Test(int id,string name) : id(id) , name(name){}
        void print(){
            cout << id << " : " << name << endl;
        }

        //opeartor overloading
        // It will sort in descreasing order
        bool operator<(const Test &other) const{
            return id > other.id;
        }

        //destructor
        ~Test(){}

        friend bool comp(const Test& a, const Test& b);
};

bool comp (const Test& a, const Test& b){
    return a.id > b.id;
}
int main(){
    vector<Test> tests;
    tests.push_back(Test(1,"ritesh"));
    tests.push_back(Test(2,"Sachin"));
    tests.push_back(Test(14,"rahul"));

    for(int i=0; i<tests.size(); i++){
        tests[i].print();
    }

    // sort(tests.begin(),tests.end());
    
    //we can also pass comparotor with sort method
    sort(tests.begin(),tests.end(),comp); //where comp is function

    cout << "========== After Sorting ==============" << endl;
    for(int i=0; i<tests.size(); i++){
        tests[i].print();
    }

    return 0;
}