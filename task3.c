#include <stdio.h>

int main() {
	// we need n >= 10
	long long n;
	printf("Enter the number (n <= 2^63 - 1): ");
	scanf("%lld", &n);
	int sum = n % 10;
	// we directly pluck the last digit using the mod operator
	while(n >= 10) {
		n /= 10;
	}
	// we've removed all the digits except the first digit
	sum += n;
	printf("The sum of first and last digit is %d", sum); 
}
