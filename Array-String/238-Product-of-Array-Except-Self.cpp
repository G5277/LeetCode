class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int mul = 1;
        int flag = 0;

        for(int i = 0; i < size(nums); i++)
        {
            if(nums[i]==0)
            {
                flag++;
            }
            else
            {
                mul = mul*nums[i];
            }   
        }
        
        for(int i = 0; i < size(nums); i++)
        {
            if(flag == 0 )
            {
                nums[i] = mul / nums[i];
            }
            else if(flag == 1  && nums[i] == 0)
            {
                nums[i] = mul;
            }
            else if(flag > 0) 
            {
                nums[i] = 0;
            }
        }
        return nums;
        
    }
};