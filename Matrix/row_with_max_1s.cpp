#include <iostream>
#include <vector>

int row_with_max_1s(std::vector<std::vector<bool>>& mat) {
    int R = mat.size();
    int C = mat[0].size();
    std::vector<int> count(R);
    int ind = -1, max_1s = 0;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(mat[i][j] == 1) ++count[i];
            if(count[i] > max_1s) {
                max_1s = count[i];
                ind = i;
            }
        }
    }
    return ind;
}

int main() {
    std::vector<std::vector<bool>> mat = { {0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0} };
    std::vector<std::vector<bool>> mat2 = { {0, 0, 0, 1, 1, 1, 1, 1, 1}, {0, 0, 0, 0, 1, 1, 1, 1, 1}, {0, 0, 0, 0, 1, 1, 1, 1, 1} };
    std::vector<std::vector<bool>> mat3 = { {0, 0}, {0, 0} };
    int row = row_with_max_1s(mat);
    std::cout << row + 1;
}