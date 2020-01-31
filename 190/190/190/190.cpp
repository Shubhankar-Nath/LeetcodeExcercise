// 190.cpp 
//

#include <iostream>


uint32_t reverseBits(uint32_t n)
{
    uint32_t x,y,a,b;
    uint32_t max_num = 2147483648;
    uint32_t result = n;
    for (int i = 0; i < 16; i++) {
        a = 1 << i;
        b = 2147483648 >> i;
        x = n & a;
        y = n & b;
        if ((x == a) && (y == 0)) {
            result = result - x + b;
        }
        if ((x == 0) && (y == b)) {
            result = result + a - y;
        }
    }
    return result;
}

int main()
{
    uint32_t num = 43261596;
    std::cout << reverseBits(num);
}