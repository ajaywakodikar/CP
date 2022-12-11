#include <iostream>

void display(int arr[], int length) {
    for(int i = 0; i < length; i++) std::cout << arr[i] << "  ";
    std::cout << '\n';
}

int* get_product_array(int arr[], int length) {
    int prefix[length], postfix[length];
    int* product_array = new int[length];
    prefix[0] = arr[0]; postfix[length - 1] = arr[length - 1];
    for(int i = 1; i < length; i++) prefix[i] = prefix[i - 1] * arr[i];
    for(int i = length - 1; i > 0; i--) postfix[i - 1] = postfix[i] * arr[i - 1];
    product_array[0] = postfix[1];
    product_array[length - 1] = prefix[length - 2];
    for(int i = 1; i < length - 1; i++) product_array[i] = prefix[i - 1] * postfix[i + 1];
    return product_array;
}

int main() {
    int length = 4;
    int array[] = {1, 2, 3, 4};
    int* result = get_product_array(array, length);
    display(result, length);

}