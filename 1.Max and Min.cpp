// find Max and Min element with minimum no of comparison then remove
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution{
    public:
    int minimumDeletions(vector<int> &nums){
        int maxi = 0, mini = 0;
        for (int i = 1; i < nums.size(); i++){
            //get maxi and mini index
            if (nums[i] > nums[maxi]) maxi = i;
            if (nums[i] < nums[mini]) mini = i;
        }
        //remove higher index first to avoid shifting issue
        if (maxi > mini){
            nums.erase(nums.begin() + maxi);
            nums.erase(nums.begin() + mini);
        }
        else{
            nums.erase(nums.begin() + mini);
            nums.erase(nums.begin() + maxi);
        }
        return nums.size();
    }
};
int main(){
    vector<int> vec = {32, 7, 9, 14, 3, 21};
    Solution s;
    cout<<"Remaining Elements: "<<s.minimumDeletions(vec);;    
    return 0;
}