#include <iostream>

void rev_array(int v[], int N) {
	int start = 0, end = N - 1;
	while(start < end) {
		int temp = v[start];
		v[start] = v[end];
		v[end] = temp;
		++start; --end;
	}
}

int main() {
    int a[] = {3, 9, 5, 1, 6};
    int size = sizeof(a)/sizeof(a[0]);
    rev_array(a, size);
    for(int i = 0; i < size; i++) std::cout << a[i] << '\t';
}