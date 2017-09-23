# Autoconf requirements
# Process this file with autoconf to produce a configure script.
# Initilize, but also more options. Note that parameters brackets and whitespace.
AC_INIT([Hello], [1.0], [473115736@qq.com])
# Force autoconf to be at least this version number:
AC_PREREQ([2.69])
# Safety check - List a soure file that wouldn't be in other directories:
AC_CONFIG_SRCDIR([hello.c])
# Put configuration results here, so we can easily #include them:
AC_CONFIG_HEADERS([config.h])
# Put autotools auxiliary files in a subdir, so they don't clutter top dir:
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
# Enable to "automake" to simplify creating makefiles:
AM_INIT_AUTOMAKE(1.11 -Wall -Werror)
AC_CONFIG_FILES([Makefile])

# Checks for C complier.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_OUTPUT
