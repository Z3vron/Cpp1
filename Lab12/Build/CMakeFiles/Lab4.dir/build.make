# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/stud2020/0brzyski/Cpp1/Lab12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stud2020/0brzyski/Cpp1/Lab12/Build

# Include any dependencies generated for this target.
include CMakeFiles/Lab4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab4.dir/flags.make

CMakeFiles/Lab4.dir/Main.cpp.o: CMakeFiles/Lab4.dir/flags.make
CMakeFiles/Lab4.dir/Main.cpp.o: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stud2020/0brzyski/Cpp1/Lab12/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab4.dir/Main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab4.dir/Main.cpp.o -c /home/stud2020/0brzyski/Cpp1/Lab12/Main.cpp

CMakeFiles/Lab4.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab4.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stud2020/0brzyski/Cpp1/Lab12/Main.cpp > CMakeFiles/Lab4.dir/Main.cpp.i

CMakeFiles/Lab4.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab4.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stud2020/0brzyski/Cpp1/Lab12/Main.cpp -o CMakeFiles/Lab4.dir/Main.cpp.s

# Object files for target Lab4
Lab4_OBJECTS = \
"CMakeFiles/Lab4.dir/Main.cpp.o"

# External object files for target Lab4
Lab4_EXTERNAL_OBJECTS =

Lab4: CMakeFiles/Lab4.dir/Main.cpp.o
Lab4: CMakeFiles/Lab4.dir/build.make
Lab4: CMakeFiles/Lab4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stud2020/0brzyski/Cpp1/Lab12/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab4.dir/build: Lab4

.PHONY : CMakeFiles/Lab4.dir/build

CMakeFiles/Lab4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab4.dir/clean

CMakeFiles/Lab4.dir/depend:
	cd /home/stud2020/0brzyski/Cpp1/Lab12/Build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stud2020/0brzyski/Cpp1/Lab12 /home/stud2020/0brzyski/Cpp1/Lab12 /home/stud2020/0brzyski/Cpp1/Lab12/Build /home/stud2020/0brzyski/Cpp1/Lab12/Build /home/stud2020/0brzyski/Cpp1/Lab12/Build/CMakeFiles/Lab4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab4.dir/depend

