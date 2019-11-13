#include <iostream>
#include <stack>
using namespace std;

class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
	}
};

bool isvalid(string str, int len)
{
	stack<char> s;
	for (auto e : str)//±éÀú×Ö·û´®str
	{
		switch (e)
		{
		case '(':
			s.push(e);
			break;
		case ')':
			if (!s.empty() && s.top() == '(')
			{
				s.pop();
			}
			else
			{
				return false;
			}
			break;
		default:
			return false;
			break;
		}
	}
	if (!s.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{

	system("pause");
	return 0;
}