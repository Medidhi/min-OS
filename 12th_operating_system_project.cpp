/*  SProject -- SOS Version 1 -- Basic developers version

    Copyright (c) 2012, 2013 by  Inc.
    All rights reserved.

    There are some functions here which generate a LOT of code
    (as much as 300 bytes), but are available in one file because
     wanted it that way.
    We have also made them void functions in the definition
    and conditionally accepted formal parameters from the user.

    If you really want these big functions to be inline, #define the
    macro name _BIG_INLINE_ before including this file.
    Programs will compile and link correctly even if some modules are
    compiled with _BIG_INLINE_ and some are not.

    Most importantly ENJOY this beautiful peice of code and
    appriciate the hours I spent creating it !! -- END OF LINE
*/

#define pi 3.14
typedef int number;
typedef char letter;


void introduction(void);
void accept_username(void);
void username_choice(void);
void administrator_verification(void);
void schoolprg(void);
void simpleinterest(void);
void oddoreven(void);
void quadratic(void);
void telephonebill(void);
void fibonacci(void);
void primeno(void);
void numberconversion(void);
void stringtopal(void);
void pyrgame(void);
void reverse(void);
void calculator(void);
void nooperations(void);
void array1dgsn(void);
void array1dfan(void);
void array1dopr(void);
void array2daas(void);
void array2dmat(void);
void array2dopr(void);
void asciiopr(void);
void main_program(void);
void endofprogram(void);
//After all of this void main is defined at the end

#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<graphics.h>
#include<fstream.h>


	number usernamechoice, flag1, desktop, programs,q1,games,ascii,choice;
	letter ch1,pass[50],passchoice[3][50]={"password"},oper,astr;
	double num1,num2;

void introduction(void)
{
	textcolor(8);
	textbackground(3);
	clrscr();
	cout<<"\t\t\tDONE BY :";
	cout<<"\n\n\n\t\t\t1. Shubh Vachher";
	for(double loop1=1;loop1<=100000000;loop1++);
		cout<<"\n\n\t\t\t2. I.Sangeeth Kumar";
	for(double loop2=1;loop2<=100000000;loop2++);
		cout<<"\n\n\t\t\t3.     Venkat";
	for(double loop3=1;loop3<=250000000;loop3++);

	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tPlease wait... Loading < SOS Version I >";
	cout<<"\n\t\t\t~~~~~~~~~~~~~~ ~~~~~~~ -----------------";
	cout<<"\n\n\n\n\n\n\t\t\t\t\t";

	for(int loop4=1;loop4<=5;loop4++)
	{
		cout<<".";
		delay(500);
	}

	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t*WELCOME TO THE NEW GENERATION OF OPERATING SYSTEMS*";
	cout<<"\n\n\t\t";
	for(int loop6=1;loop6<=52;loop6++)
	{
		cout<<"~";
		for(double inloop7=1;inloop7<=2500000;inloop7++);
	}

	{
	for(double loop8=1;loop8<=100000000;loop8++);
	}

}

void accept_username(void)
{
	flag1=0;
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\tPlease choose your username : ";
	cout<<"\n\n\n\t\t1. Administrator (only for creators)";
	cout<<"\n\n\t\t2. Guest User\n\n\t";
	cout<<"\n\n\n\n\n\t\t\t\tSHUTDOWN : 0\n\n\n\t\t";
	cin>>usernamechoice;
	username_choice();
}

void username_choice(void)
{
	if(usernamechoice==1)//administrator
		{
			clrscr();
			cout<<"\n\n\n\n\n";
			cout<<"Use '*' for password(y/n) ?";
			cin>>astr;
			administrator_verification();
		}

		else if(usernamechoice==2)//guestuser
		{
			clrscr();
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t*WELCOME Guest User*";
			cout<<"\n\n\n\t\tLoading desktop";
			for(q1=1;q1<=5;q1++)
			{
				cout<<".";
				for(double w4=1;w4<=100000000;w4++);
			}
			main_program();
		}

		else if(usernamechoice==0)//shutdown
		{
			clrscr();
			endofprogram();
		}


		else
		{
			cout<<"Please enter one of the two usernames..... press enter.";
			getch();
			accept_username();
		}

}

