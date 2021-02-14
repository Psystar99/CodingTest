class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //추가 메모리 안쓰고는 못풀었음. 추가 메모리 안쓰려면 for문을 한 번 더 도는데 그럼 time over됨
        for(int i=0;i<nums.size();i++){
            int j=abs(nums[i])-1;
            nums[j]=abs(nums[j])*(-1);
        }
         vector<int> ans;
         for(int i=0;i<nums.size();i++){
         if(nums[i]>0) ans.push_back(i+1);
         }
        return ans;
    }
};
