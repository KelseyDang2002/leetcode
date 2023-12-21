#include <iostream>

using namespace std;

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(nums);

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((nums[i] + nums[j]) == target) {
                printf("%u + %u = %u\n", nums[i], nums[j], target);
            }
        }
    }
    return 0;
};