void administrator_verification(void)
{
	clrscr();
	cout<<"\n\nEnter Administrator Password : ";
	for(int i=0;i<50;i++)
	{
		pass[i]=getche();
		if(astr=='y'||astr=='Y')
			cout<<"\b*";
		if(pass[i]==13)
		{
			pass[i]='\0';
			break;
		}
	}


	if(strcmp(pass,passchoice[0])==0)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t*WELCOME Administrator*";
		cout<<"\n\n\nFor the protection and to maintain the integrity of the ADMINISTRATOR user we\nrequest you to change the administrator password after each use.";
		cout<<"\n\n\n\t\tWould you like to do that now (yes/no)?";
		gets(passchoice[2]);

		if(strcmpi(passchoice[2],"yes")==0)
		{
			passchange:
			cout<<"\n\n\t\tEnter new password : ";
			gets(passchoice[1]);
			cout<<"\n\t\tConform new password : ";
			gets(passchoice[0]);
			if(strcmp(passchoice[1],passchoice[0])==0)
				cout<<"Password change successful !! ";
			else if((strcmp(passchoice[1],passchoice[0])!=0)&&(strcmpi(passchoice[1],passchoice[0])==0))
				{cout<<"\n\nCareful !! Passwords are case sensitive !! ";getch();goto passchange;}
			else
				{cout<<"\n\n\t\tThe passwords don't match. Try again!!";getch();goto passchange;}
		}
		else
			cout<<"\n\n\t\tPlease remember to change your password.";

		cout<<"\n\n\n\t\tLoading desktop";
		for(q1=1;q1<=5;q1++)
		{
			cout<<".";
			for(double w4=1;w4<=25000000;w4++);
		}
		main_program();
	}

	else
	{
		cout<<"\n\n\tSorry Wrong password. Press enter.";
		getch();
		flag1++;

		if(flag1==3)
			{cout<<"\n\nSorry Password Limit exceeded...Press Enter.";
			getch();
			accept_username();}
		else
			administrator_verification();
	}
}

void schoolprg(void)
{
			clrscr();
			cout<<"\n\n\n\n\n\n\t\t1. Simple Interest. ";
			cout<<"\t\t2. Odd or even numbers. ";
			cout<<"\n\n\n\n\n\n\t\t3.Root of a Quadratic equation. ";
			cout<<"\n\n\n\n\n\n\t\t4. Telephone Bill. ";
			cout<<"\t\t5. Fibonacci Series. ";
			cout<<"\n\n\n\n\n\n\t\t6. Prime Numbers. ";
			cout<<"\t\t7. Number Conversions. ";
			cout<<"\n\n\n\n\n\n\t\t8. String Palindrome check. ";
			cout<<"\n\n\n\n\n\t\t\t0. Back to desktop. ";
			cout<<"\n\n\n\n\n\n\t\t\t\tEnter choice : ";
			cin>>programs;
			switch(programs)
			{
				case 0:{main_program();break;}
				case 1:{simpleinterest();break;}
				case 2:{oddoreven();break;}
				case 3:{quadratic();break;}
				case 4:{telephonebill();break;}
				case 5:{fibonacci();break;}
				case 6:{primeno();break;}
				case 8:{stringtopal();break;}
				default : ;
			}//switch(program) ends
			schoolprg();
}

void simpleinterest(void)
{
	clrscr();
	cout<<"\n\t\tSimple Interest";
	cout<<"\n\t\t~~~~~~~~~~~~~~~";
	int R,P,T,SI;
	cout<<"\n\n\n\n\nEnter the principal:";
	cin>> P;
	cout<<"\n\nEnter the Rate ofInterest:";
	cin>>R;
	cout<<"\n\nEnter the Time:";
	cin>>T ;
	SI=(P*R*T)/100;
	cout<<"\n\nSimple Interest:"<<SI;
	getch();
}

