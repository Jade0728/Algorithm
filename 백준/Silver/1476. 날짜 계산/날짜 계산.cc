#include <iostream>
#include <stdio.h>

using namespace std;
//1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //입력 받기
    int E, S, M;
    cin >> E>> S>> M;
    
    //초기값
    int e=0;
    int s=0;
    int m=0;
    int year=0;
    
    while(true){
        if(e==E && s==S && m==M){
            break;
        }
        
        e=e%15;
        s=s%28;
        m=m%19;
        
        e++;s++;m++;
        year++;
    }
    
    cout << year;

    return 0;
}