
//
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
        int flag=1;
        for(int j=completion.size()-1;j>=0;j--){
        if(participant[i]==completion[j]){
           completion.erase(completion.begin()+j);
           flag=0;
           break;
        }
        
    }
   if(flag) answer= participant[i];
   
}
     return answer;
}
