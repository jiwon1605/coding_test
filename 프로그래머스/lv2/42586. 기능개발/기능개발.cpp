#include <string>
#include <vector>
#include <cmath>

using namespace std;


vector<int>solution(vector<int> progresses, vector<int> speeds)
{
    vector<int>answer;
    vector<int>day;
    int max_day = 0;


    for (int i = 0; i < progresses.size(); i++) {
        day.push_back(ceil((float)(100 - progresses[i]) / speeds[i])); //진행 완료까지 걸리는 일 수 계산
        //float으로 캐스팅하는게 매우 중요!!!!!!!
       
        if (day[i] > max_day) { //day[i]가 max_day보다 크면
            answer.push_back(1); //answer의 뒤에 1 추가
            max_day = day[i];//day[i]를 max_day로 선언
        }
        else { //아닌 경우 = day[i]가 max_day와 같거나 작은 경우 혹은 answer가 공백인 경우
            answer.back()++;//answer의 뒤의 요소에 1 증가(큐의 원리 선입선출)
        }
    }

    return answer;
}
