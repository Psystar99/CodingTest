

//그냥 원래 코드,,,,vecotr sort만 하니까 바로됨 ㅠ...sort의 힘은 가히 대단했다
#include <string>
#include <vector>
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
        sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    for(int i=participant.size()-1;i>=0;i--){
            for(int j=completion.size()-1;j>=0;j--){
        if(participant[i]==completion[j]){
            participant.erase(participant.begin()+i);
            
            completion.erase(j+completion.begin());
            break;
        }
                }
    }
    answer=participant[0];
    return answer;
}
