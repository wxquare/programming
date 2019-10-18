class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int maxVal = 0;
        int chuck = 0;
        for(int i=0;i<n;i++){
            maxVal = max(maxVal,arr[i]);
            if(max == i){
                chuck++;
            }
        }
        return chuck;
    }
};