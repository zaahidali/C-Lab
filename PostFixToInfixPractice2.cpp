#include<iostream>	// @author Zaid_Aly
#include<string>
using namespace std;

int top = -1;
int const size = 20;
char Stack[size];
int oper1,oper2,res;

int Pop()
{
	int temp;
	if(top ==-1)
	{
		return -1;
	}
	else
	{
	temp = Stack[top];
	top--;
	return temp;	
	}	
}
void Push(int val)
{
	if (top==size-1)
	{
		cout<<"Size Full\n";
	}
	else
	{
		top++;
		Stack[top] = val;
	}
}
void PostFixCoverter(string Exp)
{
	int value,result;
	for(int i=0; i<Exp.length(); i++)
	{
		if(Exp[i]>='0' && Exp[i]<='9')
		{
			value = (int)(Exp[i] - 48);
 			Push(value);
		}
		else
		{
			oper1 = Pop();
			oper2 = Pop();
		
			switch(Exp[i])
		{
			case '+':
			result = oper2+oper1;
			break;
			case '-':
			result = oper2-oper1;
			break;
			case '*':
			result = oper2*oper1;
			break;
			case '/':
			result = oper2/oper1;
			break; 	
			
		}
			Push(result);
		}
	}
	cout<<"The Result in InFix are : "<<Pop();
}

int main(int argc, char** argv)
{
	string expression;
	cout<<"Enter the PostFix Expression\n";
	cin>>expression;
	
	PostFixCoverter(expression);
	return 0;
}


