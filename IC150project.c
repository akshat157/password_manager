#include <stdio.h>
#include <string.h>
int keyassert(char key[])
{
	char actualkey[7]="A4uw7";
	int i=0,p;
	p=strcmp(key,actualkey);
	if(p==0)
		return 0;
	else
		return 1;

	}
int main()
{
	char key[62];
	int r=6;
	printf("enter the key\n");
	fgets(key,61,stdin);
	key[strlen(key)-1] = '\0' ;
	r = keyassert(key);
	printf("output of function %d\n",r);
	return 0;
}
