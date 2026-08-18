class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int size=nums.size();
        int i=0;
        int j=size-1;
        int count=0;
        while(i<j){
            while(i<size && nums[i]!=0){
                i++;
            }
            while(j>0 && nums[j]==0){
                j--;
            }
            if(i>=j){
                break;
            }
            count++;
            i++;
            j--;
        }
        return count;
    }
};