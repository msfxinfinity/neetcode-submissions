class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;
        int n = nums.size();
        int max = nums[0];
        int min = nums[0];
        for (int i=0; i<n; i++){
            if (nums[i]>max) max=nums[i];
            if (nums[i]<min) min=nums[i];
        }
        vector<int> hash(max-min+1, 0);
        for (int j=0;j<nums.size();j++){
            int index = nums[j]-min;
            hash[index]++;
            if (hash[index]>1){
                return true;
            }
        }
        return false;
    }
};