#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
//장르별로 재생수 저장 map<장르 이름, 해당 장르 총합 재생수>
// 가장 많은 재생수 순으로 장르 정렬
//장르 속 재생 수 높은 순으로 노래 정렬
//장르별 재생수 높은 순으로 2개씩 뽑아 answer에 추가

    //정렬 함수
bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}


vector<int> solution(vector<string> genres, vector<int> plays){
    vector<int> answer;
    map<string, int>mTotal;//장르별 재생수 총합 저장하는 map 변수 total

    //장르별 재생수 증가
    //vector에 바로 넣으면 정렬하기에 편하겠지만, 초기화 시켜줘야하는 번거로움이 있기 때문에
    //map을 사용해 vector로 변환시켜 정렬하기로 함
    for (int i = 0; i < genres.size(); i++) {
        mTotal[genres[i]] += plays[i];
    }
    

    //벡터로 변환해서 재생수 많은 순으로 정렬
    vector<pair<string, int>>vTotal(mTotal.begin(),mTotal.end());
    sort(vTotal.begin(), vTotal.end(), cmp);

    //재생 수 많은 장르 순으로, 재생 수 높은 순으로 고유 번호 정렬
    //이때 gNm(genres and music number) 형태는 {{클래식,{1,3,5}},{팝,{6,7,4}},,,}
    map<string, vector<int>>gNm;

    // 각 장르별로 재생 수 높은 순으로 고유 번호 정렬
    for (int i = 0; i < genres.size(); i++) {
        gNm[genres[i]].push_back(i);
    }

    //vTotal의 키값과 순서가 동일하도록 정렬
    vector<pair<string, vector<int>>> gNmSorted(vTotal.size());
    for (int i = 0; i < vTotal.size(); i++) {
        gNmSorted[i].first = vTotal[i].first;
        gNmSorted[i].second = gNm[vTotal[i].first];
    }

 
    vector<vector<int>> elem;
    //고유번호간 재생수 비교 -> for로 모든 장르를 돌기
    for (int i = 0; i < gNmSorted.size(); i++) {
        elem.push_back(gNmSorted[i].second); // i번째에 저장된 장르의 고유 번호들을 elem에 저장
        // 재생 수 비교, sort 메소드에 람다 함수를 적용시킴
       sort(elem[i].begin(), elem[i].end(), [&](int a, int b) {
            return plays[a] > plays[b];
            });
    }

    //elem[i]별 두개의 요소만을 제거
    for (int i = 0; i < elem.size();i++) {
        for (int j = elem[i].size(); j > 0; j--) {
            if (elem[i].size() > 2)
                elem[i].erase(elem[i].begin() + (j - 1));
            else
                break;
        }
    }

    //이제 2차원인 elem을 1차원인 vector로 삽입!!!!!!!!!!!!!11
    for (auto& e : elem) {
        answer.insert(answer.end(), e.begin(), e.end());
    }

    return answer;
}
