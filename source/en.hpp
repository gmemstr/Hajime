help.push_back("\033[1mWelcome to Hajime, the ultimate Minecraft server startup script!\033[0m");
help.push_back("This version of Hajime was compiled on " __DATE__ ".");
help.push_back("\033[1m\033[32mUsage:\033[0m ");
help.push_back(" [the following flags]"); //1 and 2 sandwich a variable
help.push_back("\033[1m-f \033[3mfile\033[0m or \033[1m--server-file \033[3mfile \033[0m\033[1m|\033[0m Specify a server configuration file to use manually.");
help.push_back("\033[1m-h \033[0mor\033[1m --help |\033[0m Show this help message.");
help.push_back("\033[1m-hf \033[1m\033[3mfile \033[0mor\033[1m --hajime-file\033[0m \033[1m\033[3mfile \033[0m\033[1m|\033[0mManually specify the configuration file that Hajime uses.");
help.push_back("\033[1m-s  \033[0mor\033[1m --install-server \033[1m|\033[0m Create a default server configuration file.");
help.push_back("\033[1m-ih \033[1m\033[3mfile \033[0mor\033[1m --install-hajime-config \033[1m\033[3mfile \033[0m\033[1m|\033[0m Install the default Hajime configuration file.");
help.push_back("\033[1m-S  \033[0mor\033[1m --install-service \033[1m|\033[0m Install a startup service file for your platform to start Hajime automatically.");
help.push_back("\033[1m-ss \033[0mor\033[1m --install-servers-file \033[1m|\033[0m Install a server listing file.");
help.push_back("\033[1m-v \033[0mor\033[1m --verbose \033[1m|\033[0m Enable verbose logs.");
help.push_back("\033[1m-i \033[0mor\033[1m --install-hajime \033[1m|\033[0m Run the Hajime installation wizard.");
help.push_back("\033[1m-m \033[0mor\033[1m --monochrome \033[0mor\033[1m --no-colors \033[1m|\033[0m Disable color output.");
help.push_back("\033[1m-d \033[0mor\033[1m --debug \033[1m|\033[0m Enable debug messages.");
help.push_back("\033[1m-l \033[0mor\033[1m --language \033[1m|\033[0m Manually choose a language to use.");
help.push_back("\033[1m-np \033[0mor\033[1m --no-pauses \033[1m|\033[0m Disable artifical pauses.");
help.push_back("\033[1m-tc \033[0mor\033[1m --thread-colors \033[1m|\033[0m Show colors by thread ID instead of message type.");
help.push_back("\033[1m-it \033[0mor\033[1m --show-info-type \033[1m|\033[0m Explicitly display the type of information in log messages.");
help.push_back("\033[1m\033[32mNeed more help?\033[0m Join our Discord group at https://discord.gg/J6asnc3pEG");
errnoNotPermitted = "Not permitted. Is the device correct?";
errnoNoFileOrDir = "No such file or directory.";
errnoPermissionDenied = "Permission denied. Is Hajime being run under root?";
errnoInOut = "Input/output error. Is the drive OK?";
errnoMemory = "Not enough memory. Is there a shortage of it?";
errnoUnavailable = "Resource unavailable.";
errnoAddress = "Bad address.";
errnoBlockDev = "Not a block device. Did you make sure you're mounting a mass storage device?";
errnoBusy = "Busy. Is the device being accessed right now?";
errnoDirectory = "It's a directory. Did you make sure you're mounting a mass storage device?";
errnoBadArgs = "Bad arguments. Is the configuration set correctly?";
errnoUnknownDev = "Unknown device. Is the filesystem supported?";
errnoUnknownGeneric = "Unknown error.";
prefixInfo = "*";
prefixError = "X";
prefixWarning = "!";
prefixDebug = "+";
prefixVInfo = "Info";
prefixVError = "Error";
prefixVWarning = "Warning";
prefixVDebug = "Debug";
prefixVQuestion = "Question";
prefixQuestion = "?";
errorNotEnoughArgs = "Not enough arguments provided";
errorConfDoesNotExist1 = "Config file ";
errorConfDoesNotExist2 = " doesn't exist!";
errorNoHajimeConfig = "Default Hajime config file not found";
errorStartupServiceWindowsAdmin = "You need to run Hajime as the administrator to install a startup service.";
errorSystemdRoot = "You need to be the root user to install a systemd service";
errorNoSystemd = "Looks like there is no systemd; use another installation option instead.";
errorServersFilePresent = "Servers file already present!";
errorServerFileNotPresent1 = "The server's config file (";
errorServerFileNotPresent2 = ") doesn't exist";
errorServersFileNotCreated = "Servers file not created";
errorCouldntSetPath = "Couldn't set the path.";
errorGeneric = "Whoops! An unknown error occurred.";
errorMethodNotValid = "The method isn't a valid type";
errorCreatingDirectory = "Error creating directory!";
errorFilesInPath = "There are files in the path";
errorNoServersFile = "No servers file found";
errorMount = "An error occurred, but the script will keep trying to mount. Error: ";
errorCode = "Error code: ";
errorHajFileNotMade = "Hajime config file not created";
errorServerConfNotCreated = "Server config file not created";
errorOptionNotAvailable = "Sorry, this option isn't available yet.";
errorInvalidServerNumber = "Invalid server number";
errorServerSelectionInvalid = "Server selection invalid";
errorDoesntSupportWindows = "Windows doesn't support this feature.";
errorInvalidCommand = "Invalid command; list of valid commands:";
errorInvalidHajCommand1 = "term, t [server] | attach to server";
errorInvalidServerCommand1 = ".d - detach from server";
warningFoundSysvinitService = "Found a sysVinit service already installed";
warningFoundSystemdService = "Found an existing systemd service";
warningIsRunningFalse = "isRunning is now false";
warningTestingWindowsSupport = "Testing Windows support!";
warningLaunchdServPresent = "Found an existing launchd service";
warningFoundServerConf = "Found an existing server configuration file";
warningFoundServerConfPlusFile = "Found an existing server file with name ";
warningFoundHajConf = "Hajime config file already present!";
questionMakeLaunchdServ = "Would you like to make a new one anyway?";
questionPrompt = "[y/n]";
questionMakeHajimeConfig = "Would you like to make the Hajime config file?";
questionMakeServerConfig = "Would you like to create a new configuration file anyway?";
questionMakeNewSysvinitService = "Would you like to install a new sysVinit service?";
questionWizardServersFile = "Do you want to install it now?";
questionWizardServerFile = "Do you want to make a server file now?";
questionWizardStartupService = "Do you want to install a startup service?";
questionSysvinitUser = "Please enter the USER you want Hajime to run under. ";
questionSysvinitGroup = "Please enter the GROUP of the user you entered. ";
questionDoSetupInstaller = "It looks like it's your first time using Hajime. Do you want to do the setup installer?";
questionStartHajime = "Do you want to start Hajime now? Enter \"n\" to exit.";
questionUseFlags = "Would you like to apply Aikar's Flags to the server?";
questionInstallNewOne = "Do you want to install a new one?";
questionInstallNewOneAgain = "Do you want to try creating one again?";
questionCreateAnotherServerFile = "Do you want to create another server file?";
questionApplyConfigToServerFile = "Would you like to apply a configuration to the server file?";
questionUseDefaultServerFile1 = "Would you like to use the default server file (";
questionUseDefaultServerFile2 = ") or something else?";
questionEnterNewServerFile = "Enter a new server file: ";
optionMakeServerFileManually = "Enter a server file manually";
optionDoManually = "Do it manually";
optionEnterManually = "Enter it manually";
optionLetHajimeDeduce = "Let Hajime deduce it for me";
optionSkipStep = "Skip this step";
optionUseDefault = "Use the default";
optionChooseOptionBelow = "Choose an option below.";
optionYourChoice = "Your choice: ";
optionAttendedInstallation = "Do an attended installation";
optionUnattendedInstallation = "Do an unattended installation";
optionSkipSetup = "Skip setup";
infoInstallingSysvinit = "Installing sysVinit service";
infoInstallingNewSysvinit = "Installing new sysVinit service";
infoInstalledSysvinit = "Installed sysVinit service at /etc/init.d/hajime.sh";
infoCreatedServerConfig1 = "The config file (";
infoCreatedServerConfig2 = ") has been created";
infoAbortedSysvinit = "Aborting sysVinit service installation";
infoNoLogFile = "No log file to be made; sending messages to console.";
infoReadingServerSettings = "Reading server settings...";
infoServerFile = "Server file: ";
infoServerPath = "Server path: ";
infoServerCommand = "Server command: ";
infoServerMethod =  "Server start method: ";
infoServerDevice = "Device: ";
infoServerDebug = "Debug value: ";
infoServerIsRunning = "Program is running!";
infoTryingToStartProgram = "Trying to start program";
infoStartingServer = "Starting server!";
infoServerStartCompleted = "Program start completed";
infoPOSIXdriveMount = "Drive mounting is only needed on POSIX systems";
infoTryingFilesystem1 = "Trying ";
infoTryingFilesystem2 = " filesystem";
infoTryingMount = "Trying to mount";
infoCreatingDirectory = "Making a new directory";
infoNoMount = "No device requested; no mounting this time!";
infoDeviceMounted = "Device mounted!";
infoWizardHajimeFile = "Let's start with creating the file that Hajime will use for its basic settings.";
infoWizardServersFile = "Next, we'll need to install the \"servers file,\" or where Hajime looks for servers to start up.";
infoWizardServerFile = "Now we need a server file to define one of your servers to run.";
infoWizardStartupService = "Finally, we need to make Hajime start upon the host booting.";
infoWizardComplete = "Setup complete!";
infoWizardNextStepServerFile1 = "Next Steps: Enter your server settings in ";
infoWizardNextStepServerFile2 = ".";
infoInstallingDefServConf = "Installing default server config file at ";
infoInstallingNewServConf = "Installing a new server config file with name ";
infoInstallingDefHajConf = "Installing default Hajime config file ";
infoCheckingExistingFile = "Checking for existing file...";
infoHajConfigMade1 = "Hajime config file (";
infoHajConfigMade2 = ") made!";
infoInstallingWStartServ = "Installing Windows startup service";
infoTipAdministrator = "Tip: Right click the terminal icon and then click \"Run as administrator\"";
infoInstallingLaunchdServ = "Installing launchd service";
infoInstallingNewLaunchdServ = "Installing new launchd service";
infoInstalledLaunchServ = "Installed launchd service";
infoAbortedLaunchServ = "Aborted launchd service installation";
infoInstallingServersFile = "Installing default servers file at ";
infoCheckingExistingServersFile = "Checking for existing file...";
infoMadeServersFile = "Servers file made!";
infoMakingSystemdServ = "Making a systemd service at ";
infoEnterNewNameForServer1 = "Enter a new name for the next server file (the previous one was ";
infoEnterNewNameForServer2 = "): \033[1m";
infoEnterCommand = "Enter a command...";
debugHajDefConfNoExist1 = "Tried to read settings from ";
debugHajDefConfNoExist2 = " but it doesn't exist";
debugReadingReadsettings = "Reading settings at readSettings()";
debugReadReadsettings = "Successfully read settings from ";
debugFlagVecInFor = "flagVector[0] in For loop =";
debugFlagVecOutFor = "flagVector[0] outside of For loop =";
debugUsingOldMethod = "Using the old method";
debugUsingNewMethod = "Using the new method";
debugFlags = "Flags =";
debugFlagArray0 = "flagArray[0] =";
debugFlagArray1 = "flagArray[1] =";
debugValidatingSettings = "Checking the server's settings";
fileServerConfComment = "# Anything after a # is a comment.";
