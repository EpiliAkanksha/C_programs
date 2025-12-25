# include <stdio.h>
# define NO_OF_CHARS 256

int areAnagrams(char* str1, char* str2) // function
{
    int count1[NO_OF_CHARS] = {0};
    int count2[NO_OF_CHARS] = {0};
    int i;
    
    for(i = 0; str1[i] && str2[i]; i++) 
	{
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
    
    if(str1[i]||str2[i])
    {
    	return 0; 
	}
	
	for(i=0;i<NO_OF_CHARS;i++)
		if(count1[i] != count2[i])
			return 0;
			
	return 1;
}
int main() // Driver
{	int ans;
	char str1[100],str2[100];
	printf("Enter str1: ");
	scanf("%s",str1);
	printf("\nEnter str2 : ");
	scanf("%s",str2);
	ans=areAnagrams(str1, str2);
	
	if( ans == 1)
	{
		printf("Anagram");
	}
	else
	{
		printf("Not anagram");
	}
}
