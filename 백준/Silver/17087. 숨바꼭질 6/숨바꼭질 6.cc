#include <iostream>
#include <stdio.h>
#include <cmath>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int s;
    
    vector <int> people(100001,0);
    vector <int> distance(100001,0);
    //첫째줄 입력받음
    cin >> n;
    cin >> s;
    
    //둘째줄 입력 받음
    for(int i=0;i<n;i++){
        cin >> people[i];
    }
    
    //수빈이와 거리 구하기
    for(int i=0;i<n;i++){
        distance[i] = abs(people[i]-s);
    }
    
    int result=0;
    //거리들의 최대공약수 구하기
    for(int i=0;i<n;i++){
        result = gcd(result, distance[i]); 
    }
     
    cout << result<<"\n";
    

    return 0;
}