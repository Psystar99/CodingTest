class Solution {
public:
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