void oddoreven(void)
{
	clrscr();
	cout<<"\n\t\tOdd or Even";
	cout<<"\n\t\t~~~~~~~~~~~";
	int oeno;
	cout<<"\n\n\n\n\n\t\tEnter the no.";
	cin>>oeno;
	(oeno%2==0)? cout<<"\n\n\t\t\tThe no. is even":cout<<"\n\n\n\t\tThe no. is odd";
	getch();
	clrscr();
}
void quadratic(void)
{
	float a,b,c,d;
	int ch;
	do
	{
		clrscr();
		cout<<"\n\t\tWelcome to the program to find roots of a quadratic equation!!";
		cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<"\n\n\nEnter the 3 numbers of the form ax^2+bx+c :\n\na : ";
		cin>>a;
		cout<<"b : ";
		cin>>b;
		cout<<"c : ";
		cin>>c;
		d=b*b-4*a*c;
		if(!a)
			cout<<"This a leinear equation with the roots : "<<(-c)/b<<endl;
		else
		{
			d=b*b-4*a*c;
			if(d>0)
			{
				cout<<"\nRoots are real and unequal";
				cout<<"\nRoot1="<<(-b+sqrt(d))/2*a;
				cout<<"\nRoot2="<<(-b-sqrt(d))/2*a;
			}
			else
			if(d==0)
			{
				cout<<"\nRoots are real and equal";
				cout<<"\nRoot1="<<-b/2*a;
				cout<<"\nRoot2="<<-b/2*a;
			}
			else
			{
				cout<<"\nRoots are not real but imaginary";
				cout<<"\nRoot1="<<'('<<-b<<'+'<<sqrt(-d)<<"i"<<')'<<'/'<<2*a ;
				cout<<"\nRoot2="<<'('<<-b<<'-'<<sqrt(-d)<<"i"<<')'<<'/'<<2*a ;
			}
		}
		cout<<"\n\n\n\t\tDo you want to continue(1/0) ? ";
		cin>>ch;
	}while(ch==1);
	getch();
}
void telephonebill(void)
{
	unsigned long int a,b,c;
	float ch;
	int r=200,ch1;
	do
	{
		clrscr();
		cout<<"\n\t\tTelephone Bill";
		cout<<"\n\t\t~~~~~~~~~~~~~~";
		cout<<"\nEnter the custumer id:";
		cin>>a;
		cout<<"\nEnter the phone number :";
		cin>>b;
		cout<<"\nEnter the no. of calls:";
		cin>>c;
		if(c<=0)
			cout<<"\nInvalid";
		else
		{
			if (c<=100)
				ch=c*1;
			else
			if(c>100 && c<=250)
				ch=100+(c-100)*1.50;
			else
			if(c>250 && c<=500)
				ch=325+(c-250)*2;
			else
			if(c>500)
				ch=825+(c-500)*2.50;
		}
		cout<<"\ncustumer id:"<<a;
		cout<<"\nTelephone no.:"<<b;
		cout<<"\nNo. of calls:"<<c;
		cout<<"\nCharge:"<<ch;
		cout<<"\nService tax:"<<(ch+r)/50;
		cout<<"\nrent:"<<r;
		cout<<"\n\tBill: Rs."<<r+(ch+r)/50+ch;
		cout<<"\n\n\nDo you want to retry(1/0) ? ";
		cin>>ch1;
	}while(ch1==1);
	getch();
}
void fibonacci(void)
{
	clrscr();
	unsigned long int fb1,fb2,fb3,n1;
	char ch2;
	do
	{
		fb1=0;
		fb2=1;
		cout<<"\n\t\tFibonacci Series";
		cout<<"\n\t\t~~~~~~~~~~~~~~~~";
		cout<<"\nEnter no. of terms: ";
		cin>>n1;
		cout<<"\nFibonacci series: ";
		if(n1==1)
			cout<<fb1;
		else
		{
			cout<<fb1<<" "<<fb2;
			for(int loop9=2;loop9<n1 ;++loop9)
			{
				fb3=fb1+fb2;
				cout<<" "<<fb3;
				fb1=fb2;
				fb2=fb3;
			}//for ends
		}//else ends
		cout<<"\nDo you want to contine? Enter the chioce(y/n) : ";
		cin>>ch2;
	}while(ch2=='y'||ch2=='Y');
	getch();
	clrscr();
}

