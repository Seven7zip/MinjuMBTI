// MinjuMBTI.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "printio.h"
#include <iostream>
#include "types.h"
using  std::cout;
using std::cin;
using std::endl;

void prepare(std::vector<mbti::munje>& m)
{
	std::vector<mbti::hangmok> first{ {"아주 안 좋게 생각한다",-3},{"안 좋게 생각한다",-1 },{"보통이다",0},{"좋게 생각한다",1},{"매우 좋게 생각한다",3} };
	std::vector<mbti::hangmok> second{ {"0~39세",-1},{"40세 이상",1} };
	std::vector<mbti::hangmok> third{ {"매우 비동의",-3},{"비동의",-1 },{"보통",0},{"동의",1},{"매우 동의",3} };
	m.push_back({ "나는 이재명에 대해서", first,mbti::J });
	m.push_back({ "나는 문재인에 대해서",first,mbti::M });
	m.push_back({ "나는 페미니즘에 대해서",first,mbti::F });
	m.push_back({ "내 나이는?",second,mbti::U });
	m.push_back({ "나는 이재명이 민주당의 차기 당대표가 되어야 한다고 생각한다.",third,mbti::J });
	m.push_back({ "조국은 죄가 없으며, 그동안 억울하게 모함당했다.",third,mbti::M });
	m.push_back({ "민주당의 지선 패배에는 박지현의 책임이 크지 않다.",third,mbti::F });
	m.push_back({ "문재인 정부는 성공한 정부이다.",third,mbti::M });
	m.push_back({ "민주당은 앞으로 친페미니즘 노선을 확고하게 타야 한다.",third,mbti::F });
	m.push_back({ "나는 이재명이 없었다면 민주당의 운명은 지금보다 암울했을 것이라고 생각한다.",third,mbti::J });
	m.push_back({ "민주당이 이렇게 된 데에는 페-미니즘이 안 좋은 영향을 끼치지 않았다.",third,mbti::F });
	m.push_back({ "나는 민주당과 이재명 중에 하나를 선택하라고 하면 이재명을 선택할 것이다.",third,mbti::J });
	m.push_back({ "친문(NOT 뮨파)세력을 민주당에서 축출해야 한다는 주장은 부당한 주장이다.",third,mbti::M });
	m.push_back({ "페-미니즘 세력을 민주당에서 축출해야 한다는 주장은 부당한 주장이다.",third,mbti::F });
	m.push_back({ "나는 흔히 말하는 '뮨파' 라고 불리는 세력이 전혀 이해되지 않는다.",third,mbti::J });
	m.push_back({ "나는 언젠가는 꼭 양산에 있는 문재인을 찾아가서 보고 싶다.",third,mbti::M });
	m.push_back({ "우리나라의 여성 인권은 남성에 비해 아직도 많이 부족하다.",third,mbti::F });





}
void printresult(const std::vector<int>& scores)
{
	cout << "당신의 점수:" << endl;

	cout << "J:" << scores[mbti::J] << " ";
	cout << "M:" << scores[mbti::M] << " ";
	cout << "F:" << scores[mbti::F] << " ";
	cout << "U:" << scores[mbti::U] << endl;
	std::vector<std::string> resulttext(2);
	if (scores[mbti::J] > 0)
	{
		resulttext[0] += "친명 ";
		resulttext[1] += "J";
	}
	else
	{
		resulttext[0] += "반명 ";
		resulttext[1] += "N";
	}
	if (scores[mbti::M] > 0)
	{
		resulttext[0] += "친문 ";
		resulttext[1] += "M";
	}
	else
	{
		resulttext[0] += "반문 ";
		resulttext[1] += "S";
	}
		if (scores[mbti::F] > 0)
	{
		resulttext[0] += "페미 ";
		resulttext[1] += "F";
	}
	else
	{
		resulttext[0] += "반페미 ";
		resulttext[1] += "A";
	}
		if (scores[mbti::U] > 0)
	{
		resulttext[0] += "586";
		resulttext[1] += "U";
	}
	else
	{
		resulttext[0] += "청년";
		resulttext[1] += "P";
	}
		cout << "당신의 민갤MBTI는 " << resulttext[0] << "이며 " << "성향은 " << resulttext[1] << "입니다." << endl;
}
int main()
{
	cout << "민갤MBTI Ver 1.01" << endl << "위 프로그램은 GPL 라이선스에 따라 배포됩니다." << endl;
	cout << "시작하려면 엔터키를 누르시오" << endl;
	getchar();
	system("clear");
	std::vector<mbti::munje> m;
	prepare(m);
	mbti::printio p(m, 4);
	p.run();
	auto scores = p.getscores();
	printresult(scores);
	std::string chamgo = R"(------------------------------- 결과별로 추천하는 커뮤니티 -------------------------------


		더불어민주당 갤러리 JM_P
		새로운 민주당 갤러리 JSAP
		이재명 갤러리 JMAU
		인간 이재명 갤러리 JSFP
		이재명 플러스 갤러리 JMFU
		이재명의 굽은팔 갤러리 JSAP
		재명이네 마을 JMAU
		이낙연 갤러리 NMAP
		여성시대 갤러리 JSFP
		하관 갤러리 NSFP
		루리웹 NMAU)";
	cout << chamgo << endl;
	getchar();
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
