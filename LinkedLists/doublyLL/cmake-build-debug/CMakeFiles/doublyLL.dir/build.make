# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\brenr\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\brenr\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/doublyLL.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/doublyLL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/doublyLL.dir/flags.make

CMakeFiles/doublyLL.dir/main.c.obj: CMakeFiles/doublyLL.dir/flags.make
CMakeFiles/doublyLL.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/doublyLL.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\doublyLL.dir\main.c.obj   -c C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL\main.c

CMakeFiles/doublyLL.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/doublyLL.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL\main.c > CMakeFiles\doublyLL.dir\main.c.i

CMakeFiles/doublyLL.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/doublyLL.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL\main.c -o CMakeFiles\doublyLL.dir\main.c.s

# Object files for target doublyLL
doublyLL_OBJECTS = \
"CMakeFiles/doublyLL.dir/main.c.obj"

# External object files for target doublyLL
doublyLL_EXTERNAL_OBJECTS =

doublyLL.exe: CMakeFiles/doublyLL.dir/main.c.obj
doublyLL.exe: CMakeFiles/doublyLL.dir/build.make
doublyLL.exe: CMakeFiles/doublyLL.dir/linklibs.rsp
doublyLL.exe: CMakeFiles/doublyLL.dir/objects1.rsp
doublyLL.exe: CMakeFiles/doublyLL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable doublyLL.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\doublyLL.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/doublyLL.dir/build: doublyLL.exe

.PHONY : CMakeFiles/doublyLL.dir/build

CMakeFiles/doublyLL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\doublyLL.dir\cmake_clean.cmake
.PHONY : CMakeFiles/doublyLL.dir/clean

CMakeFiles/doublyLL.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL\cmake-build-debug C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL\cmake-build-debug C:\Users\brenr\Documents\CPPFun\LinkedLists\doublyLL\cmake-build-debug\CMakeFiles\doublyLL.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/doublyLL.dir/depend

