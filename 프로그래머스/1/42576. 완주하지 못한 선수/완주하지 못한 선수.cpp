#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = ""; //정답 변수

    //두 벡터를 일렬로 정리한다
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    //정렬된 두 벡터를 첫번째 인덱스부터 비교해서 다른 값이 나올 경우 answer에 삽입!
    for (int i = 0; i < completion.size(); i++) {
        if ((participant[i] != completion[i])) {
            answer += participant[i];
            return answer;

        }

    }
    answer = participant.back();
    return answer;
}