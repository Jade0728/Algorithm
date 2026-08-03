class Solution {
    public String solution(String str1, String str2) {
        String answer = "";
        
        //문자열 str1,str2가 동일하다고 하여 str1길이 만큼 for문 실행
        for(int i=0; i<str1.length(); i++){
            /* 앞자리가 번갈아서 합쳐지는 것이므로 str1,str2각각 한자리씩 substring으로 잘라
              return하는 answer값에 바로 붙여서 출력 */
            answer = answer + str1.substring(i,i+1);
            answer = answer + str2.substring(i,i+1);
        }
        return answer;
    }
}