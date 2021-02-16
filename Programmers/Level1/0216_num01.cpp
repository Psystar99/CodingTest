#include <string>
#include <vector>
//2번 문제는 풀다가 시간이 끝나 버렸다,,,,1번같이 쉬운거는 빨리 풀자
using namespace std;

int solution(int n) {
    int answer = 0;//1과 n은 무조건 약수
    if(n==0) return 0;
    else if (n==1) return 1;
    else{
        answer=n+1;
    for(int i=2;i<n;i++){
        if(n%i==0) answer+=i;
    }
    return answer;}
}
