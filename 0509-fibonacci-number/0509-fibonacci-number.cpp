class Solution {
public:
    int fib(int n) { int f;
        if(n==0|| n==1) return n;
        else{
             f=fib(n-1)+fib(n-2); 
            return f;
            
        }
    }
};