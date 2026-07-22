import java.util.HashMap;
import java.util.Map;

class Solution {
    public String solution(String[] participant, String[] completion) {
        // participant: 선수들의 이름이 담긴 배열
        // completion: 완주한 선수들의 이름이 담긴 배열
        // 완주하지 못한 선수의 이름을 return
        String answer = "";
        
        Map<String, Integer> countMap=new HashMap<>();

        for(String name :  participant){
            countMap.put(
                name,
                countMap.getOrDefault(name,0)+1
            );   
        }
        
        // 완주자 이름별 인원수 감소
        for (String name : completion) {
            countMap.put(
                name,
                countMap.get(name) - 1
            );
        }

        // 인원수가 남아 있는 선수가 완주하지 못한 선수
        for (String name : participant) {
            if (countMap.get(name) > 0) {
                answer=name;
            }
        }
        
        
        return answer;
    }
}