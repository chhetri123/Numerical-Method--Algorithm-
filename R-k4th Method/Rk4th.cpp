#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;


float f(float x, float y){

	return (pow(x, 2) + pow(y, 2));
}
int main(){
	float h = 0.2,y0=0.4,m1,m2,m3,m4,x=0,y=0;
	cout << "Enter the height and initial guess" << endl;
	cin >> h >> y0;
	float n = y0 / h;
	for(int i=1;i<=n;i<i++){
		m1 = f(x, y);
		m2 = f(x + h / 2, y + h * m1 / 2);
		m3 = f(x + h / 2, y + h * m2 / 2);
		m4 = f(x + h , y + h * m3 );
       y +=(m1 + 2 * m2 + 2 * m3 + m4) / 6 * h;
	   x = x + h ;
	}
	cout << m1 << " " << m2 << endl;
	
	cout << y;
}