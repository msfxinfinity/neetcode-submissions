class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string encoded;
        for (string& s: strs){
            encoded += to_string(s.size()) + ':' + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i=0;
        while (i<s.size()){
            int colon = s.find(':', i);
            // npos -> no position found
            if (colon == string::npos) break;
            // stoi -> string to integer
            int len = stoi(s.substr(i, colon-i));
            strs.push_back(s.substr(colon+1, len));
            i = colon + 1 + len;
        }
        return strs;
    }
};
