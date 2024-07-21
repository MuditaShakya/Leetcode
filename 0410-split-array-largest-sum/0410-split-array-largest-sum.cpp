class Solution {
public:
    int splitArray(vector<int>& a, int m) {
      int low=*max_element(a.begin(), a.end());
   int sum=0;
  int n=a.size();
   for(int i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
   int high=sum;

   while (low <= high) {
       int mid=(low+high)/2;
      int cal=func( a, mid);
if(cal<=m)
high=mid-1;

else low=mid+1;
   }
   return low;
  
    }
    
    int func(vector<int>& a, int pages)
{
   int stu=1,  pagesStu=0;  
   for(int i=0; i<a.size(); i++)
   {
     if(a[i]+ pagesStu <=pages)
       pagesStu+=a[i];
     else {
       stu++;
       pagesStu = a[i];
     }
   }
   return stu;
}
};