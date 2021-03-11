class Solution {
public:
    
    //sliding window problem
    // two pointers:
    // 1 in the beginning and one keeps moving
    
    
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        int i=0;
        int j= 0;
        unordered_set<char> numbers;
        
        while (j < s.size()){
            if (!(numbers.find(s[j]) != numbers.end())){
                numbers.insert(s[j]);
                j++;
                maxi = max((int)numbers.size(),maxi); 
            } else {
                numbers.erase(s[i]);
                i++; // sliding window;
            }
            
        }
      return maxi;  
    }
};
