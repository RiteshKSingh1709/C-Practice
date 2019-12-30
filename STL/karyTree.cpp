#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void display(vector<vector<int>> tree){
    for(int i=0; i<tree.size(); i++){
        cout << i << " : ";
        for(auto j: tree[i]){
            cout << j << " ";
        }
        cout << endl;
    }
}

void dfs(vector<vector<int>> tree,int q,int start,vector<int> &visited,vector<int> &path,int pathIndex){
    if(visited[q] == 1){
        return;
    }
    visited[start] = 1;
    path[pathIndex] = start;
    pathIndex++;

    for(auto i : tree[start]){
        dfs(tree,q,i,visited,path,pathIndex);
    }
    return;
}

void initialize(vector<int> &arr,int nV,int value){
    for(int i=0; i<nV; i++){
        arr[i] = value;
    }
}

int compare(vector<int> path1, vector<int> path2){
    int fsize = path1.size();
    int ssize = path2.size();
    int result = 0;
    for(int i=1; i< (fsize > ssize ? fsize : ssize); i++){
        if(path1[i] != path2[i]){
            return result;; 
        }
        result = path1[i];
    }
}

int main(){
    int nV,nQ,temp,x,y;
    cin >> nV;
    vector<vector<int>> tree(nV);
    for(int i=0; i<nV -1; i++){
        cin >> x >> y;
        tree[x].push_back(y);
        // tree[y].push_back(x);
    }
    display(tree);
    cin >> nQ;
    while(nQ > 0){
        int q1,q2,i;
        cin >> q1 >> q2;
        vector<int> path(nV);
        vector<int> visited(nV);
        vector<int> path1(nV),path2(nV);

        //we can use memset here ... 
        initialize(path,nV,-1);
        initialize(visited,nV,0);
        dfs(tree,q1,0,visited,path,0);
        for(i=0; i< nV ; i++){
            if(path[i] != -1)
                path1.push_back(path[i]);
        }

        //we can use memset here ...
        initialize(path,nV,-1);
        initialize(visited,nV,0);
        dfs(tree,q2,0,visited,path,0);
        for(i=0; i< nV ; i++){
            if(path[i] != -1)
                path2.push_back(path[i]);
        }
        
        cout << "common parent : " << compare(path1,path2) << endl;
        nQ--;
    }
    return 0;
}