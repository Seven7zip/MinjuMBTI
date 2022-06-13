#include "printio.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
inline void cinnum()
{

	cin.clear();

	cin.ignore(INT_MAX, '\n');

	cout << "잘못된 값을 입력하셨습니다. 숫자만 입력해주세요.\n";
}
namespace mbti
{
	void printio::run()
	{
		int i = 1;
		for (auto& x : munjes)
		{
			cout << i << "." << x.munjename << endl;
			cout << endl;
			for (int j = 0; j < x.munhangs.size(); j++)
			{
				cout << j + 1 << "." << x.munhangs[j].name << endl;
			}
			cout << endl;
			int k;
			while (1)
			{
				cout << "숫자를 입력해 문항을 고르시오." << endl;

				cin >> k;
				if (!cin)
					cinnum();
				if (k<0 || k > x.munhangs.size())
				{
					cout << "다시 입력해주세요." << endl;
				}
				else
				{
					break;
				}
			}
			scores[x.tp] += x.munhangs[k - 1].num;
			system("clear");
			i++;
		}
	}
}