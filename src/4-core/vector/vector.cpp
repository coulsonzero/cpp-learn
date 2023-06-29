/**
 * vector  (长度容量可变动态数组，array固定长度容量数组，访问更安全)
 * size()
 * capacity()
 * max_size()
 * empty()
 * reserve(n): 扩容，当n < size()时不生效
 * resize(n) : 调整vector的size(),
 * 如果比原先的size小，则移除多余的元素; 如果比原先的长度大，则元素补充默认值
 * (新size<旧size时，cap不变，新size<旧size的2倍时，cap扩容为原先的2倍，新size>旧size的2倍时，cap为新size)
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
 * v1.swap(v2): 所有元素值交换
 *
 * sort(nums.begin(), nums.end()): 升序排列
 * sort(nums.begin(), nums.end(), greater<int>())       // 降序
 * auto cmp = [&](int x, int y) -> bool {return x > y;};
 * sort(nums.begin(), nums.end(), cmp);
 *
 * auto it = count(nums.begin(), nums.end(), e)                   // 统计e出现的次数
 * cout << *it << endl;
 * return it != nums.end()
 * if(find(nums.begin(), nums.end(), e) != nums.end())          // 判断是否存在该元素
 *
 * upper_bound(nums.begin(), nums.end(), e)                 // 二分查找第一个小于等于e的值的地址
 * upper_bound(nums.begin(), nums.end(), e) - nums.begin()  // 索引
 * auto it = upper_bound(nums.begin(), nums.end(), e);
 * std::cout << *it;  // 值
 *
 *
 */

#include <iostream>
#include <vector>
using namespace std;

void example();
template <typename T>
void print_array(vector<T>& nums);
void printvstats(const vector<int>& v);
int upper_bound_example(vector<int>& nums, int e);
void cout_vector();



int main() {
    vector<int> nums = {3, 1, 5};
    auto cmp = [&](int x, int y) -> bool {
        return x > y;
    };

    cout << max(1, 3) << endl;  // 3
    cout << max(1, 3) << endl;  // 3
    cout << max({1,2,0,-40,-20,99}) << endl;            // 99
    cout << *max_element(nums.begin(), nums.end()) << endl; // 5

    return 0;
}

void example() {
    vector<int> nums;

    // [3 5 2 9]
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(9);
    nums.insert(nums.begin()+2, 1);

    print_array(nums);




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

}



template <typename T>
void print_array(vector<T>& nums) {
    cout << "[ ";
    for (auto start = nums.begin(); start < nums.end(); ++start) {
        cout << *start << (start == nums.end() - 1 ? " " : ", ");
    }
    cout << "]" << endl;
}


void printvstats(const vector<int>& v) {
    cout << "   the vector's size is: " << v.size() << endl;
    cout << "   the vector's capacity is: " << v.capacity() << endl;
    cout << "   the vector's maximum size is: " << v.max_size() << endl;
}

int upper_bound_example(vector<int>& nums, int e) {
    return nums.end() - upper_bound(nums.begin(), nums.end(), e);
}

void upper_bound_example() {
    vector<int> nums = {1, 3, 6, 2, 3};
    // 查找nums中第一个大于2的元素 （如果未找到，返回0）
    auto it = upper_bound(nums.begin(), nums.end(), 2);
    cout << "e: " << *it << endl;                      // 3
    cout << "index: " << (it - nums.begin()) << endl;  // 1
}

void cout_vector() {
    vector<int> vec = {1, 2, 3, 1, 5, 2, 8, 2};
    int cnt = count(vec.begin(), vec.end(), 2);
    cout << cnt;    // 3
}

void reverse_vector_example() {
    vector<int> nums = {1, 2, 3, 1, 5, 2, 8, 2};
    auto cmp = [&](int x, int y) -> bool {
        return x > y;
    };
    sort(nums.begin(), nums.end(), cmp);
    // sort(nums.begin(), nums.end(), greater<int>())
    print_array(nums);
}

void cap_size_example() {
    vector<int> nums = {1, 2, 3, 1, 5, 2, 8, 2};
    print_array(nums);
    printvstats(nums);

    nums.resize(12);     // size = 10
    // nums.reserve(20);    // capacity = 20
    print_array(nums);
    printvstats(nums);
}

void emplace_back_vector_struct() {
    struct date {
        int year;
        int month;
        int day;

        date(int year, int month, int day): year(year), month(month), day(day){};
    };
    vector<date> vec;
    vec.push_back(date(2022, 9, 2));
    vec.push_back({2022, 10, 3});
    vec.emplace_back(2023, 6, 18);
    vec.emplace_back(2023, 5, 19);
    for (auto& v : vec) {
        // cout << v.year << "-" << v.month << "-" << v.day << endl;
        printf("%04d-%02d-%02d\n", v.year, v.month, v.day);
    }

    // 2022-09-02
    // 2022-10-03
    // 2023-06-18
    // 2023-05-19
}