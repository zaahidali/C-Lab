#include<iostream>
using namespace std;
int main(){
	/*  Transpose of 2 matrices  */
	
	int tran[2][2],a[2][2],b[2][2],i,j;
	
	
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
		
		tran[j][i]=a[i][j];
	cout<<endl<<"Transpose of 2 matrices are "<<endl;
		for(i=0; i<2; i++)
	for(j=0; j<2; j++){
	
	cout<<tran[i][j]<<" ";

	if(j==1)
	 cout<<endl;}
	
	return 0;
	
}
	
	
	
	

