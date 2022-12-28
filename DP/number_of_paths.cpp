#include <iostream>
#include <vector>

long long number_of_paths(int M, int N, std::vector<std::vector<int>>& v) {
    if(M == 1 || N == 1) return 1;
    if(v[M][N] != -1) return v[M][N];
    v[M - 1][N] = number_of_paths(M - 1, N, v);
    v[M][N - 1] = number_of_paths(M, N - 1, v);
    v[M][N] = v[M - 1][N] + v[M][N - 1];
    return v[M][N];
}

int main() {
    int M, N;
    std::cin >> M >> N;
    std::vector<std::vector<int>> v(M + 1, std::vector<int>(N + 1, -1));
    long long result = number_of_paths(M, N, v);
    std::cout << result << "\n";
}