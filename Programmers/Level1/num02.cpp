#include <string>
#include <vector>
#include <iostream>
using namespace std;
//소수찾기-시간초과로 패스못함
int solution(int n) {
    int answer = n-1;
    int flag=1;
    for(int i=n;i>1;i--){
        if((i>8)&&i%2==0) answer--;
        else{
        for(int j=2;j<i;j++){

            if(i%j==0) {
              //  cout<<i<<" "<<j<<endl;
             //   flag=0;
                answer--;
                break;}
        }}
      // if(flag) {answer++;}
    }
    return answer;
}
