/* author Zaid Ali */
#include<iostream>
void Addition();
void Transpose();
void Multiplication();
void addDiagonals();

using namespace std;
int main()
{
	int choice;
	cout<<"\t********************  Matrix  ************************\n";
	cout<<"\n\tSelect any option :\n";
	cout<<"\t1:) Press 1 for Matrix Addition\n";
	cout<<"\t2:) Press 2 for Matrix Transpose\n";
	cout<<"\t3:) Press 3 for Matrix Multiplication\n";
	cout<<"\t4:) Press 4 for Addition of left + right Diagonals\n";
	
	cout<<"\n\n\t\tChoose : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			Addition();
			break;
		case 2:
			Transpose();
			break;
		case 3:
			Multiplication();
			break;
		case 4:
			addDiagonals();
			break;
		default:
		cout<<"Please select option b/w 1 to 4\n";				
	}
				
}

	void Addition()
	{
		
	int row1,col1;
	cout<<"\n\n****************** Matrix Addition ******************\n";
	cout<<"Enter the no of row1s for Matrix 1 : ";
	cin>>row1;
	cout<<"Enter the no of col1umnn for Matrix 1 : ";
	cin>>col1;
	int matrix1[row1][col1];
	int sum[10][10];
		
	int row12,col12;	
	cout<<"\nEnter No of row1s of matrix 2 : ";
	cin>>row12;
	cout<<"Enter No of col1umn of matrix 2 : ";
	cin>>col12;
	int matrix2[10][10];
	while(row1!=row12 && col1!=col12)
	{
		cout<<"\nWarning!! Matrix Addition not possible";
		cout<<"\nThe Matrix should be square Matrix\n";
		cout<<"\nPlease Enter again the values  \n";
		cout<<"Enter the no of row1s for Matrix 1 : ";
		cin>>row1;
		cout<<"\nEnter the no of col1umnn for Matrix 1 : ";
		cin>>col1;
		cout<<"\nEnter No of row1s of matrix 2 :";
		cin>>row12;
		cout<<"\nEnter No of col1umn of matrix 2 :";
		cin>>col12;	
	}				
	cout<<"\nEnter values for matrix 1 : "<<endl;
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				cout<<"a["<<i<<"]["<<j<<"]"<<": ";
				cin>>matrix1[i][j];
			}
		}
		cout<<"\nThe matrix is : "<<endl;
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				cout<<matrix1[i][j]<<" ";
			}
			cout<<endl;
		}

				
	cout<<"\nEnter values for matrix 2 : "<<endl;
			for(int i=0; i<row12; i++)
			{
				for(int j=0; j<col12; j++)
				{
				cout<<"a["<<i<<"]["<<j<<"]"<<": ";					
					cin>>matrix2[i][j];
				}
			}
	cout<<"\nThe 2nd matrix are : "<<endl;		
		for(int i=0; i<row12; i++)
			{
				for(int j=0; j<col12; j++)
				{
					cout<<matrix2[i][j]<<" ";
				}
				cout<<endl;
			}	

		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
			sum[i][j] = matrix1[i][j]+matrix2[i][j];	
			}
				
		}
	cout<<"\nThe Sum of 2 Matrices are \n";
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
			cout<<sum[i][j]<<"\t";	
			}
			cout<<endl;				
		}
	}
	
	
	void Transpose()
	{
		
	cout<<"\n\n****************** Matrix Transpose ******************\n";
	int row1,col1;
	cout<<"Enter the no of Rows : ";
	cin>>row1;
	cout<<"\nEnter the no of Column : ";
	cin>>col1;
	int matrix1[row1][col1];
	int matrixTrans[10][10];			
	
	cout<<"\nEnter values for matrix : "<<endl;
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				cout<<"a["<<i<<"]["<<j<<"]"<<": ";
				cin>>matrix1[i][j];
			}
		}
		cout<<"\nThe matrix Before Transpose is : "<<endl;
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				cout<<matrix1[i][j]<<" ";
			}
			cout<<endl;
		}

		for(int i=0; i<row1; i++)
			{
				for(int j=0; j<col1; j++)
				{
					matrixTrans[j][i] = matrix1[i][j];
					
				}
			}

	cout<<"\nThe matrix After Transpose is : "<<endl;			
		for(int i=0; i<col1; i++)
			{
				for(int j=0; j<row1; j++)
				{
					cout<<matrixTrans[i][j]<<" ";			
				}
				cout<<endl;				
			}		
	}
	
	void Multiplication()
	{
	cout<<"\n\n****************** Matrix Multiplication ******************\n";		
	int row1,col1;
	int sum = 0;	
	int row2,col2;	
	int matrix1[10][10];
	int matrix2[10][10];			
	int xing[10][10];
	
	cout<<"Enter the no of Rows for Matrix 1: ";
	cin>>row1;
	cout<<"\nEnter the no of Columns for Matrix 1 : ";
	cin>>col1;

	
	cout<<"\nEnter No of Rows for Matrix 2 : ";
	cin>>row2;
	cout<<"\nEnter No of Columns of Matrix 2 :";
	cin>>col2;
	
				
	while(col1!=row2)
	{
		cout<<"\nWarning!! Matrix Multiplication is not possible";
		cout<<"\nThe Matrix 1 rows & Matrix 2 columns's size must be match \n";
		cout<<"\nPlease Enter again the values  \n";
		cout<<"Enter the no of Rows for Matrix 1: ";
		cin>>row1;
		cout<<"\nEnter the no of Columns for Matrix 1 : ";
		cin>>col1;			
		cout<<"\nEnter No of Rows for Matrix 2 : ";
		cin>>row2;
		cout<<"\nEnter No of Columns of Matrix 2 :";
		cin>>col2;
	}
	
	cout<<"\nEnter values for matrix 1 : "<<endl;
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				cout<<"a["<<i<<"]["<<j<<"]"<<": ";
				cin>>matrix1[i][j];
			}
		}
		cout<<"\nThe matrix is : "<<endl;
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				cout<<matrix1[i][j]<<" ";
			}
			cout<<endl;
		}

	cout<<"\nEnter values for matrix 2 : "<<endl;
			for(int i=0; i<row2; i++)
			{
				for(int j=0; j<col2; j++)
				{
				cout<<"a["<<i<<"]["<<j<<"]"<<": ";					
					cin>>matrix2[i][j];
				}
			}
	cout<<"\nThe 2nd matrix are : "<<endl;		
		for(int i=0; i<row2; i++)
			{
				for(int j=0; j<col2; j++)
				{
					cout<<matrix2[i][j]<<" ";
				}
				cout<<endl;
			}

		for(int i=0; i<row1; i++)
		{			
			for(int j=0; j<col2; j++)
			{	
				sum = 0;
				for(int k=0; k<col1; k++)
				{
	
				sum = sum + matrix1[i][k]*matrix2[k][j];	
				xing[i][j] = sum;
				}
			}
				
		}
	cout<<"\nThe Multiplication of 2 Matrices are \n";
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col2; j++)
			{
			cout<<xing[i][j]<<"\t";	
			}
			cout<<endl;				
		}
	}
	
	void addDiagonals()
	{
		
	cout<<"\n\n****************** Matrix Left + Right Diagonals ******************\n";		
	int row1,col1;
	cout<<"Enter the No of Rows : ";
	cin>>row1;
	cout<<"\nEnter the No of Column : ";
	cin>>col1;
	int matrix1[row1][col1];
	int sum[row1][col1];	
	
	cout<<"\nEnter values for matrix 1 : "<<endl;
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				cout<<"a["<<i<<"]["<<j<<"]"<<": ";
				cin>>matrix1[i][j];
			}
		}
		cout<<"\nThe matrix is : "<<endl;
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				cout<<matrix1[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"\nMatrix Left Diagnol are : \n";
		for(int i=0; i<row1; i++)
		{

				cout<<matrix1[i][i]<<" ";			
		}cout<<endl;
	

		cout<<"\nMatrix Right Diagnol are : \n";
		for(int i=0; i<row1; i++)
		{
				cout<<matrix1[i][row1-i-1]<<" ";		
		}
		
			
		cout<<"\n\nThe Sum of Left & Right diagonl are \n";
		for(int i=0; i<row1; i++)
		{
				sum[i][i] =	matrix1[i][i]+matrix1[i][row1-i-1];
				cout<<sum[i][i]<<" ";
			cout<<endl;
		}		
	}
