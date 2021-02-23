class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        if(coordinates[0][0]==coordinates[1][0]){              //세로선일때
            for(int i=2;i<coordinates.size();i++){
               if(coordinates[i][0]!=coordinates[1][0]) return false; 
            }
        }else if(coordinates[0][1]==coordinates[1][1]){        //가로선일때
            for(int i=2;i<coordinates.size();i++){
                if(coordinates[i][1]!=coordinates[1][1]) return false;
            }
        }else{//뭐든지 나눌때는 분모 0 고려! 나눗셈은 무조건 double로! int하면 버림됨
            double gi=(double)(coordinates[1][1]-coordinates[0][1])/(coordinates[1][0]-coordinates[0][0]);

            for(int i=1;i<coordinates.size()-1;i++){
                if(coordinates[1+i][0]-coordinates[i][0]==0) return false;
                double imsi=(double)(coordinates[1+i][1]-coordinates[i][1])/(coordinates[1+i][0]-coordinates[i][0]);
                if(imsi!=gi) return false;
            }
        }
        return true;
    }
};
