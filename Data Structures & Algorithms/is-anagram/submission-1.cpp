class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;
        for(auto it:s)
        {
            mpp[it]++;
        }
        for(auto it:t){
            mpp[it]--;
        }
        for(auto it:mpp)
        {
            if(it.second!=0) return false;
        }
        return true;
        // unordered_map<char,int>mpp1;
        // unordered_map<char,int>mpp2;
        // for(auto it:s){
        //     mpp1[it]++;
        // }
        // for(auto it:t)
        // {
        //     mpp2[it]++;
        // }
        // if(mpp1 != mpp2) return false;
        // return true;
    }
};
