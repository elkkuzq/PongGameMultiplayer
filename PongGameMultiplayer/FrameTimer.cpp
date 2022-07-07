#include "FrameTimer.h"

FrameTimer::FrameTimer()
{
	last_mark = clock.now();
}

float FrameTimer::mark()
{
	auto t_now = clock.now();
	auto dt = std::chrono::duration<float>(t_now - last_mark).count();
	last_mark = t_now;
	return dt;
}
