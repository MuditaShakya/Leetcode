class Solution { 
    public int maxSubArray(int[] a) {
        int csum=a[0];
        int osum=a[0];

        for(int i=1;i<a.length;i++)
        {  if(csum>0){
            csum+=a[i];
        }
         else {
             csum=a[i];
         }
        
        if(osum<csum)
            osum=csum;
        
        }
        return osum;
        
    }
}