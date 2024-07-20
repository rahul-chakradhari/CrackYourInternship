class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> matrix2(row, vector<int>(col));

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                matrix2[i][j] = matrix[i][j];
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {

                    for (int k = 0; k < col; k++)
                    {
                        matrix2[i][k] = 0;
                    }

                    for (int k = 0; k < row; k++)
                    {
                        matrix2[k][j] = 0;
                    }
                }
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                matrix[i][j] = matrix2[i][j];
            }
        }
    }
};
