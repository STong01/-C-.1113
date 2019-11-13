#include <iostream>
#include <map>
#include <set>
#include <functional>
#define ARRSIZE(a) (sizeof(a) / sizeof(a[0]))
using namespace std;

#if 0
//合并果子最小费力值
int main()
{
	int n;
	cin >> n;

	multiset<int> data;//multiset自动去重
	set<int>::iterator is;
	int sum = 0;
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		cin >> tmp;
		data.insert(tmp);
	}

	while (data.size() > 1)
	{
		tmp = 0;
		is = data.begin();
		tmp += *is;
		data.erase(is);

		is = data.begin();
		tmp += *is;
		data.erase(is);

		data.insert(tmp);
		sum += tmp;
	}

	cout << sum << endl;

	system("pause");
	return 0;
}

#endif

int main1()
{

	map<int/*string*/, int,greater<int>/*从大到小排序*/> m;

	m.insert(pair<int/*string*/, int>(1, 2));
	m.insert(pair<int/*string*/, int>(2, 5));
	m.insert(pair<int/*string*/, int>(3, 4));
	m.insert(pair<int/*string*/, int>(4, 7));
	m.insert(pair<int/*string*/, int>(5, 8));
	m.insert(pair<int/*string*/, int>(8, 9));
						
	m[3] = 5;//直接修改3的键值
	m[7] = 5;//此时代替insert
	m[9]++;//此时代替insert

	for (auto & i : m)
	{
		cout << i.first << ' ' << i.second << ' ' << endl;
	}


	system("pause");
	return 0;
}