void primeno(void)
{
	int ch;
	int l,u;
	clrscr();
	do
	{
		cout<<"\n\t\t\t Prime number generation";
		cout<<"\n\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<"\n\n\nThis program generates prime numbers between two given limits !!";
		cout<<"\n\n\n Enter the lower and upper limit:";
		cin>>l>>u;
		for(int i=l;i<=u;i++)
		{
			int flag=0;
			for(int j=1;j<=i;j++)
			{
				if(i%j==0)
				flag ++;
			}
			if(flag==2)
			cout<<i<<" ";
		}
		cout<<"\nEnter the choice(1/0) : ";
		cin>>ch;
	}while(ch==1);
	getch();
}
void numberconversion(void)
{

}
void stringtopal(void)
{
	int c;
	do
	{
		clrscr();
		cout<<"\n\t\tWords and Palindrome Words";
		cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~";
		char a[100];
		int f,w=0,p=0,e,b=0;
		cout<<"\n\n\n\n Enter the string : \n\n\t\t";
		gets(a);
		for(int i=0;i<=strlen(a);i++)
		{
			f=0;
			if(a[i]== ' '|| a[i]=='\0')
			{
				w++;
				e=i-1;
				for( ; b<e;b++,e--)
				if(toupper(a[b])!=toupper(a[e]))
				{
					f++;
					break;
				}
				if(f==0)
					p++;
				b=i+1;
			}
		}
		cout<<"\n\n Number of words present in the given string : "<<w;
		cout<<"\n\n Number of palindrome words present in the given string : "<<p;
		cout<<"\n\n\n\nDo you want to continue(1/0) : ";
		cin>>c;
	}while(c==1);
	getch();
}

void pyrgame(void)
{
	clrscr();
	int choice1;
	char choice2,choice3;
	do
	{
		cout<<"\t\t\t\tPyramid Game!!";
		cout<<"\n\t\t\t\t~~~~~~~~~~~~~~";
		cout<<"\n\n\nThe rule of the game is \nStep1: Choose type of pyramid\nStep2: Enter number of lines and then write down your result in a piece of paper\nStep3: Check your answer by pressing ENTER...";
		cout<<"\n\n\nEnter 1 for number pyramid and 2 for factorial pyramid : ";
		cin>>choice1;
		if (choice1==2)
		{
			int n;
			float f=1,flag;
			cout<<"\n\nEnter final factorial number : ";
			cin>>n;
			for(int i=1;i<=n;i++)
			{
				f=1;
				for(int j=1;j<=42-2*i;j++)
				cout<<" ";
				for(int k=1;k<=i;k++)
				{
					f*=k;
					cout<<f<<" ";
				}
				for(int e=1;e<=(i-1);e++)
				{
					int l =(i-e);
					f=1;
					for(;l>=1;l--)
						f*=l;
					cout<<f<<" ";
				}
				cout<<"\n";
			}
		}
		else if(choice1==1)
		{
			int q;
			cout<<"\n\nEnter number of lines : ";
			cin>>q;
			for(int w=1;w<=q;w++)
			{
				for(int r=1;r<=42-2*w;r++)
				cout<<" ";
				for(int t=1;t<=w;t++)
					cout<<t<<" ";
				for(int y=(w-1);y>=1;y--)
					cout<<y<<" ";
				cout<<"\n";
			}
		}
		else if(choice1==0)
			goto C;
		else
			cout<<"\n\nInvalid choice. Please enter from the available options.";
		cout<<"\n\nDid you get it right ? Well Done !! ";
		cout<<"\n\n\nLets play again !! Enter `Y' for yes and `N' for no : ";
		cin>>choice2;
		if(choice2=='Y'||choice2=='y')
		{
			cout<<"\n\nDo you want to clear previous results? Enter `Y' for yes and `N' for no : ";
			cin>>choice3;
			cout<<"\n\nTo exit anytime during the next run enter 0 in any choice.";
			for(double t=1;t<=1000000000;t++);
				if(choice3=='Y'||choice3=='y')
					clrscr();
		}
	}while(choice2=='Y'||choice2=='y');
	C:
	getch();
}

void reverse(void)
{
	clrscr();
	char a[200],temp;
	int r,i,k,l,sp[20],m,ch;
	do
	{
		clrscr();
		cout<<"\t\t\t\tReversing a string!!";
		cout<<"\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~";
		cout<<"\n\n\nEnter a paragraph of words : \n\n";
		i=-1;m=0;
		sp[0]=(-1);
		gets(a);
		r=strlen(a);
		while(i<r)
		{
			m++;
			i++;
			for(;i<strlen(a)&&a[i]!=' ';i++);
			sp[m]=i;
		}
		m=0;
		while(sp[m]<r)
		{
			for(k=(sp[m]+1),l=(sp[m+1]-1);k<l;k++,l--)
			{
				temp=a[k];
				a[k]=a[l];
				a[l]=temp;
			}
			m++;
		}
		puts(a);
		cout<<"\n\n\nHad Fun? Then retry(1/0) ? ";
		cin>>ch;
	}while(ch==1);
}

