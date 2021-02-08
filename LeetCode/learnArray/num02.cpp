class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            if(findDigit(nums[i])%2==0) result++;
        }
        return result;
    }
    
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
