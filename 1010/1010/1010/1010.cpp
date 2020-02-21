#include <vector>
#include <iostream>
#define Combination(n) (n*(n-1)/2)

using namespace std;

int numPairsDivisibleBy60(vector<int>& time) {

	int placeholder[60] = {0};
	int remainder, result = 0;
	for (int i = 0; i<time.size(); i++)
	{
		remainder = time[i] % 60;
		placeholder[remainder] += 1;
	}

	for (int i = 0; i <= 30; i++) {
		switch (i) {
		case 0:
		case 30:
			result += Combination(placeholder[i]);
			break;
		default:
			result += (placeholder[i] * placeholder[60 - i]);
		}
	}
	return result;
}

int main()
{
	vector<int> array = { 30,20,150,100,40 };
	cout << numPairsDivisibleBy60(array);
}

