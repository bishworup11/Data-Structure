#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3]={6,2,5,0,1,3,4,9,8};

	int *p;
    
    p=a[0];//a[0][0] 
	for (int i = 0; i <3; ++i)
	{
		for (int j = 0; j <3 ; ++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<p<<" "<<&a[0][0]<<" "<<&a[0]<<" "<<a<<" "<<*a<<" "<<a[0]<<endl;

	cout<<**a<<" "<<a[0]<<" "<<*p; //**p invalid

	cout<<endl<<a[0]+1<<" "<<&a[0]+1;

	cout<<endl<<*(a[0]+1)<<" "<<**(&a[0]+1)<<endl;;
	
}