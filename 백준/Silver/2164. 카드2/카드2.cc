#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    queue<int> q;
    
    for(int i= 1; i<= n; i++){
        q.push(i);
    }
    
    while(q.size() !=1){
        q.pop();
        int front=q.front();
        q.pop();
        q.push(front);
        
        if(q.size()==1){
            break;
        }    
    }
    
    cout << q.front();
    
    return 0;
     
}