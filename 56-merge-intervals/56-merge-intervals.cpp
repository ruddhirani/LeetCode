class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergeIntervals;
        //if size 0 returning the empty
        if(intervals.size()==0)
            return mergeIntervals;
        
        //sorting all intervals
        sort(intervals.begin(),intervals.end());
        
        //taking a varaible and asigning it the first pair
        vector<int> tempIntervals=intervals[0];
        
        //traversing through all intervals 
        for(auto it:intervals){
            //in if we r checking and merging
            if(it[0]<=tempIntervals[1]){
                tempIntervals[1]=max(it[1],tempIntervals[1]);
            }
            
        //if not merging simply push the interval and reassign temp
            else{
                mergeIntervals.push_back(tempIntervals);
                tempIntervals=it;
            }
        }
        
        //pushing the last compared interval into final result
        mergeIntervals.push_back(tempIntervals);
        return mergeIntervals;
    }
};