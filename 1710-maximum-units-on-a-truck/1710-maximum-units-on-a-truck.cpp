class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int num_boxes_containing_i_units[1001] = {};
        int max_units = 1;
        for (auto & boxes_units : boxTypes) {
            max_units = max(max_units, boxes_units[1]);
            num_boxes_containing_i_units[boxes_units[1]] += boxes_units[0];
        }
        int answer = 0;
        for (int i = max_units; i >= 1 && truckSize > 0; --i) {
            int num_boxes_i = num_boxes_containing_i_units[i];
            answer    += min(truckSize, num_boxes_i) * i;
            truckSize -= num_boxes_i;
        }
        return answer; 
    }
};