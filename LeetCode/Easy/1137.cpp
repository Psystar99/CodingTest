class Solution {
public:
    int tri[38];//전역변수로 선언하는거랑 지역변수로 선언하는 거랑 다름.
    int tribonacci(int n) {
        
        if(n==0) return 0;
        else if(n==1||n==2) return 1;
        
        tri[0]=0;
        tri[1]=1;
        tri[2]=1;
        if(tri[n]!=NULL) {return tri[n];}
        else{
            int answer=0;
            tri[n-1]=tribonacci(n-1);//저장하자^^,,,
            tri[n-2]=tribonacci(n-2);
            tri[n-3]=tribonacci(n-3);
            answer=tri[n-1]+tri[n-2]+tri[n-3];
            return answer;
        }
    }
};
