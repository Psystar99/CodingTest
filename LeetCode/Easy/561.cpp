class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        //pair n개 그 min의 최대 합
        //: 제일 작은거(min이니까 무조건 골라짐)
        //: 두번째로 큰거(합을 최대로 만들려고)
        //그 외에는 4번째로 큰거,6번째로 큰거,,,,2n번째로 큰거
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int answer=nums[0];
        
        if(size>2){//size가 2인경우는 그냥 첫번째 값 리턴!!! 이런 경우 처리 해주기! 첫번째 값 
        answer+=nums[size-2];
        for(int i=1;i<=size/2-2;i++){
            answer+=nums[size-2-2*i];
        }
        }

        return answer;
    }
};
