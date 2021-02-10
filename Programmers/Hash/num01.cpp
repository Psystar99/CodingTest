//효율성 0점 받음!!!ㅠㅠㅠ다시 풀어야됨
#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
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
