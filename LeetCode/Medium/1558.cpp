class Solution {
public:
    int minOperations(vector<int>& nums) {
       
        int answer=0;
        int mulMax=0;
        int *re=new int[2];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) answer++;
            else if(nums[i]!=0){
            re=calcul(nums[i]);
            answer+=re[0];
            mulMax=max(mulMax,re[1]);
            }
        }
        answer+=mulMax;
        return answer;
    }
    
    map<int, int[2]> data;//0번째는 덧셈 수, 1번째는 곱셈수
    
    int *calcul(int num){//1이 넘어올리 절대 없음
       
        int plu=0;
        int mul=0;
        int *re=new int[2];
        //map에 없던 수이면 계산해줘
            //    if(data[num]!=NULL){
             //       imsi=data[num];
            //        return re;
            //    }else{
                    data[num][0]=0;
                    data[num][1]=0;
                    if(num==2) {
                        re[0]=1;
                        re[1]=1;
                        return re;}
                    else if(num%2==1){ //홀수면: 마지노선 3
                        re=calcul(num-1);
                        data[num][0]+=re[0]+1;
                        data[num][1]+=re[1];
                    }
                    else if(num%2==0){//짝수면: 마지노선 2, 짝수고 2로 나눌 수 있어. 홀수든 짝수든 2에서 무조건 브레이크 해줘야됨
                        re=calcul(num/2);
                        data[num][0]+=re[0];
                        data[num][1]+=re[1]+1;
                    }
            //    }
          re[0]=data[num][0];
        re[1]=data[num][1];
        return re;
    }
};
