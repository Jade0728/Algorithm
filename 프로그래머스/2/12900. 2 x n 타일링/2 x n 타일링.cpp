#include <string>
#include <vector>
using namespace std;
typedef long long ll;

int solution(int n) {
    const int mod=1000000007;
    
    //dp로 풀어야하는 문제!
    int answer = 0;
    vector <int> dp(n+1,0);
    
    dp[1]=1;
    dp[2]=2;
    
    if(n>=3){
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
            dp[i]%=mod;
        }
    }
    
    answer=dp[n];
    return answer;
}