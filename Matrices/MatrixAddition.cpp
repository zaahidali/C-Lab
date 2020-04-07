#include<iostream>
using namespace std;
int main(){
	/*  Addition of 2 matrices  */
	
	int sum[2][2],a[2][2],b[2][2],i,j;
	
	
	cout<<"Enter values for 1st matrix"<<endl;
	for(i=0; i<2; i++)
	for(j=0; j<2; j++){
		cin>>a[i][j];
	}
	
	cout<<endl<<"Enter values for 2nd matrix"<<endl;
	for(i=0; i<2; i++)
	for(j=0; j<2; j++){
		cin>>b[i][j];
	}
	
	
	for(i=0; i<2; i++)
	for(j=0; j<2; j++)
		sum[i][j]=a[i][j]+b[i][j];
	cout<<endl<<"Sum of 2 matrices are "<<endl;
		for(i=0; i<2; i++)
	for(j=0; j<2; j++){
	
	cout<<sum[i][j]<<" ";

	if(j==1)
	 cout<<endl;}
	
	return 0;
	
}
	
	
	
	

