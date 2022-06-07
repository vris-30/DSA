// Kadane's Algorithm--Maximum subarray sum
// Leetcode Problem: 53 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            // add the value of arr[i] to the sum
            sum=sum+nums[i];
            // take the maximum of maxi and sum
            maxi=max(maxi,sum);
            // if the sum is less than 0, update sum=0
            if(sum<0)
                sum=0;
            
        } 
        // return the maximum subarray value.
        return maxi;
    }
};