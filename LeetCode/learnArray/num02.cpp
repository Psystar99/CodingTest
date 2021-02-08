class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            if(findDigit(nums[i])%2==0) result++;
        }
        return result;
    }
    //함수 호출을 함으로써 확실히 시간이 많이 걸린다. 똑같은 코든데 함수 안쓴게 10초 차이 나네!
    int findDigit(float num){
        int i=1;
        while(num>=1){
            num/=10;
            i++;
        }
        cout<<i<<endl;
        return (i-1);
    }
};
