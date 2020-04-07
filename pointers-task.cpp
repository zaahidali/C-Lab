#include <iostream>
#include <cstdlib>
using namespace std;


struct node
{
    int data;
    struct node *next;
};
 
node *head= NULL; 

int count()
{
    node *n;
    int c=0;
    n=head;
    while(n!=NULL)
    {
	    n=n->next;
	    c++;
    }
    return c;
}

void appendNode(int num)
{
    node *temp,*right;
    temp = new node;
    temp->data=num;
    if(head == NULL)
    {
    	temp->next = NULL;
    	head = temp;
    	
	}
	else
	{
		right=head;
    	while(right->next != NULL)
    		right=right->next;
    
		right->next =temp;
    	right=temp;
    	right->next=NULL;
	}
    
}
 
 
 
void addFirst( int num )
{
    node *temp;
    temp = new node;
    temp->data=num;
    if (head== NULL)
    {
	    head=temp;
	    head->next=NULL;
    }
    else
    {
	    temp->next=head;
	    head=temp;
    }
}

void addAfter(int num, int loc)
{
    int i;
    struct node *temp,*left,*right;
    right=head;
    for(i=1;i<loc;i++)
    {
	    left=right;
	    right=right->next;
    }
    temp = new node;
    temp->data=num;
    left->next=temp;
    left=temp;
    left->next=right;
    return;
}
 
 
 
 
int delNode(int num)
{
    node *temp, *prev;
    temp=head;
    while(temp!=NULL)
    {
	    if(temp->data==num)
	    {
	        if(temp==head)
	        {
		        head=temp->next;
		        delete temp;
		        return 1;
	        }
	        else
	        {
		        prev->next=temp->next;
		        delete temp;
		        return 1;
	        }
	    }
	    else
	    {
	        prev=temp;
	        temp= temp->next;
	    }
    }
    return 0;
}
 
 
void  displayList()
{
    node *r;
    r=head;
    if(r==NULL)
    {
    	return;
    }
    while(r!=NULL)
    {
	    
		cout<<"[ "<<r->data<<" ]"<<" -> ";
		
	    r=r->next;
    }
    printf("NULL\n");
}
 
 



int main(int argc, char** argv)
{
	int i,num;
    node *n;
    head=NULL;
    while(1)
    {
    	
	    cout<<"\n\t\t\t\tList Operations\n";
	    cout<<"\t\t\t\t=================\n";
	    cout<<"\t\t\t\t1.Add Node at Start\n";
	    cout<<"\t\t\t\t2.Append Node\n";
	    cout<<"\t\t\t\t3.Delete Node\n";
	    cout<<"\t\t\t\t4.Display List\n";
	    cout<<"\t\t\t\t5.Size of the List?\n";
	    cout<<"\t\t\t\t6.Clear Screen\n";
	    cout<<"\t\t\t\t7.Exit\n";
	    cout<<"\n\t\t\t\tEnter your choice : ";
	    cin>>i;
	    if(i<=0)
		{
	        cout<<"\n\t\tEnter only an Integer\n";
	        exit(0);
	    } 
		else 
		{
	        switch(i)
	        {
		        case 1: 
				         cout<<"\nEnter the number to insert : ";
		                 cin>>num;
		                 addFirst(num);
		                 break;
		        case 2: 
						cout<<"\nEnter the number to insert : ";
		                cin>>num;
		                appendNode(num);
		                break;
				
				    
						
		        case 3: 
						if(head==NULL)
		                	cout<<"\nList is Empty\n";
		                else
						{
			                cout<<"\nEnter the number to delete : ";
			                cin>>num;
			                if(delNode(num))
			                    cout<<"\n"<<num<<" deleted successfully \n";
			                else
			                    cout<<"\n"<<num<<" not found in the list\n";
		                }
		                break;
						    
						
		        case 4:  
						if(head==NULL)
		                {
		                	cout<<"\nList is Empty\n";
		                }
		                else
		                {
		                	cout<<"\nElement(s) in the list are : \n\n";
		                }
		                displayList();
		                cout<<"\n";
		                break;   
				case 5:
						cout<<"\nSize of the list is : "<<count()<<"\n";
		                break;
				case 6:
						system("cls");
						break;     
		        case 7:
						return 0;
		        default:    
						cout<<"\nInvalid option\n";
	        }
    	}	
    }
	return 0;
}
