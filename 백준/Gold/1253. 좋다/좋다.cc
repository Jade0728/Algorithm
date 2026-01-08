#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
// 1253 투포인터
// 0, 0, 0  or -2 1 3 이렇게 음수와 0이 같이 와도 가능하도록 다시 코딩해보자

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<long long> nums(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }
    // 오름차순
    sort(nums.begin(), nums.end());

    int pos1, pos2, goal;
    int res = 0;
    for (int i = 0; i < N; i++)
    {
        int goal = nums[i];
        pos1 = 0;
        pos2 = N - 1;
        while (pos1 < pos2)
        {
            if (pos1==i)
            {
                pos1++;
                continue; // 스스로를 포함하는 것을 제외
            }
            if (pos2== i)
            {
                pos2--;
                continue; // 스스로를 포함하는 것을 제외
            }
            if (nums[pos1] + nums[pos2] == goal)
            {
                res++;
                break;
            }
            else if (nums[pos1] + nums[pos2] > goal)
            {
                pos2--;
            }
            else
            {
                pos1++;
            }
        }
    }

    printf("%d\n", res);
}