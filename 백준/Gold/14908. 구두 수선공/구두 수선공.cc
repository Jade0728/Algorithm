#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
#include<utility>
#define int long long
#define all(v) v.begin(), v.end()

using namespace std;

bool compare (array<int,3> a, array<int,3> b){

    if(a[0]*b[1]==a[1]*b[0]) return a[2]<b[2]; 

    else return a[0]*b[1] <a[1]*b[0]; //t/s 에 따라
}


signed main(){
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n; //작업의 개수

    vector <array<int, 3>> v; //{a,b,c} 세개의 값을 담는 벡터

    for(int i=0;i<n;i++){
        int t,s; 
        cin >> t>>s;
        v.push_back({t,s,i});  //{들어가는 시간, 보상금, 몇번째 작업인지}
        
    }

    sort(all(v), compare); //compare 기준으로 정렬

    for(auto[t,s,i]:v) cout << i +1 << " ";

}