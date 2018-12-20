#include<stdio.h>
#include<string.h>

int main()
{

	char smallest_word[20]={},largest_word[20]={},c[20]={},b[20]={};
	int i=0;
	
	printf("Enter word: ");
	scanf("%s",smallest_word);
	strcpy(largest_word,smallest_word);
	
	for(;;){
		printf("Enter word: ");
		scanf("%s",c);

		if(strcmp(smallest_word,c) >= 0)
			strcpy(smallest_word,c);
		
		if(strcmp(largest_word,c) <= 0)
			strcpy(largest_word,c);
		
		if(strlen(c)==4) break;

	}
	printf("\n");
	printf("Smallest word: %s\n",smallest_word);
	printf("Largest word: %s\n",largest_word);
	return 0;
}
