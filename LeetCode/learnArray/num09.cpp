class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        //v자 모양 등 케이스 잡는데 시간이 좀 걸림
        int count=0;
        int flag=1;
        if(arr.size()>2){
        for(int i=0;i<arr.size();i++){
            
            if(i==0){
                if(arr[i]==arr[i+1]) {flag=0;break;}
            }else if(i==arr.size()-1){
                if(arr[i]==arr[i-1]) {flag=0;break;}
            }else{
                if((arr[i]==arr[i+1])||(arr[i]==arr[i+1])) {flag=0;break;}
                if(((arr[i]>arr[i+1])&&(arr[i-1]<arr[i]))||((arr[i]<arr[i+1])&&(arr[i-1]>arr[i]))) count++;}
            if((count==0)&&(arr[i]>arr[i+1])){cout<<i<<"%";flag=0;break;}
        }
        }

        if (count*flag==1) return true;
        else return false;
    }
};
