#include <iostream>
#include <stdio.h>

using namespace std;

int kx, ky, sx, sy; //king의 x,y좌표, stone의 x,y 좌표 

void move(string input){
    if(input=="R"){
        if(kx+1==sx && ky==sy){
            if(kx+1<=8 && sx+1<=8){
                kx++; sx++;
            }
            
        }
        else{
            if(kx+1<=8){
                kx++;
            }
        }
        
    }
    else if(input=="L"){
       if(kx-1==sx && ky==sy){
            if(kx-1>=1 && sx-1>=1){
                kx--; sx--;
            }
            
        }
        else{
            if(kx-1>=1){
                kx--;
            }
        }
    }
    else if(input=="B"){
        if(ky-1==sy && kx==sx){
            if(ky-1>=1 && sy-1>=1){
                ky--; sy--;
            }
            
        }
        else{
            if(ky-1>=1){
                ky--;
            }
        }
    }
    else if(input=="T"){
        if(ky+1==sy && kx==sx){
            if(ky+1<=8 && sy+1<=8){
                ky++; sy++;
            }
            
        }
        else{
            if(ky+1<=8){
                ky++;
            }
        }
    }
    else if(input=="RT"){
        if(kx+1==sx && ky+1==sy){
            if(kx+1<=8&&sx+1<=8&&ky+1<=8 && sy+1<=8){
                ky++; sy++;
                kx++; sx++;
            }
            
        }
        else{
            if(kx+1<=8 && ky+1<=8){
                kx++; ky++;
            }
        }
    }
    else if(input=="LT"){
        if(kx-1==sx && ky+1==sy){
            if(kx-1>=1&&sx-1>=1&&ky+1<=8 && sy+1<=8){
                ky++; sy++;
                kx--; sx--;
            }
            
        }
        else{
            if(kx-1>=1 && ky+1<=8){
                kx--; ky++;
            }
        }
    }
    else if(input=="RB"){
        if(kx+1==sx && ky-1==sy){
            if(kx+1<=8&&sx+1<=8&&ky-1>=1 && sy-1>=1){
                ky--; sy--;
                kx++; sx++;
            }
            
        }
        else{
            if(kx+1<=8 && ky-1>=1){
                kx++; ky--;
            }
        }
    }
    else if(input=="LB"){
        if(kx-1==sx && ky-1==sy){
            if(kx-1>=1&&sx-1>=1&&ky-1>=1 && sy-1>=1){
                ky--; sy--;
                kx--; sx--;
            }
            
        }
        else{
            if(kx-1>=1 && ky-1>=1){
                kx--; ky--;
            }
        }
    }
    
    
}


int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    
    char king;
    cin >> king >> ky;
    kx = king - 'A' + 1;
    
    char stone;
    cin >> stone >> sy;
    sx = stone - 'A' + 1;
    
    int num;
    cin >> num;
    
    string input;
    
    for(int i=0 ; i<num;i++){
        cin >> input;
        move(input);
        
    }
    
    king=kx+'A'-1;
    stone=sx+'A'-1;
    
    cout <<king<<ky<<"\n";
    cout <<stone<<sy<<"\n";
    

    return 0;
}