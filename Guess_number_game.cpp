#include <stdio.h>

void main(void)
{
	int Num0;
	int Num1;
	int Num2;
	int Num3;
	int Num4;

	Num0 = 13;

	printf("I am thinking of a number between 1 and 20\n ");
	printf("Can you guess what it is? ");
	scanf("%d", &Num1);

	if (Num1 >= Num0)
		if (Num1 > Num0)
			printf("The number is smaller than %d.Try again: \n", Num1);
		else
			printf("Congratulations! You did it. The number was %d\n", Num0);
	else
		printf("The number is greater than d%.Try again: ", Num1);
        scanf("%d", &Num2);


	if (Num2 >= Num0)
		if (Num2 > Num0)
			printf("The number is smaller than %d.Try again: \n", Num2);
		else
			printf("Congratulations! You did it. The number was %d\n", Num0);
	else
		printf("The number is greater than d%.Try again: ", Num2);
        scanf("%d", &Num3);


	if (Num3 >= Num0)
		if (Num3 > Num0)
			printf("The number is smaller than %d.Try again: \n", Num3);
		else
			printf("Congratulations! You did it. The number was %d\n", Num0);
	else
		printf("The number is greater than d%.Try again: ", Num3);
	    scanf("%d", &Num4);


	if (Num4 >= Num0)
		if (Num4 > Num0)
			printf("The number is smaller than %d.Try again: \n", Num4);
		else
			printf("Congratulations! You did it. The number was %d\n", Num0);
	else
		printf("\nSorry. The number was 13.\nBetter luck next time\n");

}