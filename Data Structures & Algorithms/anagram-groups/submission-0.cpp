class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for(string s: strs){
            string key = s; //key = "eat"
            sort(key.begin(), key.end()); //key ="aet"
            //need to group "eat" under "aet"
            groups[key].push_back(s);
        }
        vector<vector<string>> ans;
        //pair.first is key, pair.second is value
        //iterate through key,value pairs in groups and push each value in ans
        for(auto pair: groups){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
