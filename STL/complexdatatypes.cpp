#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,vector<int>>  scores;
    scores["Ritesh"].push_back(20);
    scores["Ritesh"].push_back(1000);
    scores["Sachin"].push_back(10);
    scores["Sehwag"].push_back(90);

    // for(auto it = scores.begin(); it != scores.end(); it++){
    //     cout << it->first << " "; //*it.first
    //     for(auto it1 = it->second.begin(); it1 != it->second.end(); it1++ ){
    //         cout << *it1 << " ";
    //     }
    //     cout << endl;
    // }

    for(auto itr:scores)
    {
        cout << itr.first << " ";
        for(auto itr1:itr.second)
        {
            cout << itr1 << " ";
        }
        cout << endl;
    }


    return 0;
}