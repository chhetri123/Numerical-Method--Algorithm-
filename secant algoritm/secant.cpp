#include<iostream>
#include<math.h>
using namespace std;
static int i = 0;

float f(float a)
{
	return a * a - 4 * a - 10;
}
// void display(float a1,float a2){
// 	cout << i++ << a1 << "       " << a2 << endl;
// }
int main(){
	float a1, a2;
	float f1;
	do
	{

		cout << "Enter inital guesses ";
		cin >> a1 >> a2;
		f1 = f(a1) * f(a2);

} while (f1 > 0);
	float a3;
	while(abs(a1-a2)>0.01){
		a3 = a2 - ((a2 - a1) / (f(a2) - f(a1))) * f(a2);
		if(f(a1)*f(a3)<0){
			a2 = a3;
			
		}else{
			a1 = a3;
		}
		cout << a3 << endl;
	}

	cout << "The solution is :" << a3;
}
