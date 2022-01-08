class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n=s.length();
        if(n==0)
        {
            return 0;
        }
        int i=0,j=0;
        unordered_map<char,int> v;
        int ans=1;
        v[s[0]]++;
        while(j!=n-1)
        {
            if(v[s[j+1]]==0)
            {
                j++;
                v[s[j]]++;
                
                ans=max(ans,j-i+1);
            }
            else
            {
                v[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};