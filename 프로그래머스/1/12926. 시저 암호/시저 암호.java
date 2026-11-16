class Solution {
    public String solution(String s, int n) {
        // s를 n 만큼 민 암호문을 만들어라.
        String answer = "";
        
        int len=s.length();
        char[] newstring= new char[len];
        
        for(int i=0;i<len;i++){
            char c=s.charAt(i); 
            
            //공백처리
            if(c==' '){
                newstring[i]=' ';
                continue;
            } 
            
            int a= c+n;
            
            //소, 대문자 검사
            if(Character.isUpperCase(c)){
                if( a > (int)('Z') ){
                    a=a-(int)('Z')+(int)('A') -1 ;
                }
            }
            else {
                if( a > (int)('z')){
                    a=a-(int)('z')+(int)('a') -1 ;
                }
            }    
            
            newstring[i]=(char)(a);
             
        }
        
        answer=new String(newstring);
        return answer;
    }
}