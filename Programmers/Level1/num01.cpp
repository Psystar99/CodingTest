#include <string>
#include <vector>
#include <iostream>
using namespace std;
//2차원배열의 덧셈
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size(),vector <int>(arr1[0].size(),0));
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr1[i].size();j++){

            answer[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    return answer;
}
