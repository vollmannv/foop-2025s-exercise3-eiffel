INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\time\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\vision2\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\C_library\zlib" -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\wel\spec\windows\include"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:CONSOLE
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\lib\msc_vc140\wkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = foop-2025s-exercise3-eiffel.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C16_c.obj 

OLDOBJECTS =  ev1471.obj ev1471d.obj ev1492.obj ev1492d.obj ev1472.obj ev1472d.obj ev1501.obj \
	ev1501d.obj ev1484.obj ev1484d.obj ev1474.obj ev1474d.obj ev1480.obj ev1480d.obj \
	ev1488.obj ev1488d.obj ev1479.obj ev1479d.obj ev1483.obj ev1483d.obj ev1497.obj \
	ev1497d.obj ev1494.obj ev1494d.obj ev1493.obj ev1493d.obj ev1473.obj ev1473d.obj \
	ev1477.obj ev1477d.obj ev1478.obj ev1478d.obj ev1489.obj ev1489d.obj ev1496.obj \
	ev1496d.obj ev1495.obj ev1495d.obj ev1475.obj ev1475d.obj ev1485.obj ev1485d.obj \
	ev1491.obj ev1491d.obj ev1481.obj ev1481d.obj ev1476.obj ev1476d.obj ev1486.obj \
	ev1486d.obj ev1482.obj ev1482d.obj ev1490.obj ev1490d.obj ev1470.obj ev1470d.obj \
	ev1500.obj ev1500d.obj ev1499.obj ev1499d.obj ev1498.obj ev1498d.obj ev1487.obj \
	ev1487d.obj ev1469.obj ev1469d.obj 

all::  Cobj16.lib

Cobj16.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

