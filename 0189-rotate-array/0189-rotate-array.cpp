class Solution {
public:
    void rotate(vector<int>& n, int k) {
        int m=n.size();
         int a[m];
        
        k=k%m;
    
       for(int i=0;i<m;i++)
        {
            a[i]=n[i];
        }
        reverse(a,0,m-k-1);
        reverse(a,m-k , m-1);
        reverse(a, 0, m-1);
           n.clear();
            for(int j=0;j<m;j++)
    {
        n.push_back(a[j]);
    }
        
    }
    void reverse(int a[], int low, int high)
    {
        while(low<high){
        int temp=a[low];
        a[low]=a[high];
        a[high]=temp;
        low++;
        high--;
        }
    
    }

};