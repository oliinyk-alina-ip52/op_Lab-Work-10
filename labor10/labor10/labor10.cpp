// labor10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"funct.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int n,b;
	std::cin>> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> b;
		add(b);
	}
	show();
	function();
	delet();
	system("pause");
	return 0;
}

