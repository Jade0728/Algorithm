import java.util.*;

class Solution {
    public int solution(int[] nums) {
        int answer = 0;
        HashSet<Integer> mons=new HashSet<>();
        for(int num : nums)
            mons.add(num);
        
        
        //n 마리 중에 n/2 마리 뽑는 방법
        int lengths=mons.size();
        int halfN=(nums.length)/2;
    
        answer=Math.min(lengths, halfN); 
        
        
        
        return answer;
    }}
