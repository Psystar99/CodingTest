class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     //addition of unsigned offset 뭐시기 에러가 났었다. 배열에 저렇게 -1형식으로 인덱스를 넣는 습관을  없애자
      if(m==0){
               while(n>=0){
                   nums1[n-1]=nums2[n-1];
                   n--;
                   if(n==0) break;
               }
      }else if(n!=0){
          //남은 자리는 다 m꺼. 근데 어차피 다 위치해 있음 그냥 가만히 있으면 됨
          for(int i=m+n-1;i>=0;i--){
          //끝에서부터 채우기

           if(nums2[n-1]>nums1[m-1]){
               nums1[i]=nums2[n-1];
               n--;
           }else{
               nums1[i]=nums1[m-1];
               m--;
           }
         
          if(m==0){
               //남은 자리는 다 n꺼
               while(i>=0){
                   nums1[i-1]=nums2[n-1];
                   n--;
                   i--;
                   if(n==0||i==0) break;
               }
               return;
           }else if(n==0){
               //남은 자리는 다 m꺼. 근데 어차피 다 위치해 있음 그냥 가만히 있으면 됨
               return;
           }
       }
    }
    }
};
