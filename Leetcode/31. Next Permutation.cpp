class Solution
{
public:
        //TC O(n)
    //SC O(1)
    void nextPermutation(vector<int> &nums)
    {
        if (nums.size() <= 1)
            return;

        int i = nums.size() - 2;

        while (i >= 0 && nums[i] >= nums[i + 1])
        {
            i--;
        }

        if (i < 0)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        else
        {
            int j = nums.size() - 1;
            while (j >= i && nums[j] <= nums[i])
            {
                j--;
            }

            swap(nums[j], nums[i]);
            reverse(nums.begin() + i + 1, nums.end());
        }
    }
};