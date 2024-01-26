#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;

    // 각 의상의 종류별로 개수를 저장하는 맵
    unordered_map<string, int> clothesMap;

    // 의상의 종류별로 개수를 세어 맵에 저장
    for (const auto& cloth : clothes) {
        clothesMap[cloth[1]]++;
    }

    // 각 종류별로 (개수 + 1)을 곱하여 서로 다른 조합의 수 계산
    for (const auto& pair : clothesMap) {
        answer *= (pair.second + 1);
    }

    // 아무 의상도 입지 않은 경우는 제외
    answer--;

    return answer;
}