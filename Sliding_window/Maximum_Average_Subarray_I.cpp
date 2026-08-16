class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i = 0 ;i<k;i++){
            sum += nums[i];
        }
        int l = 0, r = k-1, n =  nums.size();
        double max = sum/k, avg;
        while(r< n-1){
            sum = sum - nums[l];
            l++;
            r++;
            sum = sum + nums[r];
            avg = sum / k;
            if(max < avg){
                max = avg;
                }
        }
        return max;
       
    }
};