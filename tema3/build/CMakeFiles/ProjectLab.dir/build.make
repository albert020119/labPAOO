# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /snap/cmake/1359/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1359/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/endre/Documents/PAOO/tema3/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/endre/Documents/PAOO/tema3/build

# Include any dependencies generated for this target.
include CMakeFiles/ProjectLab.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ProjectLab.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ProjectLab.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProjectLab.dir/flags.make

CMakeFiles/ProjectLab.dir/main.cpp.o: CMakeFiles/ProjectLab.dir/flags.make
CMakeFiles/ProjectLab.dir/main.cpp.o: /home/endre/Documents/PAOO/tema3/src/main.cpp
CMakeFiles/ProjectLab.dir/main.cpp.o: CMakeFiles/ProjectLab.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/endre/Documents/PAOO/tema3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProjectLab.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjectLab.dir/main.cpp.o -MF CMakeFiles/ProjectLab.dir/main.cpp.o.d -o CMakeFiles/ProjectLab.dir/main.cpp.o -c /home/endre/Documents/PAOO/tema3/src/main.cpp

CMakeFiles/ProjectLab.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjectLab.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/endre/Documents/PAOO/tema3/src/main.cpp > CMakeFiles/ProjectLab.dir/main.cpp.i

CMakeFiles/ProjectLab.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjectLab.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/endre/Documents/PAOO/tema3/src/main.cpp -o CMakeFiles/ProjectLab.dir/main.cpp.s

# Object files for target ProjectLab
ProjectLab_OBJECTS = \
"CMakeFiles/ProjectLab.dir/main.cpp.o"

# External object files for target ProjectLab
ProjectLab_EXTERNAL_OBJECTS =

ProjectLab: CMakeFiles/ProjectLab.dir/main.cpp.o
ProjectLab: CMakeFiles/ProjectLab.dir/build.make
ProjectLab: CMakeFiles/ProjectLab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/endre/Documents/PAOO/tema3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ProjectLab"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProjectLab.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProjectLab.dir/build: ProjectLab
.PHONY : CMakeFiles/ProjectLab.dir/build

CMakeFiles/ProjectLab.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProjectLab.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProjectLab.dir/clean

CMakeFiles/ProjectLab.dir/depend:
	cd /home/endre/Documents/PAOO/tema3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/endre/Documents/PAOO/tema3/src /home/endre/Documents/PAOO/tema3/src /home/endre/Documents/PAOO/tema3/build /home/endre/Documents/PAOO/tema3/build /home/endre/Documents/PAOO/tema3/build/CMakeFiles/ProjectLab.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ProjectLab.dir/depend

