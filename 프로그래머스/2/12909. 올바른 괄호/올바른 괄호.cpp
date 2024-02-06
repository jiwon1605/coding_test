#include<string>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> p;

    //예외 처리: 빈 경우 혹은 한개만 있는 경우
    if (s.empty() || s.size()==1)
        return (answer = false);
    //예외 처리: 맨 앞에 ) 혹은 맨 뒤에 ( 인 경우
    if (s[s.size() - 1] == '(' || s[0] == ')')
        return (answer = false);


    //스택 형식으로 검사
    for (auto& sElem : s) {
        if (sElem == '(')
            p.push(sElem);

        else if (sElem == ')'){
            if (p.empty())
                return (answer = false);
            else
                p.pop();
        }
    }

    //p가 빈 스택인지 확인
    if (p.empty())
        answer = true;
    else
        answer = false;

    return answer;
}