void calculator(void)
{
	do
	{
		clrscr();
		cout<<"\n\n\n\t\t\t\tScientific Calculator ";
		cout<<"\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~~ ";
		cout<<"\n\n\n\n\t\tThe format for entering a calculation : \n\n\n\n\t(first number) *space* (operator) *space* (second number) *enter*";
		cout<<"\n\nExamples : \n\n";
		cout<<"\n\n'x' plus 'y' -> x + y \t\t\t\t'x' minus 'y' -> x - y\n\n'x' multiplied by 'y' -> x * y\t\t\t'x' divided by 'y' -> x / y";
		cout<<"\n\n'x' to the power of 'y' -> x ^ y       Logarithm of 'x' to the base 'y' -> x l y\n\nSquare root of 'x' -> x r 2 ";
		cout<<"\n\n\n\t\tEnter your calculation : ";
		cin>>num1>>oper>>num2;
		cout<<"\n\n\t\t\t\t"<<num1<<" "<<oper<<" "<<num2<<" = ";
		switch(oper)
		{
			case '+':cout<<num1+num2;break;
			case '-':cout<<num1-num2;break;
			case '*':cout<<num1*num2;break;
			case '/':cout<<fmod(num1,num2);break;
			case '^':cout<<num1/num2;break;
			case 'l':cout<<log10(num1)/log10(num2);break;
			case 'r':cout<<sqrt(num1);break;
			default :cout<<"Operator Error.\n\n\t\tUndifined operator used. Please try again!!";
		}
		cout<<"\n\n\n\tDo you want to do another calculation(y/n) ? ";
		cin>>oper;
	}while(oper=='Y'||oper=='y');
	cout<<"\n\n\n\n\t\t\tThank you for using this calculator!! ";
	getch();
}

void nooperations(void)
{
	clrscr();
	cout<<"\n\n\t\t\t\tNumber Operations";
	cout<<"\n\t\t\t\t~~~~~~~~~~~~~~~~~";
	cout<<"\n\n\n\n\n\n\t\t1. Number Operations. ";
	cout<<"\t\t2. 1-D Array operations. ";
	cout<<"\n\n\n\n\n\n\n\n\n\t\t3. 2-D Array operations. ";
	cout<<"\n\n\n\n\n\n\t\t\t0. Back to Desktop. ";
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\tEnter choice : ";
	cin>>choice;
	switch(choice)
	{
		case 0:{main_program();break;}
		case 1:{calculator();break;}
		case 2:{array1dopr();break;}
		case 3:{array2dopr();break;}
		default : cout<<"Invalid Choice!! Try Again!!";
	}
	nooperations();
}

void array1dgsn(void)
{
	clrscr();
	char choice;
	do
	{
		clrscr();
		int a[100];int n,ch,min,max,f=0;
		char d;
		cout<<"\n\t\t1D ARRAY OPERATIONS";
		cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~";
		cout<<"\n\n\nEnter the number of elements : ";
		cin>>n;
		cout<<"\n\n\nEnter the Elements : ";
		for(int i=0;i<n;i++)
			cin>>a[i];
		do
		{
			clrscr();
			int sum=0;

			cout<<"\n\n\n1.Smallest number\n\n2.Largest number\n\n3.Sum of Odd Multiple of 3 ";
			cout<<"\n\n\n\tEnter the choice : ";
			cin>>ch;

			if(ch==1)
			{
				min=a[0];
				for(i=0;i<n;i++)
				{
					if(min>a[i])
						min=a[i];
				}
				cout<<"\n\nSmallest number : "<<min;
				getch();
			}

			else if(ch==2)
			{
				max=a[0];
				for(i=0;i<n;i++)
				{
					if(max<a[i])
						max=a[i];
				}
				cout<<"\nLargest number : "<<max;
				getch();
			}

			else if(ch==3)
			{
				for(i=0;i<n;i++)
				{
					if(a[i]%3==0 && a[i]%2)
					{
						sum+=a[i];
						f++;
					}
				}
				if(f==0)
					cout<<"\nThere is no ODD MULTIPLE OF 3 in this array !!";
				else
					cout<<"\nSum of all Odd Multiples of 3 : "<<sum;
				getch();
			}

			else
				cout<<"\nInvalid Choice !!";

			clrscr();
			cout<<"\nDo you Want to continue with the same array(y/n) ? ";
			cin>>d;
		}while(d=='y'||d=='Y');
		cout<<"\nDo you want to continue with a different array(y/n) ? ";
		cin>>choice;
	}while(choice=='y'||choice=='Y');
	getch();
}

