#include<iostream>
#include<vector>
#include<algorithm>
#include <memory.h>
using namespace std;
#define pii pair<int,int>

int DP[10005][3]; //[현재까지 결정을 내린 포도주 잔의 개수][마지막에 연속해서 마신 포도주 잔의 개수]

int main(){
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n; //포도주 잔의 개수

    vector<int> V;

    //각 포도주 잔에 포도주가 얼마나 차 있는가를 입력받음
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        V.push_back(a);
    }

    memset(DP,-1, sizeof(DP)); //DP 값을 모두 -1로 설정
    DP[0][0]=0;

    for(int i=0;i<n;i++){//현재 i 번째 포도주에 대해서 선택을 함
        for(int j=0;j<3;j++){//현재 상태에서 연속해서 마지막에 마신 포도주의 개수가 j개

            //1. 해당 포도주를 마시지 않음
            DP[i+1][0]=max(DP[i+1][0],DP[i][j]);

            //2. 해당 포도주를 마시는 경우
            if(j<2){
                DP[i+1][j+1]=max(DP[i+1][j+1],DP[i][j]+V[i]);
            }
        }    
    }
    cout << max({DP[n][0],DP[n][1],DP[n][2]});


}