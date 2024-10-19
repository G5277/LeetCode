class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int m = *max_element(candies.begin(),candies.end());
        int n = size(candies);
        int nn = n;
        vector<bool> b;
        while(nn>0){
            if((candies[n - nn] + extraCandies) >= m)
            {
                b.push_back(true);
            }
            else{
                    b.push_back(false);
            }
            nn--;
        }
        return b;
    }
};