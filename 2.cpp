#include<iostream>
#include<stack>
#include<iomanip>
#include<vector>
using namespace std;
struct Stack
{
	int top;
	double data[10];
};
void Init(Stack &s)
{
	s.top=0;
}

void push(Stack &s, double x)
{
	s.data[s.top]=x;
	s.top++;
}
bool Is_full(Stack S)
{
return (S.top == 10);
}
bool Is_empty(Stack S)
{
return (S.top == 0);
}

double pop(Stack &s)
{
	s.top--;
	return s.data[s.top];
}
void lay_ra(Stack &s, double x, vector<double> b)
{
	while(!Is_empty(s))
	{	
		double a;
		if(a==x)break;
		else
		{
		a=pop(s);
		cout<<a<<" ";
		b.push_back(a);
		}
		
	}
	
}
void inra(Stack s)
{
	while(s.top!=0)
	{
	s.top--;
	cout<<s.data[s.top]<<" ";
	}

}
int main()	
{	
	Stack  n;
	Init(n);
	vector<double>v;
	
	double a,x;
	do
	{
		cout<<"Nhap 1 ptu vao stack: ";
		cin>>a;
		while(a==0)
		{
			cout<<"Nhap ptu khac 0: ";
			cin>>a;
		}
		
		push(n,a);
	
	}
	while(!Is_full(n));
	
	cout<<"Nhap x: ";cin>>x;
	cout<<"\nCac ptu duoc lay ra la: ";
	lay_ra(n,x,v);
	
	double S=0;
	for(int i=0;i<v.size();i++)
	{
		S+=v[i];
		cout<<S;
	}
	
	cout<<"\nTrung binh cong cac phan tu duoc lay ra la: "<<S/v.size();
	cout<<"\nCac phan tu con lai la: ";
	inra(n);
}
