
	 
class Solution {
public:
    int guessNumber(int n) {
        int st = 1, end = n;
        while(st<=end){
            int guess_no = st+(end - st)/2;

            int val = guess(guess_no);
            if(val == 0){
                return guess_no;
            }
            else if(val == -1){
                end = guess_no - 1;
            }
            else{
                st = guess_no +1;
            }
        }
        return -1;
    }
};