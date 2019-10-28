#include<iostream>
using namespace std;

void mightGoWrong(){
    bool error1=false;
    bool error2=false;
    bool error3=true;
    if (error1){
        throw 8;
    }
    if (error2){
        throw "some error string";
    }
    if(error3) {
        throw string("from the error3");
    }
}

int main(){
    try{
        mightGoWrong();
    } catch(int e){
        cout << "Error Code " << e << endl;
    }
    catch(char const *e){
        cout << "Error message " << e << endl;
    }
    catch(string e){
        cout << "Error from thrid if block : " << e << endl;
    }
    cout << "still running" << endl;
    return 0;
}