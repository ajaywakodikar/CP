#include <iostream>
#include <vector>

void rotate_matrix(std::vector<std::vector<int>>& M) {
    int x = M.size();
    for(int i = 0; i < x; i++) {
        for(int j = 0; j <= i; j++) {
            int temp = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = temp;
        }
    }

    for(int i = 0; i < x / 2; i++) {
        for(int j = 0; j < x; j++) {
            int temp = M[i][j];
            M[i][j] = M[x - i - 1][j];
            M[x - i - 1][j] = temp;
        }
    }

    return;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::vector<std::vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate_matrix(mat);
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) std::cout << mat[i][j] << " ";
        std::cout << '\n';
    }
} 