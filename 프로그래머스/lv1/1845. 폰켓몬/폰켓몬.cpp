#include <vector>
#include <stdio.h>
using namespace std;

int solution(vector<int> nums)
{
    int i, j, temp;
    int len = nums.size();

    for (j = 1; nums.size() > j; j++) {
        for (i = 0; i < j; i++)
            if (nums[i] >= nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
    }

    int count = 0;

    for (i = 0; nums.size() > i; i++) {
        if (nums[i] != nums[i + 1]) {
            count += 1;
        }
    }

    if (len / 2 < count)
        count = len / 2;


    printf("%d", count);

    return count;
}