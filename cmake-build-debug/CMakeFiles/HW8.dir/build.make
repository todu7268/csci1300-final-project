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
include CMakeFiles\HW8.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\HW8.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\HW8.dir\flags.make

CMakeFiles\HW8.dir\vector.cpp.obj: CMakeFiles\HW8.dir\flags.make
CMakeFiles\HW8.dir\vector.cpp.obj: ..\vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW8.dir/vector.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\HW8.dir\vector.cpp.obj /FdCMakeFiles\HW8.dir\ /FS -c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\vector.cpp"
<<

CMakeFiles\HW8.dir\vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW8.dir/vector.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\HW8.dir\vector.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\vector.cpp"
<<

CMakeFiles\HW8.dir\vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW8.dir/vector.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\HW8.dir\vector.cpp.s /c "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\vector.cpp"
<<

# Object files for target HW8
HW8_OBJECTS = \
"CMakeFiles\HW8.dir\vector.cpp.obj"

# External object files for target HW8
HW8_EXTERNAL_OBJECTS =

HW8.exe: CMakeFiles\HW8.dir\vector.cpp.obj
HW8.exe: CMakeFiles\HW8.dir\build.make
HW8.exe: CMakeFiles\HW8.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HW8.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\HW8.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\HW8.dir\objects1.rsp @<<
 /out:HW8.exe /implib:HW8.lib /pdb:"C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug\HW8.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\HW8.dir\build: HW8.exe
.PHONY : CMakeFiles\HW8.dir\build

CMakeFiles\HW8.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HW8.dir\cmake_clean.cmake
.PHONY : CMakeFiles\HW8.dir\clean

CMakeFiles\HW8.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug" "C:\School\Year 1, Semester 1\CSCI 1300\.vscode\HW8\cmake-build-debug\CMakeFiles\HW8.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\HW8.dir\depend
