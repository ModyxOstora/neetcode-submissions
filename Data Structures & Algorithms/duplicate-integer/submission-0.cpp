class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        bool ans=false;
        for(auto i:nums){
            m[i]++;
            if(m[i]>1){
                ans=true;
                break;
            }
        }
        return ans;
    }
};