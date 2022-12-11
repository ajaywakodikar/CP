#include <iostream>
#include <algorithm>

//Calculate value/weight ratio and sort in decreasing order. 

struct item {
    int value;
    int weight;
};

bool compare(item i1, item i2) {
    double r1 = (double)i1.value / i1.weight;
    double r2 = (double)i2.value / i2.weight;
    return r1 > r2;
}

int frac_ks(item arr[], int N, int W) {
    if(N == 0 || W == 0) return 0;
    std::sort(arr, arr + N, compare); 
    double result = 0.0;
    for(int i = 0; i < N; i++) {
        if(arr[i].weight <= W) {
            result += arr[i].value;
            W -= arr[i].weight;
        }
        else {
            result += arr[i].value * ((double)W / arr[i].weight);
            return result;
        }
    }
    return result;
}

int main() {
    item arr[] = {{120, 30}, {100, 20}, {60, 10}};
    std::cout << frac_ks(arr, 3, 50);
}