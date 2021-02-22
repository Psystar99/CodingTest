class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //어차피 연속되기에 다음 k번째 연속합은 그 이전꺼에서 맨 앞에값 빼고 새로운 뒷값 더하면 되는 문제! 복잡도가 엄청 내려간다
        int maxH=0;
        int hab=0;
        
        for(int j=0;j<k;j++){
             maxH+=nums[j];
         }
        
        hab=maxH;
     for(int i=k;i<nums.size();i++){
        hab+=nums[i]-nums[i-k];
         maxH=max(hab,maxH);
     }  
        double answer=(double)maxH/k;
        return answer;
    }
};
