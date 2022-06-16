class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
       //vector<int>res;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(__builtin_popcount(arr[i])>__builtin_popcount(arr[j])){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
                if(__builtin_popcount(arr[i])==__builtin_popcount(arr[j])){
                    if(arr[i]>arr[j]){
                         int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    }
                }
            }
        }
        return arr;
    }
};