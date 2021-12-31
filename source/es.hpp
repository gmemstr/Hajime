help.push_back("\033[1m¡Bienvenido a Hajime, el programa definitivo para el encendido de servidores de Minecraft!\033[0m");
help.push_back("Esta versión de Hajime fue compilada esta fecha: " __DATE__ ".");
help.push_back("\033[1m\033[32mUso:\033[0m ");
help.push_back(" [los siguientes indicadores]");
help.push_back("\033[1m-f \033[3marchivo\033[0m o \033[1m--server-file \033[3marchivo \033[0m\033[1m|\033[0m Especificar un archivo para usar.");
help.push_back("\033[1m-h \033[0mo\033[1m --help |\033[0m Mostrar este mensaje de ayuda.");
help.push_back("\033[1m-hf \033[1m\033[3marchivo \033[0mo\033[1m --hajime-file\033[0m \033[1m\033[3marchivo \033[0m\033[1m|\033[0mEspecificar el archivo de configuración que usa Hajime.");
help.push_back("\033[1m-s  \033[0mu\033[1m --install-server \033[1m|\033[0m Crear un archivo estándar para la configuración de un servidor.");
help.push_back("\033[1m-ih \033[1m\033[3marchivo \033[0mu\033[1m --install-hajime-config \033[1m\033[3marchivo \033[0m\033[1m|\033[0m Instalar el archivo estándar que usa Hajime.");
help.push_back("\033[1m-S  \033[0mu\033[1m --install-service \033[1m|\033[0m Instalar un archivo de encendido para empezar Hajime.");
help.push_back("\033[1m-ss \033[0mu\033[1m --install-servers-file \033[1m|\033[0m Instalar un archivo para apuntar los servidores.");
help.push_back("\033[1m-v \033[0mo\033[1m --verbose \033[1m|\033[0m Activar los registros verbosos.");
help.push_back("\033[1m-i \033[0mu\033[1m --install-hajime \033[1m|\033[0m Procesar el asistente de instalación de Hajime.");
help.push_back("\033[1m-m \033[0mo\033[1m --monochrome \033[0mor\033[1m --no-colors \033[1m|\033[0m Desactivar los colores de los registros.");
help.push_back("\033[1m-d \033[0mo\033[1m --debug \033[1m|\033[0m Activar los registros de depurar.");
help.push_back("\033[1m-l \033[0mo\033[1m --language \033[1m|\033[0m Escoger el lenguaje que usará Hajime.");
help.push_back("\033[1m-np \033[0mo\033[1m --no-pauses \033[1m|\033[0m Desactivar las pausas artificiales.");
help.push_back("\033[1m-tc \033[0mo\033[1m --thread-colors \033[1m|\033[0m Fijar los colores por la identificación de los threads en lugar del tipo del mensaje.");
help.push_back("\033[1m-it \033[0mo\033[1m --show-info-type \033[1m|\033[0m Fijar el tipo de información en los registros explícitamente.");
help.push_back("\033[1m\033[32m¿Necesitas más ayuda?\033[0m Únete nuestro grupo de Discord aquí: https://discord.gg/J6asnc3pEG");
errnoNotPermitted = "No es permitido. ¿Es correcto el aparato?";
errnoNoFileOrDir = "No hay ese tipo de archivo ni directorio.";
errnoPermissionDenied = "No tiene el permiso necesario. ¿Estás ejecutando Hajime como el usuario root?";
errnoInOut = "Error de entra/salida. ¿Está OK el lector?";
errnoMemory = "No hay suficiente memoria.";
errnoUnavailable = "El recurso no está disponible.";
errnoAddress = "La dirección está mala.";
errnoBlockDev = "No es un dispositivo de bloques. ¿Estás accediendo un dispositivo de almacenamiento masivo?";
errnoBusy = "Está ocupado. ¿Se está accediendo ahora mismo?";
prefixVInfo = "Info";
prefixVError = "Error";
prefixVWarning = "Aviso";
prefixVDebug = "Depurar";
#if defined(_WIN64) || defined (_WIN32)
prefixVQuestion = "Pregunta"; //Windows doesn't support 24 bit terminal colors
#else
prefixVQuestion = "Pregunta";
#endif
errorNotEnoughArgs = "No hay suficientes argumentos";
errorConfDoesNotExist1 = "¡El archivo de configuración ";
errorConfDoesNotExist2 = " no existe!";
errorNoHajimeConfig = "Archivo estándar de configuation de Hajime no existe";
errorStartupServiceWindowsAdmin = "Hay que ejecutar Hajime como el administrador para que instale el servicio de encendido.";
errorSystemdRoot = "Hay que ejecutar Hajime como el user root para que instale un servicio de systemd.";
errorNoSystemd = "Parece que no haya ningún sistema de encendido compatible";
errorServersFilePresent = "¡Hay un archivo de servidor ya!";
errorServerFileNotPresent1 = "El archivo de configuración para el servidor (";
errorServerFileNotPresent2 = ") no existe";
errorServersFileNotCreated = "No se creyó el archivo de configuración para servidores";
errorCouldntSetPath = "No pudo cambiar la dirección";
errorGeneric = "Ocurrió un error desconocido.";
errorMethodNotValid = "El método no es válido";
errorCreatingDirectory = "Error al crear el directorio";
errorFilesInPath = "Hay archivos en la dirección";
errorNoServersFile = "No hay nada archivo de servidor";
errorMount = "Ocurrió un error, pero Hajime tratará a continuar. El error: ";
errorCode = "Número del error: ";
errorHajFileNotMade = "No se creyó el archivo de configuración para Hajime";
errorServerConfNotCreated = "No se creyó el archivo de configuración para el servidor";
errorOptionNotAvailable = "Disculpa, esta opción no todavía está disponible.";
errorInvalidServerNumber = "Número de servidor inválido";
errorServerSelectionInvalid = "Selección de servidor inválida";
errorDoesntSupportWindows = "Esta característica no es compatible con Windows";
errorInvalidCommand = "Comando inválido; lista de comandos válidos:";
errorInvalidHajCommand1 = "term, t [servidor] | conectar al servidor";
errorInvalidServerCommand1 = ".d - desconectar del servidor";
warningFoundSysvinitService = "Encontró un servicio de sysVinit instalado ya";
warningFoundSystemdService = "Encontró un servicio de systemd instalado ya";
warningIsRunningFalse = "isRunning está falso ahora";
warningTestingWindowsSupport = "¡Está probando ser compatible con Windows!";
warningLaunchdServPresent = "Encontró un servicio de launchd";
warningFoundServerConf = "¡Hay un archivo de configuración aquí!";
warningFoundServerConfPlusFile = "Hay un archivo de servidor con el nombre ";
warningFoundHajConf = "¡Hay un archivo de configuración para Hajime aquí!";
questionMakeLaunchdServ = "¿Te gustaría crear un archivo de configuración para launchd de todas maneras?";
questionPrompt = "[s/n]";
questionMakeHajimeConfig = "Parece que no haya un archivo de configuración para Hajime. ¿Te gustaría crearlo?";
questionMakeServerConfig = "¿Te gustaría crear un nuevo archivo de configuración de todas formas?";
questionMakeNewSysvinitService = "¿Te gustaría instalar un nuevo servicio de sysVinit?";
questionWizardServersFile = "¿Te gustaría instalarlo ahora?";
questionWizardServerFile = "¿Te gustaría hacer el archivo del servidor ahora?";
questionWizardStartupService = "¿Te gustaría instalar un servicio de encendido ahora?";
questionSysvinitUser = "Por favor, pon el USER que usará Hajime. ";
questionSysvinitGroup = "Por favor, pon el GRUPO del user. ";
questionDoSetupInstaller = "Parece que no has ejecutado Hajime ya. ¿Te gustaría hacer el asistente de instalación?";
questionUseFlags = "¿Te gustaría usar Aikar's Flags con el servidor?";
questionInstallNewOne = "¿Te gustaría instalarlo?";
questionInstallNewOneAgain = "¿Te gustaría instalarlo otra vez?";
questionCreateAnotherServerFile = "¿Te gustaría crear otro archivo de servidor?";
questionStartHajime = "¿Te gustía ejecutar Hajime ahora? Pon \"n\" para exitar.";
questionApplyConfigToServerFile = "¿Te gustaría hacer una configuración para el archivo del servidor?";
questionUseDefaultServerFile1 = "¿Te gustaría usar el archivo estándar del servidor (";
questionUseDefaultServerFile2 = ") u otra cosa?";
questionEnterNewServerFile = "Pon un archivo nuevo para el servidor: ";
optionMakeServerFileManually = "Poner un archivo de servidor manualmente";
optionDoManually = "Hacerlo manualmente";
optionEnterManually = "Ponerlo manualmente";
optionLetHajimeDeduce = "Dejar Hajime deducirlo para mí";
optionSkipStep = "Faltar a este paso";
optionUseDefault = "Usar el estándar";
optionChooseOptionBelow = "Elige una opción abaja.";
optionYourChoice = "Tu selección: ";
optionAttendedInstallation = "Hacer una instalación con supervisión";
optionUnattendedInstallation = "Hacer una instalación sin supervisión";
optionSkipSetup = "Faltar a esta instalación";
infoInstallingSysvinit = "Se está instalando el servicio de sysVinit";
infoInstallingNewSysvinit = "Se está instalando un nuevo servicio de sysVinit";
infoInstalledSysvinit = "Instaló el servicio de sysVinit en /etc/init.d/hajime.sh";
infoCreatedServerConfig1 = "El archivo de configuración (";
infoCreatedServerConfig2 = ") se ha creado";
infoAbortedSysvinit = "Se terminó la instalación de un servicio de sysVinit";
infoNoLogFile = "No hay nada archivo de registros; está poniendo los registros al terminal.";
infoReadingServerSettings = "Está leyendo las configuraciones del servidor...";
infoServerFile = "Archivo del servidor: ";
infoServerPath = "Dirección del servidor: ";
infoServerCommand = "Comando del servidor: ";
infoServerMethod =  "Método del encendido del servidor: ";
infoServerDevice = "Dispositivo: ";
infoServerDebug = "Número de depurar: ";
infoServerIsRunning = "¡Está ejecutando el programa!";
infoTryingToStartProgram = "Está tratando a ejecutar el programa";
infoStartingServer = "¡Está ejecutando el servidor!";
infoServerStartCompleted = "Está completado el encendido del servidor";
infoPOSIXdriveMount = "Hay que montar con los sistemas de POSIX solamente";
infoTryingFilesystem1 = "Está probando el sistema de archivo ";
infoTryingFilesystem2 = "";
infoTryingMount = "Está tratando a montar";
infoCreatingDirectory = "Está creando un nuevo directorio";
infoNoMount = "No hay nada aparato; ¡no tiene que montar!";
infoDeviceMounted = "¡Está montado el aparato!";
infoWizardHajimeFile = "Empezamos hacer el archivo que usará Hajime para las configuraciones básicas.";
infoWizardServersFile = "Entonces, necesitamos instalar el \"archivo de servidores,\" donde Hajime buscará los servidores.";
infoWizardServerFile = "Necesitamos un archivo de servidor para las configuraciones de un servidor.";
infoWizardStartupService = "Finalmente, necesitamos ejecutar Hajime cuando enciende el SO.";
infoWizardComplete = "¡Está completada la configuración!";
infoWizardNextStepServerFile1 = "El Próximo Paso: Poner las configuraciones del servidor en ";
infoInstallingDefServConf = "Está instalando un archivo estándar para el servidor de configuración en ";
infoInstallingNewServConf = "Está instalando un nuevo archivo de configuración para el servidor con el nombre ";
infoInstallingDefHajConf = "Está instalando un archivo estándar de configuración para Hajime ";
infoCheckingExistingFile = "Está buscando archivos actuales...";
infoHajConfigMade1 = "¡El archivo de configuración para Hajime (";
infoHajConfigMade2 = ") se ha creado!";
infoInstallingWStartServ = "Está instalando un servicio de encendido para Windows";
infoTipAdministrator = "Consejo: Haz clic derecho el ícono del terminal y haz clic \"Run as administrator\"";
infoInstallingLaunchdServ = "Está instalando un servicio de encendido para launchd";
infoInstallingNewLaunchdServ = "Está instalando un nuevo servicio de encendido para launchd";
infoInstalledLaunchServ = "Instaló un servicio para launchd";
infoAbortedLaunchServ = "Terminó la instalación del servicio para launchd";
infoInstallingServersFile = "Está instalando el archivo de servidores en ";
infoCheckingExistingServersFile = "Está buscando archivos actuales de servidores...";
infoMadeServersFile = "¡Instaló el archivo de servidores!";
infoMakingSystemdServ = "Está haciendo un servicio de systemd en ";
infoEnterNewNameForServer1 = "Elige un nuevo nombre para el próximo arhcivo del servidor (el anterior fue ";
infoEnterCommand = "Pon un comando...";
debugHajDefConfNoExist1 = "Intentó leer las configuraciones de ";
debugHajDefConfNoExist2 = " pero el archivo no existe";
debugReadingReadsettings = "Está leyendo las configuraciones en readSettings()";
debugReadReadsettings = "Leyó las configuraciones con éxito del archivo ";
debugFlagVecInFor = "flagVector[0] en el bucle For =";
debugFlagVecOutFor = "flagVector[0] afuera el bucle For =";
debugUsingOldMethod = "Está usando el método viejo";
debugUsingNewMethod = "Está usando el nuevo método";
debugValidatingSettings = "Está verificando las configuraciones del servidor";
fileServerConfComment = "# Todo que sigue un # es un comentario.";
