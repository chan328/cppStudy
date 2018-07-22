#include "stdafx.h"
#include <iostream>

namespace
{
	void SampleMethod()
	{
		std::cout << "무명 네임스페이스 내 SampleMethod 함수입니당." << std::endl;
	}
}

namespace Sample
{
	void SampleMethod()
	{
		SampleMethod(); // 무명 네임스페이스 내 SampleMethod 함수를 호출한다.
		std::cout << "> sample 네임스페이스 내 SampleMethod 함수입니다." << std::endl;
	}

	namespace nested
	{
		void SampleMethod()
		{
			std::cout << ">> nested 네임스페이스 내 SampleMthod 함수입니다." << std::endl;
		}
	}
}

int main()
{
	Sample::SampleMethod();
	Sample::nested::SampleMethod();
	SampleMethod();
	::SampleMethod();
	return 0;
}