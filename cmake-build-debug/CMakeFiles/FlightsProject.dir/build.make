# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\EGYETEM\DSA\FlightsProjekt\projekt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\EGYETEM\DSA\FlightsProjekt\projekt\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FlightsProject.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/FlightsProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FlightsProject.dir/flags.make

CMakeFiles/FlightsProject.dir/main.c.obj: CMakeFiles/FlightsProject.dir/flags.make
CMakeFiles/FlightsProject.dir/main.c.obj: CMakeFiles/FlightsProject.dir/includes_C.rsp
CMakeFiles/FlightsProject.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\EGYETEM\DSA\FlightsProjekt\projekt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/FlightsProject.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\FlightsProject.dir\main.c.obj -c C:\EGYETEM\DSA\FlightsProjekt\projekt\main.c

CMakeFiles/FlightsProject.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FlightsProject.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\EGYETEM\DSA\FlightsProjekt\projekt\main.c > CMakeFiles\FlightsProject.dir\main.c.i

CMakeFiles/FlightsProject.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FlightsProject.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\EGYETEM\DSA\FlightsProjekt\projekt\main.c -o CMakeFiles\FlightsProject.dir\main.c.s

CMakeFiles/FlightsProject.dir/flights_project/src/country/country_array.c.obj: CMakeFiles/FlightsProject.dir/flags.make
CMakeFiles/FlightsProject.dir/flights_project/src/country/country_array.c.obj: CMakeFiles/FlightsProject.dir/includes_C.rsp
CMakeFiles/FlightsProject.dir/flights_project/src/country/country_array.c.obj: ../flights_project/src/country/country_array.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\EGYETEM\DSA\FlightsProjekt\projekt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/FlightsProject.dir/flights_project/src/country/country_array.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\FlightsProject.dir\flights_project\src\country\country_array.c.obj -c C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\country\country_array.c

CMakeFiles/FlightsProject.dir/flights_project/src/country/country_array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FlightsProject.dir/flights_project/src/country/country_array.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\country\country_array.c > CMakeFiles\FlightsProject.dir\flights_project\src\country\country_array.c.i

CMakeFiles/FlightsProject.dir/flights_project/src/country/country_array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FlightsProject.dir/flights_project/src/country/country_array.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\country\country_array.c -o CMakeFiles\FlightsProject.dir\flights_project\src\country\country_array.c.s

CMakeFiles/FlightsProject.dir/flights_project/src/country/city.c.obj: CMakeFiles/FlightsProject.dir/flags.make
CMakeFiles/FlightsProject.dir/flights_project/src/country/city.c.obj: CMakeFiles/FlightsProject.dir/includes_C.rsp
CMakeFiles/FlightsProject.dir/flights_project/src/country/city.c.obj: ../flights_project/src/country/city.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\EGYETEM\DSA\FlightsProjekt\projekt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/FlightsProject.dir/flights_project/src/country/city.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\FlightsProject.dir\flights_project\src\country\city.c.obj -c C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\country\city.c

CMakeFiles/FlightsProject.dir/flights_project/src/country/city.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FlightsProject.dir/flights_project/src/country/city.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\country\city.c > CMakeFiles\FlightsProject.dir\flights_project\src\country\city.c.i

CMakeFiles/FlightsProject.dir/flights_project/src/country/city.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FlightsProject.dir/flights_project/src/country/city.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\country\city.c -o CMakeFiles\FlightsProject.dir\flights_project\src\country\city.c.s

CMakeFiles/FlightsProject.dir/flights_project/src/calendar/calendar.c.obj: CMakeFiles/FlightsProject.dir/flags.make
CMakeFiles/FlightsProject.dir/flights_project/src/calendar/calendar.c.obj: CMakeFiles/FlightsProject.dir/includes_C.rsp
CMakeFiles/FlightsProject.dir/flights_project/src/calendar/calendar.c.obj: ../flights_project/src/calendar/calendar.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\EGYETEM\DSA\FlightsProjekt\projekt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/FlightsProject.dir/flights_project/src/calendar/calendar.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\FlightsProject.dir\flights_project\src\calendar\calendar.c.obj -c C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\calendar\calendar.c

CMakeFiles/FlightsProject.dir/flights_project/src/calendar/calendar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FlightsProject.dir/flights_project/src/calendar/calendar.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\calendar\calendar.c > CMakeFiles\FlightsProject.dir\flights_project\src\calendar\calendar.c.i

CMakeFiles/FlightsProject.dir/flights_project/src/calendar/calendar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FlightsProject.dir/flights_project/src/calendar/calendar.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\calendar\calendar.c -o CMakeFiles\FlightsProject.dir\flights_project\src\calendar\calendar.c.s

