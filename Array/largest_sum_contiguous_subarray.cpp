#include <iostream>
#include <vector>

int max_sum_subarray(std::vector<int>& v) {
    int N = v.size();
    int max_so_far = v[0], curr_max = v[0];

    for(int i = 1; i < N; i++) {
        curr_max = std::max(v[i], curr_max + v[i]);
        max_so_far = std::max(max_so_far, curr_max);
    }
    return max_so_far;
}

int main() {
    std::vector<int> v = {-2, -3, 4, -1, -2, 1, 5, -3};
    std::cout << max_sum_subarray(v);    
}