class Solution {
    public void moveZeroes(int[] a) {
        int l=a.length; int t=0;
        for(int i=0; i<l;i++)
        { if(a[i]!=0)
        {
            a[t]=a[i]; t++; 
        }
        }
         for(int i=t;i<l;i++)
         {
             a[i]=0;
         }
        
        
            
                
            }
    
}

