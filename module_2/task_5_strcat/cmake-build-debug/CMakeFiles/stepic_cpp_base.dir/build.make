# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/roman/stepic_cpp_base/module_2/task_5_strcat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/roman/stepic_cpp_base/module_2/task_5_strcat/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stepic_cpp_base.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stepic_cpp_base.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stepic_cpp_base.dir/flags.make

CMakeFiles/stepic_cpp_base.dir/main.cpp.o: CMakeFiles/stepic_cpp_base.dir/flags.make
CMakeFiles/stepic_cpp_base.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/roman/stepic_cpp_base/module_2/task_5_strcat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stepic_cpp_base.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stepic_cpp_base.dir/main.cpp.o -c /Users/roman/stepic_cpp_base/module_2/task_5_strcat/main.cpp

CMakeFiles/stepic_cpp_base.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stepic_cpp_base.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/roman/stepic_cpp_base/module_2/task_5_strcat/main.cpp > CMakeFiles/stepic_cpp_base.dir/main.cpp.i

CMakeFiles/stepic_cpp_base.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stepic_cpp_base.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/roman/stepic_cpp_base/module_2/task_5_strcat/main.cpp -o CMakeFiles/stepic_cpp_base.dir/main.cpp.s

# Object files for target stepic_cpp_base
stepic_cpp_base_OBJECTS = \
"CMakeFiles/stepic_cpp_base.dir/main.cpp.o"

# External object files for target stepic_cpp_base
stepic_cpp_base_EXTERNAL_OBJECTS =

stepic_cpp_base: CMakeFiles/stepic_cpp_base.dir/main.cpp.o
stepic_cpp_base: CMakeFiles/stepic_cpp_base.dir/build.make
stepic_cpp_base: CMakeFiles/stepic_cpp_base.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/roman/stepic_cpp_base/module_2/task_5_strcat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stepic_cpp_base"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stepic_cpp_base.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stepic_cpp_base.dir/build: stepic_cpp_base

.PHONY : CMakeFiles/stepic_cpp_base.dir/build

CMakeFiles/stepic_cpp_base.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stepic_cpp_base.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stepic_cpp_base.dir/clean

CMakeFiles/stepic_cpp_base.dir/depend:
	cd /Users/roman/stepic_cpp_base/module_2/task_5_strcat/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/roman/stepic_cpp_base/module_2/task_5_strcat /Users/roman/stepic_cpp_base/module_2/task_5_strcat /Users/roman/stepic_cpp_base/module_2/task_5_strcat/cmake-build-debug /Users/roman/stepic_cpp_base/module_2/task_5_strcat/cmake-build-debug /Users/roman/stepic_cpp_base/module_2/task_5_strcat/cmake-build-debug/CMakeFiles/stepic_cpp_base.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stepic_cpp_base.dir/depend

