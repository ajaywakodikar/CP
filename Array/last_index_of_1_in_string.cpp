#include <iostream>
#include <string>

int last_index_of_1(std::string& s) {
    int N = s.size();
    int i = 1;
    for(i = N - 1; i >= 0; i--) {
        if(s[i] == '1') break;
    }
    return i;

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string s = "0";
    std::cout << last_index_of_1(s);
}