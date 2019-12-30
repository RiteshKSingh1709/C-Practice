#include<iostream>
#include<bits/stdc++.h>

using namespace std;


template<class T,class K> class Test{
    private:
        T obj;
        K obj1;
    public:
        Test(T obj,K obj1){
            this->obj = obj;
            this->obj1 = obj1;
        }

        void print(){
            cout << obj << endl;
            cout << obj1 << endl;
        }
        
};

//template method example
// we can also use template<class T> void printIt(T t) like this ...
template<typename T> void printIt(T t){
    cout << t << endl;
}

//non template version to print the integer
void print(int a){
    cout << "Non template version : " << a << endl;
}

int main(){
    Test<string,int> test1("Hello",5);
    test1.print();
    printIt<string>("Hello");
    printIt<int>(5);
    print(8);
    return 0;
}