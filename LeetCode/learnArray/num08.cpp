class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        //이진 탐색 구현해보기 이진 탐색은 평균, 최악 복잡도가 O(logn)---안됨! 이진 탐색은 정렬된 배열에서만 ㄱㄴ
        if(arr.size()>1){
            for(int i=arr.size()-1;i>0;i--){
                int j=i;
                while(j>0){
                j--;
                    
                if((arr[i]==2*arr[j])||(2*arr[i]==arr[j])){
                return true;
                }
        }
        }
    }
        return false;
    }
};
