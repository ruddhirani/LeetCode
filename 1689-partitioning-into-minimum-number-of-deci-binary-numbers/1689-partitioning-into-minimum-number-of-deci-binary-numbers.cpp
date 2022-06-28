#include<string>
class Solution {
public:
    int minPartitions(string n) {
        int s=n.size();
        int mx=(int)(n.at(0)-'0');
        int i=1;
        while(i<s){
            mx=max(mx,(int)(n.at(i)-'0'));
            i++;
        }
        return mx;
    }
};