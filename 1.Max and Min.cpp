// find Max and Min element with minimum no of comparison then remove
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution{
    public:
    vector<int> minimumDeletions(vector<int> &nums){
        int maxi = 0, mini = 0;
        for (int i = 1; i < nums.size(); i++){
            //get maxi and mini index
            if (nums[i] > nums[maxi]) maxi = i;
            if (nums[i] < nums[mini]) mini = i;
        }
        cout<<nums[maxi] << nums[mini]<<endl;
        //remove higher index first to avoid shifting issue
        if (maxi > mini){
            nums.erase(nums.begin() + maxi);
            nums.erase(nums.begin() + mini);
        }
        else{
            nums.erase(nums.begin() + mini);
            nums.erase(nums.begin() + maxi);
        }
        return nums;
    }
};
int main(){
    vector<int> vec = {32, 7, 9, 14, 3, 21};
    Solution s;
    vector<int> ans = s.minimumDeletions(vec);
    cout<<"Remaining Elements: ";
    for (auto element: ans)
        cout<<element<<" ";    
    return 0;
}