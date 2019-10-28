#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    for(auto it = strings.begin() ; it < strings.end() ; ++it){
        cout << *it << " ";
    }
    cout << endl;
    cout << strings[1] << endl;
    cout << strings.size() << endl;
    return 0;
}