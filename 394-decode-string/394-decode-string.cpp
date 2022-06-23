class Solution {
public:
    string decodeString(string s) {
       stack<string>st;
        string z="";
        for(int i=0;i<s.size();i++)
        {
            string q="";
            q+=s[i];
            if(s[i]!=']')
            st.push(q);
            else
            {
                string w="";
                while(st.top()!="[")
                {
                    w=st.top()+w;
                    st.pop();
                }
                st.pop();
                double k=0,c=0;
                while(st.size()!=0&&st.top()[0]-'0'>=0&&st.top()[0]-'0'<=9)
                {
                    k+=(st.top()[0]-'0')*pow(10,c);
                    c++;
                    st.pop();
                }
                string m="";
                while(k--)
                {
                    m+=w;
                }
                st.push(m);
            }
        }
        while(!st.empty())
            {
                z=st.top()+z;
                st.pop();
            }
        return z;
    }
};