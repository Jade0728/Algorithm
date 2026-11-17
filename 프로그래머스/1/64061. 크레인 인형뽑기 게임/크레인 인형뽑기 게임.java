import java.util.*;
import java.util.stream.*;
class Solution {
    public int solution(int[][] board, int[] moves) {
        int answer = 0;
        
        //각 열에서 가장 위에 있는 번호를 미리 뽑아놓는다.
        int m= moves.length;
        int n= board[0].length;
        
        int []topIndex=IntStream.range(0,n)
                                    .map(i ->
                                             IntStream.range(0,n)
                                              .filter(j-> board[j][i]!=0)
                                              .findFirst()
                                              .orElse(n))
                                    .toArray();
        //바구니 스택
        Stack<Integer> basket= new Stack<>();
        
        //게임 시작
        for(int i=0;i<m;i++){
            //크레인 위치
            int crane= moves[i]-1;
            
            //board에 인형이 아예 없다면 continue
            if(topIndex[crane]==n){
                continue;
            }
            
            int temp=board[topIndex[crane]][crane];
            
            //basket이 비어있다면 
            //basket에 추가, board에서 제거
            if(basket.isEmpty()){
                basket.push(temp);
            }
            else{
                //basket이 비어있지 않은 상태 -> 비교
                if(basket.peek()==temp){
                    //basket 제거, answer!
                    basket.pop();
                    answer+=2;
                }
                else{
                    //basket 추가
                    basket.push(temp);
                }
            }
            
            //board 에서 제거
            board[topIndex[crane]][crane]=0;
            
            //topIndex 변경
            if(topIndex[crane]<n){
                topIndex[crane]+=1;
            }
            
        }
        
        return answer;
    }
}