class Solution {
public:
//이중 포문 보다는 포문을 두개 따로따로 쓰는 것이 복잡도가 더 낮다. 풀이과정은 0인거 갯수를 찾아내서 머리썼다
    void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if((arr[i]==0)&&(arr.size()>1)){
                for(int j=arr.size()-1;j>i;j--){
                    arr[j]=arr[j-1];
                }
                i+=1;
            }
         //   for(int x=0;x<arr.size();x++){
        //        cout<<arr[x]<<" ";
         //   }
         //   cout<<endl;
        }
    }
};
