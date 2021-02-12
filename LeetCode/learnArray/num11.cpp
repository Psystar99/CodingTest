class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    //내장함수 swap쓰면 개쉽다....swap(a,b);
        int count=0;
        for(int i=0;i<nums.size();i++){
          count++; 
            if(nums[i]==0){
                nums.push_back(0);
                nums.erase(nums.begin()+i);
             i--;   
            }
            if(count==nums.size()) break;
        }
    }
};
