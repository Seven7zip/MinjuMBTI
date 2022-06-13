#pragma once
#include "munje.h"
namespace mbti
{
	class printio
	{
	public:
		printio(const std::vector<munje>& a, int n) :munjes(a), scores(n) {}
		void run();
		std::vector<int> getscores() { return scores; }
	private:
		std::vector<munje> munjes;
		std::vector<int> scores;
	};
}
