#pragma once
#include "hangmok.h"
#include <vector>
#include "types.h"
namespace mbti
{
	struct munje
	{
		std::string munjename;
		std::vector<hangmok> munhangs;
		type tp;
		munje(const std::string& m, const std::vector<hangmok> mu, type t) :munjename(m), munhangs(mu), tp(t) { }
	};
}
