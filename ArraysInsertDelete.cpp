#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,11,3,4,5};
	int b=10;
	int *q;
	q=&b;

    int *m;
    m=a;

	printf("%d\n",*q );
	printf("%p\n",q );
	printf("%p\n",&b );

	printf("%d\n",*m );
	printf("%p\n",m );
	printf("%p\n",&a );
	printf("%p\n",a );
	m++;

		printf("%d\n",*m );
	    printf("%p\n",m );

	    cout<<*a<<endl;
	    cout<<*a+1<<endl;
	    cout<<*(a+1)<<endl;

	    cout<<*(2+a)<<endl;
	    cout<<1[a];

}