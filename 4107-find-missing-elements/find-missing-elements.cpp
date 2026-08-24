class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int findmax=INT_MIN;
        int findmin=INT_MAX;
        for(int i=0;i<nums.size();i++){
           if(nums[i]>findmax){
            findmax=nums[i];
           } 
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<findmin){
                findmin=nums[i];
            }
        } 
        vector<int>ans;
        for(int i=findmin;i<findmax;i++){
            bool found=false;

            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    found=true;
                    break;
                }
            }
                if(!found){
                    ans.push_back(i);
                }
            
        }
        return ans;
    }
};