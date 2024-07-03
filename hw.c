#inclde<stdio.h>

int main)
{
	int no1, no2, sum,multi, sub,;
	char operater;
	float division;

	printf("Enter your first number:\n");
	scanf("%d",&no1);

	printf("Enter your secound number:\n");
	scanf("%d",&no2);

	printf("Enter your operater:\n");
	scanf("% c",&operater);

	if(operater=='+')
		sum = no1 + no2;
	    printf("Summation is %d\n",sum);

	    else if(operater=='-')
	    	sub = no1 - no2;
	        printf("subtitution is %d\n",sub);

	     else if(operater=='*')
	           multi = no1 * no2;
	           printf("multiplication is %d\n",multi);

	      else if(operater=='/')
	              division = no1 / (float)no2;
	              printf("division is %.2f\n",division);

	       else
	       	printf("your operater is not difine.\n");

	       return 0;
}
