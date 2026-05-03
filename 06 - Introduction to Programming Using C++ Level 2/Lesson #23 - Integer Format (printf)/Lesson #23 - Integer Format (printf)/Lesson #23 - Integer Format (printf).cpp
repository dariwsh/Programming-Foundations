#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
	int Page = 1, TotaPages = 10;

	// Print String and int  Vvariable
	printf("The Page Number = %d \n", Page);
	printf("You Are In Page %d of %d \n", Page , TotaPages) ;

	// Width Speification
	printf("The Page Numberr =  %-6d \n"  , Page);
	printf("The Page Numberr =  %0*d \n", 3, Page);
	printf("The Page Numberr =  %0*d \n", 4, Page);
	printf("The Page Numberr =  %0*d \n", 5, Page);
	printf("The Page Numberr =  %0*d \n", 10, Page);

		int Number1 = 30 , Number2 = 20;
		printf("The Result of %d + %d = %d \n", Number1 , Number2 , Number1 + Number2);
		printf("%5d",Number1);
		return 0;
}

