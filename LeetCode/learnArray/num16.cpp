class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    //vector의 insert 사용, vector 초기화. 
    //erase랑 sort 쓰면서 시간 복잡도에서 너무 크게 소요됨. 좋은 코드 x
     int index=1;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
 
        int check=size-nums.size();
        int count=0;
        vector<int> answer(check,0);
        for(int i=0;i<size;i++){
            if(nums[i]!=(i+1)){
                answer[count]=i+1;
                nums.insert(nums.begin()+i,i+1);
                count++;}
            if(check==count) break;
        }
        return answer;
    }
};
