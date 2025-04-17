#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1, 3, 2, 5, 4};

    // Reversing
    reverse(arr.begin(), arr.end());
    // reverse(arr.begin(), arr.begin()+2);
    // reverse(arr.begin()+arr.size()/2, arr.end());

    // Sorting

    // Ascending Order
    sort(arr.begin(), arr.end());

    // Descending Order
    sort(arr.rbegin(), arr.rend());

    for(auto it : arr){
        cout<<it<<" ";
    }
}