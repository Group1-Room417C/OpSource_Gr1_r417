//#include <stdlib.h>

#include "stdafx.h"
#include"Queue.h"
#include <iostream>

using namespace std;
template< class kind>
kind max3(kind a, kind b, kind c) {
	if (a > b)
	{
		if (a > c) return (a);
		else return (c);
	}
	else
	{
		if (b > c) return (b);
		else return (c);
	}
}
char *max3(char *a, char *b, char *c) {
	if (strcmp(a, b) < 0)
	{
		if (strcmp(a, c) < 0) return (a);
		else return (c); 
	}
	else
	{
		if (strcmp(b, c) < 0)return(b);
		else return (c);
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	cout<< max3(3, 4, 1);
	cout << max3('ab', 'cc', 'dd');
}

