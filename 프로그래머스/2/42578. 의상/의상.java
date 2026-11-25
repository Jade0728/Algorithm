import java.util.*;

class Solution {
    public int solution(String[][] clothes) {
        int answer = 1;
        // 매일 다른 옷 조합
        // 각 종류별로 최대 1가지 의상만 착용 가능
        // 하루에 최소 1개 이상의 의상

        Map<String, Integer> closet= new HashMap<>();
        
        
        for(int i=0;i<clothes.length;i++){
            String type=clothes[i][1];
            closet.put(type, closet.getOrDefault(type, 0)+1);
        }
        
        for(int count: closet.values()){
            answer*= (count+1);
        }
        
        answer-=1;
        
        
        
        
       
        
        
        
        return answer;
    }
}