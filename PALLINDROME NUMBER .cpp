//Given an integer x, return true if x is a palindrome, and false otherwise.

 

class Solution {
public:

int reverse(int x) {
int revNum=0;
  while(x!=0){
 int digit =x%10;

if(revNum > INT_MAX /10 || 
revNum < INT_MIN/10){
 
return 0;
}
revNum=revNum*10+digit;
x=x/10;
}  
 return revNum;
        
    }


    
    bool isPalindrome(int x) {

        if(x<0) return 0;

        int revNum=reverse(x);
        return x==revNum;
    }
};
