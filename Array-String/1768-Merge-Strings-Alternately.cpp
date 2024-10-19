class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int x = size(word1);
        int y = size(word2);
        string z;
        int i = 0;
        int j = 0;
        int k = 0;

        while(x != 0 && y != 0)
        {
            z.push_back(word1[i++]);
            z.push_back(word2[j++]);
            x--;
            y--;
        }
        while(x!=0)
        {
            z.push_back(word1[i++]);
            x--;
        }
        while(y!=0)
        {
            z.push_back(word2[j++]);
            y--;
        }
        cout<<z;

        return z;
    }
};