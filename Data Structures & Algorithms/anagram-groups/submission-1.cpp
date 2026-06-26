class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string s: strs){
            vector<int> freq(26, 0);
            for(char c: s){
                freq[c - 'a']++; //at that index we will increment 0->1
            }
            string key = "";
            for(int x: freq){
                key += to_string(x) + "#";
            }
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto &[key,value]: mp){
            ans.push_back(value);
        }
        return ans;
    }
};
