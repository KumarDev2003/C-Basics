#include <bits/stdc++.h>
using namespace std;
int main() {
    
    // Ordered Map :- Ascending order (key ke basis par)
    // Time complexity :- O(log n) Kyuki Ascending me store krega toh Binary Search use krta hai
    
    // map< key, value > map_ka_naam;
    
    // key -> unique value (int, char, string)
    // value -> kuch bhi (int, char, string, set, map, vector)
    
    map<int, string> mp;
    mp[20] = "Divyanshu";
    mp[185] = "Tanya";
    mp[30] = "Dev";
    mp[201] = "Akshita";
    
    // cout<<mp[185];
    
    // for(int i=0; i<mp.size(); i++) {} (Can not access this way) -> set, map
    
    for(auto it : mp){
        
        // it -> mp of 20 par Divyanshu hai
        
        // it.first -> key
        // it.second -> value
        
        // cout<<it.first<<" "<<it.second<<"\n";
        
        // Tanya ka roll no.
        if(it.second == "Tanya"){
            // cout<<it.first;
        }
        
        
    }
    
    // Ye dusra map hai
    
        map<string, int> mp2;
        mp2["Tanya"] = 185;
        
        for(auto it : mp2){
            
        }

        // cout<<mp2["Tanya"];


        // Find the element (Key)

        if(mp.find(130) != mp.end()){ // Iska matlab value hai map me
            // cout<<"Value hai";
        }
        
        if(mp.find(130) == mp.end()){ // Iska matlab value nahi hai map me
            // cout<<"Value nahi hai";
        }

        // Size kaise pta kre (Unique key)
        // mp[201] = "GoodGurl";
        // cout<<mp[201];
        
        cout<<mp.size();
}
