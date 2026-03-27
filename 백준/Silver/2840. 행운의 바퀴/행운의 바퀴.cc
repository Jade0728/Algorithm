#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

bool isDuplicate(vector<string>& arr, string input){
    if(find(arr.begin(),arr.end(), input) != arr.end()){
        //배열의 첫번째부터 배열 끝까지 input과 비교 
        //같은 걸 찾으면 해당 위치 반환
        //같은 걸 끝까지 찾지 못하면 맨 끝 위치 반환
        //참고로 arr.end() = (arr 배열의 마지막 위치)+1의 위치
        return true;
    }  
    return false;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //n칸 k번 회전
    int n, k;
    cin >> n >>k;
    
    vector <string> luck(n, "?");
    int index=0;
    
    for(int i=0; i<k; i++){
        int num;
        string alphbet;
        
        cin >> num;
        cin >> alphbet;
        
        index+=num;
        if(index >= n){
            index=index%n; 
        }
        
        if(luck[index]=="?"){
            //중복 여부 확인
            if(isDuplicate(luck, alphbet)){
                cout << "!";
                return 0;
            }
            luck[index]=alphbet;
            
        }
        else if(luck[index]!="?"&& luck[index]==alphbet){
            luck[index]=alphbet;
        }
        else if(luck[index]!="?" && luck[index]!= alphbet){
            cout << "!";
            return 0;
        }
    
    }

    //결과 출력
    for(int i=0;i<n;i++){
        if(index<0){
            index+=n;
        }
        cout << luck[index];
        index--;
    }
    
    
    
    return 0;
}