class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int num = size(flowerbed);
        if(n==0 || (num == 1 && flowerbed[0] == 0 && n == 1)){
            return true;
        }
        if((num == 1 && flowerbed[0] == 1) || (num == 1 && flowerbed[0] == 0 && n > 1))
        {
            return false;
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0)
        {
            flowerbed[0] = 1;
            n--;
        }

        for(int i=1;i<num - 1;i++)
        { 
            if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0)
            {
                n--;
                flowerbed[i] = 1;
            }
        }

        if(flowerbed[num-1] == 0 && flowerbed[num-2] == 0)
        {
            flowerbed[num-1] = 1;
            n--;
        }
        
        if(n <= 0)
        {
            return true;
        }

        return false;

    }
};