#include <iostream>
using namespace std;
#include <vector>
// 11660
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N;
    cin >> M;

    std::vector<std::vector<int>> nums(N + 1, std::vector<int>(N + 1, 0));
    std::vector<std::vector<int>> prefixsum(N + 1, std::vector<int>(N + 1, 0));

    // 원 배열과 prefix sum 배열 저장
    int temp = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> temp;
            if (i == 1 && j == 1)
            {
                prefixsum[1][1] = temp;
            }
            else if (i == 1 && j > 1)
            {
                prefixsum[1][j] = prefixsum[1][j - 1] + temp;
            }
            else if (j == 1 && i > 1)
            {
                prefixsum[i][1] = prefixsum[i - 1][1] + temp;
            }
            else
            {
                prefixsum[i][j] = prefixsum[i - 1][j] + prefixsum[i][j - 1] - prefixsum[i-1][j-1] + temp;
            }
        }
    }

    for (int i = 1; i <= M; i++)
    {
        int x1, x2, y1, y2 = 0;
        int sum = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        sum = prefixsum[x2][y2] - prefixsum[x1 - 1][y2] - prefixsum[x2][y1 - 1] + prefixsum[x1 - 1][y1 - 1];
        printf("%d\n", sum);
    }

    return 0;
}