/**
 * vector  (长度容量可变动态数组，array固定长度容量数组，访问更安全)
 * size()
 * capacity()
 * reverse(n): 扩容
 * resize(n)
 *
 * push_back(e)：增
 * pop_back()：删
 * v2.assign(v1.begin(), v1.end())：复制
 *
 * front(): 返回首位元素
 * at(i):   指定索引的元素
 * back():  返回末尾元素
 *
 * erase(ptr)
 * clear()
 *
 * empty()
 * v1.swap(v2): 内容交换
 */

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print_array(vector<T>& nums);
void printvstats(const vector<int>& v);

int main() {
    vector<int> nums;

    // [3 5 2 9]
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(9);



    cout << nums.size() << endl;        // 4
    cout << nums.capacity() << endl;    // 4

    cout << nums.front() << endl;       // 3
    cout << nums.at(3) << endl;      // 9
    cout << nums.back() << endl;        // 9

    cout << boolalpha << nums.empty() << endl;  // false


    nums.erase(nums.begin(), nums.begin()+2); // remove from ...

    cout << nums.max_size() << endl;    // 4611686018427387903

    // nums.clear();
    print_array(nums);  // [ 2, 9 ]


    printvstats(nums);      // size:  2, capacity: 4
    nums.resize(10);    // size: 10, capacity: 10
    print_array(nums);  // [ 2, 9, 0, 0, 0, 0, 0, 0, 0, 0 ]
    printvstats(nums);


    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};

    v1.swap(v2);

    print_array(v1);    // [ 4, 5, 6 ]
    print_array(v2);    // [ 1, 2, 3 ]


    return 0;
}



template <typename T>
void print_array(vector<T>& nums) {
    /*
    cout << "nums: {";
    for (int i = 0; i < nums.size(); i++) {
        const char *sign = i == nums.size() - 1 ? "" : ", ";
        cout << nums[i] << sign;
    }
    cout << "}" << endl;
    */

    cout << "[ ";
    for (auto start = nums.begin(); start < nums.end(); start++) {
        cout << *start << (start == nums.end() - 1 ? " " : ", ");
    }
    cout << "]" << endl;
}


void printvstats(const vector<int>& v) {
    cout << "   the vector's size is: " << v.size() << endl;
    cout << "   the vector's capacity is: " << v.capacity() << endl;
    cout << "   the vector's maximum size is: " << v.max_size() << endl;
}