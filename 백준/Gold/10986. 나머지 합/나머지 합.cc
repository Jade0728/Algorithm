#include <iostream>
using namespace std;
#include <vector>
// 10986
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, M;
    cin >> N >> M;

    vector<long long> mod(M + 1, 0);

    long long c, sum = 0;
    long long res = 0;

    for (int i = 1; i <= N; i++)
    {
        cin >> c;
        sum += c;
        mod[(sum % M)]++;
    }

    for (int i = 0; i < M; i++)
    {
        res += ((mod[i] * (mod[i] - 1)) / 2);
    }

    cout << res + mod[0];
    return 0;
}
