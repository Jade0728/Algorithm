import java.util.*;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int cnt=commands.length; // 몇번 검사해야하는지
        int[] answer = new int[commands.length]; //길이 명시해줘야함
        
        
        for(int i=0;i<cnt;i++){
            
            int start=commands[i][0];
            int end=commands[i][1];
            int index=commands[i][2];
            
            int temp[] = Arrays.copyOfRange(array, start-1, end);
            Arrays.sort(temp);
            answer[i]=temp[index-1];
            
        }
        return answer;
    }
}