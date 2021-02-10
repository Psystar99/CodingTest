class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //문제를 잘 보자 sorted 배열임!
        //c++에 swap이라는 내장 함수도 있음 ex.swap(nums[cur],nums[ind]);
        //vector 자체 내장함수 erase로 고유값만 남기게 할 수 있다. 이 문제 두줄이면 뚝딱
        //nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
        //return nums.size();
        int count=nums.size();
        if(count>1){
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                nums.erase(nums.begin()+i);
                i--;
                count--;
            }
           
        }
        }
        return count;
    }
};
