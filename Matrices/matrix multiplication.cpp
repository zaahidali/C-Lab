#include<iostream>
using namespace std;
int main(){
	
	// Multiplication of 2 matrices
	
	int a[3][3],b[3][2],ab[3][2],i,j,sum=0,k;
	
	cout<<"Enter values for 1st matrix "<<endl;
	for(i=0; i<3; i++)
	for(j=0; j<3; j++){
		cin>>a[i][j];
	}
	
	cout<<"Enter values for 2nd matrix "<<endl;
	for(i=0; i<3; i++)
	for(j=0; j<2; j++){
		cin>>b[i][j];
	}
	

	for(i=0; i<3; i++){
	
	for(j=0; j<2; j++)
	{
	sum=0;
	{
	for(k=0; k<3; k++)
	sum=sum+a[i][k]*b[k][j];}
	ab[i][j]=sum;}}
	cout<<"Their Multiplication are "<<endl;
	
	for(i=0; i<3; i++)
	{
	for(j=0; j<2; j++){
	
	cout<<ab[i][j]<<" ";
}
	cout<<endl;}

}
	
		
