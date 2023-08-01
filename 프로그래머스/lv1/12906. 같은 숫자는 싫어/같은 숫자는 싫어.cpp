#include <vector> //배열과 비슷한 느낌, 스택과 큐 구현 가능하게 함
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i - 1])
            answer.push_back(arr[i]);

    }
    return answer;
}