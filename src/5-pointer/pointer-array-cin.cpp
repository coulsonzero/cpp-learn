/******************************************************
 * The maximum value of the array                     *
 *                                                    *
 * 1. enter the size of array                         *
 * 2. then the next numbers are the elements of array *
 * 3. finally print the maximum value of the array.   *
 * For Example                                        *
 * Input :  3 16 34 5                                 *
 * Output: 34                                         *
 * Input:                                             *
 * 3                                                  *
 * 16                                                 *
 * 34                                                 *
 * 5                                                  *
 * Output:                                            *
 * 34                                                 *
 ******************************************************/

#include "iostream"


int max_array(const int* nums, int n);
void print_array(const int* nums, int n);

int main() {
    int n;
    std::cin >> n;
    int* nums = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    // std::cout << max_array(nums, n);
    print_array(nums, n);

    delete[] nums;
    return 0;
}


int max_array(const int* nums, int n) {
    int max = nums[0];
    for (int i = 0; i < n; i++) {
        if (nums[i] > max) max = nums[i];
    }

    return max;
}


void print_array(const int* nums, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

