#include <iostream>

using namespace std;

int main()
{
    int N;
    char c;
    cin >> N >> c;

    for (int i = 0; i < (N + 1)/2; i++) 
    {
        for (int j = 0; j < N; j++)
        {
            cout << c;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}