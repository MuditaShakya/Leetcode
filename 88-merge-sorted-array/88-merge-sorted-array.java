class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int o=m+n; int j=0;
        for(int i=m;i<o;i++)
        {
            nums1[i]=nums2[j];
            j++;
        }
        for(int i=0;i<o;i++)
        {
            for(int k=i+1;k<o;k++)
            {
                if(nums1[i]>nums1[k])
                {
                    int temp=nums1[i];
                    nums1[i]=nums1[k];
                    nums1[k]=temp;
                }
                
            }
        }
        
    }
}