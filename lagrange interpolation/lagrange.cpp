#include<iostream>
#include<math.h>
// #define N 3
using namespace std;
int main(){
	int N;
	cout << "Enter the number of data ";
	cin >> N;

	float a[N],f[N], p;
	cout <<"Enter the data points ";
for (int i=0; i<N; i++)
{
	cin>> a[i];
}
	cout <<"Enter the functional data points ";
for (int i=0; i<N; i++)
{
	cin>> f[i];
}
cout << "Enter point for calculation ";
cin >> p;
float  l=1.0;
float s = 0;
for (int i = 0;i<N; i++){
	
	for (int j = 0;j<N; j++){

		if(i!=j){
			l = (l * (p - a[j]))/ (a[i] - a[j]);
		}
	}
	s = s + l * f[i];
}
cout << s;
}