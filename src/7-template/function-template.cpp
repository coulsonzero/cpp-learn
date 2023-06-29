#include <iostream>

template <typename T>
T min(T a, T b);

template <typename T>
void swap(T& a, T& b);

template <typename T, int N>
void print_array(T(&array)[N]);


int main() {
    std::cout << min(1, 2) << std::endl;        // 1
    std::cout << min(1.6, 2.3) << std::endl;    // 1.6

    int a = 3, b = 5;
    swap(a, b);
    std::cout << "a: " << a << ", b: " << b << std::endl;   // a: 5, b: 3

    int nums[4] = {7, 3, 5, 1};
    print_array(nums);      // 7 3 5 1

    return 0;
}

template <typename T>
T min(T a, T b) {
    return a < b ? a : b;
}


template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T, int N>
void print_array(T(&array)[N]) {
    for (int i = 0; i < N; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

