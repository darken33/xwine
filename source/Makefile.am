## Process this file with automake to produce Makefile.in

SUBDIRS = macros src

EXTRA_DIST = \
	autogen.sh \
	xwine.glade

install-data-local:
	@$(NORMAL_INSTALL)
	if test -d /usr/share/applnk-mdk/Applications; then \
	  $(mkinstalldirs) /usr/share/applnk-mdk/Applications/Emulators; \
	  if test -f xwine.desktop; then \
	     $(INSTALL_DATA) xwine.desktop /usr/share/applnk-mdk/Applications/Emulators; \
	  fi \
	elif test -d /usr/share/applnk/; then \
	  $(mkinstalldirs) /usr/share/applnk/Applications; \
	  if test -f xwine.desktop; then \
	     $(INSTALL_DATA) xwine.desktop /usr/share/applnk/Applications; \
	  fi \
	elif test -d /usr/share/applications; then \
	  if test -f xwine.desktop; then \
	     $(INSTALL_DATA) xwine.desktop /usr/share/applications; \
	  fi \
	fi
	if test -d $(srcdir)/pixmaps; then \
	  $(mkinstalldirs) $(DESTDIR)$(datadir)/pixmaps/$(PACKAGE); \
	  for pixmap in $(srcdir)/pixmaps/*; do \
	    if test -f $$pixmap; then \
	      $(INSTALL_DATA) $$pixmap $(DESTDIR)$(datadir)/pixmaps/$(PACKAGE); \
	    fi \
	  done \
	fi
	if test -d $(srcdir)/pixmaps/background; then \
	  $(mkinstalldirs) $(DESTDIR)$(datadir)/pixmaps/$(PACKAGE)/background; \
	  for pixmap in $(srcdir)/pixmaps/background/*; do \
	    if test -f $$pixmap; then \
	      $(INSTALL_DATA) $$pixmap $(DESTDIR)$(datadir)/pixmaps/$(PACKAGE)/background; \
	    fi \
	  done \
	fi
	if test -d $(srcdir)/doc; then \
	  $(mkinstalldirs) $(DESTDIR)$(datadir)/doc/$(PACKAGE); \
	  for doc in $(srcdir)/doc/*; do \
	    if test -f $$doc; then \
	      $(INSTALL_DATA) $$doc $(DESTDIR)$(datadir)/doc/$(PACKAGE); \
	    fi \
	  done \
	fi
	if test -d $(srcdir)/doc/fr; then \
	  $(mkinstalldirs) $(DESTDIR)$(datadir)/doc/$(PACKAGE)/fr; \
	  for doc in $(srcdir)/doc/fr/*; do \
	    if test -f $$doc; then \
	      $(INSTALL_DATA) $$doc $(DESTDIR)$(datadir)/doc/$(PACKAGE)/fr; \
	    fi \
	  done \
	fi
	if test -d $(srcdir)/doc/fr/imgs; then \
	  $(mkinstalldirs) $(DESTDIR)$(datadir)/doc/$(PACKAGE)/fr/imgs; \
	  for doc in $(srcdir)/doc/fr/imgs/*; do \
	    if test -f $$doc; then \
	      $(INSTALL_DATA) $$doc $(DESTDIR)$(datadir)/doc/$(PACKAGE)/fr/imgs; \
	    fi \
	  done \
	fi
	if test -d $(srcdir)/doc/en; then \
	  $(mkinstalldirs) $(DESTDIR)$(datadir)/doc/$(PACKAGE)/en; \
	  for doc in $(srcdir)/doc/en/*; do \
	    if test -f $$doc; then \
	      $(INSTALL_DATA) $$doc $(DESTDIR)$(datadir)/doc/$(PACKAGE)/en; \
	    fi \
	  done \
	fi
	if test -d $(srcdir)/src/lang; then \
	  $(mkinstalldirs) $(DESTDIR)$(datadir)/$(PACKAGE)/lang; \
	  for doc in $(srcdir)/src/lang/*; do \
	    if test -f $$doc; then \
	      $(INSTALL_DATA) $$doc $(DESTDIR)$(datadir)/$(PACKAGE)/lang; \
	    fi \
	  done \
	fi
	$(mkinstalldirs) /etc/$(PACKAGE)/apps;

dist-hook:
	if test -d /usr/share/applnk-mdk/Applications; then \
	  mkdir /usr/share/applnk-mdk/Applications/Emulators; \
	  if test -f xwine.desktop; then \
	     cp -p xwine.desktop /usr/share/applnk-mdk/Applications/Emulators; \
	  fi \
	elif test -d /usr/share/applnk/; then \
	  mkdir /usr/share/applnk/Applications; \
	  if test -f xwine.desktop; then \
	     cp -p xwine.desktop /usr/share/applnk/Applications; \
	  fi \
	elif test -d /usr/share/applications; then \
	  if test -f xwine.desktop; then \
	     cp -p xwine.desktop /usr/share/applications; \
	  fi \
	fi
	if test -d pixmaps; then \
	  mkdir $(distdir)/pixmaps; \
	  for pixmap in pixmaps/*; do \
	    if test -f $$pixmap; then \
	      cp -p $$pixmap $(distdir)/pixmaps; \
	    fi \
	  done \
	fi
	if test -d pixmaps/background; then \
	  mkdir $(distdir)/pixmaps/background; \
	  for pixmap in pixmaps/background/*; do \
	    if test -f $$pixmap; then \
	      cp -p $$pixmap $(distdir)/pixmaps/background; \
	    fi \
	  done \
	fi
	if test -d doc; then \
	  mkdir $(distdir)/doc; \
	  for doc in doc/*; do \
	    if test -f $$doc; then \
	      cp -p $$doc $(distdir)/doc; \
	    fi \
	  done \
	fi
	if test -d doc/fr; then \
	  mkdir $(distdir)/doc/fr; \
	  for doc in doc/fr/*; do \
	    if test -f $$doc; then \
	      cp -p $$doc $(distdir)/doc/fr; \
	    fi \
	  done \
	fi
	if test -d doc/fr/imgs; then \
	  mkdir $(distdir)/doc/fr/imgs; \
	  for doc in doc/fr/imgs/*; do \
	    if test -f $$doc; then \
	      cp -p $$doc $(distdir)/doc/fr/imgs; \
	    fi \
	  done \
	fi
	if test -d doc/en; then \
	  mkdir $(distdir)/doc/en; \
	  for doc in doc/en/*; do \
	    if test -f $$doc; then \
	      cp -p $$doc $(distdir)/doc/en; \
	    fi \
	  done \
	fi
	if test -d src/lang; then \
	  mkdir $(distdir)/lang; \
	  for doc in src/lang/*; do \
	    if test -f $$doc; then \
	      cp -p $$doc $(distdir)/lang; \
	    fi \
	  done \
	fi
