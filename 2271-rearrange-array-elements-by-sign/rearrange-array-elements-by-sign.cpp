class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int n=nums.size();
       int pos[n/2];int p=0;
       int neg[n/2];int q=0;
       for(int i=0;i<n;i++){
        if(nums[i]>0){
            pos[p++]=nums[i];
        }
        else if(nums[i]<0){
            neg[q++]=nums[i];
        }
       } 
       vector<int>ans(n);
       p=0,q=0;
       for(int i=0;i<n;i+=2){
        ans[i]=pos[p++];
       }
       for(int i=1;i<n;i+=2){
        ans[i]=neg[q++];
       }
    return ans;
    }
};