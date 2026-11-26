import java.util.*;

class Solution {
    public boolean solution(String[] phone_book) {
        boolean answer = true;
        //한 번호가 다른 번호의 접두어인가? -> true/false
        //ArryList 로 받고,
        //startsWith 하면 되지 않을까?
        
        Arrays.sort(phone_book); //사전식 정렬
        
        for(int i=0;i<phone_book.length-1;i++){
            String number=phone_book[i];
            if(phone_book[i+1].startsWith(number)){
                answer=false;
                return answer;
            }
        }
        return answer;
    }
}