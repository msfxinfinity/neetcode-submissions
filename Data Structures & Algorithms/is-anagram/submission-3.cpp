class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if (n!=m) return false;
        vector<int> arr(27,0);
        vector<int> arr1(27,0);
        for (int i=0; i<n; i++){
            int ascii = int(s[i])-97;
            arr[ascii] +=1;
            int ascii1 = int(t[i])-97;
            arr1[ascii1] += 1;
        }
        for (int j=0;j<26;j++){
            if (arr[j]!=arr1[j]) return false;
        }
        return true;
    }
};
