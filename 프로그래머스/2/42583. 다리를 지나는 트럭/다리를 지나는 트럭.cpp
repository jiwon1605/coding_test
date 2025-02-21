#include <string>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 0;
    queue<int> ing_truck; //{무게, 건너는 시간}
    int weight_sum = 0;
    int i = 0;

    for (int j = 0; j < bridge_length; j++)
        ing_truck.push(0);

    while (i < truck_weights.size() || weight_sum > 0) {
        time++;
        weight_sum -= ing_truck.front();
        ing_truck.pop();

        if (i < truck_weights.size() && weight_sum + truck_weights[i] <= weight) {
            ing_truck.push(truck_weights[i]);
            weight_sum += truck_weights[i];
            i++;
        }

        else {
            ing_truck.push(0);
        }
    }


    return time;
}