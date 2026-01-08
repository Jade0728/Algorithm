#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
// 1940 투포인터
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<int> nums(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    // 오름차순 정렬
    sort(nums.begin(), nums.end());

    int pos1 = 0;
    int pos2 = N - 1;
    int res = 0;

    while (pos1 < pos2)
    {
        if (nums[pos1] + nums[pos2] == M)
        {
            res++;
            pos2--;
            pos1++;
        }
        else if (nums[pos1] + nums[pos2] > M)
        {
            pos2--;
        }
        else
        {
            pos1++;
        }
    }
    cout << res;
    return 0;
}