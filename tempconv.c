
#include <stdio.h>

int main(){
	float celsis, fahrenheit;
	int choice;


	printf("Temp Converter\n");
	printf("1. Convert C to F\n");
	printf("2. Convert F to C\n");
	printf("Please choose an option (1 or 2): ");
	scanf("%d", &choice);

	if (choice == 1){
	printf("Enter Temp in C: ");
	scanf("%f", &Cel);
	Fah = (Cel *9/5) + 32;
	printf("%.2f Cel is %2.f Fah\n", Cel, Fah);
	
	} else if (choice == 2) {
	printf("Enter Temp in F: ");
	scanf("%f", &Fah);
	Cel = (Fah - 32) * 5/9;
	printf("%.2f Fah is %2.f Cel\n", Cel, Fah);

	} else {
		printf("Invalid choice!\n");

	}
	return 0;
}
