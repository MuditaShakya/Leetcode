class Solution {
public:
    bool isHappy(int n) { 
        if(n==1|| n==7) return true;
        if(n==2||n==3||n==4|| n==5||n==6||n==8||n==9) return false;
        int x=n;
         int val=calc(x);
        while(val>9)
        {
            val=calc(val);
        }
           if(val==1|| val==7) return true;
          else  
              
       return false;
    }
     int calc(int x){ 
            int sum=0;
            while(x!=0){
                int d=x%10;
                sum=sum+(d*d);
                x=x/10;
                
            }
             return sum;           
        }
};