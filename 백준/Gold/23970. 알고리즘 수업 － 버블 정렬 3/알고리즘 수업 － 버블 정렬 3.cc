// 백준23970 버블sort
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int N;
int A[10001];
int B[10001];
int ans = 0;

int bubble_sort(int N)
{
    if (equal(A, A + N, B))
    {
        return 1; // 두 배열이 이미 같은지 확인
    }
    
    for (int i = 0; i < N ; i++)
    {
        bool changed = false;
        for (int j = 0; j < N - 1-i; j++)
        {
            if (A[j] > A[j + 1])
            {
                changed = true;
                swap(A[j], A[j + 1]);
                if (A[j] == B[j])
                {
                    if (equal(A, A + N, B))
                        return 1;
                }
            }
        }
        if (changed == false)
        {
            break;
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    printf("%d", bubble_sort(N));
}