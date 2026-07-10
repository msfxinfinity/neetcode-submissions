class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod=1;
        vector<int> ans;
        int i=0;
        while(i<n){
            int left=1;
            for(int j=0; j<i; j++){
                left *= nums[j];
            }
            int right = 1;
            for(int j=i+1; j<n; j++){
                right *= nums[j];
            }
            ans.push_back(left*right);
            i++;
        }
        return ans;
    }
};
