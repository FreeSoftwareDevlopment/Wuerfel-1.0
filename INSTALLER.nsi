 Name "Wuerfel"
 OutFile " Wuerfel installer.exe"
 SetCompressor lzma
 InstallDir "$PROGRAMFILES\wuerfel"
 Icon "Wurfel.ico"
 LoadLanguageFile "${NSISDIR}\Contrib\Language files\German.nlf"
 LicenseData "License.txt"
 Page license
 Page directory
 Page instfiles
 Section
   SetOutPath $TEMP
   File "python-3.7.1.exe"
   SetOutPath $INSTDIR
   File "run.exe"
   File "noopen.py"
   File "Wurfel.ico"
   MessageBox MB_OK|MB_ICONEXCLAMATION "Sie muessen die funktion 'PYTHON IN DEN PATH EINTRAGEN' aktivieren, sonst funktioniert die Software nicht!"
   ExecWait "$TEMP\python-3.7.1.exe"
   DetailPrint "INFO: Sie finden Pyton auf www.anaconda.com und www.python.org"
   CreateShortCut "$DESKTOP\Wuerfel.lnk" "$OUTDIR\run.exe"
 SectionEnd