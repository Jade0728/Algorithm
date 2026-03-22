#include <iostream>
#include <vector>
#include <string>
using namespace std;

//예시: 186+1867
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     
    vector <int> first;
    vector <int> second;
    vector <int> ans;
    
    string num="";
    cin >> num; //186
    //first = {6,8,1}
    for(int i=num.length()-1; i>=0; i--){
        first.push_back(num[i] - '0');
    }
    
    num="";
    cin >> num; //1867
    //second = {7,6,8,1}
    for(int i=num.length()-1; i>=0; i--){
        second.push_back(num[i] - '0');
    }
    
    int max=first.size();
    if(max<second.size()){
        max=second.size();
    }
    
    ans.resize(max + 1, 0);
    //ans = {3,5,0,2}
    for(int i=0;i<max;i++){
        int a = (i < first.size()) ? first[i] : 0;
        int b = (i < second.size()) ? second[i] : 0;
        
        
        ans[i]+=a+b;
        
        if(ans[i]>=10){
            ans[i]=ans[i]-10;
            ans[i+1]++;
        }
         
    }
    
    if(ans.back() == 0){
        ans.pop_back();
    }
    
    //ans 뒤집기
    for(int i=ans.size()-1; i>=0; i--){
        cout << ans[i];
    }
    
    return 0;
}