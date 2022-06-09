//leetcode Problem-- Find the Duplicate Number
// problem--287

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        // find the first collision
        // the point where fast and slow pointer meet
        while(slow!=fast);
        fast=nums[0];

        // now simultaneously move both the pointers 
        // and find the duplicate number.
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;  
    }
};