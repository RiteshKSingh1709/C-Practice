#include<bits/stdc++.h>

using namespace std;

class Test{
    public:
        Test() {
            cout << "constructor" << endl;
        }

        Test(const Test &other) {
            cout << "copy constructor is called" << endl;
        }

        ~Test(){
            cout << "Destructor is called" << endl;
        }

        Test &operator=(const Test &other){
            cout << "assignment" << endl;
            return *this;
        }

        friend ostream &operator<<(ostream &out, const Test &other); 
};

Test getTest(){
    return Test();
}

ostream &operator<<(ostream &out,const Test &other){
    out << "Hello from the test";
}

int main(){
    Test test = getTest(); 
    cout << test << endl;
    return 0;
}