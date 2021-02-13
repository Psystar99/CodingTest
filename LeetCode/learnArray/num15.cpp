class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //아 같은 숫자가 있는 케이스를 생각하지 못함.ex. [2,2,3,1]....erase 기억하자! 
        int size=nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if(size>2&&nums.size()>2) return nums[nums.size()-3];
        else return nums[nums.size()-1];
    }
};
