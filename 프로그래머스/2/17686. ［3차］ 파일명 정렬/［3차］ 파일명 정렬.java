import java.util.*;

class Solution {
    public String[] solution(String[] files) {
        String[] answer = new String[files.length];
    
        String[] head= new String[files.length];
        String[] number=new String[files.length];
         
        for(int i=0;i<files.length;i++){
            String str=files[i];
            int numStart=0;
            int numEnd=0;
            
            //head 채우기
            for(int j=0;j<str.length();j++){
                if(!Character.isDigit(str.charAt(j))){
                    head[i]+=str.charAt(j);
                }
                else{
                    numStart=j;
                    numEnd=j;
                    break;
                }
            }
            
            //number 채우기
            while(numEnd<str.length() && 
                  Character.isDigit(str.charAt(numEnd))){
                numEnd++;
            }
            number[i]=str.substring(numStart, numEnd);
            
            
        }
        
        //head 사전순(대소문자 비교x)
        //head가 같으면 number순
        //head랑 number 가 같으면 원래 입력 순서대로
        //인덱스 기준으로 비교하자
        Integer [] indices= new Integer[files.length];
        for(int i=0;i<files.length;i++){
            indices[i]=i;
        }
        
        Arrays.sort(indices, (a, b) -> {
            // HEAD 비교
            int result = head[a].compareToIgnoreCase(head[b]);

            if (result != 0) {
                return result;
            }

            // HEAD가 같으면 NUMBER 비교
            return Integer.compare(
                Integer.parseInt(number[a]),
                Integer.parseInt(number[b])
            );
        });
        
        for(int i=0;i<files.length;i++){
            answer[i]=files[indices[i]];
        }
        
        return answer;
    }
}