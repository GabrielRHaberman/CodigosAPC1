#include <stdio.h>
int main (){
int age, time_diference;
printf ("Type your age: ");
scanf("%d", &age);
if (age >= 18) {
	time_diference = age - 18;
	printf("You have had license for %d year(s)", time_diference);
	}else {
	time_diference = 18 - age;
	printf("Await %d year(s)f/n", time_diference);
	}
return 0;
}
