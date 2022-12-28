#include <iostream>
#include <vector>

long long number_of_paths(int M, int N) {
    if(M == 1 || N == 1) return 1;
    static std::vector<std::vector<int>> v(M + 1, std::vector<int>(N + 1, -1));
    if(v[M][N] != -1) return v[M][N];
    v[M - 1][N] = number_of_paths(M - 1, N);
    v[M][N - 1] = number_of_paths(M, N - 1);
    v[M][N] = v[M - 1][N] + v[M][N - 1];
    return v[M][N];
}

int main() {
    int M, N;
    std::cin >> M >> N;
    long long result = number_of_paths(M, N);
    std::cout << result << "\n";
}