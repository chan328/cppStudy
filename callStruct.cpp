#include "stdafx.h"
#include <iostream>

struct Something
{
	static int s_value; // 정적 멤버 변수를 선언함.
	static int getSValue() { return s_value; } // 정적 멤버 함수를 정의한다.

	int value; // 일반 멤버 변수를 선언함.
	int getValue() { return value; } // 일반 멤버 함수를 정의한다.
};

// 아래는 정적 맴버 변수를 초기화시킬 때 다음처럼 범위 확인 연산자를 사용한다.
int Something::s_value = 1;

int main()
{
	std::cout << Something::getSValue() << std::endl;

	// 정적 멤버 변수가 아닌 구조체의 일반 멤버 변수는 구조체의 타입의 변수 선언과 함께
	// value 멤버 변수를 다음과 같이 초기화 시킬 수 있다.
	Something s = { 100 };

	// 정적 멤버 함수든 일반 멤버 함수든 무관하게 함수의 호출은 다음과 같다.
	std::cout << s.getSValue() << " , " << s.getSValue() << std::endl;
}