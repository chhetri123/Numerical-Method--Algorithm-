#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
float const E = 0.0001;
float f(float a)
{
	return a * a - 4 * a - 10;
}

float fd(float a){
	return 2 * a - 4;
}
int main(){

	float x0;
	cout << "Enter the initial guess: ";
	cin >> x0;
	float x1 = x0 - f(x0)/ fd(x0);
	// float f1 = f(x1);
	while(abs(x0-x1)>E){
		x0 = x1;
		x1 = x0 - f(x0)/ fd(x0);
		cout << x1 << endl;
	}
};
