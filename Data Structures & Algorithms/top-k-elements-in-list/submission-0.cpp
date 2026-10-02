class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        int n = nums.size();
        for(auto it:nums)
        {
            mpp[it]++;
        }
        vector<vector<int>>bucket(n+1);
        for(auto [num,count]:mpp)
        {
            bucket[count].push_back(num);
        }
        for(int i = n;i>=0 && ans.size()<k;--i)
        {
            for(int it:bucket[i])
            {
                ans.push_back(it);
                if(ans.size()==k) break;
            }
        }
        return ans;
    }
};
