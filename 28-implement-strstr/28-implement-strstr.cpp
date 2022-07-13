class Solution {
public:
    int strStr(string h, string n) {
        int i=0,j=0;
        if(n.size()>h.size())
            return -1;
        while(i<h.size() && j<n.size())
        {
            if(h[i]==n[j])
            {
                int t=i;
                int k;
                for( k=0;k<n.size();k++)
                {
                    if(n[k]==h[t])
                    {
                        t++;
                    }
                    else
                    break;
                }
                if(k==n.size())
                    return i;
                else
                    i++;
            }
            else
                i++;
        }
        return -1;
    }
};