#include<bits/stdc++.h>
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a;
        int i=0,first=0,last=0;
        while(i<nums.size()){
        if(nums[i]==target){
            first++;
            if(first==1){
                a.push_back(i);
                first++;
            }
            last=i;
        }
        i++;
        }
        if(first==0 && last==0){
           a.push_back(-1);
           a.push_back(-1);
           return a;
        }
        a.push_back(last);
        return a;
    }
};