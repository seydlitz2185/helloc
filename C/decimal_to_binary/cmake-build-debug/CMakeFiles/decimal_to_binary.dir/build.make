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
CMAKE_SOURCE_DIR = /Users/stevenyu/CLionProjects/decimal_to_binary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stevenyu/CLionProjects/decimal_to_binary/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/decimal_to_binary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/decimal_to_binary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/decimal_to_binary.dir/flags.make

CMakeFiles/decimal_to_binary.dir/main.c.o: CMakeFiles/decimal_to_binary.dir/flags.make
CMakeFiles/decimal_to_binary.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stevenyu/CLionProjects/decimal_to_binary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/decimal_to_binary.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/decimal_to_binary.dir/main.c.o   -c /Users/stevenyu/CLionProjects/decimal_to_binary/main.c

CMakeFiles/decimal_to_binary.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/decimal_to_binary.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/stevenyu/CLionProjects/decimal_to_binary/main.c > CMakeFiles/decimal_to_binary.dir/main.c.i

CMakeFiles/decimal_to_binary.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/decimal_to_binary.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/stevenyu/CLionProjects/decimal_to_binary/main.c -o CMakeFiles/decimal_to_binary.dir/main.c.s

# Object files for target decimal_to_binary
decimal_to_binary_OBJECTS = \
"CMakeFiles/decimal_to_binary.dir/main.c.o"

# External object files for target decimal_to_binary
decimal_to_binary_EXTERNAL_OBJECTS =

decimal_to_binary: CMakeFiles/decimal_to_binary.dir/main.c.o
decimal_to_binary: CMakeFiles/decimal_to_binary.dir/build.make
decimal_to_binary: CMakeFiles/decimal_to_binary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stevenyu/CLionProjects/decimal_to_binary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable decimal_to_binary"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/decimal_to_binary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/decimal_to_binary.dir/build: decimal_to_binary

.PHONY : CMakeFiles/decimal_to_binary.dir/build

CMakeFiles/decimal_to_binary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/decimal_to_binary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/decimal_to_binary.dir/clean

CMakeFiles/decimal_to_binary.dir/depend:
	cd /Users/stevenyu/CLionProjects/decimal_to_binary/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stevenyu/CLionProjects/decimal_to_binary /Users/stevenyu/CLionProjects/decimal_to_binary /Users/stevenyu/CLionProjects/decimal_to_binary/cmake-build-debug /Users/stevenyu/CLionProjects/decimal_to_binary/cmake-build-debug /Users/stevenyu/CLionProjects/decimal_to_binary/cmake-build-debug/CMakeFiles/decimal_to_binary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/decimal_to_binary.dir/depend

