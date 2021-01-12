/*Checking whether input year is Olympic year or not*/

#include <stdio.h>
int main(void)

{
	int year,rem;
	printf("Enter the year\n");
	scanf("%d",&year);
	rem=year%4;

	
    if (year<1896 || (year>=1940 && year<1947) || (year>1912 && year<1917) || (year>2016 && year<=2020)) {
    	printf("Not an Olympic Year\n");
    }
    else {
    	printf("Remainder is %d\n",rem);

    	if (rem>0 && year!=2021) {
    		printf("Not an Olympic Year\n");
    	}
    	else printf("Olympic Year\n");
    }

		
	

	

}