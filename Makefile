#############################################################################
# Makefile for building: helloworld
# Generated by qmake (2.01a) (Qt 4.7.1) on: Tue Oct 23 16:45:58 2012
# Project:  helloworld.pro
# Template: app
# Command: c:/Qt/4.7.1/bin/qmake.exe -o Makefile helloworld.pro
#############################################################################

first: release
install: release-install
uninstall: release-uninstall
MAKEFILE      = Makefile
QMAKE         = c:/Qt/4.7.1/bin/qmake.exe
DEL_FILE      = rm
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir
COPY          = cp
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = mv
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir
SUBTARGETS    =  \
		release \
		debug

release: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_default: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-make_first: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release first
release-all: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_default: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-make_first: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug first
debug-all: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: helloworld.pro  ../../../Qt/4.7.1/mkspecs/win32-g++/qmake.conf ../../../Qt/4.7.1/mkspecs/qconfig.pri \
		../../../Qt/4.7.1/mkspecs/features/qt_functions.prf \
		../../../Qt/4.7.1/mkspecs/features/qt_config.prf \
		../../../Qt/4.7.1/mkspecs/features/exclusive_builds.prf \
		../../../Qt/4.7.1/mkspecs/features/default_pre.prf \
		../../../Qt/4.7.1/mkspecs/features/win32/default_pre.prf \
		../../../Qt/4.7.1/mkspecs/features/release.prf \
		../../../Qt/4.7.1/mkspecs/features/debug_and_release.prf \
		../../../Qt/4.7.1/mkspecs/features/default_post.prf \
		../../../Qt/4.7.1/mkspecs/features/win32/default_post.prf \
		../../../Qt/4.7.1/mkspecs/features/win32/console.prf \
		../../../Qt/4.7.1/mkspecs/features/win32/rtti.prf \
		../../../Qt/4.7.1/mkspecs/features/win32/exceptions_off.prf \
		../../../Qt/4.7.1/mkspecs/features/win32/stl.prf \
		../../../Qt/4.7.1/mkspecs/features/static.prf \
		../../../Qt/4.7.1/mkspecs/features/warn_on.prf \
		../../../Qt/4.7.1/mkspecs/features/qt.prf \
		../../../Qt/4.7.1/mkspecs/features/win32/thread.prf \
		../../../Qt/4.7.1/mkspecs/features/moc.prf \
		../../../Qt/4.7.1/mkspecs/features/resources.prf \
		../../../Qt/4.7.1/mkspecs/features/uic.prf \
		../../../Qt/4.7.1/mkspecs/features/yacc.prf \
		../../../Qt/4.7.1/mkspecs/features/lex.prf \
		../../../Qt/4.7.1/mkspecs/features/include_source_dir.prf \
		c:/Qt/4.7.1/lib/QtGui.prl \
		c:/Qt/4.7.1/lib/QtCore.prl
	$(QMAKE) -o Makefile helloworld.pro
../../../Qt/4.7.1/mkspecs/qconfig.pri:
../../../Qt/4.7.1/mkspecs/features/qt_functions.prf:
../../../Qt/4.7.1/mkspecs/features/qt_config.prf:
../../../Qt/4.7.1/mkspecs/features/exclusive_builds.prf:
../../../Qt/4.7.1/mkspecs/features/default_pre.prf:
../../../Qt/4.7.1/mkspecs/features/win32/default_pre.prf:
../../../Qt/4.7.1/mkspecs/features/release.prf:
../../../Qt/4.7.1/mkspecs/features/debug_and_release.prf:
../../../Qt/4.7.1/mkspecs/features/default_post.prf:
../../../Qt/4.7.1/mkspecs/features/win32/default_post.prf:
../../../Qt/4.7.1/mkspecs/features/win32/console.prf:
../../../Qt/4.7.1/mkspecs/features/win32/rtti.prf:
../../../Qt/4.7.1/mkspecs/features/win32/exceptions_off.prf:
../../../Qt/4.7.1/mkspecs/features/win32/stl.prf:
../../../Qt/4.7.1/mkspecs/features/static.prf:
../../../Qt/4.7.1/mkspecs/features/warn_on.prf:
../../../Qt/4.7.1/mkspecs/features/qt.prf:
../../../Qt/4.7.1/mkspecs/features/win32/thread.prf:
../../../Qt/4.7.1/mkspecs/features/moc.prf:
../../../Qt/4.7.1/mkspecs/features/resources.prf:
../../../Qt/4.7.1/mkspecs/features/uic.prf:
../../../Qt/4.7.1/mkspecs/features/yacc.prf:
../../../Qt/4.7.1/mkspecs/features/lex.prf:
../../../Qt/4.7.1/mkspecs/features/include_source_dir.prf:
c:\Qt\4.7.1\lib\QtGui.prl:
c:\Qt\4.7.1\lib\QtCore.prl:
qmake: qmake_all FORCE
	@$(QMAKE) -o Makefile helloworld.pro

qmake_all: FORCE

make_default: release-make_default debug-make_default FORCE
make_first: release-make_first debug-make_first FORCE
all: release-all debug-all FORCE
clean: release-clean debug-clean FORCE
distclean: release-distclean debug-distclean FORCE
	-$(DEL_FILE) Makefile

check: first

release-mocclean: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
