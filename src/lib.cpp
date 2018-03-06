#include "lib.h"
#include <chrono>
#include <thread>

namespace SomeLibrary
{

int add(int a, int b)
{
	return a + b;
}

int slow_add(int a, int b)
{
	std::this_thread::sleep_for(std::chrono::seconds(1));
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

} // namespace SomeLibrary
