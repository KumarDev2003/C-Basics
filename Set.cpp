#include <bits/stdc++.h>
using namespace std;

int main(){

    // Set kon hai ?
    // Set map ka bhai hai
    // Ordered hai

    // set<int> st = {1, 3, 4, 2, 5};

    // for(auto it : st){
    //     cout<<it<<" ";
    // }

    // if(st.find(5) != st.end()){
    //     cout<<"present hai";
    // }

    set<int> st;
    vector<int> arr = {2, 3, 1, 4, 5};

    // Value Dynamically insert krne ke liye 
    for(int i=0; i<arr.size(); i++){
        int ele = arr[i];
        st.insert(ele); 
    }

    for(auto it : st){
        cout<<it<<" ";
    }

    // vector<int> arr = {1, 2, 3, 4, 5};

}