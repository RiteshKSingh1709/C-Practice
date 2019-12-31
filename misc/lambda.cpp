#include<bits/stdc++.h>

using namespace std;

class Test {
    private:
        int one{1};
        int two{2};
    
    public:
        void run(){
            int three{3};
            int four{4};

            auto pLambda = [this,three,four](){
                cout << one << endl;
                cout << two << endl;
                cout << three << endl;
                cout << four << endl;
            };

            pLambda();
        }
};

class Check{
    public:
        // override the () operator in this class ... and also declared one variable which can access the public function ...
        bool operator()(string &test){
            return test.size() == 3;
        }
}check1;

void funptr(void (*pFunc)(string),string str){
    pFunc(str);
    return;
}

// function taking function pointer with the argument and it's return type 
// first argumetn of pFunc -> (return type) (*function pointer) (argument it will take ...) 
// second and third argument in pFunc are the argument for pFunc itself .... 
void pFunc(double (*tDivide) (double,double),double a,double b){
    auto result = tDivide(a,b);
    cout << result << endl;
}

//tempate for passing function as parameter ... 
void run(function<bool(string &)> check,string t){
    cout << check(t) << endl;
}
int main(){

    // lambda function assign it to func variable which type will be figure out by the compiler themselves ... 
    auto func = [](string str){cout <<"hello world " << str << endl ; };
    funptr(func,"Sachin");

    // trailing return type and lambda function
    auto lDivide = [](double a,double b) -> double{ 
        if(b == 0.0){
            return 0;
        }
        return a / b;
    };

    cout << lDivide(9,3) << endl;
    pFunc(lDivide,12,4);
    pFunc(lDivide,6,0);

    // capture expression for lambda function ....
    int one = 1, two = 2, three = 3;
    //capture all the local variable by value in lambda expression
    [=](){ cout << one << " " << two << endl; }();

    // capture all variable by value except two by reference
    [=,&two]() { two = 12; cout << one << " " << two << endl ;}();

    // capture all variable by refernce
    [&]() { two = 32; one = 41; cout << one << " " << two << endl; }();

    // capture all by reference excpet two as value
    [&,two]() { one = 100; cout << one << " " << two << endl; }();

    // passing this as reference to the lambda function ..
    Test test;
    test.run();
    // vector
    vector<string> vec{"sachin","saurav","rames","cat"};
    int size = 5;
    int count;
    count  = count_if(vec.begin(),vec.end(),[size](string t){ return t.size() == size;} );
    cout << "Number of string of length : " <<  count << endl;
    count = count_if(vec.begin(),vec.end(),check1);
    cout << "Number of string of length 3 is : " << count << endl;

    // we can also use auto here anyways as written above ... 
    function<int(int,int)> add = [](int a,int b) { return a + b; };
    cout << add(5,6) << endl;

    // Mutable lambdas ... 
    int cats = 5;
    [cats]() mutable{
        cats = 8;
        cout << cats << endl;
    }();
    cout << "previous cat valus is still 5 : " << cats << endl;
    
    return 0;
}