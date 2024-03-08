// Given a string s which contains only lower alphabetic characters, check if it is possible to remove at most one character from this string in such a way that frequency of each distinct character becomes same in the string. Return true if it is possible to do else return false.

// Note: The driver code print 1 if the value returned is true, otherwise 0.

// Example 1:

// Input:
// s = "xyyz"
// Output: 
// 1 
// Explanation: 
// Removing one 'y' will make frequency of each character to be 1.

//User function template for C++
class Solution{
public:	

    bool allSame(vector<int>& freq) {
        int curr = -1;
        for(auto it : freq) {
            if (it == 0) continue;
            else if (curr == -1) curr = it;
            else if (curr != it) return false;
        }
        
        return true;
    }
    
	bool sameFreq(string s)
	{
	    int n = s.length();
        vector<int> freq(26, 0);
        
        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }
    
        if(allSame(freq)) {
            return true;
        }
    
        for(int i = 0; i < freq.size(); i++) {
            if(freq[i] != 0) {
                freq[i]--;
                if(allSame(freq)){
                    return true;
                }
                freq[i]++;
            }
        }
        return false;
	}
};