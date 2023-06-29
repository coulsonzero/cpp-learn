#include <iostream>
using namespace std;

void printArray(int*, int);
int getSum(const int*, int);
void reverseArray(int*, int);
void printArrays(int (*)[4], int);

int main() {
    // 一维数组
    // int nums[5] = {2, 4, 1, 3, 7};
    // cout << getSum(nums, 5) << endl;
    // reverseArray(nums, 5);
    // printArray(nums, 5);

    // 二维数组
    // int matrix[3][4] = {{10, 11, 12, 13},{ 20, 21, 22, 23 },{31, 32, 33, 34}};
    // printArrays(matrix, 3);

    // 数组指针
    int *ptr = new int[5];

    int nums[5] = {2, 4, 1, 3, 7};
    printArray(nums, 5);
    
    delete[] ptr;

    return 0;
}


void printArray(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(p++) << " ";
    }
    cout << endl;
}

int getSum(const int *p, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(p++);
    }
    return sum;
}

void reverseArray(int *p, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = *(p + size - 1 - i);
        *(p + size - 1 - i) = *(p + i);
        *(p + i) = temp;
    }
}

void printArrays(int(*arr)[4], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
}