#include <stdio.h>
int main(){
int age;
printf("Type your age:" );
scanf("%d", &age);
if (age >= 18){
	printf("You can take your license! \n");
	}
else {
	printf("You do not take your licese! \n");
	}
return 0;
}
