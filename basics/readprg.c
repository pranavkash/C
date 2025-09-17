#include <stdio.h>
int main() 
{
	int marks;
	char gender;
	float ht;
	double avg;

	printf("Enter your marks:");
	scanf(" %d",&marks);
	printf("Enter your gender(m/f):");
	scanf(" %c",&gender);
	printf("Enter your Height:");
	scanf("%f",&ht);
	printf("Enter your Avg marks:");
	scanf("%lf",&avg);

	printf("Your Marks:%d\n",marks);
	printf("Your Gender:%c\n",gender);
	printf("Your Height:%f\n",ht);
	printf("Your AvgMarks:%lf\n",avg);
	return 0;
}

