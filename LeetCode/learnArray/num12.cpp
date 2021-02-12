class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
    //left, right 포인터 두고 푸는 거 신기
    //내 코드는 그닥 좋은 코드는 아님
        int count=0;
        for(int i=0;i<A.size();i++){
            if(A[i]%2==1){
                A.push_back(A[i]);
                A.erase(A.begin()+i);
                i--;
            }
            count++;
            if(count==A.size()) break;
        }
        return A;
    }
};
