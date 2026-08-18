/*Given a string s, find the length of the longest substring without duplicate characters.*/
class Solution {
public:
int lengthOfLongestSubstring(string s){
int l=0, r=0;
bool present[256] = {false};
int n = s.size();
while (r<n) //since incrementing r is below all the operations
{
    while (present[s[r]]){
        present[s[l]] = false;
        l++; //move l forward
    }
    present[s[l]] = true;
    maxlen = max(maxlen, r-l+1);
    r++;
}
return maxlen;
}
};