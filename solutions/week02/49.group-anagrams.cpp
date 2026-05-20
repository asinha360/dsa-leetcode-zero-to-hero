class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::unordered_map<std::string, std::vector<std::string>> map;
        std::vector<std::vector<std::string>> result;
        
        for (const string& x: strs){

            std::string x_cpy = x;
            std::sort(x_cpy.begin(), x_cpy.end());

            map[x_cpy].push_back(x);
        }
        
        for (const auto& [key, value]: map){
            result.push_back(value);
        }

        return result;

    }
};