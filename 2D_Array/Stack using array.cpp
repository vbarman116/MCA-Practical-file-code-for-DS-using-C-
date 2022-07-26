#include<iostream>
#define N 5
int stack[N], Top= -1;

void push(int value)
{
    if(Top>=N-1)
        std::cout<<"STACK IS FULL/OVERFLOW \n";
    else
    {
        Top++;
        stack[Top] = value;
    }
}

void pop()
{
    if(Top==-1)
        std::cout<<"STACK IS EMPTY/UNDERFLOW \n";
    else
    {
        std::cout<<"THE POPPPED ELEMENTS IS:- "<<stack[Top]<<"\n";
        Top--;
    }
}

void show()
{
    if(Top==-1)
        std::cout<<"STACK IS EMPTY \n";
    else
    {
        std::cout<<"STACK ELEMENTS ARE: \n";
        for(int i =Top; i>-1; i--)
            std::cout<<stack[i]<<" "<<std::endl;
    }
}

int main()
{
    int choice , value;
    std::cout<<"---- STACK USING ARRAY ---- \n";
    std::cout<<"1) PUSH IN STACK \n";
    std::cout<<"2) POP FROM STACK \n";
    std::cout<<"3) DISPLAY STACK \n";
    std::cout<<"4) EXIT \n";
    while(choice!=4)
        {   
        std::cout<<"\n";
        std::cout<<"ENTER YOUR CHOICE \n";
        std::cin>>choice;
        switch(choice)
        {
            case 1:
                    std::cout<<"ENTER VALUE TO BE PUSHED - ";
                    std::cin>>value;
                    std::cout<<"\n";
                    push(value);
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    show();
                    break;
            case 4:
                    exit;
                    break;
            default:
                std::cout<<"WRONG CHOICE PLEASE TRY AGAIN!!!!! \n";
        }
    }
}   