#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end()); //맨 처음 숫자가 작은 순서대로 정렬

    //phone_book 크기만큼 돌면서 앞의 원소와 접두어를 비교
    for (int i = 0; i < phone_book.size()-1; i++) {
        //phone_book[i+1]를 phone_book[i]의 크기만큼 잘라서 비교 
        if((phone_book[i+1].substr(0, phone_book[i].length()) == phone_book[i]))
            return (answer = false);
    }

    return answer;
}