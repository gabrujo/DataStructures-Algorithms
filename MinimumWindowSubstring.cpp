class Solution {
public:
    string minWindow(string s, string t) {
        int left = 0; //pointer
        int right = 0; // pointer
        int counter = 0;
        int check = INT_MAX;
        string result;
        
        
        unordered_map <char, int> required; //characters of t
        unordered_map <char, int> windowMapping;
        
        unordered_set<string> minimum;
        
        for (char &ch:t)
            required[ch]++;
        
        while (right < s.size()){
            
            char ch1=s[right];
            
            if(required.find(ch1) != required.end()){
                windowMapping[ch1]++;
                if (windowMapping[ch1]<=required[ch1]){
                    counter++;
                }  
            }
            if (counter>=t.size()){
                while (required.find(s[left])==required.end() || windowMapping[s[left]]>required[s[left]]){
                    windowMapping[s[left]]--;
                    left++;
                    
                }
                if (right-left+1 < check){
                    check = right-left+1;
                    result = s.substr(left, check);
                }
            }
            
                        
            right++;
        }
        
       return result; 
    }
};
