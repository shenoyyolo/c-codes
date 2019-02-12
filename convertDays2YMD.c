// Convert number of days into years, weeks and days

#include<stdio.h>

int main () {

	int days, years = 0, months = 0, weeks =
	printf ("Enter number of days: ");
	scanf(" %d", &days);
	if (days >= 365) {

	    years = days / 365;
	    months = (days % 365) / 12;
	    weeks = ((days % 365) % 12) / 7;
		days = (((days % 365) % 12) % 7);
	}
	else if (days >= 30) {

		months = (days / 12);
		weeks = (days % 12) / 7;
		days = (days % 12) % 7;
	}
	else if (days >= 7) {

		weeks = (days / 7);
		days = (days % 7);
	}
	else
		goto PRINT;

	PRINT :

		printf("%d Year/s, %d month/s, %d week/s and %d day/s\n",years, months, weeks, days);

	return 0;
}
