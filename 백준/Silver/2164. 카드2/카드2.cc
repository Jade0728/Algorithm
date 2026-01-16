#include <queue>
using namespace std;
#include <iostream>
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    while (q.size() != 1)
    {
        q.pop();           // 최상단 제거
        q.push(q.front()); // 그다음 최상단을 제일 밑으로
        q.pop();           // 그 최상단을 제거
    }

    cout << q.front();
    return 0;
}