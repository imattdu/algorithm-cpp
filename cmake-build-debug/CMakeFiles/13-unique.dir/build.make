# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /Users/matt/workspace/cpp/algorithm-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/matt/workspace/cpp/algorithm-cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/13-unique.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/13-unique.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/13-unique.dir/flags.make

CMakeFiles/13-unique.dir/base/13/unique.cpp.o: CMakeFiles/13-unique.dir/flags.make
CMakeFiles/13-unique.dir/base/13/unique.cpp.o: ../base/13/unique.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matt/workspace/cpp/algorithm-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/13-unique.dir/base/13/unique.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/13-unique.dir/base/13/unique.cpp.o -c /Users/matt/workspace/cpp/algorithm-cpp/base/13/unique.cpp

CMakeFiles/13-unique.dir/base/13/unique.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/13-unique.dir/base/13/unique.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matt/workspace/cpp/algorithm-cpp/base/13/unique.cpp > CMakeFiles/13-unique.dir/base/13/unique.cpp.i

CMakeFiles/13-unique.dir/base/13/unique.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/13-unique.dir/base/13/unique.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matt/workspace/cpp/algorithm-cpp/base/13/unique.cpp -o CMakeFiles/13-unique.dir/base/13/unique.cpp.s

# Object files for target 13-unique
13__unique_OBJECTS = \
"CMakeFiles/13-unique.dir/base/13/unique.cpp.o"

# External object files for target 13-unique
13__unique_EXTERNAL_OBJECTS =

13-unique: CMakeFiles/13-unique.dir/base/13/unique.cpp.o
13-unique: CMakeFiles/13-unique.dir/build.make
13-unique: CMakeFiles/13-unique.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/matt/workspace/cpp/algorithm-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 13-unique"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/13-unique.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/13-unique.dir/build: 13-unique
.PHONY : CMakeFiles/13-unique.dir/build

CMakeFiles/13-unique.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/13-unique.dir/cmake_clean.cmake
.PHONY : CMakeFiles/13-unique.dir/clean

CMakeFiles/13-unique.dir/depend:
	cd /Users/matt/workspace/cpp/algorithm-cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/matt/workspace/cpp/algorithm-cpp /Users/matt/workspace/cpp/algorithm-cpp /Users/matt/workspace/cpp/algorithm-cpp/cmake-build-debug /Users/matt/workspace/cpp/algorithm-cpp/cmake-build-debug /Users/matt/workspace/cpp/algorithm-cpp/cmake-build-debug/CMakeFiles/13-unique.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/13-unique.dir/depend

