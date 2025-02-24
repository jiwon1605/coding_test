#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> i;
    vector<int> j;
    vector<int> k;

    for (int idx = 0; idx < commands.size(); idx++) {
        i.push_back(commands[idx][0]);
        j.push_back(commands[idx][1]);
        k.push_back(commands[idx][2]);

    }

    for (int idx = 0; idx < commands.size(); idx++) {
        vector<int> temp(array.begin()+i[idx]-1, array.begin()+j[idx]);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[k[idx]-1]);
    }

    return answer;
}