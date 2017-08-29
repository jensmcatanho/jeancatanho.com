namespace Logger {
	void Log(LogType, std::string, std::string);
	void DebugLog(std::string, std::string);
	void ErrorLog(std::string, std::string);
	void InfoLog(std::string, std::string);
	void SaveLog();
}