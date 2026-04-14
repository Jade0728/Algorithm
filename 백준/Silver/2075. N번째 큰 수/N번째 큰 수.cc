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
    
    //가장 작은 값이 root 에 있도록
    priority_queue<int, vector<int>, greater<int>> numbers;
    int temp;
    
    for(int i = 0; i < n * n; i++) {
        cin >> temp;
        numbers.push(temp);
        if(numbers.size() > n) numbers.pop(); //n보다 커지면 가장 작은 값이 pop
    }
    cout << numbers.top();
    

    return 0;
}