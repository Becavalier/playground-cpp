# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.9.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.9.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jason/Desktop/Repo/playground-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jason/Desktop/Repo/playground-cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/helloworld.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/helloworld.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/helloworld.dir/flags.make

CMakeFiles/helloworld.dir/helloworld.cpp.o: CMakeFiles/helloworld.dir/flags.make
CMakeFiles/helloworld.dir/helloworld.cpp.o: ../helloworld.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jason/Desktop/Repo/playground-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/helloworld.dir/helloworld.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/helloworld.dir/helloworld.cpp.o -c /Users/jason/Desktop/Repo/playground-cpp/helloworld.cpp

CMakeFiles/helloworld.dir/helloworld.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/helloworld.dir/helloworld.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jason/Desktop/Repo/playground-cpp/helloworld.cpp > CMakeFiles/helloworld.dir/helloworld.cpp.i

CMakeFiles/helloworld.dir/helloworld.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/helloworld.dir/helloworld.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jason/Desktop/Repo/playground-cpp/helloworld.cpp -o CMakeFiles/helloworld.dir/helloworld.cpp.s

CMakeFiles/helloworld.dir/helloworld.cpp.o.requires:

.PHONY : CMakeFiles/helloworld.dir/helloworld.cpp.o.requires

CMakeFiles/helloworld.dir/helloworld.cpp.o.provides: CMakeFiles/helloworld.dir/helloworld.cpp.o.requires
	$(MAKE) -f CMakeFiles/helloworld.dir/build.make CMakeFiles/helloworld.dir/helloworld.cpp.o.provides.build
.PHONY : CMakeFiles/helloworld.dir/helloworld.cpp.o.provides

CMakeFiles/helloworld.dir/helloworld.cpp.o.provides.build: CMakeFiles/helloworld.dir/helloworld.cpp.o


# Object files for target helloworld
helloworld_OBJECTS = \
"CMakeFiles/helloworld.dir/helloworld.cpp.o"

# External object files for target helloworld
helloworld_EXTERNAL_OBJECTS =

bin/helloworld: CMakeFiles/helloworld.dir/helloworld.cpp.o
bin/helloworld: CMakeFiles/helloworld.dir/build.make
bin/helloworld: CMakeFiles/helloworld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jason/Desktop/Repo/playground-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/helloworld"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/helloworld.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/helloworld.dir/build: bin/helloworld

.PHONY : CMakeFiles/helloworld.dir/build

CMakeFiles/helloworld.dir/requires: CMakeFiles/helloworld.dir/helloworld.cpp.o.requires

.PHONY : CMakeFiles/helloworld.dir/requires

CMakeFiles/helloworld.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/helloworld.dir/cmake_clean.cmake
.PHONY : CMakeFiles/helloworld.dir/clean

CMakeFiles/helloworld.dir/depend:
	cd /Users/jason/Desktop/Repo/playground-cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jason/Desktop/Repo/playground-cpp /Users/jason/Desktop/Repo/playground-cpp /Users/jason/Desktop/Repo/playground-cpp/build /Users/jason/Desktop/Repo/playground-cpp/build /Users/jason/Desktop/Repo/playground-cpp/build/CMakeFiles/helloworld.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/helloworld.dir/depend

