#include<bits/stdc++.h>

using namespace std;

int main(){
    int value = 7;
    int *ptr = &value;
    // int *qtr = &7  ::: this is not allowed as the 7 is rValue ... 
    int *pValue = &++value;
    cout << *pValue << endl;

    // int *pValue1 = &value++;  this is not allowed .. guess why :) ..
    return 0;
}