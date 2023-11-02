CONFIG += c++17
QMAKE_CXXFLAGS += -std=c++17


# RAYLIB_PATH = C:\raylib
# High warnings levels
# -Werror
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Weffc++
QMAKE_CXXFLAGS += -static-libgcc -static-libstdc++

# QMAKE_CXX = C:/raylib/MinGW/bin/g++.exe
# QMAKE_LINK = C:/raylib/MinGW/bin/ld
# QMAKE_MAKEFILE = C:/raylib/MinGW/bin/mingw32-make.exe

# Allow debug and release mode
CONFIG += debug_and_release

# CONFIG += staticlib

# In release mode, turn on profiling
CONFIG(release, debug|release) {

  DEFINES += NDEBUG

# gprof
  QMAKE_CXXFLAGS += -pg
  QMAKE_LFLAGS += -pg
}

LIBS += -lraylib -Iexternal -lopengl32 -lgdi32 -lwinmm
LIBS += -static -lpthread

SOURCES += \
        fibran.cpp \
        graphics.cpp \
        jankenpon.cpp \
        main.cpp \
        player.cpp

HEADERS += \
  fibran.h \
  graphics.h \
  jankenpon.h \
  player.h
