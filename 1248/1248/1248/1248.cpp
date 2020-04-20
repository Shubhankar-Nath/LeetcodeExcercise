
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;
int numberOfSubarrays(vector<int>& nums, int k) {
    vector<int> oddIndex;
    int sum = 0, index=0;
    oddIndex.push_back(-1);
    for (auto itterator = 0; itterator < nums.size(); itterator++)
    {
        if (nums[itterator] % 2 != 0) {
            oddIndex.push_back(itterator);
        }
    }
    oddIndex.push_back(nums.size());
    while ((index+k+1)<oddIndex.size())
    {
        sum += (oddIndex[index + 1] - oddIndex[index]) * (oddIndex[k + index + 1] - oddIndex[k + index]);
        index++;
    }
    return sum;
}

int main()
{
    vector<int> array = { 2,2,2,1,2,2,1,2,2,2,1 };
    std::cout << numberOfSubarrays(array, 4);
}


