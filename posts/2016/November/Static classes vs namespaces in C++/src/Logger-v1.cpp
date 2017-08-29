#include "Logger.h"

std::stringstream Logger::m_Log;
std::chrono::time_point<std::chrono::system_clock> Logger::m_StartTime;

void Logger::Log(LogType, std::string, std::string) { /*...*/ }
void Logger::DebugLog(std::string, std::string) { /*...*/ }
void Logger::ErrorLog(std::string, std::string) { /*...*/ }
void Logger::InfoLog(std::string, std::string) { /*...*/ }
void Logger::SaveLog() { /*...*/ }

std::chrono::time_point<std::chrono::system_clock> Logger::CurrentTime() { /*...*/ }
std::string Logger::DateString() { /*...*/ }
