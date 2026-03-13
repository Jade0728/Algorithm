
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

//자릿수 합을 구하는 함수
int compareSum(const string &st){
    int sum=0;
    int size=st.size();
    
    for(int i=0;i<size;i++){
        if(isdigit(st[i])) sum+=st[i]-'0';
    }
    
    return sum;
}


bool compare(const string &st1, const string &st2){
    //길이가 다른 경우 짧은 것이 먼저
    if(st1.size()!=st2.size()){
        return st1.size() < st2.size();
    }
    
    //자릿수의 합을 비교: 작은 합을 가지는 것이 먼저
    if(compareSum(st1)!=compareSum(st2)){
        return compareSum(st1)<compareSum(st2);
    }
    
    //사전순으로
    return st1<st2;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<string> guitar(N,""); 
    
    for(int i=0;i<N;i++){
        cin >> guitar[i];
    }
    
    
    sort(guitar.begin(), guitar.end(), compare);
    
    for(int i=0;i<N;i++){
        cout << guitar[i] <<"\n";
    }
    

    return 0;
}