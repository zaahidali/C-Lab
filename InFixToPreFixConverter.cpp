#include<iostream>		// author Zahid ALi
using namespace std;

int top=-1;
int  const size=20;
char stack[size];

bool isFull();		// to check if the Stack is Full
bool isEmpty();		// to check if the Stack is Empty
char push(char n);	// for pushing values to the Stack
char pop();			// for removing values
char peek();		// return the top value
bool isValidExpression(string e);	// to check if the expression
int priority(char c);		// for checking priority
bool isOperand(char c);	// if operator then return true
bool isOperator(char c);	// for checking operators only
string toPostfix(string s);		// infix to postfix converter
string Reverse(string original);	// to reverse array
string toPrefix(string s);		// to return result in prefix


int main()
{
	string exp;
	cout<<"Enter some expression: \n"<<endl;
	cin>>exp;
	if(isValidExpression(exp))
	{
		cout<<"PostFix : "<<toPostfix(exp)<<endl;
		cout<<"Prefix : "<<toPrefix(exp);
	}
	else
		cout<<"The expression is invalid"<<endl;
	
}


bool isFull()
{
	if(top==size-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isEmpty()
{
	if(top==-1)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
char push(char n)
{
	if(!isFull())
	{
		top++;
		stack[top]=n;
	}
		return n;
}

char pop()
{
	char v;
	if(!isEmpty())
	{
		v=stack[top];
		top--;
		return v;
	}
}


char peek()
{
	if(!isEmpty())
	{
		return stack[top];	
	}
}

bool isValidExpression(string e)
{
	for(int i=0; i<e.length(); i++)
	{
		if(e[i]=='(')
		{
			push('(');
		}
		
		else if(e[i]==')')
		{
			if(isEmpty())
			{
				return false;
			}
			else
			{
				pop();
			}
		}
	}
	
	if(isEmpty()) //if it is empty then return true
	{
		return true;
	}
	
	else
	{
		return false;
	}
}


int priority(char c)		// for checking priority
{
	switch(c)
	{
		case '(':
		return 0;
		break;
		
		case '*':
		case '/':
		return 2;
		break;
		
		case '+':
		case '-':
		return 1;
		break;	
	}

	
}
bool isOperand(char c)	// if operator then return true
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool isOperator(char c)		// if operand then true
{
	if(c=='*' || c=='/' || c=='+' || c=='-')
	{
		return true;
	}
	else
	{
		return false;
	}
}

string toPostfix(string s)
{	
	string postfix;	
	for(int i=0; i<s.length(); i++)
	{	
		if(s[i]=='(')
		{
			push(s[i]);
		}
		else if(s[i]==')')
		{
			while(peek()!='(')
			{
				postfix=postfix+pop();
			}
			pop();
		}
		else if(isOperand(s[i]))
		{
			postfix=postfix+s[i];
		}
		else if(isOperator(s[i]))
		{
			if(!isEmpty())
			{
				if(priority(s[i]) > priority(peek()))
				{
					push(s[i]);
				}		
				else
				{
					while(priority(s[i]) <= priority(peek()))
					{
						postfix=postfix+pop();
					}
					push(s[i]);
				}
			}
			else
			{
				push(s[i]); 
			}
		}
	}

	while(!isEmpty())
	{
		postfix=postfix+pop();
	}
	
	return postfix; 
}



string Reverse(string orig)		// for reversing string
{
	for(int i=0; i<orig.length(); i++)
	{
		push(orig[i]);
	}
	
	string reverse;
	for(int i=0; i<orig.length(); i++)
	{
		reverse=reverse+pop();
	}
	
	return reverse;
}


string toPrefix(string s)
{
	string prefix;
	s=Reverse(s);
	
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='(')
		{
			s[i]=')';
		}
		
		else if(s[i]==')')
		{
			s[i]='(';
		}
	} 
	
	prefix=toPostfix(s);
	prefix=Reverse(prefix);
	return prefix;
}

