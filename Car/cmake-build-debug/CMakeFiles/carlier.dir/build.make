# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/krystian/Pobrane/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/krystian/Pobrane/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/krystian/CLionProjects/Car

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krystian/CLionProjects/Car/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/carlier.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/carlier.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/carlier.dir/flags.make

CMakeFiles/carlier.dir/main.cpp.o: CMakeFiles/carlier.dir/flags.make
CMakeFiles/carlier.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/krystian/CLionProjects/Car/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/carlier.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/carlier.dir/main.cpp.o -c /home/krystian/CLionProjects/Car/main.cpp

CMakeFiles/carlier.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/carlier.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krystian/CLionProjects/Car/main.cpp > CMakeFiles/carlier.dir/main.cpp.i

CMakeFiles/carlier.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/carlier.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krystian/CLionProjects/Car/main.cpp -o CMakeFiles/carlier.dir/main.cpp.s

CMakeFiles/carlier.dir/Carlier.cpp.o: CMakeFiles/carlier.dir/flags.make
CMakeFiles/carlier.dir/Carlier.cpp.o: Carlier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/krystian/CLionProjects/Car/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/carlier.dir/Carlier.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/carlier.dir/Carlier.cpp.o -c /home/krystian/CLionProjects/Car/cmake-build-debug/Carlier.cpp

CMakeFiles/carlier.dir/Carlier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/carlier.dir/Carlier.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krystian/CLionProjects/Car/cmake-build-debug/Carlier.cpp > CMakeFiles/carlier.dir/Carlier.cpp.i

CMakeFiles/carlier.dir/Carlier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/carlier.dir/Carlier.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krystian/CLionProjects/Car/cmake-build-debug/Carlier.cpp -o CMakeFiles/carlier.dir/Carlier.cpp.s

CMakeFiles/carlier.dir/Jobs.cpp.o: CMakeFiles/carlier.dir/flags.make
CMakeFiles/carlier.dir/Jobs.cpp.o: Jobs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/krystian/CLionProjects/Car/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/carlier.dir/Jobs.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/carlier.dir/Jobs.cpp.o -c /home/krystian/CLionProjects/Car/cmake-build-debug/Jobs.cpp

CMakeFiles/carlier.dir/Jobs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/carlier.dir/Jobs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krystian/CLionProjects/Car/cmake-build-debug/Jobs.cpp > CMakeFiles/carlier.dir/Jobs.cpp.i

CMakeFiles/carlier.dir/Jobs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/carlier.dir/Jobs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krystian/CLionProjects/Car/cmake-build-debug/Jobs.cpp -o CMakeFiles/carlier.dir/Jobs.cpp.s

# Object files for target carlier
carlier_OBJECTS = \
"CMakeFiles/carlier.dir/main.cpp.o" \
"CMakeFiles/carlier.dir/Carlier.cpp.o" \
"CMakeFiles/carlier.dir/Jobs.cpp.o"

# External object files for target carlier
carlier_EXTERNAL_OBJECTS =

carlier: CMakeFiles/carlier.dir/main.cpp.o
carlier: CMakeFiles/carlier.dir/Carlier.cpp.o
carlier: CMakeFiles/carlier.dir/Jobs.cpp.o
carlier: CMakeFiles/carlier.dir/build.make
carlier: CMakeFiles/carlier.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/krystian/CLionProjects/Car/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable carlier"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/carlier.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/carlier.dir/build: carlier

.PHONY : CMakeFiles/carlier.dir/build

CMakeFiles/carlier.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/carlier.dir/cmake_clean.cmake
.PHONY : CMakeFiles/carlier.dir/clean

CMakeFiles/carlier.dir/depend:
	cd /home/krystian/CLionProjects/Car/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krystian/CLionProjects/Car /home/krystian/CLionProjects/Car /home/krystian/CLionProjects/Car/cmake-build-debug /home/krystian/CLionProjects/Car/cmake-build-debug /home/krystian/CLionProjects/Car/cmake-build-debug/CMakeFiles/carlier.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/carlier.dir/depend

