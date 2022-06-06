// Input: 2,0,1,2,0,0,1,1,2,1,0,1
//Output: 0,0,0,0,1,1,1,1,1,2,2,2
//leetcode Problem: 75 (Sort Colors)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int mid=0;
        
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[mid], nums[start]);
                mid++; start++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid], nums[end]);
                end--;
            }
        }
    }
};