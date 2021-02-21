class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
    //sort 하면 안됨 
    //degree를 찾고  dgree에 해당 하는 숫자의 첫번째 위치와 마지막 위치까지의 길이가 답!
    //degree인 수 찾기: 배열 처음부터 끝까지 보면서 제일 많이 나온 애 찾기
    //(key, value) value는 배열! 배열의 길이에 따라 제일 큰 값인 것들을 고름
        
        map< int, vector<int>> so;
        //1. 수마다 몇개 있는지, 어디서 나오는지 count, 저장-->2도 이때 가능
        for(int i=0;i<nums.size();i++){ 
            so[nums[i]];
            so[nums[i]].push_back(i);
        }
        
        //2. degree값 구하기
        int max=0;
        vector<int> degree;
        for(int i=0;i<so.size();i++){ 
        if(so[i].size()>max) max=so[i].size();
        }
        
        //3. max인 값들 새로운 배열 degree에 저장-->굳이 따로 배열에 저장할 필요없음. 그냥 이 단계가 필요없음
        for(int i=0;i<so.size();i++){ 
        if(so[i].size()==max) {degree.push_back(i);}
        }
        
        //4. 최소값 구하기--> so를 도는데 여기서 so[i].size()가 max랑 같으면  res = min(res,v.back()-v[0]+1);
        int min=so[degree[0]].back()-so[degree[0]].front();;
        for(int i=1;i<degree.size();i++){
        int boza=so[degree[i]].back()-so[degree[i]].front();
        if(boza<min) min=boza;
        }
        return min+1;
    }
};
