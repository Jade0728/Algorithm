#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
// 12891 슬라이딩 윈도우
typedef struct DNA
{
    int A = 0;
    int C = 0;
    int G = 0;
    int T = 0;
} DNA;

void newDNA(char c, DNA *dna)
{
    switch (c)
    {
    case 'A':
        dna->A++;
        break;
    case 'C':
        dna->C++;
        break;
    case 'G':
        dna->G++;
        break;
    case 'T':
        dna->T++;
        break;
    default:
        break;
    }
}
void pastDNA(char c, DNA *dna)
{
    switch (c)
    {
    case 'A':
        dna->A--;
        break;
    case 'C':
        dna->C--;
        break;
    case 'G':
        dna->G--;
        break;
    case 'T':
        dna->T--;
        break;
    default:
        break;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int S, P;
    cin >> S >> P;

    string arr;
    cin >> arr;

    int A, C, G, T;
    cin >> A >> C >> G >> T;

    DNA dna;
    int start = 0;
    int end = 0;
    int res = 0;

    for (; end < P; end++)
    {
        newDNA(arr[end], &dna);
    }

    while (end <= S)
    {
        if (dna.A >= A && dna.C >= C && dna.G >= G && dna.T >= T)
        {
            res++;
        }
        newDNA(arr[end++], &dna);
        pastDNA(arr[start++], &dna);
    }

    cout << res;
}