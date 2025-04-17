#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // vector<int> arr;
    // for(int i=0; i<n; i++){
    //     int ele;
    //     cin>>ele;
    //     arr.push_back(ele);
    //     // cout<<"Hello"<<endl;
    // }

    vector<int> arr(n, 0);
    for(int i=0; i<n; i++){
        // int ele;
        // cin>>ele;
        // arr[i] = ele;
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}