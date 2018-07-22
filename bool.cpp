#include "stdafx.h"
#include<iostream>

void Print_int(int x)
{
	printf("%d의 인수는 %s 입니다.\n", x, (x)? "참":"거짓");
}

//bool 타입의 인수를 사용한다.
void Print_bool(bool x)
{
	std::cout << x << "인수는" << (x ? "참" : "거짓") << "입니다." << std::endl;

	//std::boolalpha는 화면 출력 시 1과 0이 아닌 true 와 false의 문자로 만들어 주는
	//기능을 한다.
	std::cout << "bool 타입의 데이터는 " << std::boolalpha << x << "와" << !x
		<< "로 표시할 수 있습니다." << std::endl;
}

int main()
{
	bool ok = true;
	bool notok = false;

	Print_int(100);
	Print_bool(ok);

	// 화면에 true와 false를 해제하려면 다음과 같이 std::noboolalpha를 사용한다.
	std::cout << notok << ' ' << std::noboolalpha << notok << std::endl;

	// 상수를 사용하지 않는다면 다음과 같이 함수를 사용할 수 있다.
	std::boolalpha(std::cout);
	std::cout << notok << std::endl;

	// 만약 입력 스트림을 통해 입력된 문자열(true 또는 false)을 변수에 bool 
	// 타입의 데이터로 입력받고 자 한다면 다음과 같이 작업을 하면 된다.
	bool istrue;
	std::cin >> std::boolalpha >> istrue;
	std::cout << istrue << " = " << (istrue == true) << std::endl;
}