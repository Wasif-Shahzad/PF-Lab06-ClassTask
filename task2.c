#include <stdio.h>

int main() {
	printf("we will perform axb\n");
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	
	int multiplication = 0;
	for(int i = 1; i <= b; i++) {
		multiplication += a;
	}
	printf("The result of %dx%d is %d\n", a, b, multiplication);
	
	
	printf("Now, we will perform a / b\n");
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	
	int division_result = 0;
	for(int i = b; i <= a; i += b) {
		division_result++;
	}	
	printf("The result of %d/%d is %d\n", a, b, division_result);
}
