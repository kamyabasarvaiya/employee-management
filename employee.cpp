#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>

class employee
{
	public:
		int id;
		float s;
		string n;
		employee()
		{
			id=0;
			s=0;
			n="NULL";
		}
		~employee()
		{
			
		}
};

class c1:public employee
{
	public:
		float da,hra,g,it,net;
		void data()
		{
			cout<<"\nENTER EMPLOYEE ID : ";
		    cin>>id;
		    cout<<"\nENTER EMPLOYEE NAME : ";
		    cin>>n;
		    cout<<"\nENTER BASIC SALARY OF THE EMPLOYEE : ";
		    cin>>s;
		    da=s*0.32;
			hra=s*0.12;
			g=s+da+hra;
			it=g*0.08;
			net=g+it;
			cout<<"\nFINAL SALARY : "<<net;
		}
};

class c2:public c1
{
	public:
	void display()
		{
			cout<<"\n"<<id<<"\t\t\t"<<n<<"\t\t"<<s<<"\t\t"<<g<<"\t"<<net;
		}
};

int main()
{
	cout<<"\n%%%%%% ABC EMPLOYEE RECORDS %%%%%%";
	cout<<"\n\n";
	c2 c[20];	
	int n,i,ch;
	cout<<"\nENTER NUMBER OF EMPLOYEES : ";
	cin>>n;
	while(ch<=3)
	{
		cout<<"\nPRESS 1 TO ENTER DATA OF THE EMPLOYEES : ";
		cout<<"\nPRESS 2 TO DISPLAY EMPLOYEE DETAILS";
		cout<<"\nPRESS 3 TO EXIT";
		cout<<"\nENTER YOUR CHOICE : ";
		cin>>ch;
		if(ch==1)
		{
			for(i=0;i<n;i++)
			{
				c[i].data();
			}
		}
		if(ch==2)
		{
			cout<<"\nEMPLOYEE ID\t\tNAME\t\tBASIC SALARY\tGROSS\tNET";
			for(i=0;i<n;i++)
			{
				c[i].display();
			}
		}
		if(ch==3)
		{
			cout<<"\n^^^^^^ END OF THE RECORDS ^^^^^";
			break;
		}
	}
}
