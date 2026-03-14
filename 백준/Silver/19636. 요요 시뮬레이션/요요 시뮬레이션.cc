
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

//L 고려
void consider(int iW, int D, int iL, int A, int I, int T, int W){
    
     int resW=iW;
     int L=iL;
     int change;
     
     for(int i=0;i<D;i++){
         
         int outEnergy=L+A; 
         change=I-outEnergy;
     
         // 일일 기초 대사량 변화
         if(abs(change) > T){
             L += (change >= 0 ? change / 2 : (change-1) / 2);
         }
         
         //체중 변화
         resW+=(change);
         
     
     }
     
     if(resW<=0||L<=0){
         cout <<"Danger Diet"<<"\n";
     }
     else{
         if(iL>L){
             cout << resW << " " <<L<< " "<<"YOYO"<<"\n";
         }
         else {
             cout << resW << " " <<L<< " "<<"NO"<<"\n";
         }
     
     }
}


//L 고려X
int notConsider(int iW, int D, int iL, int A, int I){
    int W=iW;
    int outEnergy=iL+A; 
    int change=I-outEnergy;
    
    W+=(D)*(change);
    
    if(W<=0|| iL<=0){
        cout << "Danger Diet"<<"\n";
        return iW;
    }
    else{
        cout << W<< " " <<iL<<"\n";
        return W;
    
    }
    
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    
    //다이어트 이전 값
    int iW; //initial weight
    int iI;    int iL;  
    
    //다이어트 이후 값
    int I;    int A;
    int T;    int D;
    
    //입력
    cin >> iW >> iI >> T;
    iL=iI; //초기상태: 일일에너지섭취=일일기초대사
    
    //입력
    cin >> D >> I>> A;
    
    //첫번째 출력
    int W= notConsider(iW, D, iL, A, I);
    
    
    //두번째 출력
    consider(iW, D, iL, A, I, T, W);
    

    return 0;
}