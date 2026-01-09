#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
// 21921 슬라이딩 윈도우

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, n;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = x - 1;
    int maxsum = 0;
    int sum = 0;
    int cnt = 1;

    // 첫 합 구하기
    for (int i = 0; i < x; i++)
    {
        sum += arr[i];
    }
    maxsum = sum;

    // 슬라이딩
    while (end < n - 1)
    {
        sum += arr[++end];   // 앞에 있는 걸 더해야함
        sum -= arr[start++]; // 지나간 걸 빼야함
        if (sum > maxsum)
        {
            maxsum = sum;
            cnt = 1;
        }
        else if (sum == maxsum)
        {
            cnt++;
        }
    }

    if (maxsum == 0)
    {
        printf("SAD");
    }
    else
    {
        cout << maxsum << "\n"
             << cnt;
    }
}