#include <iostream>
#include <tuple>
#include <vector>

std::tuple<int, int> search(std::vector<std::vector<int>>& mat, int num) {
    std::tuple<int, int> x = {-1, -1};
    int i = 0;
    int R = mat.size();
    int C = mat[0].size();
    for(; i < R; i++) {
        if(mat[i][0] <= num && mat[i][C - 1] >= num) {
            int k = 0; 
            for(; k < C; k++) {
                if(mat[i][k] == num) {
                    x = {i, k};
                    return x;
                }
            }
        }
    }
    return x;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::vector<std::vector<int>> vec{ {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12} };
    int num = 12;
    std::tuple<int, int> x = search(vec, num);
    std::cout << std::get<0>(x) + 1 << "  " << std::get<1>(x) + 1;
}
