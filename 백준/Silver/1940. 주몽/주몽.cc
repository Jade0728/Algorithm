#include <iostream>
using namespace std;
#include <vector>
// 1940 투포인터
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<long long> nums(N + 1);

    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }
    // 갑옷은 두개의 재료로만 구성, 그 번호 합이 합쳐서 M이 되어야함
    int pos1, pos2;
    int sum = 0;
    int res = 0;
    for (int i = 0; i < N; i++)
    {
        pos1 = i;
        pos2 = i + 1;
        while (pos2 < N)
        {
            sum = nums[pos1] + nums[pos2];
            if (sum == M)
            {
                res++;
            }
            pos2++;
        }
    }

    printf("%d\n", res);
    return 0;
}