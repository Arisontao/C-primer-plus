#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 31
typedef struct{
	char monname[MAX];
	char monabb[MAX];
	int mondays;
	int monnum; //Note that you cannot initialize the structure when you define it because there is no memory allocated yet
}Month;
int add_mondays(Month ptr[],int n);

int main(void)
{
	Month num[12] = {{"January","Jan",31,1},{"Feburary","Feb",28,2},{"March","Mar",31,3},{"April","Apr",30,4},{"May","May",31,5},{"June","Jun",30,6},
					 {"July","Jul",31,7},{"August","Aug",31,8},{"September","Sep",30,9},{"October","Oct",31,10},{"November","Nov",30,11},{"December","Dec",31,12}
	};
	int a;

	printf("Enter the month number:");
	scanf("%d",&a);
	printf("The sum of months days is %d\n",add_mondays(num,a));

	return 0;
}

int add_mondays(Month ptr[],int n)
{
	int i;
	int sum = 0;

	for(i = 0;i < n;i++)
		sum += ptr[i].mondays; //Attention here

	return sum;
}
