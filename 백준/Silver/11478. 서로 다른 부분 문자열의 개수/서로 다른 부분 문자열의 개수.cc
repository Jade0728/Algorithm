
#include <iostream>
#include <set>
#include <string>

//백준 11487
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    string str;
    string substring;
    set<string> subs;
    
    cin >> str;
    
    for(int i=0;i<str.length();i++){
        for(int j=i;j<str.length();j++){
            substring=str.substr(i,j-i+1);
            subs.insert(substring);
        }
    }
    
    cout << subs.size();
    

    return 0;
}