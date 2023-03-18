<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0){
		printf("%d is positive\n", n);
	}
	if(n==0){
		printf("%d is zero\n", n);
	}
	if(n<0){
		printf("%d is negative\n", n);
	}
	return (0);
}
=======
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0){
		printf("d% is positive\n", n);
	}
  if(n=0){
	   printf("%d is zero\n", n);
  }

  if(n<0){
	   printf("%d is negative\n", n);
  }
	return (0);
}
>>>>>>> 9677c5f2c3a8a67f6b9899543fab21debd508f2f
