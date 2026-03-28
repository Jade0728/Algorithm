#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //소수만 true로 만들기
    vector <bool> primes(1000001,true);
    primes[0]=primes[1]=false;
    
    for(int i=2; i<=sqrt(1000000); i++){
        if(primes[i]){
            for(int j=i*i; j<=1000000; j+=i){
                primes[j]=false;
            }
        }
    }
    primes[2]=false;
    
    //덧셈이 가능한지 확인하기
    int n;
    cin >> n;
    bool flag=false;
    while(n!=0){
        
        for(int i=3; i <= n/2; i++){
            int j=n-i;
            if(i+j == n && primes[i] && primes[j]){
                flag=true;
                cout << n<<" = "<<i<<" + "<<j<<"\n";
                break;
            }
        }
        
        if(!flag){
            cout << "Goldbach's conjecture is wrong.";
        } 
        
        flag=false;
        cin >> n;
        
    }
    
    return 0;
    
}