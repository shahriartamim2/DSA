#include<iostream>
using namespace std;

int main()
{
	int *A = new int[5];
	int i;
	for(i=0;i<=4;i++)
	{
	std::cout<<&A[i]<<std::endl;
	}
	return 0;
}