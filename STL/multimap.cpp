#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main(){
    multimap<int,string> mm;
    mm.insert(make_pair(10,"ritesh"));
    mm.insert(make_pair(2,"schin"));
    mm.insert(make_pair(3,"dhoni"));
    mm.insert(make_pair(2,"harbhajan"));

    for(auto it = mm.begin(); it != mm.end(); it++){
        cout << it->first << " : " << it->second << endl;
    }

    cout << endl;
    pair<multimap<int,string>::iterator,multimap<int,string>::iterator> its= mm.equal_range(2);
    for(multimap<int,string>::iterator it1=its.first; it1!=its.second;it1++){
        cout << it1->first << " : " << it1->second << endl;   
    }

    cout<<endl;
    auto its1 = mm.equal_range(2);
    for(auto it = its1.first; it != its1.second; it++){
        cout << it->first << " : " << it->second << endl;
    }
    return 0;
}