void array1dfan(void)
{
	int a[100],n,term,flag=0,choice;
	do
	{
		flag=0;
		clrscr();
		cout<<"\n\t\tSearching for a term";
		cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~";
		cout<<"\n\n\n\nEnter no of terms : ";
		cin>>n;
		cout<<"\n";
		for(int i=0;i<n;i++)
		{
			cout<<"Enter term "<<i+1<<" : ";
			cin>>a[i];
			cout<<"\n";
		}
		do
		{
			cout<<"\n\n\n\t\t\t\tSearch for term : ";
			cin>>term;
			for(i=0;i<n;i++)
			{
				if(a[i]==term)
					{cout<<"\nThe term "<<term<<" is present at place : "<<i+1;
					flag++;}
			}
			if(flag==0)
				cout<<"The term "<<term<<" is not present in the array. ";
			getch();
			cout<<"\n\n\nDo you want to search for another term(1/0) ?";
			cin>>choice;
		}while(choice==1);
		cout<<"\n\n\nDo you want to retry with a different term(1/0) ?";
		cin>>choice;
	}while(choice==1);
	getch();
}

void array1dopr(void)
{
	clrscr();
	cout<<"\n\t\t\t1-D Array Operations";
	cout<<"\n\t\t\t~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t1.Greatest, Smallest number ";
	cout<<"\n\n\n\n\n\n\n\n\t\t2. Finding An element. ";
	cout<<"\n\n\n\n\n\n\t\t\t0. Back to Number Operations. ";
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\tEnter choice : ";
	cin>>choice;
	switch(choice)
	{

		case 0:{nooperations();break;}
		case 1:{array1dgsn();break;}
		case 2:{array1dfan();break;}
		default : cout<<"Invalid choice!! Try again!!";
	}
	array1dopr();
}

void array2daas(void)
{
	int a[100][100],b[100][100],c[100][100],r1,c1,r2,c2,ch,i,j;
	char choice,cho;
	do
	{
		clrscr();
		cout<<"\n\t2D ARRAY OPERATIONS";
		cout<<"\n\t-------------------";
		cout<<"\n\n\nEnter number of rows and columns for matrix A : ";
		cin>>r1>>c1;
		cout<<"\n\nEnter number of rows and columns for matrix B : ";
		cin>>r2>>c2;
		if(c1==c2 && r1==r2)
		{

			cout<<"\n\nEnter the elements of Matrix A : ";
			for(i=0;i<r1;i++)
				for(j=0;j<c1;j++)
					cin>>a[i][j];
			cout<<"\n\nEnter the elements of Matrix B : ";
			for(i=0;i<r2;i++)
				for(j=0;j<c2;j++)
					cin>>b[i][j];
			do
			{
				clrscr();
				cout<<"\n\n\n1.Addition \n2.subtraction\n\n\n\t\tEnter the choice : ";
				cin>>ch;
				if(ch==1)
				{
					for(i=0;i<r1;i++)
						for(j=0;j<c1;j++)
							c[i][j]=a[i][j]+b[i][j];
					clrscr();
					cout<<"\n\nMatrix A : \n";
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
							cout<<a[i][j]<<" ";
						cout<<endl;
					}
					cout<<"\n\nMatrix B : \n";
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
							cout<<b[i][j]<<" ";
						cout<<endl;
					}
					cout<<"\n\nThe Resultant Matrix : \n";
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
							cout<<c[i][j]<<" ";
						cout<<endl;
					}
				}
				else if(ch==2)
				{
					for(i=0;i<r1;i++)
						for(j=0;j<c1;j++)
							c[i][j]=a[i][j]-b[i][j];
					clrscr();
					cout<<"\n\nMatrix A : \n";
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
							cout<<a[i][j]<<" ";
						cout<<endl;
					}
					cout<<"\n\nMatrix B : \n";
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
							cout<<b[i][j]<<" ";
						cout<<endl;
					}

					cout<<"\n\nThe Resultant Matrix : \n";
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
							cout<<c[i][j]<<" ";
						cout<<endl;
					}
				}
				else
					cout<<"\n\n\nInvalid choice!!";
				cout<<"\n\n\nDo you want to continue with the same array(y/n) : ";
				cin>>cho;
			}while(cho=='y'||cho=='Y');
		}
		else
			cout<<"\n\n\n INVALID OPERATION!!\n Addition and Subtraction of arrays of different rows and columns is not \n possible!!";
		cout<<"\n\n\nDo you want to continue with a different array(y/n) : ";
		cin>>choice;
	}while(choice=='y'||choice=='Y');
	getch();
}

