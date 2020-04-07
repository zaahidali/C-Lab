#include<iostream>
using namespace std;
int main(){
	/*  Addition of diagnol in from on and off side a single matrix  */
	
	int sum,a[3][3],i,j,b;
		
	cout<<"Enter values for 1st matrix"<<endl;
	for(i=0; i<3; i++)
	for(j=0; j<3; j++){
		cin>>a[i][j];
	}
	

cout << endl << "display " << endl;
    for(i = 0; i < 3; i++)
        for(j = 0; j< 3; j++){
		 cout << " " << a[i][j];
            if(j ==3-1)
                cout << endl << endl;}
                
	for(i=0; i<3; i++)
	for(j=0; j<3; j++)
	 if(i==j)
	sum=sum+a[i][i];
	b = b + a[j][i - j - 1];
	cout<<endl<<"Sum of diagnol are "<<endl;
	cout<<sum<<" ";
	cout<<b;
}
/*	if(j==1)
	 cout<<endl;}
	 */	
	
	
	
	

