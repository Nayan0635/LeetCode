// removing maximun and minimum from array
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
            if (nums.size() <= 1)   return 1;
            //get maxi and mini index
            if (nums[i] > nums[maxi]) maxi = i;
            if (nums[i] < nums[mini]) mini = i;
        }
        
        int front = min(maxi,mini) + 1;
        int back = nums.size() - max(maxi, mini);
        return front+back;
    }
};
int main(){
    vector<int> vec = {32, 7, 9, 14, 3, 21};
    Solution s;
    cout<<"Remaining Elements: "<<s.minimumDeletions(vec);;    
    return 0;
}