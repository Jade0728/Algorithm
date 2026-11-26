import java.util.*;

class Solution {
    public int solution(int[] people, int limit) {
        int answer = 0;
        // 한 번에 최대 2명
        // 무게제한 존재
        // 필요한 구명보트 개수의 최솟값을 리턴
        
        Arrays.sort(people); //[50.50.70.80]
        
        int length=people.length;
        boolean[] haveBoat=new boolean[people.length];
        
        for(int i=length-1; i>=0; i--){
            if(haveBoat[i]){
                continue;
            }
            
            haveBoat[i]=true;
            answer++;
            
            if(i==0){
                continue;
            }
            
            for(int j=0;j<i;j++){
                if(!haveBoat[j]){
                    if(people[j]+people[i]>limit){
                        break;
                    }
                    else{
                        haveBoat[j]=true;
                        break;
                    }
                }
            }
             
        }
        
        
        return answer;
    }
}