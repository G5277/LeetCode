class Solution {
public:
    bool increasingTriplet(vector<int>& nums)
    {
        int f = INT_MAX, s = INT_MAX;

        for(int num : nums)
        {
            if(num <=  f)
            {
                f = num;
            }
            else if(num <= s)
            {
                s = num;
            }
            else 
            {
                return true;
            }
            
        }
        return false;
    }
};