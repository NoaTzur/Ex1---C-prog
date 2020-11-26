
#include <stdio.h>
#include "myMath.h"

int main(){
	
	double fromUser;
	
	printf("PLease enter a real number: ");
	scanf("%lf", &fromUser);
	
	double func1 = sub(add(Exponent(fromUser), Power(fromUser, 3)), 2);
	
	double func2 = add(mul(fromUser, 3), mul(Power(fromUser, 2), 2));

	
	double func3 = sub(div(mul(Power(fromUser, 3), 4), 5), mul(fromUser, 2));
	
	printf("The value of f(x) = e^x + x^3 - 2, when x is %0.4lf: %0.4lf\n", fromUser, func1);
	printf("The value of f(x) = 3x + 2x^2, when x is %0.4lf: %0.4lf\n", fromUser, func2);
	printf("The value of f(x) = (4x^3)/5 - 2x when x is %0.4lf: %0.4lf\n", fromUser, func3);
	 

	return 0;
}
