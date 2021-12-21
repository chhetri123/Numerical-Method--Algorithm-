#include<iostream>
#include<math.h>
#define N 3
using namespace std;

int main(){
	float a[N][N+1];
	cout << "Enter the coefficients of 3 equations: ";
	for(int i=0; i<N; i++){
		for(int j=0; j<N+1 ; j++){
				cin >>a[i][j];	
		}
	}
	int m = 0;
	float temp;
	// make a[0][0]=1
	while (m!=N-1)
	{
		// makes 1st coloumn 0;
		for (int i = m+1; i < N; i++)
		{
		
			temp = a[i][m] / a[m][m];
			for (int j = 0; j < N+1; j++)
			{
			  
				a[i][j] = a[i][j] -a[m][j] *temp;

			 }
		}
		m++;

}

// backward substitution 
float x[N];
for (int i = N-1; i >=0;i--){

	x[i] = a[i][N];
	for(int j=i+1; j<N; j++){

		x[i] -= a[i][j]*x[j];
	}
	x[i] = x[i] / a[i][i];
}


// Display in matrix form 
	for (int i = 0; i < N; i++)
	{
		for(int j=0; j<N+1; j++){
				cout << a[i][j]<<" ";

		}
		cout << "\n";
	}

	for (int i = 0; i < N;i++){
		cout << x[i] << endl;
	}
	return 0; 
}