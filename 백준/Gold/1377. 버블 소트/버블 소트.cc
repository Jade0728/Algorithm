// 백준1377 버블sort
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<pair<int, int>> A(N + 1);
    bool changed = false;

    for (int i = 1; i <= N; i++)
    {
        cin >> A[i].first;
        A[i].second = i;
    }

    sort(A.begin(), A.end()); // 오름차순 정렬
    int res = 0;
    int temp = 0;

    for (int i = 1; i <= N; i++)
    {
        if (i < A[i].second)
        {
            temp = A[i].second - i;
            if (res < temp)
            {
                res = temp;
            }
        }
    }
    res=res+1;
    cout<<res;
    return 0;
}