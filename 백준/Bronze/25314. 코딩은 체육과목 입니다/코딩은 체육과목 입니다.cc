#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int N;
    string answer;

    cin >> N;

    for (int i = 0; i < N / 4; i++) {
        answer += "long ";
    }

    answer = answer + "int";

    cout << answer;
}
