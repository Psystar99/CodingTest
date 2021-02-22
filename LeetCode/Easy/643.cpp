class Solution {
//테스트 케이스에서는 돌아가는데 submit하면 timelimit 걸림,,,
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()==1) return nums[0];
        
        int maxH=0;//min,max 첫값 초기화 잘하기 무작정 0하지마!
        int hab=0;
        int count=k-1;
        
        while(1){
             maxH+=nums[0+count];
             count--;
             if(count==-1) break;
         }
        
        
     for(int i=1;i<=nums.size()-k;i++){
         count=k-1;
         hab=0;
         while(1){
             hab+=nums[i+count];
             count--;
             if(count==-1) break;
         }
         maxH=max(hab,maxH);
     }  
        double answer=(double)maxH/k;
        return answer;
    }
};
