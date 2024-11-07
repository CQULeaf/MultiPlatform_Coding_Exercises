#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // 计算阶乘和
    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        int temp = 1;
        for (int j = 1; j <= i; ++j)
        {
            temp *= j;
        }
        res += temp;
    }

    cout << res << endl;

    system("pause");
    return 0;
}