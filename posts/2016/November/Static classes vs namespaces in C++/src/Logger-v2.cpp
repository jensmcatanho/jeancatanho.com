#include "Logger.h"

namespace Logger {
	namespace {
		std::stringstream m_Log;
		std::chrono::time_point<std::chrono::system_clock> m_StartTime;

		std::chrono::time_point<std::chrono::system_clock> CurrentTime() { /*...*/ }
		std::string DateString() { /*...*/ }
	}

	void Log(LogType, std::string, std::string) { /*...*/ }
	void DebugLog(std::string, std::string) { /*...*/ }
	void ErrorLog(std::string, std::string) { /*...*/ }
	void InfoLog(std::string, std::string) { /*...*/ }
	void SaveLog() { /*...*/ }
}
