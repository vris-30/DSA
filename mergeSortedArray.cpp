//leetcode problem: 88
// Merge Sorted Array

class Solution {
public:
     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0){
            // putting the largest element to the end of array 1
            // array 1 has the size of (m+n)
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else
            {
                nums1[k]=nums2[j];
                k--;
                j--;
            }a
        }
        while(j>=0){
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }
};