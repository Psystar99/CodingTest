#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = n-1;
    int flag=1;
    for(int i=n;i>1;i--){
        for(int j=2;j<i;j++){

            if(i%j==0) {
              //  cout<<i<<" "<<j<<endl;
             //   flag=0;
                answer--;
                break;}
        }
      // if(flag) {answer++;}
    }
    return answer;
}
