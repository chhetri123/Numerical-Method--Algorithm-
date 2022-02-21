#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float f(float a);
float f(float a){

	return (pow(a,3) + 1);
}

int main(){

	float a, b, h, sum ,x;
	cout << "Enter upper Limit" << endl;
	cin >> b;
	cout << "Enter lower Limit" << endl;
	cin >> a;
	cout << "Enter Height Limit" << endl;
	cin >> h;
	float n;
	n = (b - a) / h;
	sum = (f(a) + f(b)) / 2;
	for (int i = 1; i <= n-1;i++){
		x = a + i * h;
		sum =sum+ f(x);
	}
	cout << sum*h;

}