#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    
    int t,n;
    
    cin >> t;
    
    
    for(int i=0;i<t;i++){
        cin >> n;
        int mininterview=n+1;
        int res=n;
        
        vector<pair<int,int>> rank(n);
        
        //입력받기
        for(int j=0;j<n;j++){
            cin >> rank[j].first >> rank[j].second;
            
        }
        
        //서류 순위로
        sort(rank.begin(), rank.end());
        
        //그리디
        for(int k=0;k<n;k++){
            
            if(mininterview>rank[k].second){
                mininterview=rank[k].second; //통과!
            }
            else{
                res--; //탈락
            }
        }
        
        cout << res<<"\n";
        
    }
    
    
    
    

    return 0;
}