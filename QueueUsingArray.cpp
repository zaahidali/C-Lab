#include<iostream>	// @author Zaid Aly
using namespace std;	

int const size = 5;
int Queue[size];
int Front = -1;
int Rear = -1;


void EnQueue();		// for adding values to the Rear by R++
void DeQueue();		// for removing values from the Front by T++
bool isFull();		// to check if the Queue is Full
bool isEmpty();		// to check if the Queue is Empty
int FrontElement(); // for displaying First Element
int RearElement();	// for Displaying Rear Element
void Display();		// for Displaying result

int main()
{
	int choice;
	char ch;
	do
	{
	cout<<"\t\t############## Queue ##############\n";
	cout<<"\t\t1: En-Queue\n";
	cout<<"\t\t2: De-Queue\n";
	cout<<"\t\t3: isFull\n";
	cout<<"\t\t4: isEmpty\n";
	cout<<"\t\t5: Front\n";
	cout<<"\t\t6: Rear\n";
	cout<<"\t\t7: Display\n";
	
	cout<<"Select any option : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			EnQueue();
			break;

		case 2:
			DeQueue();
			break;
			
		case 3:
			if(isFull()==true)
			cout<<"\nQueue Full\n";
			else
			{
			cout<<"\nQueue is Empty\n";									
			}	
			break;			

		case 4:
			if(isEmpty()==true)
			cout<<"\nQueue is Empty\n";
			else
			{
			cout<<"\nQueue is Not Empty\n";									
			}
			break;
			
		case 5:
			
			if(isEmpty() == true)
			{
			cout<<"The Queue is Empty\n";
			}
			else
			{
			cout<<"\nThe Front Element is \n";
			cout<<FrontElement()<<endl;
			}
			break;			
		
		case 6:
			if(isEmpty() == true)
			{
			cout<<"The Queue is Empty\n";
			}
			else
			{					
			cout<<"\nThe Rear Element is \n";
			cout<<RearElement()<<endl;
			}
			break;			
		
		case 7:
			Display();
			break;
				
		default:
		cout<<"Invalid input\n";	
			
	}
	
		
	cout<<"Do u want to add more values (Y/N)\n";
	cin>>ch;	
	}while(ch=='Y'||ch=='y');	
}

// ############################################# EN-Queue ##############################################//
void EnQueue()
{
	int value;
	if(isFull()== true)
	{
		cout<<"\nQueue is Full you cannot add more Values \n";	
	}
	else
	{
	if(isEmpty() == true)
		{
			Front++;
		}
		cout<<"Enter the element to beQueued\n";
		cin>>value;
		Queue[++Rear] = value;
		Display();
	}
}
// #################################################################################################//

// ########################################## DE-QUEUE ##########################################//
void DeQueue()
{
	if(isEmpty()==true)
	{
		cout<<"\nQueue is Empty\n";
	}
	else if(Front==Rear)// to get back to the first location // it means u r on last location  // or u can write Front > Rear==> Underflow
	{
		Front = -1;
		Rear = -1;
	}
	else	// else move forward and delete the backward element
	{
		Front = Front+1;
	}
}
// ##################################################################################################//


// ############################################# is Full #########################################//
bool isFull()
{
	if(Rear == size-1)
	{
		return true;
	}
	else
	{
		return false;	
	}	
}
// ############################################# ######## #########################################//

// ############################################## is Empty #########################################//
bool isEmpty()
{
	if(Front== -1 && Rear== -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// ##################################################################################################//
 
// ################################################ Front Element #######################################//
int FrontElement()
{
		return Queue[Front];		
}
// ##################################################################################################//

// ################################################ Rear Element ########################################//
int RearElement()
{
		return Queue[Rear];	
}
// #############################################################################################//

// ################################################# Display ###################################//
void Display()
{
	if(isEmpty()==true)
	{
		
	}else
	{
		cout<<"\n##########################";
		cout<<"\nThe Element in the Queue are\n";
		for(int i=Front; i<=Rear; i++)	// from first to last  or from first to rear
		{
			cout<<Queue[i]<<" ";
		}
		cout<<"\n##########################\n";
	}
}
// #############################################################################################//

