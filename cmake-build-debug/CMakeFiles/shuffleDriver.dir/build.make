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
CMAKE_SOURCE_DIR = "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\shuffleDriver.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\shuffleDriver.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\shuffleDriver.dir\flags.make

CMakeFiles\shuffleDriver.dir\shuffleDriver.cpp.obj: CMakeFiles\shuffleDriver.dir\flags.make
CMakeFiles\shuffleDriver.dir\shuffleDriver.cpp.obj: ..\shuffleDriver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/shuffleDriver.dir/shuffleDriver.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\shuffleDriver.dir\shuffleDriver.cpp.obj /FdCMakeFiles\shuffleDriver.dir\ /FS -c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\shuffleDriver.cpp"
<<

CMakeFiles\shuffleDriver.dir\shuffleDriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shuffleDriver.dir/shuffleDriver.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\shuffleDriver.dir\shuffleDriver.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\shuffleDriver.cpp"
<<

CMakeFiles\shuffleDriver.dir\shuffleDriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shuffleDriver.dir/shuffleDriver.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\shuffleDriver.dir\shuffleDriver.cpp.s /c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\shuffleDriver.cpp"
<<

# Object files for target shuffleDriver
shuffleDriver_OBJECTS = \
"CMakeFiles\shuffleDriver.dir\shuffleDriver.cpp.obj"

# External object files for target shuffleDriver
shuffleDriver_EXTERNAL_OBJECTS =

..\shuffleDriver.exe: CMakeFiles\shuffleDriver.dir\shuffleDriver.cpp.obj
..\shuffleDriver.exe: CMakeFiles\shuffleDriver.dir\build.make
..\shuffleDriver.exe: CMakeFiles\shuffleDriver.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ..\shuffleDriver.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\shuffleDriver.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\shuffleDriver.dir\objects1.rsp @<<
 /out:..\shuffleDriver.exe /implib:shuffleDriver.lib /pdb:"C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\shuffleDriver.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\shuffleDriver.dir\build: ..\shuffleDriver.exe
.PHONY : CMakeFiles\shuffleDriver.dir\build

CMakeFiles\shuffleDriver.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\shuffleDriver.dir\cmake_clean.cmake
.PHONY : CMakeFiles\shuffleDriver.dir\clean

CMakeFiles\shuffleDriver.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug\CMakeFiles\shuffleDriver.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\shuffleDriver.dir\depend
