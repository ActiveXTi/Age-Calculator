#include <iostream>

int main()
{
	int age;
	int year;
	int month;
	int day;
	int resulty;
	int resultm;
	int resultd;
	int tomonth;
	int today;
	int toyear;

	std::cout << "당신의 생년월일을 차례대로 입력해 주세요. (년-월-일 순, 하나씩 치고 엔터)" << std::endl;
	std::cin >> year;
	std::cin >> month;
	std::cin >> day;
	std::cout << "현재의 날짜를 순서대로 입력해 주세요. (년-월-일 순, 하나씩 치고 엔터)" << std::endl	;
	std::cin >> toyear;
	std::cin >> tomonth;
	std::cin >> today;
	resulty = toyear - year;
	resultm = tomonth - month;
	resultd = today - day;
	if (resultm < 0)
		resultm = resultm + 12;
	if (resultd < 0)
		resultd = resultd + 30;

	std::cout << "당신은 " << resulty << " 년 "  << resultm << " 개월 " << resultd << " 일 동안 살아왔습니다." << std::endl;
	return 0;	
}
