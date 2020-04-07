#include "iostream"
using namespace std;

int main ()
{
	int size,x=0;
	int *p, *p1;
	float *p2;
	
	cout<<"Total Entries: ";
	cin>>size;
	p= new int[size];
	cout<<"\nEnter Mid Marks: "<<endl;
	for (int i=1; i<=size; i++)
	{
		cin>>p[i];
		if(p[i]>30)
		{
			cout<<"Enter Number BeloW 30 !"<<endl;
			cin>>p[i];
		}
	}
	
	p1= new int[size];
	cout<<"\nEnter Final Marks: "<<endl;
	for (int i=1; i<=size; i++)
	{
		cin>>p1[i];
		if(p1[i]>70)
		{
			cout<<"Enter Number BeloW 70 !"<<endl;
			cin>>p1[i];
		}
	}
	
	p2= new float[size];
	cout<<"\tT.Marks:"<<"\tGPA:"<<"\t\tGrade:"<<"\t\tW&L:";
	for (int i=1; i<=size; i++)
	{
		p2[i]= p[i] + p1[i];
		cout<<endl<<"\t"<<p2[i];
		if(p2[i]>=87)
		{
			cout<<"\t\t4.00"<<"\t\tA+";
		}
		else if(p2[i]>=78)
		{
			cout<<"\t\t3.50"<<"\t\tA";
		}
		else if(p2[i]>=72)
		{
			cout<<"\t\t3.00"<<"\t\tB";
		}
		else if(p2[i]>=66)
		{
			cout<<"\t\t2.50"<<"\t\tC";
		}
		else if(p2[i]>=60)
		{
			cout<<"\t\t2.00"<<"\t\tD";
		}
		else
		{
			cout<<"\t\tFaild..Loser!"<<"\t\tF";
		}
	    
	}
	
	return 0;
}

