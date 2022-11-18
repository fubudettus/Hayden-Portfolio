#include <stdio.h>
int main() {
	int length, width;
	printf("Enter the length: ");
	scanf("%i", &length);
	printf("Enter the width: ");
	scanf("%i", &width);
	int area = length * width;
	printf("The area of your rectangle is  %i\n", area  );
	return 0;
}

