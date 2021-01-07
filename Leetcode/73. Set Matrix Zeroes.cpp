class Solution
{
public:
    //Use first row/column as dummy and make changes in it.
    //TC(n^2)
    //SC(1)

    void setZeroes(vector<vector<int>> &matrix)
    {
        int rsz = matrix.size();
        int csz = matrix[0].size();
        bool col = 1;

        //Checking if any zero is in first column

        for (int i = 0; i < rsz; i++)
            if (matrix[i][0] == 0)
                col = 0;

        for (int i = 0; i < rsz; i++)
        {
            for (int j = 1; j < csz; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }

        for (int i = rsz - 1; i >= 0; i--)
        {
            for (int j = csz - 1; j >= 1; j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
            //if first col has zero, then make every element in first col zero
            if (!col)
                matrix[i][0] = 0;
        }
    }
};