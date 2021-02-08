class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result=0;
 
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                int j=1;
           
                while(1){
                    if(j>result) result=j;
                    if((i+j+1)>nums.size()) break;
                    if(nums[i]!=nums[i+j]){
                        i=i+j-1;
                        break;
                    }
                    j++;
                }
            }
        }
        return result;
    }
};
