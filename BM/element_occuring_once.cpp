#include <iostream>

int find_single_occurence(int arr[], int N) {
    int res = arr[0];
    for(int i = 1; i < N; i++) res ^= arr[i];
    return res;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int arr[] = {2, 3, 4, 5, 2, 5, 7, 3, 4};
    std::cout << find_single_occurence(arr, 9);
}