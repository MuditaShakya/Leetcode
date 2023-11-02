class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        int i=0;
        while(i<n)
        {
            string a=words[i];
             
            reverse(a.begin(), a.end());
       
        if(words[i]==a){
          return a;
            break;}
            i++;
        } return "";
    }
   
};
