//description
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution{
    public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2){
        unordered_set<int> set(nums1.begin(), nums1.end());
        unordered_set<int> ans;

        for (int i : nums2){
            if (set.count(i))
                ans.insert(i);            
        }
        return vector<int>(ans.begin(), ans.end());
    }
};
int main(){
    
    Solution s;
    return 0;
}