dnl
dnl XML2_HOOK (script-if-xml2-found, failflag)
dnl
dnl If failflag is "failure", script aborts due to lack of XML2
dnl 
dnl Check for availability of the libxml2 library
dnl the XML parser uses libz if available too
dnl

AC_DEFUN([XML2_HOOK],[
	AC_PATH_PROG(XML2_CONFIG,xml2-config,no)
	if test "$XML2_CONFIG" = no; then
		if test x$2 = xfailure; then
			AC_MSG_ERROR(Could not find xml2-config)
		fi
	fi
	XML2_CFLAGS=`xml2-config --cflags`
	AC_SUBST(XML2_CFLAGS)
	XML2_LIB=`xml2-config --libs`
	AC_SUBST(XML2_LIB)
])

AC_DEFUN([XML2_CHECK], [
	XML2_HOOK([],failure)
])
