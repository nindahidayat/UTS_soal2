#include <iostream>

using namespace std;

int main()
{
	int N,X,T,batas;
	N = 84;
	batas = N+100;
	X=20;
	T=N;

	while (T<=batas)
	{
		T=T+X;
		X=X+10;

	}

	cout << T;

	return 0;


}