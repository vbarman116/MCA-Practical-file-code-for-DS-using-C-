#include <iostream>
#define N 4

void Transpose_Array(int array_A[N][N])
{   
    int array_B[N][N];
    for(int i=0; i<N;i++)
    {   
        for(int j=0; j<N;j++)
        {
            array_B[i][j] = array_A[j][i];
        }
    }
    std::cout <<"This is Transpose of Array A \n";
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            std::cout << array_B[i][j] <<"\t";
        }
        std::cout <<std::endl;
    }
}

int main()
{   
    int array_A[N][N];
    std::cout<<"Please INPUT values for Array A \n";
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            std::cin>>array_A[i][j];
        }
    }
    std::cout <<"This is Array A \n";
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            std::cout << array_A[i][j] <<"\t";
        }
        std::cout <<std::endl;
    }
    Transpose_Array(array_A);
}