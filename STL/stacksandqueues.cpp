#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Test{
    private:
        string name;
    public:
        Test(string name): name(name){}
        // ~Test() {
        //     cout << "Object destroyed" << endl;
        // }   
        void print(){
            cout << name << endl;
        }
};
int main(){
    //LIFO
    stack<Test> st;
    //FIFO
    queue<Test> qu;
    cout << "stack operations --- " << endl;
    st.push(Test("ritesh"));
    st.push(Test("saching"));
    st.push(Test("rahul"));

    while(st.size() > 0){ // or we can use while(!st.empty()) 
        Test temp = st.top();
        temp.print();
        st.pop();
    }

    //FIFO
    cout << "Queue operations ---" << endl;
    qu.push(Test("ritesh"));
    qu.push(Test("sachin"));
    qu.push(Test("rahul"));

    while(!qu.empty()){
        Test temp = qu.front(); //use referecne like this Test &temp = qu.front()
        temp.print(); // another operation with fron is back() method
        qu.pop();
    }

    return 0;
}