#include <iostream>
#include <numeric>

int missing_number(int arr[], int N) {
    int arr_sum = std::accumulate(arr, arr + N, 0);
    int n_sum = (N + 1) * (N + 2) / 2;
    return n_sum - arr_sum;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int arr[] = {3, 1, 4, 5};
    std::cout << missing_number(arr, 4);
}