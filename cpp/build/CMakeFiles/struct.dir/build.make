# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.11.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.11.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jason/Desktop/Repo/playground-cpp/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jason/Desktop/Repo/playground-cpp/cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/struct.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/struct.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/struct.dir/flags.make

CMakeFiles/struct.dir/struct.cpp.o: CMakeFiles/struct.dir/flags.make
CMakeFiles/struct.dir/struct.cpp.o: ../struct.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jason/Desktop/Repo/playground-cpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/struct.dir/struct.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/struct.dir/struct.cpp.o -c /Users/jason/Desktop/Repo/playground-cpp/cpp/struct.cpp

CMakeFiles/struct.dir/struct.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/struct.dir/struct.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jason/Desktop/Repo/playground-cpp/cpp/struct.cpp > CMakeFiles/struct.dir/struct.cpp.i

CMakeFiles/struct.dir/struct.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/struct.dir/struct.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jason/Desktop/Repo/playground-cpp/cpp/struct.cpp -o CMakeFiles/struct.dir/struct.cpp.s

# Object files for target struct
struct_OBJECTS = \
"CMakeFiles/struct.dir/struct.cpp.o"

# External object files for target struct
struct_EXTERNAL_OBJECTS =

bin/struct: CMakeFiles/struct.dir/struct.cpp.o
bin/struct: CMakeFiles/struct.dir/build.make
bin/struct: CMakeFiles/struct.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jason/Desktop/Repo/playground-cpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/struct"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/struct.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/struct.dir/build: bin/struct

.PHONY : CMakeFiles/struct.dir/build

CMakeFiles/struct.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/struct.dir/cmake_clean.cmake
.PHONY : CMakeFiles/struct.dir/clean

CMakeFiles/struct.dir/depend:
	cd /Users/jason/Desktop/Repo/playground-cpp/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jason/Desktop/Repo/playground-cpp/cpp /Users/jason/Desktop/Repo/playground-cpp/cpp /Users/jason/Desktop/Repo/playground-cpp/cpp/build /Users/jason/Desktop/Repo/playground-cpp/cpp/build /Users/jason/Desktop/Repo/playground-cpp/cpp/build/CMakeFiles/struct.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/struct.dir/depend

