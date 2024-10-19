class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string reverseVowels(string s) {

        vector<int> l;
        for(int i = 0; i < size(s); i++)
        {
            if(isVowel(s[i]))
            {
                l.push_back(i);
            }       
        }
        char temp;
        int num = size(l);
        for(int i=0;i<size(l)/2;i++)
        {
            num--;
            temp = s[l[num]];
            s[l[num]] = s[l[i]];
            s[l[i]] = temp;                             
        }
        return s;
    }
};