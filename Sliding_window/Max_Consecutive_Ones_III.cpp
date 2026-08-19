/*Given a binary array nums and an integer k, 
return the maximum number of consecutive 1's in the array if you can flip at most k 0's.*/

class Solution {
    public:

    int longestOnes(vector<int>& nums, int k){
        int l =0,r=0,c=0, maxlen = 0;
        int n = nums.size();

        while (r<n){
            if (nums[r] == 0) c++;           
            while (c > k){
                if(nums[l] == 0) c--;
                l++;
            }
            maxlen = max(maxlen, r-l+1);
            r++;
        }
        return maxlen;
    }
};
