#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int  main(){
    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);

    auto it = numbers.begin();
    cout << "Element: " << *it << endl;
    it++;
    numbers.insert(it,100);


    for(auto it = numbers.begin(); it != numbers.end(); ++it){
        cout << *it << endl;
    }

    //Delete the number 100 from the list
    list<int>::iterator eraseIt = numbers.begin();
    eraseIt++;
    eraseIt = numbers.erase(eraseIt);
    cout << "Element: " << *eraseIt << endl;
    cout << "After the deletion ---- " <<endl;
    for(auto it = numbers.begin(); it != numbers.end(); ++it){
        cout << *it << endl;
    }
    return 0;
}