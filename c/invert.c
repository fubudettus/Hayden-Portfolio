#include <stdio.h>

int main () {
	char str[20]; 
	printf("Type a single word: ");
	scanf("%s", &str);
	for (int i = 0;  str[i] != 0; i++)
	{   
	        if (str[i] <= 'Z'  && str[i] >= 'A') {
			str[i] = str[i] + 32;
			printf("%c", str[i]);
		}

		else if (str[i] >= 'a' && str[i] <= 'z') { 
		        str[i] = str[i] - 32;
		        printf("%c", str[i]);
		}
	}
return 0;
}





