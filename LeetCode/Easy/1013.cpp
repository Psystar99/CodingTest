class Solution {
public:
    //연속된 수의 합은 for문을 돌리지 말고 누적해 나가자
    bool canThreePartsEqualSum(vector<int>& arr) {
        //1. 모든 배열의 전체 합을 구함
        int hab=0;
        for(int i=0;i<arr.size();i++) hab+=arr[i];
        
        //2. 전체합이 3배수가 아니면 어차피 삼등분 안됨. 전체합이 3/1 되는 첫번째 분기를 찾기
        int hab1=0,hab2=0;
        if(hab%3==0){
        for(int i=0;i<arr.size()-2;i++){
            hab1+=arr[i];
            hab2=0;
            //3. 첫번째 분기를 찾으면 그 이후로 두 번째 분기가 있는지 확인
            if(hab1==hab/3){
                for(int j=i+1;j<arr.size()-1;j++){
                    hab2+=arr[j];
                    if(hab2==hab/3) return true;// 두번째 분기도 있으면 참 return
                }
            }
        }        
        }
        return false;//총합이 3배수가 아니거나 다 찾아봤는데 없으면 거짓
    }
};
