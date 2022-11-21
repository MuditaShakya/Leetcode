class Solution {
    public boolean isPalindrome(int x) {
        int n=x,s=0;
        while(n>0)
        {
            int d=n%10;
            s=s*10+d;
            n=n/10;
        }
    if(s==x)
        return true;
        else return false;
    }
}