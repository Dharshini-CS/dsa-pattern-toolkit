class Solution {
    public:
        int characterReplacement(string s, int k){
            vector<int> count(26, 0);
            int l=0, maxLen=0, maxCount=0;
            
            for(int r =0; r<s.size();r++){
                count[s[r] - 'A']++;
                maxCount = max(maxCount , count[s[r]-'A']);

                while ((r-l+1) - maxCount > k){
                    count[s[l] - 'A']--;
                    l++;
                 }
                 maxLen = max(maxLen , (r-l+1));
            }
            return maxLen;

        }
}