CMakeFiles/FlightsProject.dir/flights_project/src/passenger/passenger.c.obj: CMakeFiles/FlightsProject.dir/flags.make
CMakeFiles/FlightsProject.dir/flights_project/src/passenger/passenger.c.obj: CMakeFiles/FlightsProject.dir/includes_C.rsp
CMakeFiles/FlightsProject.dir/flights_project/src/passenger/passenger.c.obj: ../flights_project/src/passenger/passenger.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\EGYETEM\DSA\FlightsProjekt\projekt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/FlightsProject.dir/flights_project/src/passenger/passenger.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\FlightsProject.dir\flights_project\src\passenger\passenger.c.obj -c C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\passenger\passenger.c

CMakeFiles/FlightsProject.dir/flights_project/src/passenger/passenger.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FlightsProject.dir/flights_project/src/passenger/passenger.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\passenger\passenger.c > CMakeFiles\FlightsProject.dir\flights_project\src\passenger\passenger.c.i

CMakeFiles/FlightsProject.dir/flights_project/src/passenger/passenger.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FlightsProject.dir/flights_project/src/passenger/passenger.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\passenger\passenger.c -o CMakeFiles\FlightsProject.dir\flights_project\src\passenger\passenger.c.s

CMakeFiles/FlightsProject.dir/flights_project/src/flight/flight.c.obj: CMakeFiles/FlightsProject.dir/flags.make
CMakeFiles/FlightsProject.dir/flights_project/src/flight/flight.c.obj: CMakeFiles/FlightsProject.dir/includes_C.rsp
CMakeFiles/FlightsProject.dir/flights_project/src/flight/flight.c.obj: ../flights_project/src/flight/flight.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\EGYETEM\DSA\FlightsProjekt\projekt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/FlightsProject.dir/flights_project/src/flight/flight.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\FlightsProject.dir\flights_project\src\flight\flight.c.obj -c C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\flight\flight.c

CMakeFiles/FlightsProject.dir/flights_project/src/flight/flight.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FlightsProject.dir/flights_project/src/flight/flight.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\flight\flight.c > CMakeFiles\FlightsProject.dir\flights_project\src\flight\flight.c.i

CMakeFiles/FlightsProject.dir/flights_project/src/flight/flight.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FlightsProject.dir/flights_project/src/flight/flight.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\EGYETEM\DSA\FlightsProjekt\projekt\flights_project\src\flight\flight.c -o CMakeFiles\FlightsProject.dir\flights_project\src\flight\flight.c.s

# Object files for target FlightsProject
FlightsProject_OBJECTS = \
"CMakeFiles/FlightsProject.dir/main.c.obj" \
"CMakeFiles/FlightsProject.dir/flights_project/src/country/country_array.c.obj" \
"CMakeFiles/FlightsProject.dir/flights_project/src/country/city.c.obj" \
"CMakeFiles/FlightsProject.dir/flights_project/src/calendar/calendar.c.obj" \
"CMakeFiles/FlightsProject.dir/flights_project/src/passenger/passenger.c.obj" \
"CMakeFiles/FlightsProject.dir/flights_project/src/flight/flight.c.obj"

# External object files for target FlightsProject
FlightsProject_EXTERNAL_OBJECTS =

FlightsProject.exe: CMakeFiles/FlightsProject.dir/main.c.obj
FlightsProject.exe: CMakeFiles/FlightsProject.dir/flights_project/src/country/country_array.c.obj
FlightsProject.exe: CMakeFiles/FlightsProject.dir/flights_project/src/country/city.c.obj
FlightsProject.exe: CMakeFiles/FlightsProject.dir/flights_project/src/calendar/calendar.c.obj
FlightsProject.exe: CMakeFiles/FlightsProject.dir/flights_project/src/passenger/passenger.c.obj
FlightsProject.exe: CMakeFiles/FlightsProject.dir/flights_project/src/flight/flight.c.obj
FlightsProject.exe: CMakeFiles/FlightsProject.dir/build.make
FlightsProject.exe: CMakeFiles/FlightsProject.dir/linklibs.rsp
FlightsProject.exe: CMakeFiles/FlightsProject.dir/objects1.rsp
FlightsProject.exe: CMakeFiles/FlightsProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\EGYETEM\DSA\FlightsProjekt\projekt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable FlightsProject.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\FlightsProject.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FlightsProject.dir/build: FlightsProject.exe
.PHONY : CMakeFiles/FlightsProject.dir/build

CMakeFiles/FlightsProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FlightsProject.dir\cmake_clean.cmake
.PHONY : CMakeFiles/FlightsProject.dir/clean

CMakeFiles/FlightsProject.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\EGYETEM\DSA\FlightsProjekt\projekt C:\EGYETEM\DSA\FlightsProjekt\projekt C:\EGYETEM\DSA\FlightsProjekt\projekt\cmake-build-debug C:\EGYETEM\DSA\FlightsProjekt\projekt\cmake-build-debug C:\EGYETEM\DSA\FlightsProjekt\projekt\cmake-build-debug\CMakeFiles\FlightsProject.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FlightsProject.dir/depend

