#include <iostream>
//1、#include<>一般用于包含系统头文件，诸如stdlib.h、stdio.h、iostream等；编译器直接从系统类库目录里查找头文件，程序编译时的效率也会相对更高
//2、#include""一般用于包含自定义头文件，比如我们自定义的test.h、declare.h等，如果项目当前目录或者引用目录下存在和系统目录下重名的头文件，那么编译器在当前目录或者引用目录查找成功后，将不会继续查找， 所以存在头文件覆盖的问题


int main() {
    int num(0);       // 局部变量初始化为0
    int rand_num;     // 随机数种子

    std::cout << num << std::endl;
    std::cout << rand_num << std::endl;

    return 0;
}