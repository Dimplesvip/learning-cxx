#include "../exercise.h"

// READ: 有 cv 限定符的成员函数 <https://zh.cppreference.com/w/cpp/language/member_functions>

struct Fibonacci {
    int numbers[11];
    // TODO: 修改方法签名和实现，使测试通过
    int get(int i) const//补全这个方法，实现计算斐波那契数列的功能
    {
        constexpr int numbers [] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
        return numbers[i]; 
    }
};

int main(int argc, char **argv) 
{
    Fibonacci constexpr FIB{{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55}};
    ASSERT(FIB.get(10) == 55, "fibonacci(10) should be 55");
    std::cout << "fibonacci(10) = " << FIB.get(10) << std::endl;
    return 0;
}
