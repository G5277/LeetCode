class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n = chars.size();
        vector<char> s;
        int count = 0;

        if(n == 1)
        {
            return n;
        }

        s.push_back(chars[0]);

        for(int i = 0; i < n; i++)
        {
            if(chars[i] == s.back())
            {
                count++;
            }
            else 
            {
                if(count > 1)
                {
                    cout<<3;
                    string st = to_string(count);
                    for (char c : st) 
                    {
                        s.push_back(c); 
                    }
                }
                s.push_back(chars[i]);
                count = 1;
            }

        }

        if(count!=1){
            string st = to_string(count);
                for (char c : st) 
                {
                    s.push_back(c); 
                }
        }
        chars.clear();
        chars = s;
        return size(s);
    }
};