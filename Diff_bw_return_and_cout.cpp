#include<bits/stdc++.h>
using namespace std;

int find_element(vector<int>& arr){
    map<int, int> mp;

    int ans = 0;

    for(int i=0; i<arr.size(); i++)
    {
        int ele = arr[i];
        mp[ele] = mp[ele] + 1;
    }

    for(auto it : mp)
    {
        if(it.second == 3)
        {
            ans = it.first;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 5, 6, 1};

    // map<int, int> mp;

    // for(int i=0; i<arr.size(); i++)
    // {
    //     int ele = arr[i];
    //     mp[ele] = mp[ele] + 1;
    // }

    // for(auto it : mp)
    // {
    //     if(it.second == 3)
    //     {
    //         cout<<it.first;
    //     }
    // }

    int answer = find_element(arr);

    cout<<answer;

    return 0;
}