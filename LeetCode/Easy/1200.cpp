class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> answer;
       
        
        sort(arr.begin(),arr.end());
        
        int res=arr[1]-arr[0];
        for(int i=1;i<arr.size()-1;i++){
            res=min(res,arr[i+1]-arr[i]);
        }
        
        for(int i=0;i<arr.size()-1;i++){
             vector<int> imsi;//밖에다가 선언하면 누적된다
            if((arr[i+1]-arr[i])==res){
                imsi.push_back(arr[i]);
                imsi.push_back(arr[i+1]);
                answer.push_back(imsi);
            }
        }
        
        return answer;
    }
};
