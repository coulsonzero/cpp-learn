#include <iostream>
//1、#include<>一般用于包含系统头文件，诸如stdlib.h、stdio.h、iostream等；编译器直接从系统类库目录里查找头文件，程序编译时的效率也会相对更高
//2、#include""一般用于包含自定义头文件，比如我们自定义的test.h、declare.h等，如果项目当前目录或者引用目录下存在和系统目录下重名的头文件，那么编译器在当前目录或者引用目录查找成功后，将不会继续查找， 所以存在头文件覆盖的问题

// 局部变量：必须初始化，否则可能会使用垃圾值
// 全局变量：不需要初始化，默认初始化

int global_var;

int main() {
    // variable
    int num = 20;       // or `int num(20)`

    // constant
    const double PI = 3.14;

    // local var: 未初始化可能会使用垃圾值
    int rand_num;

    // multi-var
    int x = 3, y = 5;

    std::cout << num << std::endl;
    std::cout << rand_num << std::endl;
    std::cout << ::global_var << std::endl;

    return 0;
}
