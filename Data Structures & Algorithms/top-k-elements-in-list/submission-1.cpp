class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> res;
        for (int i : nums){
            freq[i]++;
        }
        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        for (auto& [element,frequency] : freq){
            bucket[frequency].push_back(element);
        }
        vector<int> result;
        for (int i=n; i>=0 && k>0; i--){
            for (int num: bucket[i]){
                res.push_back(num);
                k--;
            }
        }
        return res;
    }
};
