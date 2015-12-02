#ifndef POWER_H_INCLUDED
#define POWER_H_INCLUDED
//calculate the number's power

//小写以2为底
int power (int x,int n) {
	int result = 1;
	if ( n == 0 )return 1;
	for (;n>0;n=n/2){
		if ( n%2==1) result *= x;
		x = x * x;
	}
	return result;
}

//大写以3为底
int Power(int x,int n){
	int result = 1;
	if (n == 0)return 1;
	for (;n>0;n =n/3){
		if ( n % 3 == 1 ) result *= x;
		if ( n % 3 == 2 ) result  = result * x * x;
		x = x * x * x;
	}
	return result;
}

void test_main(){
	int x = power(3,5);  //以2为底
    int y = Power(3,4);  //以3为底
    printf("%d\n", x);   //output 243
    printf("%d\n", y);   //output 81
	
}


#endif // POWER_H_INCLUDED
