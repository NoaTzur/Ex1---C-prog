
#define EXPO 2.71828182846

double Exponent(int x) {
	
	double ans = 1;
	
	for(int i=0; i<x; i++){
		ans = EXPO*ans;
	}
	
	return ans;
}

double Power(double x, int y) {

	double ans = 1;
	
	for(int i=0; i<y; i++){
		ans = x*ans;
	}
	
	return ans;
}
