#include<iostream>
using namespace std;
int main()
{
	int size,n, finalsize;
	cout<<"Enter size: "<<endl;
	cin>>size;
	int*mid = new int[size];
	int *tmpmid = mid;
	cout<<"Enter nos"<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>*tmpmid;
		tmpmid++;
	}	
	tmpmid = mid;
	cout<<"Do you want to add new elements: "<<endl;
	int choice;
	cin>>choice;
	if(choice==1)
	{
		cout<<"How many new elements: "<<endl;
		cin>>n;
		finalsize=size+n;
		int *newmid=new int[finalsize];
		int *tmpnewmid=newmid;
		for(int i=0; i<finalsize; i++)
		{
			if(i<size)
			{
				*tmpnewmid=*tmpmid;
				tmpnewmid++;
				tmpmid++;
			}
			else
			{
				cout<<"Enter no:"<<endl;
				cin>>*tmpnewmid;
				tmpnewmid++;
			}
		}
		tmpnewmid=newmid;		
		for(int i=0; i<finalsize; i++)
		{
			cout<<*tmpnewmid<<"   ";
			tmpnewmid++;
		}
		tmpnewmid=newmid;
}
}
