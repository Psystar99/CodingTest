#include <string>
#include <vector>
#include <bits/stdc++.h> //#include <algorithm> 써도 됨
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> test=array;
    for(int i=0;i<commands.size();i++){
        array=test;
        sort(array.begin()+commands[i][0]-1,array.begin()+commands[i][1]);
        //처음에 시작 인덱스에도, 끝 인덱스에도 -1을 해줘서 오답이 나왔다. sort의 두번째 매개변수에는 우리가 생각하는 n번째의 그 다음걸 가리켜 줘야 한다
        answer.push_back(array[commands[i][0]+commands[i][2]-2]);
    }
    
    return answer;
}
