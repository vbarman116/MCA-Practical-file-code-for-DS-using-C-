#include <iostream>

int main()
{
    int r1,c1,r2,c2,r3,c3,r4,c4; 
    std::cout<<"Please INPUT size for Array A ROW = r1 and COLUMN = c1\n";
    std::cin>>r1>>c1;
    std::cout<<"Please INPUT size for Array B ROW = r2 and COLUMN = c2\n";
    std::cin>>r2>>c2;
    int array_A[r1][c1], array_B[r2][c2], resultant_array_ADD[r3][c3], resultant_array_MUL[r4][c4]= {0};
    std::cout<<"Please INPUT values for Array A \n";
    for(int i = 0; i<r1; i++)
    {
        for(int j = 0; j<c1; j++)
        {
            std::cin>>array_A[i][j];
        }
    }
    std::cout <<"This is Array A \n";
    for(int i = 0; i<r1; i++)
    {
        for(int j = 0; j<c1; j++)
        {
            std::cout << array_A[i][j] <<"\t";
        }
        std::cout <<std::endl;
    }

    std::cout<<"Please INPUT values for Array B \n";
    for(int i = 0; i<r2; i++)
    {
        for(int j = 0; j<c2; j++)
        {
            std::cin>>array_B[i][j];
        }
    }
    std::cout <<"This is Array B \n";
    for(int i = 0; i<r2; i++)
    {
        for(int j = 0; j<c2; j++)
        {
            std::cout << array_B[i][j] <<"\t";
        }
        std::cout <<std::endl;
    }

    if((r1 == r2) & (c1 == c2))
    {    
        std::cout <<"After performing Addition operation on this two 2d array, Array A + Array B = Resultant Array Add\n";
        std::cout <<"Resultant Array \n";
        for(int i = 0; i<r1; i++)
        {
            for(int j = 0; j<c2; j++)
            {
                resultant_array_ADD[i][j] = array_A[i][j] + array_B[i][j];
                std::cout << resultant_array_ADD[i][j] <<"\t";
            }
            std::cout <<std::endl;
        }
    }
    else
    {
        std::cout<<"the dimension of both array is not same so not addition operation will perform";
    }

    /* 
    for the multiplication we have to check one special condition which is the row of array A and column of array B 
    should be same or else multiplication logic will not work, according to mathematical formula
    */
    
    std::cout <<"After performing Multiplication operation on this two 2d array, Array A * Array B = Resultant Array Mul\n";
    std::cout <<"Resultant Array \n";
    if (c1 != r2) 
    {
        std::cout<<"Column of first matrix should be equal to row of second matrix";
    }
    else
    {
        for(int i = 0; i<r1  ; i++)
        {
            for(int j = 0; j<c2; j++)
            {
                for(int k = 0; k<c1; k++)
                {
                    resultant_array_MUL[i][j] += array_A[i][k] * array_B[k][j];
                }
                std::cout << resultant_array_MUL[i][j] <<"\t";
            }
            std::cout <<std::endl;
        }
    }
}