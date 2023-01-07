#include <iostream>

bool is_subsequence_of_other_array(int A[], int B[], int M, int N) {
    int ind = 0;
    if(N == 0) return true;
    if(N > M) return false;
    else {
        int ind = 0;
        for(int i = 0; i < M; i++) {
            if(A[i] == B[ind]) ++ind;
            if(ind == N) return true;
        }
        return false;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int A[] = {1, 2, 3, 4};
    int B[] = {1, 4};
    int M = sizeof(A) / sizeof(A[0]);
    int N = sizeof(B) / sizeof(B[0]);
    bool ans = is_subsequence_of_other_array(A, B, M, N);
    std::cout << std::boolalpha << ans;
}