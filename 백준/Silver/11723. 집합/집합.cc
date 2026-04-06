#include <iostream>

using namespace std;

int check(int x, int num){
    if(x & (1 << num)){
        return 1; //존재
    }
    else {
        return 0; //없음
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //몇번 할지
    int n;
    cin >>n;
    
    //입력
    int x=0;
    string input;
    int num;
    
    while(n--){
        cin >> input;
        if(input == "add"){
            cin >> num;
            if(!check(x, num)){
                x |= (1 << num);
            } 
            
        }
        else if(input == "remove"){
            cin >> num;
            if(check(x,num)){
                x &= ~(1 << num);
            }
            
        }
        else if(input == "toggle"){
            cin >> num;
            if(check(x,num)){
                x&=~(1<<num);
            }
            else{
                x|=(1<<num);
            }
            
        }
        else if(input == "all"){
            x=(1<<21)-1;
            
        }
        else if(input== "empty"){
            x=0;
            
        }
        else if(input =="check"){
            cin >> num;
            cout << check(x,num)<<"\n";
            
        }
        
    }
    
    

    return 0;
}