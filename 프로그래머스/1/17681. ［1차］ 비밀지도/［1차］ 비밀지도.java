class Solution {
    public String[] solution(int n, int[] arr1, int[] arr2) {
        String[] answer = new String[n];
        int [] biarr= new int[n];
        
        //이진수 OR 계산 
        for(int i=0;i<n;i++){
            biarr[i]=(arr1[i])|(arr2[i]);  
        } 
        
        //2진수로 변환(int -> String)
        String[] starr=new String[n];
        for(int i=0;i<n;i++){
            // 2진수로 변환
            String temp=Integer.toBinaryString(biarr[i]); 
            
            //자릿수 맞추기
            starr[i] = String.format("%" + n + "s", temp).replace(' ', '0'); 
            
        }
        
        
        for(int i=0;i<n;i++){ 
            answer[i]="";
            for(int j=0;j<n;j++){
                if(starr[i].charAt(j)=='1'){
                    answer[i]+="#";
                }
                else{
                    answer[i]+=" ";
                }
            } 
        }
         
        
        //출력형태로 바꾸기
        return answer;
    }
}