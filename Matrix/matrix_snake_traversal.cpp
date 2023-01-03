#include <iostream>
#include <vector>

void snake_traversal(std::vector<std::vector<int>>& v, int R, int C) {
    for(int i = 0; i < R; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < C; j++) std::cout << v[i][j] << "  ";
        }
        else {
            for(int j = C - 1; j >= 0; j--) std::cout << v[i][j] << "  ";
        }
    }
}

int main() {
    std::vector<std::vector<int>> v{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    snake_traversal(v, 4, 4);
}