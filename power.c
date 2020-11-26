
#define EXPO 2.71828182846

double Exponent(int x) {
	
	double ans = 1;
	if(x<0){
		for(int i = x; i<0; i++) {
			ans = 1.0/EXPO*ans;
			}
	}
	else{

		for(int i=0; i<x; i++){
			ans = EXPO*ans;
			}
	}
	
	return ans;
}

double Power(double x, int y) {

	double ans = 1;
	if(y<0){
		for(int i=y; i<0; i++){
			ans = 1.0/x*ans;
		}
	}
	else{
		for(int i=0; i<y; i++){
			ans = x*ans;
		}
	}
	
	return ans;
}
