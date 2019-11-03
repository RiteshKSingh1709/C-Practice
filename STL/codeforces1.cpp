#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    int x,y;
    vector<int> v;
    while(n--){
        cin >> x >> y;
        int nt;
        nt = (int) ((d - x) / y) + 1;
        x = x + nt*y;
        if (x-y >= d){
            x = x - y;
        }
        else if(x < d ){
            x += nt;
        }
        v.push_back(x);
    }
    int min_ele =  *std::min_element(v.begin(),v.end());
    auto it = std::find(v.begin(),v.end(),min_ele);
    int idx = std::distance(v.begin(),it);
    cout << idx + 1;
    return 0;
}