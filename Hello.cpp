#include<iostream.h>
#include<conio.h>
int addnum(int,int);
void main()
{
clrscr();
int x,y;
float z;
cout<<"\n Enter First Number ";
cin>>x;
cout<<"\n Enter Second Number ";
cin>>y;
z=addnum(x,y);
cout<<"\n The sum of the Numbers is "<<z;
getch();
}
int addnum(int a,int b)
{
return a+b;
}
