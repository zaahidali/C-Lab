#include <iostream>
#include <cstdlib>
using namespace std;
const int SIZE = 10;
int queue[SIZE];
int rear = 0, front = 0;

void enQueueRear(int value)
{   
     char ch;
     if(front == SIZE)
      {
            cout<<"\nQueue is full!!! Insertion is not possible!!! ";
            return;
      }
      do
      {
            cout<<"\nEnter the value to be inserted:";
            scanf("%d",&value);
            queue[front] = value;
            front++;
            cout<<"Do you want to continue insertion Y/N";
            cin>>ch;
      }while(ch=='y');
}

void enQueueFront(int value)
{   
     char ch;
     if(front==SIZE)
      {
            cout<<"\nQueue is full!!! Insertion is not possible!!!";
            return;
      }
      do
      {
            cout<<"\nEnter the value to be inserted : ";
            cin>>value;
            rear--;
            queue[rear] = value;
            cout<<"Do you want to continue insertion Y/N : ";
            cin>>ch;
      }
      while(ch == 'y');
}
int deQueueRear()
{
     int deleted;
     if(front == rear)
     {
            cout<<"\nQueue is Empty!!! Deletion is not possible!!!";
            return 0;
     }
     deleted = queue[front];
	 front--;
     
     return deleted;
}
int deQueueFront()
{
     int deleted;
     if(front == rear)
     {
            cout<<"\nQueue is Empty!!! Deletion is not possible!!!";
            return 0;
     }
     deleted = queue[rear];
	 rear++;
     
     return deleted;
}

void display()
{
     int i;
     if(front == rear)
        cout<<"\nQueue is Empty!!! Deletion is not possible!!!";
     else{
        cout<<"\nThe Queue elements are:";
        for(i=rear; i < front; i++)
        {
           cout<<queue[i]<<" ";
        }
     }
}

int main(int argc, char** argv)
{
	char ch;
    int choice1, choice2, value;
    cout<<"\n******* Type of Double Ended Queue *******\n";
     do
     {
          cout<<"\n1.Input-restricted deque \n";
          cout<<"2.output-restricted deque \n";
          cout<<"\nEnter your choice of Queue Type : ";
          cin>>choice1;
          switch(choice1)
          {
               case 1: 
                    cout<<"\nSelect the Operation\n";
                    cout<<"1.Insert\n2.Delete from Rear\n3.Delete from Front\n4. Display";
                    do
                    {
                       cout<<"\nEnter your choice for the operation in deque: ";
                       cin>>choice2;
                       switch(choice2)
                       {   
                          case 1: enQueueRear(value);
                                  display();
                       		  	  break;
                       	  case 2: value = deQueueRear();
                       		      cout<<"\nThe value deleted is "<<value;
                                  display();
                       		  	  break;
                          case 3: value=deQueueFront();
                       	          cout<<"\nThe value deleted is "<<value;
                                  display();
                       	          break;
                          case 4: display();
                                  break;
                          default:cout<<"Wrong choice";
                       }
                       cout<<"\nDo you want to perform another operation (Y/N): ";
                       cin>>ch;
                    }while(ch=='y'||ch=='Y');
                    break; 
     
               case 2 :
                   cout<<"\n---- Select the Operation ----\n";
                   cout<<"1. Insert at Rear\n2. Insert at Front\n3. Delete\n4. Display";
                   do
                   {
                      cout<<"\nEnter your choice for the operation: ";
                      cin>>choice2;
                      switch(choice2)
                      {   
                         case 1: enQueueRear(value);
                                 display();
                                 break;
                         case 2: enQueueFront(value);
                                 display();
                                 break;
                         case 3: value = deQueueFront();
                                 cout<<"\nThe value deleted is"<<value; 
                                 display();
                                 break;
                         case 4: display();
                                 break;
                         default:cout<<"Wrong choice";
                       }
                       cout<<"\nDo you want to perform another operation (Y/N): ";
                       cin>>ch;
                    } while(ch=='y'||ch=='Y');
                    system("pause");
                    break ;
            }
            cout<<"\nDo you want to continue(y/n):";
            cin>>ch;
      }while(ch=='y'||ch=='Y');
      
	return 0;
}
