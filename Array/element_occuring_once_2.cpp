#include <iostream>
#include <set>
#include <numeric>

int find_single_occurence(int arr[], int N) {
    int arr_sum, set_sum;
    std::set<int> s (arr, arr + N);
    arr_sum = std::accumulate(arr, arr+ N, 0);
    set_sum = std::accumulate(s.begin(), s.end(), 0);
    return (3 * set_sum - arr_sum) / 2;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int arr[] = {2, 3, 4, 2, 7, 3, 4, 2, 4, 3};
    std::cout << find_single_occurence(arr, 10);
}