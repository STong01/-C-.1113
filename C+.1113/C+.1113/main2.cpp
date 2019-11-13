//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char F[10000];
//	int N;
//	int tmp;
//	int P;
//	F[0] = 0;
//	F[1] = 1;
//	int i;
//	for (i = 2; i < 10000; i++){
//		F[i] = F[i - 1] + F[i - 2];
//	}
//
//	scanf("%d", &N);
//	for (i = 0; i < 10000; i++){
//		if ((N >= F[i]) && (N < F[i + 1])){
//			tmp = i;
//			break;
//		}
//	}
//
//	if ((N - F[tmp]) >(F[tmp + 1] - N)){
//		P = F[tmp + 1] - N;
//	}
//	else{
//		P = N - F[tmp];
//	}
//	printf("%d\n", P);
//
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a = 0, b = 1, c = 1;
	int left = 0, right = 0;

	int N = 0;
	cin >> N;

	while (1)
	{
		a = b;
		b = c;
		c = a + b;
		if (c < N)
		{
			left = N - c;  //左区间步数
		}
		else
		{
			right = c - N;  //右区间步数
			break;  //循环结束
		}
	}

	cout << min(left, right) << endl;

	system("pause");
	return 0;
}