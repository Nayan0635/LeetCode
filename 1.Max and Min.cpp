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
        int n = nums.size();
        if (n <= 1)   return 1;
        for (int i = 1; i < n; i++){
            //get maxi and mini index
            if (nums[i] > nums[maxi]) maxi = i;
            if (nums[i] < nums[mini]) mini = i;
        }
        if (maxi < mini) swap(maxi, mini);//maxi > mini
        //to make sure mini is pointing to the first element(jise hatana ha)
        //maxi is pointing to the last element(jise hatana ha)

        int front = maxi + 1;
        int back = n - mini;
        int both = (mini + 1) + (n - maxi);
        return min(front,both,back);
    }
};
int main(){
    vector<int> vec = {0, -4, 19, 1, 8, -2, -3, 5};
    Solution s;
    cout<<"Remaining Elements: "<<s.minimumDeletions(vec);;    
    return 0;
}