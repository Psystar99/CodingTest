class Solution {
public:
    int minOperations(vector<int>& nums) {
               // 앞으로 함수 호출은 절대 쓰지 말긔^^,,,
        int answer=0;
        int maxMul=0;
        
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int mul=0;
            
            if(num==1) answer+=1;
            else if(num!=0){
               while(1){
                if(num==2){//2일때: breakpoint
                    mul++;
                    answer++;
                    break;
                }
                if(num%2==0){//짝수일때: 곱하기 2연산 횟수 증가
                    num/=2;
                    mul++;
                }else if(num%2==1){//홀수일때: 더하기 연산 횟수 증가
                    num-=1;
                    answer++;
                }
               }
                maxMul=max(maxMul,mul);//곱하기 연산은 전체적으로 이뤄지기 때문에 가장 큰 값만 최종값에 더해줌
            }
        }
        answer+=maxMul;
        return answer;
    }
};
