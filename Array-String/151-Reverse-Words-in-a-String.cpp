class Solution {
public:
    string reverseWords(string s) {

        string p,q;
        s.push_back('@');
        q.push_back('@');
        int i = 0,f=0;
        while(f==0)
        {
            while(s[i]!=' ')
            {
                if(s[i] == '@')
                {
                    f = 1;
                    break;
                }

                if(s[i]!=' '){p.push_back(s[i]);}
                s.erase(s.begin());
            }
            q = p.append(q);
            if(q[0] != '@' && q[0] != ' '){q.insert(q.begin(),' ');}
            s.erase(s.begin());
            p.clear();
        }

        q.erase(q.begin());
        q.erase(q.begin() + size(q) - 1);

        return q;
    }
};