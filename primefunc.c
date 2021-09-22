#include <stdio.h>
void prime(int);
int main()
 {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  prime(n);

  return 0;
}
void prime(int n)
{
	int i,flag=0;
	for (i = 2; i <= n / 2; ++i) 
  {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 is neither prime nor composite.");
  } 
  else {
    if (flag == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
  }

}
