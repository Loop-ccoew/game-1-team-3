/*
 * hollywood.c
 *
 *  Created on: 06-Oct-2018
 *      Author: Dell
 */
#include<stdio.h>
int main(void)
{setbuf(stdout, NULL);
	int i=9,a=0,b=0,c=0,d=0,e=0,f=0,h=0;
	char l;
	while(i>0)
	{

		if(a>=1){printf("t ");}
			else{printf("_ ");}
		if(b>=1){printf("h ");}
			else{printf("_ ");}
		printf("e ");
		printf("  /  ");
		printf("a ");
		if(c>=1){printf("v ");}
			else{printf("_ ");}
		printf("e ");
		if(d>=1){printf("n ");}
			else{printf("_ ");}
		if(e>=1){printf("g ");}
					else{printf("_ ");}
		printf("e ");
		if(f>=1){printf("r ");}
					else{printf("_ ");}
		if(h>=1){printf("s ");}
					else{printf("_ ");}

		printf("\n chances remaining %d ",i);

		printf("\n choose a letter");
		scanf("%s",&l);

		switch(l)
		{

		case 't' :
			    {a++;}
				break;
		case 'h' :
				    {b++;}
				break;
		case 'v' :
				    {c++;}
				break;
		case 'n' :
				    {d++;}
				break;
		case 'g' :
				    {e++;}
				break;
		case 'r' :
				    {f++;}
				break;
		case 's':
				    {h++;}
				break;
		default :
			{printf("\n wrong choice\n");
			i--;}
		}
		if(a>=1&&b>=1&&c>=1&&d>=1&&e>=1&&f>=1&&h>=1)
		{i=0;}

	}
	if(a>=1&&b>=1&&c>=1&&d>=1&&e>=1&&f>=1&&h>=1)
		{printf("\n you won");}
	else {printf("\n you lost \n the movie is -- the avengers");}
return 0;
}





