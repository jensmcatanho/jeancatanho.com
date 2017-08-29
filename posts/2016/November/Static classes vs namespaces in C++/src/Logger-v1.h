class Logger {
	public:
		static void StartLog();
		static void Log(LogType, std::string, std::string);
		static void DebugLog(std::string, std::string);
		static void ErrorLog(std::string, std::string);
		static void InfoLog(std::string, std::string);
		static void SaveLog();
	private:
		static std::stringstream m_Log;
		std::chrono::time_point<std::chrono::system_clock> m_StartTime;

		std::chrono::time_point<std::chrono::system_clock> CurrentTime();
		std::string DateString();
};