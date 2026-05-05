#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    vector <int> clothes_cnt(n+1,1);
    
    
    //옷 없는 친구
    for(int i=0;i<lost.size();i++){
        clothes_cnt[lost[i]]--;
    }
    
    //여벌 옷 있는 친구
    for(int i=0;i<reserve.size();i++){
        clothes_cnt[reserve[i]]++;
    }
    
    for(int i=1;i<=n;i++){
        if(clothes_cnt[i]){
            continue;
        }
        
        if(clothes_cnt[i-1]==2){
            clothes_cnt[i-1]--;
            clothes_cnt[i]++;
        }        
        else if(clothes_cnt[i+1]==2){
            clothes_cnt[i+1]--;
            clothes_cnt[i]++;
        }
    }
    
    for(int i=1;i<=n;i++){
        if(clothes_cnt[i]){
            answer++;
       }
    }
    return answer;
}