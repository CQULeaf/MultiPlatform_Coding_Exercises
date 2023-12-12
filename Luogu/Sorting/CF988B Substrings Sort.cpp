#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool check_substrings(const string& smaller, const string& larger)
{
    return larger.find(smaller) != string::npos;
}


int main()
{
    int N;
    cin >> N;

    vector<string> strings(N);
    for(int i = 0; i < N; i++)
    {
        cin >> strings[i];
    }

    sort(strings.begin(),strings.end(),[](const string& a, const string& b)
    { return a.size() < b.size();});

    for(int i = 0; i < N-1; i++)
    {
        if(!check_substrings(strings[i], strings[i+1]))
        {
            cout << "NO" << endl;
            system("pause");
            return 0;
        }
    }

    cout << "YES" << endl;

    for(const auto& str : strings)
    {
        cout << str << endl;
    }

    system("pause");
    return 0;
}