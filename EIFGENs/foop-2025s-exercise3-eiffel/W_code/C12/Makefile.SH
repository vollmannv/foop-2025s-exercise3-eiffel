case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C12"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\time\spec\include" -I"\$(ISE_LIBRARY)\library\vision2\spec\include" -I"\$(ISE_LIBRARY)\C_library\zlib" -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = foop-2025s-exercise3-eiffel$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C12_c.obj 

OLDOBJECTS =  we1367.o we1367d.o we1366.o we1366d.o we1365.o we1365d.o we1364.o \
	we1364d.o we1363.o we1363d.o we1362.o we1362d.o we1361.o we1361d.o \
	we1360.o we1360d.o we1359.o we1359d.o we1358.o we1358d.o we1357.o \
	we1357d.o we1356.o we1356d.o we1355.o we1355d.o we1354.o we1354d.o \
	we1353.o we1353d.o we1352.o we1352d.o we1351.o we1351d.o we1350.o \
	we1350d.o we1349.o we1349d.o we1348.o we1348d.o we1347.o we1347d.o \
	we1346.o we1346d.o we1345.o we1345d.o we1344.o we1344d.o we1343.o \
	we1343d.o we1342.o we1342d.o we1341.o we1341d.o we1340.o we1340d.o \
	we1339.o we1339d.o we1338.o we1338d.o we1337.o we1337d.o we1369.o \
	we1369d.o we1368.o we1368d.o 

all: Cobj12.o

Cobj12.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj12.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

