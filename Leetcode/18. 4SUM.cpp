class Solution
{
public:
    //TC O(N^3) extension of two sum and two pointers
    //SC O(1)
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {

        vector<vector<int>> res;
        if (nums.empty())
            return res; //empty vector

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int Newtarget = target - (nums[i] + nums[j]);
                int left = j + 1;
                int right = nums.size() - 1;

                while (left < right)
                {
                    vector<int> temp(4, 0);
                    if (nums[left] + nums[right] == Newtarget)
                    {
                        temp[0] = nums[i];
                        temp[1] = nums[j];
                        temp[2] = nums[left];
                        temp[3] = nums[right];
                        res.push_back(temp);
                        //skipping same left elements
                        while (left < right && nums[left] == temp[2])
                            left++;
                        //skipping same right elements
                        while (left < right && nums[right] == temp[3])
                            right--;
                    }
                    else
                    {
                        if (nums[left] + nums[right] < Newtarget)
                        {
                            left++;
                        }
                        else
                        {
                            right--;
                        }
                    }
                }
                //skipping same j elements
                while (j + 1 < nums.size() && nums[j + 1] == nums[j])
                    j++;
            }
            //skipping same i elements
            while (i + 1 < nums.size() && nums[i + 1] == nums[i])
                i++;
        }
        return res;
    }
};