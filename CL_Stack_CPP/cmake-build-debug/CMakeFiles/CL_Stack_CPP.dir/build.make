# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = "/cygdrive/c/Users/LAKSHYAJIT LAXMIKANT/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe"

# The command to remove a file.
RM = "/cygdrive/c/Users/LAKSHYAJIT LAXMIKANT/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CL_Stack_CPP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CL_Stack_CPP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CL_Stack_CPP.dir/flags.make

CMakeFiles/CL_Stack_CPP.dir/main.cpp.o: CMakeFiles/CL_Stack_CPP.dir/flags.make
CMakeFiles/CL_Stack_CPP.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CL_Stack_CPP.dir/main.cpp.o"
	C:/cygwin64/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CL_Stack_CPP.dir/main.cpp.o -c /cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP/main.cpp

CMakeFiles/CL_Stack_CPP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CL_Stack_CPP.dir/main.cpp.i"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP/main.cpp > CMakeFiles/CL_Stack_CPP.dir/main.cpp.i

CMakeFiles/CL_Stack_CPP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CL_Stack_CPP.dir/main.cpp.s"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP/main.cpp -o CMakeFiles/CL_Stack_CPP.dir/main.cpp.s

# Object files for target CL_Stack_CPP
CL_Stack_CPP_OBJECTS = \
"CMakeFiles/CL_Stack_CPP.dir/main.cpp.o"

# External object files for target CL_Stack_CPP
CL_Stack_CPP_EXTERNAL_OBJECTS =

CL_Stack_CPP.exe: CMakeFiles/CL_Stack_CPP.dir/main.cpp.o
CL_Stack_CPP.exe: CMakeFiles/CL_Stack_CPP.dir/build.make
CL_Stack_CPP.exe: CMakeFiles/CL_Stack_CPP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CL_Stack_CPP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CL_Stack_CPP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CL_Stack_CPP.dir/build: CL_Stack_CPP.exe

.PHONY : CMakeFiles/CL_Stack_CPP.dir/build

CMakeFiles/CL_Stack_CPP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CL_Stack_CPP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CL_Stack_CPP.dir/clean

CMakeFiles/CL_Stack_CPP.dir/depend:
	cd /cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP /cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP /cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP/cmake-build-debug /cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP/cmake-build-debug /cygdrive/d/code_practice/ds_and_algo/CL_Stack_CPP/cmake-build-debug/CMakeFiles/CL_Stack_CPP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CL_Stack_CPP.dir/depend
