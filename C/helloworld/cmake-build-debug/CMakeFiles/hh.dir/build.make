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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/stevenyu/CLionProjects/C/helloworld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stevenyu/CLionProjects/C/helloworld/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hh.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hh.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hh.dir/flags.make

CMakeFiles/hh.dir/hh.c.o: CMakeFiles/hh.dir/flags.make
CMakeFiles/hh.dir/hh.c.o: ../hh.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stevenyu/CLionProjects/C/helloworld/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/hh.dir/hh.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hh.dir/hh.c.o   -c /Users/stevenyu/CLionProjects/C/helloworld/hh.c

CMakeFiles/hh.dir/hh.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hh.dir/hh.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/stevenyu/CLionProjects/C/helloworld/hh.c > CMakeFiles/hh.dir/hh.c.i

CMakeFiles/hh.dir/hh.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hh.dir/hh.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/stevenyu/CLionProjects/C/helloworld/hh.c -o CMakeFiles/hh.dir/hh.c.s

# Object files for target hh
hh_OBJECTS = \
"CMakeFiles/hh.dir/hh.c.o"

# External object files for target hh
hh_EXTERNAL_OBJECTS =

hh: CMakeFiles/hh.dir/hh.c.o
hh: CMakeFiles/hh.dir/build.make
hh: CMakeFiles/hh.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stevenyu/CLionProjects/C/helloworld/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable hh"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hh.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hh.dir/build: hh

.PHONY : CMakeFiles/hh.dir/build

CMakeFiles/hh.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hh.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hh.dir/clean

CMakeFiles/hh.dir/depend:
	cd /Users/stevenyu/CLionProjects/C/helloworld/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stevenyu/CLionProjects/C/helloworld /Users/stevenyu/CLionProjects/C/helloworld /Users/stevenyu/CLionProjects/C/helloworld/cmake-build-debug /Users/stevenyu/CLionProjects/C/helloworld/cmake-build-debug /Users/stevenyu/CLionProjects/C/helloworld/cmake-build-debug/CMakeFiles/hh.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hh.dir/depend

