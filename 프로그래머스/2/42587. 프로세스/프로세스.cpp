#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility> // pair를 사용하기 위해 추가

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0; //스택 배열의 인덱스
    queue<pair<int, int>> P;
    
    for (int i = 0; i < priorities.size(); i++) {
        P.push({ priorities[i], i });
    }

    while (!P.empty()) {
        pair<int, int> current = P.front();
        P.pop();

        vector<pair<int, int>> temp;
        queue<pair<int, int>> copy = P;
        while (!copy.empty()) {
            temp.push_back(copy.front());
            copy.pop();
        }

        bool hasHigherPriority = false;
        for (auto& elem : temp) {
            if (elem.first > current.first) {
                hasHigherPriority = true;
                break;
            }
        }

        if (hasHigherPriority) {
            P.push(current);
        }
        else {
            answer++;
            if (current.second == location)
                return answer;
        }
    }
    
    return answer;
}