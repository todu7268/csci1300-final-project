# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\cmake-build-debug-visual-studio"

# Include any dependencies generated for this target.
include CMakeFiles\TimeServer.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\TimeServer.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\TimeServer.dir\flags.make

CMakeFiles\TimeServer.dir\MainMenu.cpp.obj: CMakeFiles\TimeServer.dir\flags.make
CMakeFiles\TimeServer.dir\MainMenu.cpp.obj: ..\MainMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\cmake-build-debug-visual-studio\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TimeServer.dir/MainMenu.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TimeServer.dir\MainMenu.cpp.obj /FdCMakeFiles\TimeServer.dir\ /FS -c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\MainMenu.cpp"
<<

CMakeFiles\TimeServer.dir\MainMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeServer.dir/MainMenu.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\TimeServer.dir\MainMenu.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\MainMenu.cpp"
<<

CMakeFiles\TimeServer.dir\MainMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeServer.dir/MainMenu.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TimeServer.dir\MainMenu.cpp.s /c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\MainMenu.cpp"
<<

CMakeFiles\TimeServer.dir\Map.cpp.obj: CMakeFiles\TimeServer.dir\flags.make
CMakeFiles\TimeServer.dir\Map.cpp.obj: ..\Map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\cmake-build-debug-visual-studio\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TimeServer.dir/Map.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TimeServer.dir\Map.cpp.obj /FdCMakeFiles\TimeServer.dir\ /FS -c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Map.cpp"
<<

CMakeFiles\TimeServer.dir\Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeServer.dir/Map.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\TimeServer.dir\Map.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Map.cpp"
<<

CMakeFiles\TimeServer.dir\Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeServer.dir/Map.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TimeServer.dir\Map.cpp.s /c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Map.cpp"
<<

CMakeFiles\TimeServer.dir\Players.cpp.obj: CMakeFiles\TimeServer.dir\flags.make
CMakeFiles\TimeServer.dir\Players.cpp.obj: ..\Players.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\cmake-build-debug-visual-studio\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TimeServer.dir/Players.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TimeServer.dir\Players.cpp.obj /FdCMakeFiles\TimeServer.dir\ /FS -c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Players.cpp"
<<

CMakeFiles\TimeServer.dir\Players.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeServer.dir/Players.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\TimeServer.dir\Players.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Players.cpp"
<<

CMakeFiles\TimeServer.dir\Players.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeServer.dir/Players.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TimeServer.dir\Players.cpp.s /c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Players.cpp"
<<

CMakeFiles\TimeServer.dir\NPCs.cpp.obj: CMakeFiles\TimeServer.dir\flags.make
CMakeFiles\TimeServer.dir\NPCs.cpp.obj: ..\NPCs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\cmake-build-debug-visual-studio\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/TimeServer.dir/NPCs.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TimeServer.dir\NPCs.cpp.obj /FdCMakeFiles\TimeServer.dir\ /FS -c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\NPCs.cpp"
<<

CMakeFiles\TimeServer.dir\NPCs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeServer.dir/NPCs.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\TimeServer.dir\NPCs.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\NPCs.cpp"
<<

CMakeFiles\TimeServer.dir\NPCs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeServer.dir/NPCs.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TimeServer.dir\NPCs.cpp.s /c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\NPCs.cpp"
<<

CMakeFiles\TimeServer.dir\Cars.cpp.obj: CMakeFiles\TimeServer.dir\flags.make
CMakeFiles\TimeServer.dir\Cars.cpp.obj: ..\Cars.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\cmake-build-debug-visual-studio\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/TimeServer.dir/Cars.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TimeServer.dir\Cars.cpp.obj /FdCMakeFiles\TimeServer.dir\ /FS -c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Cars.cpp"
<<

CMakeFiles\TimeServer.dir\Cars.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeServer.dir/Cars.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\TimeServer.dir\Cars.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Cars.cpp"
<<

CMakeFiles\TimeServer.dir\Cars.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeServer.dir/Cars.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TimeServer.dir\Cars.cpp.s /c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Cars.cpp"
<<

CMakeFiles\TimeServer.dir\Leaderboard.cpp.obj: CMakeFiles\TimeServer.dir\flags.make
CMakeFiles\TimeServer.dir\Leaderboard.cpp.obj: ..\Leaderboard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\cmake-build-debug-visual-studio\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/TimeServer.dir/Leaderboard.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TimeServer.dir\Leaderboard.cpp.obj /FdCMakeFiles\TimeServer.dir\ /FS -c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Leaderboard.cpp"
<<

CMakeFiles\TimeServer.dir\Leaderboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeServer.dir/Leaderboard.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\TimeServer.dir\Leaderboard.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Leaderboard.cpp"
<<

CMakeFiles\TimeServer.dir\Leaderboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeServer.dir/Leaderboard.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TimeServer.dir\Leaderboard.cpp.s /c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\Leaderboard.cpp"
<<

# Object files for target TimeServer
TimeServer_OBJECTS = \
"CMakeFiles\TimeServer.dir\MainMenu.cpp.obj" \
"CMakeFiles\TimeServer.dir\Map.cpp.obj" \
"CMakeFiles\TimeServer.dir\Players.cpp.obj" \
"CMakeFiles\TimeServer.dir\NPCs.cpp.obj" \
"CMakeFiles\TimeServer.dir\Cars.cpp.obj" \
"CMakeFiles\TimeServer.dir\Leaderboard.cpp.obj"

# External object files for target TimeServer
TimeServer_EXTERNAL_OBJECTS =

..\TimeServer.exe: CMakeFiles\TimeServer.dir\MainMenu.cpp.obj
..\TimeServer.exe: CMakeFiles\TimeServer.dir\Map.cpp.obj
..\TimeServer.exe: CMakeFiles\TimeServer.dir\Players.cpp.obj
..\TimeServer.exe: CMakeFiles\TimeServer.dir\NPCs.cpp.obj
..\TimeServer.exe: CMakeFiles\TimeServer.dir\Cars.cpp.obj
..\TimeServer.exe: CMakeFiles\TimeServer.dir\Leaderboard.cpp.obj
..\TimeServer.exe: CMakeFiles\TimeServer.dir\build.make
..\TimeServer.exe: CMakeFiles\TimeServer.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\cmake-build-debug-visual-studio\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable ..\TimeServer.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\TimeServer.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\TimeServer.dir\objects1.rsp @<<
 /out:..\TimeServer.exe /implib:TimeServer.lib /pdb:"C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\TimeServer.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\TimeServer.dir\build: ..\TimeServer.exe
.PHONY : CMakeFiles\TimeServer.dir\build

CMakeFiles\TimeServer.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TimeServer.dir\cmake_clean.cmake
.PHONY : CMakeFiles\TimeServer.dir\clean

CMakeFiles\TimeServer.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\cmake-build-debug-visual-studio" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\cmake-build-debug-visual-studio" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\Project 3\cmake-build-debug-visual-studio\CMakeFiles\TimeServer.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\TimeServer.dir\depend

