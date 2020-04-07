#include<iostream>	// @author Zaid Aly
using namespace std;


// ##########################  Main Logic of the Code ########################## //
/*
==> Take data as a String
==> Read it Character by Character 
==> If the char is '(' then push it to the Stack
==> If the char is ')' then Pop until u get ')' 
==> If the char is Operand then just simply append it to another string/result
==>	for operator check if input character's priority > the element in the stack then push it the character to the stack
==> if the given input priority < the element in the Stack[top] then first Pop the element and then push it to the stack
==> Pop the remaining elements
*/

// ########################################## Global Declarations ############################################## //
int const size = 20;
char Stack [size];
int top = -1;
//################################### Function Prototypes ############################################## //
string inFixToPostFixConverter(string exp);
int Priority(char ch);
string infixToPrefix(string infix);
string Reverse(string s);
// ############################################## Methods ############################################## //
char Push(char value)
{
	
	if (top == size -1)
	{
		cout<<"Stack overflow\n";	
		return 0;
	}
	else
	{
		top++;
		Stack[top] = value;
	}
		return value;
}

char Pop()
{
	char temp = 0;
	if(top == -1)
	{
		cout<<"Stack is Empty\n";
		return temp;
		
	}
	else
	{
		temp = Stack[top];
		top--;
	}
	return temp;
}

// ############################################### Main ################################################## //
int main()
{
	string exp;
	cout<<"Enter the infix Expression\n";
	cin>>exp;
	
	string s = infixToPrefix(exp);
	cout<<"The Result in Pre-Fix are \n"<<s;	
}

string Reverse(string infix)
{
	string reverse;
	for(int i=0; i<infix.length(); i++)
	{
		Push(infix[i]);
	}
	for(int i=0; i<infix.length(); i++)
	{
		reverse= reverse + Pop(); 	
	}
	return reverse;
}
// --------------------------------------------------------------------------------------------------------- //
//###################################### Infix to prefix ##############################//
	string infixToPrefix(string infix) 
{ 
		
	string reverse;
	infix = Reverse(infix);	
		
    // Replace  this '(' with ')'  
    for (int i = 0; i < infix.length(); i++) 
	{ 
  
        if (infix[i] == '(') 
		{ 
           	infix[i]=')';
        } 
        else if (infix[i] == ')') 
		{  
            infix[i]='(';
        } 
    } 
  
    reverse = inFixToPostFixConverter(infix); 
  	reverse = Reverse(reverse);
    return reverse; 
} 


string inFixToPostFixConverter(string exp)
{
	string postFix;
	for(int i=0; i<exp.length(); i++)
	{
		if(exp[i]=='(')
		{
			Push(exp[i]);
		}
		else if( exp[i]==')')
		{
			while((Stack[top] != '('))
			{
				postFix +=Pop();
			}
			Pop();	// pop the element
		}
		else if((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z'))	// if operand then append it to postFix
		{			
			{
				postFix +=exp[i];					
			}
		}
		else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')	// if operator then check conditions
		{
			if(top != -1)	// check for all the remaining values
			{
				if(Priority(exp[i])>Priority(Stack[top]))		// if incoming is > then Push
				{
					Push(exp[i]);
				}
				else			// if incoming is < then first Pop and then Push it to the Stack
				{
					while(Priority(exp[i]) <= Priority(Stack[top]))
					{
						postFix +=Pop();
					}
						Push(exp[i]);
				}
			}
			else
			{
				Push(exp[i]); 
			}
		}
	}
	while(top != -1)		// pop the remaining elements
	{
		postFix +=Pop();
	}
	
	return postFix; 	
		
	}	

int Priority(char ch)		// for checking priority
{
	switch(ch)
	{
		case '(':
		return 0;
		break;
		
		case '+':
		case '-':
		return 1;
		break;	
		
		case '*':
		case '/':
		return 2;
		break;
	}	
}

