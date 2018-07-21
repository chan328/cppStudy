#include "stdafx.h"
#include <iostream>

using std::cout; // 표준 라이브러리에서 제공하는 cout 변수를 사용함을 선언한다.
using std::endl; // endl 변수의 사용을 선언한다.

int main()
{
	cout << "Hello World!" << std::endl; 
	cout << "Hello " "World" << endl; // 위에서 using 선언문을 사용하였다면 옆의 경우처럼 std 네임스페이스를 사용하지 않아도 사용이 가능해진다.
}