#include <iostream>
#define N 5

int queue[N], front,rear = -1;
void insert()
{   
    int value;
    if(rear == N - 1)
    std::cout<<"QUEUE IS FULL / OVERFLOW \n";
    else
    {
        std::cout<<"ENTER A VALUE TO BE INSERTED IN QUEUE: ";
        std::cin>>value;
        if(front == -1)
        front = 0;
        rear++;
        queue[rear] = value;
    }    
}

void display()
{
    if(front == -1 || rear == -1)
        std::cout<<"NO ELEMENTS ARE PRESENT INSIDE THE QUEUE \n";
    else
    {
        std::cout<<"ELEMENTS OF QUEUE \n";
        for(int i = front; i<=rear; i++ )
        {
            std::cout<<queue[i]<<" ";
        }
        std::cout<<"\n";
    }
}

void Delete()
{
    if(front == -1 || front > rear )
        std::cout<<"QUEUE IS EMPTY / UNDERFLOW \n";
    else
    {
        std::cout<<"DELETED ELEMENT IS: "<<queue[front]<<"\n";
        front++;
    }
}

int main() 
{
   int choice;
   std::cout<<"---- QUEUE USING ARRAY ---- \n";
   std::cout<<"1) INSERT ELEMENT TO QUEUE\n";
   std::cout<<"2) DELETE ELEMENT FROM QUEUE\n";
   std::cout<<"3) DISPLAY ALL THE ELEMENTS OF QUEUE\n";
   std::cout<<"4) EXIT\n";
   while(choice!=4) 
   {
      std::cout<<"Enter your choice : \n";
      std::cin>>choice;
      switch (choice) 
      {
         case 1: insert();
         break;
         case 2: Delete();
         break;
         case 3: display();
         break;
         case 4: std::cout<<"Exit\n";
         break;
         default: std::cout<<"Invalid choice\n";
      }
   }
}