void array2dmat(void)
{
	int a[100][100],b[100][100],c[100][100],r1,c1,r2,c2,ch,choice,i,j;
	char cho;
	do
	{
		clrscr();
		cout<<"\n\t2D ARRAY OPERATIONS";
		cout<<"\n\t-------------------";
		cout<<"\n\n\n\n1.Multiplication \n2.Transpose\n\n\n\n\t\tEnter your choice : ";
		cin>>choice;
		if(choice==1)
		{
			cout<<"\n\nEnter row and column for matrix A : ";
			cin>>r1>>c1;
			cout<<"\n\nEnter row and column for matrix B : ";
			cin>>r2>>c2;
			if(c1==r2)
			{
				cout<<"\n\nEnter the elements for matrix A : ";
				for(i=0;i<r1;i++)
					for(j=0;j<c1;j++)
						cin>>a[i][j];
				cout<<"\n\nEnter the elements for matrix B : ";
				for(i=0;i<r2;i++)
					for(j=0;j<c2;j++)
						cin>>b[i][j];
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c2;j++)
					{
						c[i][j]=0;
						for(int k=0; k<c1;k++)
							c[i][j]+=a[i][k]*b[k][j];
					}
				}
				clrscr();
				cout<<"\n\nFirst Matrix : \n";
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
						cout<<a[i][j]<<" ";
					cout<<endl;
				}
				cout<<"\n\nSecond Matrix : \n";
				for(i=0;i<r2;i++)
				{
					for(j=0;j<c2;j++)
						cout<<b[i][j]<<" ";
					cout<<endl;
				}
				cout<<"\n\nResultant Matrix : \n";
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c2;j++)
						cout<<c[i][j]<<" ";
					cout<<endl;
				}
			}
			else
				cout<<"\n\nINVALID!! Multiplication needs same row and column number!!";
		}

		else if(choice==2)
		{
			cout<<"\n\nEnter row and column for Matrix : ";
			cin>>r1>>c1;
			cout<<"\n\nEnter the elements : ";
			for(i=0;i<r1;i++)
				for(j=0;j<c1;j++)
					cin>>a[i][j];
			for(i=0;i<c1;i++)
				for(j=0;j<r1;j++)
					b[i][j]=a[j][i];
			cout<<"\n\nFirst Matrix : \n";
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
					cout<<a[i][j]<<" ";
				cout<<endl;
			}
			cout<<"\n\nResultant Matrix : \n";
			for(i=0;i<c1;i++)
			{
				for(j=0;j<r1;j++)
					cout<<b[i][j]<<" ";
				cout<<endl;
			}
		}
		cout<<"\n\n\n\t\tDo you want to retry(y/n) ? ";
		cin>>cho;
	}while(cho=='y'||cho=='Y');
	getch();
}

void array2dopr(void)
{
	clrscr();
	cout<<"\n\t\t\t2-D Array Operations";
	cout<<"\n\t\t\t~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t1.Addition & Subtraction ";
	cout<<"\n\n\n\n\n\n\n\n\t\t2. Multiplication & Transpose ";
	cout<<"\n\n\n\n\n\n\t\t\t0. Back to Number Operations. ";
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\tEnter choice : ";
	cin>>choice;
	switch(choice)

	{

		case 0:{nooperations();break;}
		case 1:{array2daas();break;}
		case 2:{array2dmat();break;}
		default : cout<<"Invalid Choice!! Try Again!!";
	}
	array2dopr();

}

