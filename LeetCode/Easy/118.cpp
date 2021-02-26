class Solution {
public:
    vector<vector<int>> pa;
    vector<vector<int>> generate(int numRows) {
        //2차원 벡터는 배열 자체를 push_back
       pa.push_back({1});
        if(numRows>1){
         pa.push_back({1,1});
        for(int x=2;x<numRows;x++){
            vector<int> imsi;
            for(int y=0;y<=x;y++){
                 if(y==0||y==x){
                    imsi.push_back(1);
                }else{
                    int i=pa[x-1][y-1]+pa[x-1][y];
                    imsi.push_back(i);}
           }
            pa.push_back(imsi);
        }
        }
        return pa;
    }
};
