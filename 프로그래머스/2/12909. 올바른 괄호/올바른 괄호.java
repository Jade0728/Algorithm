import java.util.*;

class Solution {
    boolean solution(String s) {
        boolean answer = true;
        
        Deque<Character> stack= new ArrayDeque<>();
        
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='('){
                stack.push(s.charAt(i));
            }
            else{
                if(stack.isEmpty()){
                    answer=false;
                    break;
                }
                stack.pop();
            }
        }
        if(!stack.isEmpty()){
            answer=false;
        }

        return answer;
    }
}