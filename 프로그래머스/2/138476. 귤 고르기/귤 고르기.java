import java.util.*;
class Solution {
    public int solution(int k, int[] tangerine) {
        int answer = 0;
        
        Map<Integer, Integer> countmap = new HashMap<>(); 
        
        //귤 크기별 개수 구하기
        for(int size : tangerine){
            countmap.put(size, countmap.getOrDefault(size, 0)+1);
        }
        
        //크기별 개수를 내림차순으로 정렬
        List<Integer> counts=new ArrayList<>(countmap.values());
        counts.sort(Collections.reverseOrder());
        
        // 개수가 많은 종류부터 선택
        int selected=0;
        
        for(int count: counts){
            selected +=count;
            answer++;
            
            if(selected >=k){
                break;
            }
        }
        
        
        return answer;
    }
}