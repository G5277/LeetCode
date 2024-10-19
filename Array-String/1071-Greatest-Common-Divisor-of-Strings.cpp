class Solution {
public:
    string gcdOfStrings(string str1, string str2) {   
        if (str1 + str2 != str2 + str1) 
        {
            return ""; 
        }
    
        int temp = 0;
        int s1 = size(str1);
        int s2 = size(str2);
        int z = min(s1,s2);
        int y = max(s1,s2);
        if( y%z == 0 && str1.substr(0, z) == str2.substr(0, z))
        {
            temp = z;
        }
        for(int x = z;x>0;x--)
        {
            if(s1%x == 0 && s2%x == 0 && str1.substr(0, x) == str2.substr(0, x))
            {
               temp = x;
               break;
            }
        } 

        return str1.substr(0, temp);
    }
};