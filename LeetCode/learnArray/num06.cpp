class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //결과가 원하는게 뭔지 잘보자,,,중복되는 값의 개수를 리턴해야되는 줄 알고 삽질했다.
        //난 앞에서부터 탐색했는데 뒤에서부터 탐색하면 코드가 좀 더 깔끔해질 수 있다
        int count=nums.size();
        if(val<=50) {
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                count--;
                nums.erase(nums.begin()+i);
                i--;
            }
            if(nums.size()<=i+1) break;
        }
    }
        return count;
    }
};