void asciiopr(void)
{
	clrscr();
	cout<<"\n\n\t\t\t\tASCII Conversions";
	cout<<"\n\t\t\t\t~~~~~~~~~~~~~~~~~";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t1.Find the ASCII Value of ... ";
	cout<<"\n\n\n\n\n\n\n\n\t\t2. All ASCII Values";
	cout<<"\n\n\n\n\n\n\t\t\t0. Back to desktop. ";
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\tEnter choice : ";
	cin>>ascii;
	switch(ascii)
	{
		case 0:{main_program();break;}
		case 1:
		{
			clrscr();
			int ascii;
			char character,ch;
			cout<<"\t\t\t\tASCII value of characters";
			cout<<"\n\t\t\t\t-------------------------";
			do
			{
				cout<<"\n\n\n";
				cout<<"\t\tEnter the character : ";
				character=getch();
				ascii=character;
				cout<<"\n\n\t\tThe ASCII value for `"<<character<<"' is : "<<ascii;
				cout<<"\n\n\n Re-enter a new character(y/n) ? ";
				cin>>ch;
			}while(ch=='y'||ch=='Y');
			getch();
		}break;
		case 2:
		{
			clrscr();
			int a;
			char ch;
			cout<<"Ch Ascii\tCh Ascii\tCh Ascii\tCh Ascii\tCh Ascii\n";
			for(int i=1;i<=256;i++)
			{
				if(i==10||i==32||i==9||i==26)
					continue;
				ch=i;
				a=i;
				if((i%5)==1)
					cout<<endl;
				else
					cout<<"\t\t";
				cout<<ch<<"   "<<a;
			}
			getch();
		}break;
		default : cout<<"Wrong choice!! Retry!!";
	}
	asciiopr();
}

void main_program(void)
{


	clrscr();

	cout<<"\n\n\n\n\n\n\t\t1. About the creators. ";
	cout<<"\t\t2. Class 11 School programs. ";
	cout<<"\n\n\n\n\n\n\n\n\n\t\t3. Number Operations. ";
	cout<<"\t\t4. Projectile motion. ";
	cout<<"\n\n\n\n\n\n\n\n\n\t\t5. Games ";
	cout<<"\t\t\t6. ASCII Conversions";
	cout<<"\n\n\n\n\n\n\n\n\t\t7. Future plans.";
	cout<<"\n\n\n\n\n\n\t\t\t0. Back to username. ";
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\tEnter choice : ";

	cin>>desktop;
	switch(desktop)
	{
		case 0:{accept_username();break;}
		case 1:
		{
			clrscr();
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\nThe creators of this Operating System are students of\nD.A.V. Senior Seconday School , Mogappair .\n\n They are students with a basic 11th standard school level\nunderstanding of computer science and are proud to have put in so much hardwork\ninto making this program.\n\n These programmers\n\n   *Shubh Vachher*, *Sangeeth Kumar* and *Venkat Ganesh*\n\nare the creators and the only Administrators of this program as\nof yet. They are students of class 11 C of the batch 2012-2013 . \n\nShubh Vachher is the main programmer and code integrator while Sangeeth kumar\nand Venkat Ganesh are coders in their specific feilds ,i.e, Gaming and Class 11 school programms. \n\n\t\tThey are proud to present to you the SOS VERSION 1 !!\n\t\t\t\t\t\t     ---------------- ";
			getch();
			break;
		}
		case 2:
		{
			schoolprg();break;
		}//class 11 school program ends

		case 5:
		{
			games:
			clrscr();
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t1.Pyramid game. ";
			cout<<"\n\n\n\n\n\n\n\n\t\t2. Reverse | esreveR. ";
			cout<<"\n\n\n\n\n\n\t\t\t0. Back to desktop. ";
			cout<<"\n\n\n\n\n\n\n\n\t\t\t\tEnter choice : ";
			cin>>games;
			switch(games)
			{
				case 0: main_program();
				case 1:{pyrgame();break;}
				case 2:{reverse();break;}
				default : ;
			}
			goto games;
		}

		case 3:
		{
			nooperations();break;
		}

		case 6:
		{
			asciiopr();break;
		}
		default :cout<<"Please enter one of the above folders !! Try Again !! ";
		//End of main program
	}//switch(desktop) ends

	main_program();
}


void endofprogram(void)
{

	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nSOS is shutting down...press enter.";
	getch();
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t Thank you for using our operating system !!";
	cout<<"\n\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	getch();
	exit(0);
}



//****************************START OF VOID MAIN*********************************

void main()

{


	introduction();//to introduce the creators and title of program

	accept_username();//choice of admin or guest

	//username_choice();//to evaluate choice and direct user


}

//***************************END OF VOID MAIN************************************