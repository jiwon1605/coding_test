#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main(void) {
    int testCnt; //테스트 갯수
    cin >> testCnt;

    vector<string> str(testCnt);

    for (int index = 0; index < testCnt; index++) {
        cin >> str[index];
    }

    for (int index = 0; index < testCnt; index++) {
        cout << str[index].front() << str[index].back()<<endl;
    }
    
}
