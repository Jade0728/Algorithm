#include <iostream>
using namespace std;
#include <vector>
// 2018 투포인터
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    long long sum = 0;
    int res = 0;
    int pos1, pos2;

    for (int i = 1; i <= N; i++)
    {
        pos1 = i;
        pos2 = i + 1;
        sum = pos1;
        while (sum <= N)
        {
            if (sum == N)
            {
                res++;
            }
            sum += pos2;
            pos2++;
        }
    }

    printf("%d\n", res);
    return 0;
}
