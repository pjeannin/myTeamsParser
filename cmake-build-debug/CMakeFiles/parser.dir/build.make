# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/parser.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/parser.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/parser.dir/flags.make

CMakeFiles/parser.dir/main.c.o: CMakeFiles/parser.dir/flags.make
CMakeFiles/parser.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/parser.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/parser.dir/main.c.o -c "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/main.c"

CMakeFiles/parser.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/parser.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/main.c" > CMakeFiles/parser.dir/main.c.i

CMakeFiles/parser.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/parser.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/main.c" -o CMakeFiles/parser.dir/main.c.s

CMakeFiles/parser.dir/load_clients.c.o: CMakeFiles/parser.dir/flags.make
CMakeFiles/parser.dir/load_clients.c.o: ../load_clients.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/parser.dir/load_clients.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/parser.dir/load_clients.c.o -c "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/load_clients.c"

CMakeFiles/parser.dir/load_clients.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/parser.dir/load_clients.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/load_clients.c" > CMakeFiles/parser.dir/load_clients.c.i

CMakeFiles/parser.dir/load_clients.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/parser.dir/load_clients.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/load_clients.c" -o CMakeFiles/parser.dir/load_clients.c.s

CMakeFiles/parser.dir/split_string.c.o: CMakeFiles/parser.dir/flags.make
CMakeFiles/parser.dir/split_string.c.o: ../split_string.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/parser.dir/split_string.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/parser.dir/split_string.c.o -c "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/split_string.c"

CMakeFiles/parser.dir/split_string.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/parser.dir/split_string.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/split_string.c" > CMakeFiles/parser.dir/split_string.c.i

CMakeFiles/parser.dir/split_string.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/parser.dir/split_string.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/split_string.c" -o CMakeFiles/parser.dir/split_string.c.s

# Object files for target parser
parser_OBJECTS = \
"CMakeFiles/parser.dir/main.c.o" \
"CMakeFiles/parser.dir/load_clients.c.o" \
"CMakeFiles/parser.dir/split_string.c.o"

# External object files for target parser
parser_EXTERNAL_OBJECTS =

parser: CMakeFiles/parser.dir/main.c.o
parser: CMakeFiles/parser.dir/load_clients.c.o
parser: CMakeFiles/parser.dir/split_string.c.o
parser: CMakeFiles/parser.dir/build.make
parser: CMakeFiles/parser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable parser"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/parser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/parser.dir/build: parser

.PHONY : CMakeFiles/parser.dir/build

CMakeFiles/parser.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/parser.dir/cmake_clean.cmake
.PHONY : CMakeFiles/parser.dir/clean

CMakeFiles/parser.dir/depend:
	cd "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser" "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser" "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/cmake-build-debug" "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/cmake-build-debug" "/Users/pierre/Documents/Epitech/Tek2/B4 - Network Programming/myTeamsParser/cmake-build-debug/CMakeFiles/parser.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/parser.dir/depend
