// 686.cpp 
//

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int rep (string A, string B, string C, int R)
{
    if (C.find(B) != string::npos)
        return R;
    else
    {
        int x = 1;
        int y = abs((int)C.length() - (int)B.length());
        int v = x > y ? x : y;
        for (int i = 0; i <v; i++) {
            C.append(A);
            if (C.find(B) != string::npos) {
                return R+1+i;
            }
        }
        return -1;
    }
}
int repeatedStringMatch(string A, string B) {
    float ratio = (float)A.length()/(float)B.length();
    string C = A;
    int repeat = 0;
    if (ratio < 1) {
        repeat= B.length() / A.length();
        for (int i = 1; i < repeat; i++) {
            C.append(A);
        }
        return rep(A, B, C, repeat);
    }
    else {
        return rep(A, B, A, 1);
    }
}

int main()
{
    std::string A = "abc", B = "cabcabca";
    std::cout << repeatedStringMatch(A, B);
}
