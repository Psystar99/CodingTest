class Solution {
public:
    bool isPerfectSquare(int num) {
     // 1 2 3 4 5 6 7 8
     // 1 4 9 16 25 36 49 64
        if(num==1) return true;
        if(num==4) return true;
        if(num==9) return true;
        if(num==16) return true;
        if(num==25) return true;
        for(long long int i=1;i<=num/6;i++){
            if(num==i*i){
                return true;
            }
        }
        return false;
    }
};
