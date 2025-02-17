#include <fstream>
#include <filesystem>
#include <cstring>
#include <string>
#include <vector>

#if defined(_WIN64) || defined (_WIN32)
#include <Windows.h>
#include <shlobj.h>
#else
#include <unistd.h>
#endif

using std::cout;
using std::endl;

#include "output.hpp"
#include "languages.hpp"

class Installer {
	void installWindows();
	void installSysVInit();
	void installLaunchd();
	void installSystemd(const string& location);
	public:
		void installStartupService(const string& sysService);
		static void installNewServerConfigFile(const string& fileLocation, const bool& skipFileCheck, const string& flags, const string& serverFile);
		static void installDefaultHajConfFile(string fileLocation, bool skipFileCheck = false, const string& lang = "en");
		//explicit Installer(std::shared_ptr<Output> log);
};

extern Installer installer;
