#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int num=prices.size()-1;

    for(int i=0;i<num;i++){
       int j=1;
        while(prices[i]<=prices[i+j]){
             if((i+j)>=num) break;
            j++;   
        }
        answer.push_back(j);
    }
answer.push_back(0);
       
    return answer;
}
