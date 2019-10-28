#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> ages;

    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;
    ages["Mike"] = 70;

    cout << ages["Raj"] << endl;

    if(ages.find("Vicky") != ages.end()){
        cout << "Found Vicky" << endl;
    }
    else{

    }

    for(map<string, int>::iterator it=ages.begin(); it != ages.end(); ++it){
        cout << it->first << " : " << it->second << endl;
    }

    int n,m,temp;
    cin >> n >> m;
    vector<vector<int>> grid(n,vector<int>(m,0));
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> temp;
            grid[i][j] = temp;
        }
    }

    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[i].size(); j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}