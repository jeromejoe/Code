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
CMAKE_COMMAND = /home/zzy/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/zzy/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zzy/Code/clion_proj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zzy/Code/clion_proj/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/clion_proj.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/clion_proj.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/clion_proj.dir/flags.make

CMakeFiles/clion_proj.dir/main.cpp.o: CMakeFiles/clion_proj.dir/flags.make
CMakeFiles/clion_proj.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzy/Code/clion_proj/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/clion_proj.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/clion_proj.dir/main.cpp.o -c /home/zzy/Code/clion_proj/main.cpp

CMakeFiles/clion_proj.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clion_proj.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzy/Code/clion_proj/main.cpp > CMakeFiles/clion_proj.dir/main.cpp.i

CMakeFiles/clion_proj.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clion_proj.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzy/Code/clion_proj/main.cpp -o CMakeFiles/clion_proj.dir/main.cpp.s

CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.o: CMakeFiles/clion_proj.dir/flags.make
CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.o: ../5_longestPalindrome.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzy/Code/clion_proj/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.o -c /home/zzy/Code/clion_proj/5_longestPalindrome.cpp

CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzy/Code/clion_proj/5_longestPalindrome.cpp > CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.i

CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzy/Code/clion_proj/5_longestPalindrome.cpp -o CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.s

# Object files for target clion_proj
clion_proj_OBJECTS = \
"CMakeFiles/clion_proj.dir/main.cpp.o" \
"CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.o"

# External object files for target clion_proj
clion_proj_EXTERNAL_OBJECTS =

clion_proj: CMakeFiles/clion_proj.dir/main.cpp.o
clion_proj: CMakeFiles/clion_proj.dir/5_longestPalindrome.cpp.o
clion_proj: CMakeFiles/clion_proj.dir/build.make
clion_proj: CMakeFiles/clion_proj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zzy/Code/clion_proj/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable clion_proj"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clion_proj.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/clion_proj.dir/build: clion_proj

.PHONY : CMakeFiles/clion_proj.dir/build

CMakeFiles/clion_proj.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clion_proj.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clion_proj.dir/clean

CMakeFiles/clion_proj.dir/depend:
	cd /home/zzy/Code/clion_proj/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zzy/Code/clion_proj /home/zzy/Code/clion_proj /home/zzy/Code/clion_proj/cmake-build-debug /home/zzy/Code/clion_proj/cmake-build-debug /home/zzy/Code/clion_proj/cmake-build-debug/CMakeFiles/clion_proj.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clion_proj.dir/depend

