// 453.cpp 
//

#include <iostream>
#include <vector>
#include <algorithm>

int minMoves(std::vector<int>& nums) {
    int min = nums[0];
    long sum=0;
    for (auto loop = 0; loop < nums.size(); loop++)
    {
        min = std::min(min, nums[loop]);
        sum += nums[loop];
    }
    //std::cout << sum - (min * nums.size());
    return sum - (min * nums.size());
}

int main()
{
    std::vector<int> var = { 1,4,7 };
    minMoves(var);
    var = { 9,9,9,9,9,9,9,23 };
    minMoves(var);
    var = { 3,3 };
    minMoves(var);
}


