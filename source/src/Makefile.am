## Process this file with automake to produce Makefile.in

INCLUDES = \
	-I$(top_srcdir)/intl \
	$(GNOME_INCLUDEDIR) \
	$(XML2_CFLAGS)

bin_PROGRAMS = xwine

xwine_SOURCES = \
	main.c \
	commun.c donnees.h commun.h\
	w_about.c callback.h\
	w_add_param.c \
	w_app_dll.c \
	w_calc.c \
	w_dll_gest.c \
	w_dll_override.c \
	w_drive_cfg.c \
	w_drive_sel_path.c \
	w_editeur.c \
	w_edit_file_selec.c \
	w_executer.c \
	w_gest_app.c \
	w_gest_drive.c \
	w_install_app.c \
	w_log.c \
	w_messages.c \
	w_parcour_exe.c \
	w_quitter.c \
	w_run_app.c \
	w_wine_config.c \
	w_wine_console.c \
	w_wine_gfx.c \
	w_wine_look.c \
	w_wine_media.c \
	w_wine_port.c \
	w_wine_registry.c \
	w_wine_system.c \
	w_wine_version.c \
	w_xwine.c \
        w_export.c \
        w_menu.c \
	w_prefs.c \
	w_config.c \
	support.c support.h \
	interface.c interface.h 

xwine_LDADD = $(GNOME_LIBDIR) $(GNOMEUI_LIBS) $(INTLLIBS) $(XML2_LIB) 
