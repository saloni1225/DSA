class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxfreq=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
           maxfreq=max(maxfreq,mp[nums[i]]);
        }
        for(int i=0;i<nums.size();i++){
            if(maxfreq==mp[nums[i]]){
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};