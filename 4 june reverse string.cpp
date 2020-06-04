class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = s.size();
        // char t;
        for(int i=0;i<l/2;i++){
            swap(s[i],s[l-i-1]);
            // t = s[i];
            // s[i] = s[l-1-i];
            // s[l-1-i] = t;
        }
        return;            
    }
};
