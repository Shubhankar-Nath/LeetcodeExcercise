// 1030.cpp 

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;


void allCellsDistOrder(int R, int C, int r0, int c0) {
    int r = 0; int c = 0;

    vector<vector<int>> sortarray;
    vector<vector<int>> arr; 

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            vector<int> v;
            r = abs(i - r0);
            c = abs(j - c0);
            v.push_back(r + c);
            v.push_back(i);
            v.push_back(j);
            arr.push_back(v);
            cout << r+c << "," << i << "," << j << " | ";
            v.clear();
        }

    }

    cout << "\n";
    for (int i = 0; i < R * C;  i++) {
        cout << arr[i][0] << "," << arr[i][1] << "," << arr[i][2] << " | ";
    }
    cout << "\n";
    sort(arr.begin(), arr.end(), [=](std::vector<int> i, std::vector<int> j) {
        return (i[0] < j[0]);
        });
    cout << "\n";
    for (int i = 0; i < R * C; i++) {
        cout << arr[i][0] << "," << arr[i][1] << "," << arr[i][2] << " | ";
        vector<int> v;
        v.push_back(arr[i][1]);
        v.push_back(arr[i][2]);
        sortarray.push_back(v);
    }
    cout << "\n";

}

int main()
{
    allCellsDistOrder(2,2,0,1);
}
