class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int> origin=heights;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            if(origin[i]!=heights[i]) count++;
        }
        return count;
    }
};
