class Solution {
    public boolean isPalindrome(int x) {
        int t=x; int sum=0;
        
        while(t>0)
        {
            int d=t%10;
            sum=sum*10+d;
            t=t/10;
        } 
        if(sum==x)
        return (true);
    else{ return (false);
        }
    }
}