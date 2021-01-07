class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {

        int sz = matrix.size();

        for (int row = 0; row < sz; row++)
            for (int col = 0; col < row; col++)
            {
                swap(matrix[row][col], matrix[col][row]);
            }

        for (int row = 0; row < sz; row++)
            for (int col = 0; col < sz / 2; col++)
            {
                swap(matrix[row][col], matrix[row][sz - col - 1]);
            }
    }
};