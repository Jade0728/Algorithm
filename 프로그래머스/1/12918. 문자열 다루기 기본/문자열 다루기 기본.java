class Solution {
    public boolean solution(String s) {
        // 문자열 길이가 4 혹은 6
        // 숫자로만 구성되어있어야함
        boolean answer = true;
        
        // 문자열 길이
        if(s.length()==4 || s.length()==6){
            //숫자 판별
            for(int i=0;i<s.length();i++){
                char n= s.charAt(i);
                if(n -'0'<0 || n-'0'>9){
                    answer=false;
                    return answer;
                }
            }
        }
        else{
            answer=false;
            return answer;
        }
        
        
            
        return answer;
    }
}