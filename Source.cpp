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

	std::cout << "����� ��������� ���ʴ�� �Է��� �ּ���. (��-��-�� ��, �ϳ��� ġ�� ����)" << std::endl;
	std::cin >> year;
	std::cin >> month;
	std::cin >> day;
	std::cout << "������ ��¥�� ������� �Է��� �ּ���. (��-��-�� ��, �ϳ��� ġ�� ����)" << std::endl	;
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

	std::cout << "����� " << resulty << " �� "  << resultm << " ���� " << resultd << " �� ���� ��ƿԽ��ϴ�." << std::endl;
	return 0;	
}
