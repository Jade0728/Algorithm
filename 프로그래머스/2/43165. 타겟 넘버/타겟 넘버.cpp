#include <string>
#include <vector>

using namespace std;

int answer=0;
void dfs_numbers(vector <int> numbers, int target, int sum, int index){
    //dfs 종료
    if(index==numbers.size()){
        if(sum==target){
            answer++;
        }
        return ;
    }
    
    
    dfs_numbers(numbers, target, sum-numbers[index], index+1);
    dfs_numbers(numbers, target, sum+numbers[index], index+1);
  
    
}

int solution(vector<int> numbers, int target) {
    
    dfs_numbers(numbers, target, 0, 0);
    
    return answer;
}