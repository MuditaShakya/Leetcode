class Solution {
public:
    vector<string> findWords(vector<string>& w) {
        vector<string> r;
        for(int i=0;i<w.size();i++)
        {
            string s=w[i];
            
            int j=0; int ctr=0, c=0,ct=0;
            while(j<s.size())
            {
                if(s[j]=='q'||s[j]=='w'||s[j]=='e'||s[j]=='r'||s[j]=='t'||s[j]=='y'||s[j]=='u'||s[j]=='i'||s[j]=='o'||s[j]=='p'||s[j]=='Q'||s[j]=='W'||s[j]=='E'||s[j]=='R'||s[j]=='T'||s[j]=='Y'||s[j]=='U'||s[j]=='I'||s[j]=='O'||s[j]=='P')
                    c++;
                 if(s[j]=='a'||s[j]=='s'||s[j]=='d'||s[j]=='f'||s[j]=='g'||s[j]=='h'||s[j]=='j'||s[j]=='k'||s[j]=='l'||s[j]=='A'||s[j]=='S'||s[j]=='D'||s[j]=='F'||s[j]=='G'||s[j]=='H'||s[j]=='J'||s[j]=='K'||s[j]=='L')
                    ct++;
                 if(s[j]=='z'||s[j]=='x'||s[j]=='c'||s[j]=='v'||s[j]=='b'||s[j]=='n'||s[j]=='m'||s[j]=='Z'||s[j]=='X'||s[j]=='C'||s[j]=='V'||s[j]=='B'||s[j]=='N'||s[j]=='M')
                    ctr++;
                j++;
            }
            if(ctr==s.size()||c==s.size()||ct==s.size())
                r.push_back(s);
            
        } return r;
    }
};