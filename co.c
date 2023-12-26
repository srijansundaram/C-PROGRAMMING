#include <stdio.h>
#include <string.h>

int countNoOfOccurence(char *str, char letter);
 
int main()
{
    char str[100];
    printf("Input String: ");
    gets(str);

    char letter;
    printf("Input letter to be searched: ");
    letter = getchar();
    
    int ans = 0;
    ans = countNoOfOccurence(str, letter);
     
	printf("The value '%c' has occurred %d time in the string \n ", letter, ans);
     
    return 0;
}

int countNoOfOccurence(char *str, char letter){

    int cnt = 0;
   
    for(int i = 0; str[i]; i++)  
    {
    	if(str[i] == letter)
    	{
          cnt++;
        }
    }
    
    return cnt;
}
 