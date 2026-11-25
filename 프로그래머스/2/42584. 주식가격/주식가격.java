import java.util.*;

class Solution {
    public int[] solution(int[] prices) {
        int[] answer =new int[prices.length];
        
        int length=prices.length;        
        answer[length-1]=0;
        
        for(int i=0;i<length-1;i++){
            int nowNum=prices[i];
            
            for(int j=i;j<prices.length-1;j++){
                if(nowNum<=prices[j]){
                    answer[i]++;
                }
                else{
                    break;
                }
            }
        }
        
        
        return answer;
    }
}