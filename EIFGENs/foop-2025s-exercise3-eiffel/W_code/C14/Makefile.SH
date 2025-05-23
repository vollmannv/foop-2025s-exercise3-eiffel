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
echo "Compiling C code in C14"
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

OBJECTS = big_file_C14_c.obj 

OLDOBJECTS =  ev1423.o ev1423d.o ev1434.o ev1434d.o ev1433.o ev1433d.o ev1432.o \
	ev1432d.o ev1424.o ev1424d.o ev1422.o ev1422d.o ev1431.o ev1431d.o \
	ev1421.o ev1421d.o ev1430.o ev1430d.o ev1429.o ev1429d.o ev1428.o \
	ev1428d.o ev1420.o ev1420d.o ev1419.o ev1419d.o ev1418.o ev1418d.o \
	ev1417.o ev1417d.o ev1416.o ev1416d.o ev1415.o ev1415d.o ev1414.o \
	ev1414d.o ev1413.o ev1413d.o ev1412.o ev1412d.o ev1427.o ev1427d.o \
	ev1411.o ev1411d.o ev1410.o ev1410d.o ev1409.o ev1409d.o ev1426.o \
	ev1426d.o ev1425.o ev1425d.o ev1408.o ev1408d.o ev1435.o ev1435d.o \
	ev1407.o ev1407d.o ev1406.o ev1406d.o ev1405.o ev1405d.o ev1404.o \
	ev1404d.o ev1403.o ev1403d.o 

all: Cobj14.o

Cobj14.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj14.o $(OBJECTS)
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

