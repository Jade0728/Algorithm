#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    string str;
    
    
    while(true){
        
        getline(cin, str);
        
        stack<char> st;
        bool flag=true;
        
        if(str=="."){
            break;
        }
        
        for(int i=0; i<str.length(); i++){
            
            if(str[i] =='(' || str[i] == '['){
                st.push(str[i]);
            }
            else if(str[i]==')'){
                if(!st.empty() && st.top()=='(' ){
                    st.pop();
                }
                else{
                    flag=false;
                    break;
                }
            }
            else if(str[i]==']'){
                if(!st.empty() && st.top()=='[' ){
                    st.pop();
                }
                else{
                    flag=false;
                    break;
                }
            }
            
        }
        
         if(flag&& st.empty()){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }
        
    }

    return 0;
}