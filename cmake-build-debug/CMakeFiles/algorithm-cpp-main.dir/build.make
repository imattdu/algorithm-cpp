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
CMAKE_COMMAND = /cygdrive/c/Users/matt/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/matt/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/matt/workspace/cpp/algorithm-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/matt/workspace/cpp/algorithm-cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/algorithm-cpp-main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/algorithm-cpp-main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/algorithm-cpp-main.dir/flags.make

CMakeFiles/algorithm-cpp-main.dir/main.cpp.o: CMakeFiles/algorithm-cpp-main.dir/flags.make
CMakeFiles/algorithm-cpp-main.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/matt/workspace/cpp/algorithm-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/algorithm-cpp-main.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/algorithm-cpp-main.dir/main.cpp.o -c /cygdrive/d/matt/workspace/cpp/algorithm-cpp/main.cpp

CMakeFiles/algorithm-cpp-main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/algorithm-cpp-main.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/matt/workspace/cpp/algorithm-cpp/main.cpp > CMakeFiles/algorithm-cpp-main.dir/main.cpp.i

CMakeFiles/algorithm-cpp-main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/algorithm-cpp-main.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/matt/workspace/cpp/algorithm-cpp/main.cpp -o CMakeFiles/algorithm-cpp-main.dir/main.cpp.s

# Object files for target algorithm-cpp-main
algorithm__cpp__main_OBJECTS = \
"CMakeFiles/algorithm-cpp-main.dir/main.cpp.o"

# External object files for target algorithm-cpp-main
algorithm__cpp__main_EXTERNAL_OBJECTS =

algorithm-cpp-main.exe: CMakeFiles/algorithm-cpp-main.dir/main.cpp.o
algorithm-cpp-main.exe: CMakeFiles/algorithm-cpp-main.dir/build.make
algorithm-cpp-main.exe: CMakeFiles/algorithm-cpp-main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/matt/workspace/cpp/algorithm-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable algorithm-cpp-main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/algorithm-cpp-main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/algorithm-cpp-main.dir/build: algorithm-cpp-main.exe

.PHONY : CMakeFiles/algorithm-cpp-main.dir/build

CMakeFiles/algorithm-cpp-main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/algorithm-cpp-main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/algorithm-cpp-main.dir/clean

CMakeFiles/algorithm-cpp-main.dir/depend:
	cd /cygdrive/d/matt/workspace/cpp/algorithm-cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/matt/workspace/cpp/algorithm-cpp /cygdrive/d/matt/workspace/cpp/algorithm-cpp /cygdrive/d/matt/workspace/cpp/algorithm-cpp/cmake-build-debug /cygdrive/d/matt/workspace/cpp/algorithm-cpp/cmake-build-debug /cygdrive/d/matt/workspace/cpp/algorithm-cpp/cmake-build-debug/CMakeFiles/algorithm-cpp-main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/algorithm-cpp-main.dir/depend
