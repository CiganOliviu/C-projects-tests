# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/cigan/Documents/clion-2020.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/cigan/Documents/clion-2020.2.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/cigan/Personal/tests/C/SimpleArraysWorkFlow

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/cigan/Personal/tests/C/SimpleArraysWorkFlow/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SimpleArraysWorkFlow.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SimpleArraysWorkFlow.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SimpleArraysWorkFlow.dir/flags.make

CMakeFiles/SimpleArraysWorkFlow.dir/main.c.o: CMakeFiles/SimpleArraysWorkFlow.dir/flags.make
CMakeFiles/SimpleArraysWorkFlow.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/cigan/Personal/tests/C/SimpleArraysWorkFlow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SimpleArraysWorkFlow.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SimpleArraysWorkFlow.dir/main.c.o   -c /media/cigan/Personal/tests/C/SimpleArraysWorkFlow/main.c

CMakeFiles/SimpleArraysWorkFlow.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimpleArraysWorkFlow.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/cigan/Personal/tests/C/SimpleArraysWorkFlow/main.c > CMakeFiles/SimpleArraysWorkFlow.dir/main.c.i

CMakeFiles/SimpleArraysWorkFlow.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimpleArraysWorkFlow.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/cigan/Personal/tests/C/SimpleArraysWorkFlow/main.c -o CMakeFiles/SimpleArraysWorkFlow.dir/main.c.s

# Object files for target SimpleArraysWorkFlow
SimpleArraysWorkFlow_OBJECTS = \
"CMakeFiles/SimpleArraysWorkFlow.dir/main.c.o"

# External object files for target SimpleArraysWorkFlow
SimpleArraysWorkFlow_EXTERNAL_OBJECTS =

SimpleArraysWorkFlow: CMakeFiles/SimpleArraysWorkFlow.dir/main.c.o
SimpleArraysWorkFlow: CMakeFiles/SimpleArraysWorkFlow.dir/build.make
SimpleArraysWorkFlow: CMakeFiles/SimpleArraysWorkFlow.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/cigan/Personal/tests/C/SimpleArraysWorkFlow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable SimpleArraysWorkFlow"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SimpleArraysWorkFlow.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SimpleArraysWorkFlow.dir/build: SimpleArraysWorkFlow

.PHONY : CMakeFiles/SimpleArraysWorkFlow.dir/build

CMakeFiles/SimpleArraysWorkFlow.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SimpleArraysWorkFlow.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SimpleArraysWorkFlow.dir/clean

CMakeFiles/SimpleArraysWorkFlow.dir/depend:
	cd /media/cigan/Personal/tests/C/SimpleArraysWorkFlow/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/cigan/Personal/tests/C/SimpleArraysWorkFlow /media/cigan/Personal/tests/C/SimpleArraysWorkFlow /media/cigan/Personal/tests/C/SimpleArraysWorkFlow/cmake-build-debug /media/cigan/Personal/tests/C/SimpleArraysWorkFlow/cmake-build-debug /media/cigan/Personal/tests/C/SimpleArraysWorkFlow/cmake-build-debug/CMakeFiles/SimpleArraysWorkFlow.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SimpleArraysWorkFlow.dir/depend

