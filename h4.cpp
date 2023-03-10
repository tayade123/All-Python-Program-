#include<iostream>

using namespace std;

#define n 5

int top=-1;
int s[n];
 
int push(int data);
int pop();
int peep();
int change();

 int main()
{ 
      	int data,choice,count=1,i;
 	while(count==1)
 	{
 		cout<<"\n\t 1.push on to stack ";
 		cout<<"\n\t 2.pop on to stack ";
 		cout<<"\n\t 3.peep on to stack ";
 		cout<<"\n\t 4.change on to stack ";
 		cout<<"\n\t 5.display stack ";
 		cout<<"\n\t Enter the choice :  ";
 		cin>>choice;
 	
 	switch(choice)
 	{
 		case 1:
 		cout<<"\n\t enter the value : ";
 		cin>>data;
 		push(data);
 		break;

 		case 2:
 		if(data != NULL)
 		{
 			cout<<"\n\t pop out : %d",data;
 		}
 		break;

 		case 3:
 		if(data != NULL)
 		{
 			cout<<"\n\t peep out : %d",data;
 		}
 		break;

 		case 4:
 		if(data != NULL)
 		{
 			cout<<"\n\t change out : %d",data;
 		}
 		break;

 		case 5:
 		if(i=top;i>0;i-1)
 		{
 			cout<<"\n\t  %d",<<s[i];
 		}
 		break;

 		default:
 		cout<<"\n\t invaild chioce";
 		break;
 	}
 	 cout<<"\n\t do you want to continue(1/0)";
 	 cin>>count;
 	}
 	return 0;
 }

 void push(int data)
 if(top==n-1)
 {
 	cout<<"\n\t stack overflow push possible";
 }
 else
 {
 	top=top+1;
 	s[top]=data;
 	return 0;
 }
 

int pop()

  int data = NULL;
  if(top==-1)
  {
  	cout<<"\n\t stack underflow";
  }
  else
  {
  	data=s[top];
  	top=top+1;

  	return(data);
  }

int peep()
int data = NULL;
int i;
if(top-i+==-1)
{
	cout<<"\n\t stack underflow";
}
else
{
	cout<<"\n\t enter the value";
	cin>>i;
	return(s[top-i+1]);
}

int change()
{
	int data = NULL;
	int i,x;
	if(top-i+1==-1)
	{
		cout<<"\n\t stack underflow";
	}
	else
	{
		cout<<"\n\t enter the index number : ";
		cin>>i;
		cout<<"\n\t now chenge : ";
		cin>>x;
		change=s[top-i+1]=x;
	}
	return x;
}
