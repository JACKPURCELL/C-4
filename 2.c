#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[100],c;
	int count=0,i=0;
printf("Enter a message: ");
c=getchar();
while(1)
    {
        if(c== '\n') break;
	        a[count]=c;
	        c=getchar();
	        count++;
    }
printf("Reversal is: ");
for (i=count-1;i>=0;i--){
	printf("%c",a[i]);
	
}
printf("\n");
return 0;
}
