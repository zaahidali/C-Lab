#include<iostream>
using namespace std;
int main(){
	
	// Subtraction of 2 matrices
	
	int a[2][2],b[2][2],diff[2][2],i,j;
	
	cout<<"Enter values for 1st matrix "<<endl;
	for(i=0; i<2; i++)
	for(j=0; j<2; j++){
		cin>>a[i][j];
	}
	
	cout<<"Enter values for 2nd matrix "<<endl;
	for(i=0; i<2; i++)
	for(j=0; j<2; j++){
		cin>>b[i][j];
	}
	

	for(i=0; i<2; i++)
	for(j=0; j<2; j++)
	diff[i][j]=a[i][j]-b[i][j];
	cout<<"Their Difference are "<<endl;
	
	for(i=0; i<2; i++)
	for(j=0; j<2; j++){
	
	cout<<diff[i][j]<<" ";
	
	if(j==2-1)
	cout<<endl;}
	
	
	
	
	
	
	
	
	
	
	
}
