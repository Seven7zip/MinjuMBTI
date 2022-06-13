#pragma once
#include <string>
namespace mbti
{
	struct hangmok
	{
		std::string name;
		int num;
		hangmok(const std::string& na, int n) :name(na), num(n) {}
	};
}
