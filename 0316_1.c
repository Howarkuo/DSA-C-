#include<stdlib.h>
#include<stdio.h>

char A[6]={'v','i','r','u','s','\0'};
char B[7]={'C','o','r','o','n','a','\0'};
char C[6];
char Test1[12];
char Test2[6]={'d','r','i','n','k','\0'};
char CQData[12];

int Strlen(char str[]) //return the length of a string
{

}

void ArraytoUpper(char str[]) //translate all the characters in the array to uppercase
{

}

void Strcopy(char dest[], char source[]) //copy the string from source to dest
{

}

void Cat(char str1[],char str2[],char dest[])//combine two strings str1 and str2 to dest
{

}

void CQAdd(char que[],char temp)// add an element into the circular queue
{
	
} 

char CQDel(char que[])// delete an element from the circular queue
{
	
}

void PrintCQArray(char que[])//print all elements in the array from front+1 to rear
{
	
}

void main()
{
	int i;
	char x;
	
	ArraytoUpper(A);
	Strcopy(C,A);
	Cat(C,B,Test1);
	ArraytoUpper(Test2);
	
	for(i=0;i<11;i++)
	{
		CQAdd(CQData,Test1[i]);
		PrintCQArray(CQData);
	}

	for(i=0;i<5;i++)
	{
		x=CQDel(CQData);
		printf("%c is deleted!\n",x);		
	}

	for(i=0;i<5;i++)
	{
		CQAdd(CQData,Test2[i]);
		PrintCQArray(CQData);
	}	

}