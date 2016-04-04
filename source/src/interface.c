/*
 * NE PAS ÉDITER CE FICHIER - il est généré par Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#include <gnome.h>

#include "callbacks.h"
#include "interface.h"
#include "donnees.h"
#include "support.h"

static GnomeUIInfo M_DiIVERTISSEMENTS_menu_uiinfo[] =
{
  {
    GNOME_APP_UI_ITEM, N_(texte[0]),
    NULL,
    (gpointer) on_m_winemine_activate, NULL, NULL,
    GNOME_APP_PIXMAP_FILENAME, "xwine/winmine.xpm",
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_END
};

static GnomeUIInfo M_ADMIN_menu_uiinfo[] =
{
  {
    GNOME_APP_UI_ITEM, N_(texte[1]),
    NULL,
    (gpointer) on_m_regedit_activate, NULL, NULL,
    GNOME_APP_PIXMAP_FILENAME, "xwine/regedit.xpm",
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[2]),
    NULL,
    (gpointer) on_m_progman_activate, NULL, NULL,
    GNOME_APP_PIXMAP_FILENAME, "xwine/progman.xpm",
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[3]),
    NULL,
    (gpointer) on_m_uninst_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_STOP,
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_END
};

static GnomeUIInfo M_WINE_menu_uiinfo[] =
{
  {
    GNOME_APP_UI_SUBTREE, N_(texte[4]),
    NULL,
    M_DiIVERTISSEMENTS_menu_uiinfo, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_OPEN,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_SUBTREE, N_(texte[5]),
    NULL,
    M_ADMIN_menu_uiinfo, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_OPEN,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[6]),
    NULL,
    (gpointer) on_m_notepad_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_PROP,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[7]),
    NULL,
    (gpointer) on_m_cmd_activate, NULL, NULL,
    GNOME_APP_PIXMAP_FILENAME, "xwine/gnome-terminal.xpm",
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[8]),
    NULL,
    (gpointer) on_m_winhelp_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_BOOK_RED,
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_END
};

static GnomeUIInfo M_PROGRAMS_menu_uiinfo[] =
{
  {
    GNOME_APP_UI_ITEM, N_(texte[9]),
    NULL,
    (gpointer) on_m_liste_prog_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_OPEN,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_SUBTREE, N_(texte[10]),
    NULL,
    M_WINE_menu_uiinfo, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_OPEN,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[11]),
    NULL,
    (gpointer) on_m_calc_activate, NULL, NULL,
    GNOME_APP_PIXMAP_FILENAME, "xwine/gnome-calc2.xpm",
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[12]),
    NULL,
    (gpointer) on_m_editor_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_PREF,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[13]),
    NULL,
    (gpointer) on_m_reset_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_CLOSE,
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_END
};

static GnomeUIInfo M_PARAMS_menu_uiinfo[] =
{
  {
    GNOME_APP_UI_ITEM, N_(texte[14]),
    NULL,
    (gpointer) on_m_install_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_SAVE,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[15]),
    NULL,
    (gpointer) on_m_voir_log_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_SEARCH,
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_SEPARATOR,
  {
    GNOME_APP_UI_ITEM, N_(texte[16]),
    NULL,
    (gpointer) on_m_wine_config_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_PROP,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[17]),
    NULL,
    (gpointer) on_m_xwine_pref_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_PREF,
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_END
};

static GnomeUIInfo M_AIDE_menu_uiinfo[] =
{
  {
    GNOME_APP_UI_ITEM, N_(texte[18]),
    NULL,
    (gpointer) on_m_faq_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_BOOK_YELLOW,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[19]),
    NULL,
    (gpointer) on_m_manual_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_BOOK_BLUE,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_ITEM, N_(texte[20]),
    NULL,
    (gpointer) on_m_about_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_ABOUT,
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_END
};

static GnomeUIInfo M_START_menu_uiinfo[] =
{
  {
    GNOME_APP_UI_SUBTREE, N_(texte[21]),
    NULL,
    M_PROGRAMS_menu_uiinfo, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_OPEN,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_SUBTREE, N_(texte[22]),
    NULL,
    M_PARAMS_menu_uiinfo, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_PREF,
    0, (GdkModifierType) 0, NULL
  },
  {
    GNOME_APP_UI_SUBTREE, N_(texte[23]),
    NULL,
    M_AIDE_menu_uiinfo, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_BOOK_RED,
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_SEPARATOR,
  {
    GNOME_APP_UI_ITEM, N_(texte[24]),
    NULL,
    (gpointer) on_m_exec_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_EXEC,
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_SEPARATOR,
  {
    GNOME_APP_UI_ITEM, N_(texte[25]),
    NULL,
    (gpointer) on_m_quitter_activate, NULL, NULL,
    GNOME_APP_PIXMAP_STOCK, GNOME_STOCK_MENU_EXIT,
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_END
};

static GnomeUIInfo M_XWINE_uiinfo[] =
{
  {
    GNOME_APP_UI_SUBTREE, N_(texte[26]),
    NULL,
    M_START_menu_uiinfo, NULL, NULL,
    GNOME_APP_PIXMAP_FILENAME, "xwine/xwine_16.xpm",
    0, (GdkModifierType) 0, NULL
  },
  GNOMEUIINFO_END
};

GtkWidget*
create_W_XWINE (void)
{
  GtkWidget *W_XWINE;
  GtkWidget *vbox1;
  gchar *IMG_XWINE_filename;
  GtkWidget *IMG_XWINE;
  GtkWidget *hbox1;
  GtkWidget *M_XWINE;
  GtkWidget *frame3;
  GtkWidget *hbox3;
  GtkWidget *hbox4;
  GtkWidget *frame6;
  GtkWidget *hbox6;
  GtkWidget *hbox7;
  GtkWidget *CB_TASK;
  GtkWidget *E_TASK;
  GtkWidget *hbuttonbox2;
  GtkWidget *BT_REFRESH;
  GtkWidget *BT_KILL;
  GtkWidget *frame5;
  GtkWidget *OBJ_CLOCK;

  W_XWINE = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_object_set_data (GTK_OBJECT (W_XWINE), "W_XWINE", W_XWINE);
  gtk_window_set_title (GTK_WINDOW (W_XWINE), _(texte[27]));
  gtk_window_set_position (GTK_WINDOW (W_XWINE), GTK_WIN_POS_CENTER);
  gtk_window_set_policy (GTK_WINDOW (W_XWINE), FALSE, FALSE, FALSE);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox1);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "vbox1", vbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (W_XWINE), vbox1);

  IMG_XWINE = gtk_type_new (gnome_pixmap_get_type ());
  IMG_XWINE_filename = gnome_pixmap_file ("xwine/background/XWine_standard_bkg.png");
  if (IMG_XWINE_filename)
    gnome_pixmap_load_file (GNOME_PIXMAP (IMG_XWINE), IMG_XWINE_filename);
  else
    g_warning (_("Couldn't find pixmap file: %s"), "XWine_standard_bkg.png");
  g_free (IMG_XWINE_filename);
  gtk_widget_ref (IMG_XWINE);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "IMG_XWINE", IMG_XWINE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (IMG_XWINE);
  gtk_box_pack_start (GTK_BOX (vbox1), IMG_XWINE, TRUE, TRUE, 0);
  gtk_widget_set_usize (IMG_XWINE, 640, 440);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox1);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "hbox1", hbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (vbox1), hbox1, FALSE, FALSE, 0);

  M_XWINE = gtk_menu_bar_new ();
  gtk_widget_ref (M_XWINE);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_XWINE", M_XWINE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (M_XWINE);
  gtk_box_pack_start (GTK_BOX (hbox1), M_XWINE, FALSE, TRUE, 0);
  gnome_app_fill_menu (GTK_MENU_SHELL (M_XWINE), M_XWINE_uiinfo,
                       NULL, FALSE, 0);

  gtk_widget_ref (M_XWINE_uiinfo[0].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_START",
                            M_XWINE_uiinfo[0].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_START_menu_uiinfo[0].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_PROGRAMS",
                            M_START_menu_uiinfo[0].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_PROGRAMS_menu_uiinfo[0].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_LISTE_PROG",
                            M_PROGRAMS_menu_uiinfo[0].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_PROGRAMS_menu_uiinfo[1].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_WINE",
                            M_PROGRAMS_menu_uiinfo[1].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_WINE_menu_uiinfo[0].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_DiIVERTISSEMENTS",
                            M_WINE_menu_uiinfo[0].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_DiIVERTISSEMENTS_menu_uiinfo[0].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_WINEMINE",
                            M_DiIVERTISSEMENTS_menu_uiinfo[0].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_WINE_menu_uiinfo[1].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_ADMIN",
                            M_WINE_menu_uiinfo[1].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_ADMIN_menu_uiinfo[0].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_REGEDIT",
                            M_ADMIN_menu_uiinfo[0].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_ADMIN_menu_uiinfo[1].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_PROGMAN",
                            M_ADMIN_menu_uiinfo[1].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_ADMIN_menu_uiinfo[2].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_UNINST",
                            M_ADMIN_menu_uiinfo[2].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_WINE_menu_uiinfo[2].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_NOTEPAD",
                            M_WINE_menu_uiinfo[2].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_WINE_menu_uiinfo[3].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_CMD",
                            M_WINE_menu_uiinfo[3].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_WINE_menu_uiinfo[4].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_WINHELP",
                            M_WINE_menu_uiinfo[4].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_PROGRAMS_menu_uiinfo[2].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_CALC",
                            M_PROGRAMS_menu_uiinfo[2].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_PROGRAMS_menu_uiinfo[3].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_EDITOR",
                            M_PROGRAMS_menu_uiinfo[3].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_PROGRAMS_menu_uiinfo[4].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_RESET",
                            M_PROGRAMS_menu_uiinfo[4].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_START_menu_uiinfo[1].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_PARAMS",
                            M_START_menu_uiinfo[1].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_PARAMS_menu_uiinfo[0].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_INSTALL",
                            M_PARAMS_menu_uiinfo[0].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_PARAMS_menu_uiinfo[1].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_VOIR_LOG",
                            M_PARAMS_menu_uiinfo[1].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_PARAMS_menu_uiinfo[2].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_SEP1",
                            M_PARAMS_menu_uiinfo[2].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_PARAMS_menu_uiinfo[3].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_WINE_CONFIG",
                            M_PARAMS_menu_uiinfo[3].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_PARAMS_menu_uiinfo[4].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_XWINE_PREF",
                            M_PARAMS_menu_uiinfo[4].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_START_menu_uiinfo[2].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_AIDE",
                            M_START_menu_uiinfo[2].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_AIDE_menu_uiinfo[0].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_FAQ",
                            M_AIDE_menu_uiinfo[0].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_AIDE_menu_uiinfo[1].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_MANUAL",
                            M_AIDE_menu_uiinfo[1].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_AIDE_menu_uiinfo[2].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_ABOUT",
                            M_AIDE_menu_uiinfo[2].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_START_menu_uiinfo[3].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_SEP4",
                            M_START_menu_uiinfo[3].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_START_menu_uiinfo[4].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_EXEC",
                            M_START_menu_uiinfo[4].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_START_menu_uiinfo[5].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_SEP5",
                            M_START_menu_uiinfo[5].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_START_menu_uiinfo[6].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "M_QUITTER",
                            M_START_menu_uiinfo[6].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  frame3 = gtk_frame_new (NULL);
  gtk_widget_ref (frame3);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "frame3", frame3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame3);
  gtk_box_pack_start (GTK_BOX (hbox1), frame3, TRUE, TRUE, 0);
  gtk_frame_set_shadow_type (GTK_FRAME (frame3), GTK_SHADOW_OUT);

  hbox3 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox3);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "hbox3", hbox3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (frame3), hbox3);

  hbox4 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox4);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "hbox4", hbox4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox4);
  gtk_box_pack_start (GTK_BOX (hbox3), hbox4, TRUE, TRUE, 0);

  frame6 = gtk_frame_new (NULL);
  gtk_widget_ref (frame6);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "frame6", frame6,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame6);
  gtk_box_pack_start (GTK_BOX (hbox4), frame6, TRUE, TRUE, 0);
  gtk_widget_set_usize (frame6, 495, -2);
  gtk_frame_set_shadow_type (GTK_FRAME (frame6), GTK_SHADOW_NONE);

  hbox6 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox6);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "hbox6", hbox6,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (frame6), hbox6);

  hbox7 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox7);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "hbox7", hbox7,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox7);
  gtk_box_pack_start (GTK_BOX (hbox6), hbox7, TRUE, TRUE, 0);

  CB_TASK = gtk_combo_new ();
  gtk_widget_ref (CB_TASK);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "CB_TASK", CB_TASK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_TASK);
  gtk_box_pack_start (GTK_BOX (hbox7), CB_TASK, TRUE, TRUE, 0);
  gtk_combo_set_value_in_list (GTK_COMBO (CB_TASK), TRUE, TRUE);

  E_TASK = GTK_COMBO (CB_TASK)->entry;
  gtk_widget_ref (E_TASK);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "E_TASK", E_TASK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_TASK);
  gtk_entry_set_editable (GTK_ENTRY (E_TASK), FALSE);

  hbuttonbox2 = gtk_hbutton_box_new ();
  gtk_widget_ref (hbuttonbox2);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "hbuttonbox2", hbuttonbox2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbuttonbox2);
  gtk_box_pack_start (GTK_BOX (hbox7), hbuttonbox2, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox2), GTK_BUTTONBOX_START);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (hbuttonbox2), 0);
  gtk_button_box_set_child_ipadding (GTK_BUTTON_BOX (hbuttonbox2), 0, 0);

  BT_REFRESH = gtk_button_new_with_label (_("Refresh"));
  gtk_widget_ref (BT_REFRESH);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "BT_REFRESH", BT_REFRESH,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_REFRESH);
  gtk_container_add (GTK_CONTAINER (hbuttonbox2), BT_REFRESH);
  GTK_WIDGET_SET_FLAGS (BT_REFRESH, GTK_CAN_DEFAULT);

  BT_KILL = gtk_button_new_with_label (_("Kill"));
  gtk_widget_ref (BT_KILL);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "BT_KILL", BT_KILL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_KILL);
  gtk_container_add (GTK_CONTAINER (hbuttonbox2), BT_KILL);
  GTK_WIDGET_SET_FLAGS (BT_KILL, GTK_CAN_DEFAULT);

  frame5 = gtk_frame_new (NULL);
  gtk_widget_ref (frame5);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "frame5", frame5,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame5);
  gtk_box_pack_start (GTK_BOX (hbox4), frame5, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (frame5), 3);

  OBJ_CLOCK = gtk_clock_new (GTK_CLOCK_REALTIME);
  gtk_widget_ref (OBJ_CLOCK);
  gtk_object_set_data_full (GTK_OBJECT (W_XWINE), "OBJ_CLOCK", OBJ_CLOCK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (OBJ_CLOCK);
  gtk_container_add (GTK_CONTAINER (frame5), OBJ_CLOCK);

  gtk_signal_connect (GTK_OBJECT (W_XWINE), "destroy",
                      GTK_SIGNAL_FUNC (on_w_xwine_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_REFRESH), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_refresh_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_KILL), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_kill_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (OBJ_CLOCK), "draw",
                      GTK_SIGNAL_FUNC (on_obj_clock_draw),
                      NULL);

  return W_XWINE;
}

GtkWidget*
create_W_QUITTER (void)
{
  GtkWidget *W_QUITTER;
  GtkWidget *dialog_vbox1;
  GtkWidget *vbox3;
  GtkWidget *frame1;
  GtkWidget *vbox4;
  GSList *vbox4_group = NULL;
  guint RB_DEL_LOG_key;
  GtkWidget *RB_DEL_LOG;
  guint RB_KEEP_LOG_key;
  GtkWidget *RB_KEEP_LOG;
  GtkWidget *dialog_action_area1;
  GtkWidget *BT_QUITTER_OK;
  GtkWidget *BT_QUITTER_ANNUL;
  GtkAccelGroup *accel_group;

  accel_group = gtk_accel_group_new ();

  W_QUITTER = gnome_dialog_new (_(texte[28]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_QUITTER), "W_QUITTER", W_QUITTER);
  GTK_WINDOW (W_QUITTER)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_QUITTER), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_QUITTER), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_QUITTER), FALSE, FALSE, FALSE);

  dialog_vbox1 = GNOME_DIALOG (W_QUITTER)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_QUITTER), "dialog_vbox1", dialog_vbox1);
  gtk_widget_show (dialog_vbox1);

  vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox3);
  gtk_object_set_data_full (GTK_OBJECT (W_QUITTER), "vbox3", vbox3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox3);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), vbox3, FALSE, FALSE, 0);

  frame1 = gtk_frame_new ("");
  gtk_widget_ref (frame1);
  gtk_object_set_data_full (GTK_OBJECT (W_QUITTER), "frame1", frame1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame1);
  gtk_box_pack_start (GTK_BOX (vbox3), frame1, TRUE, TRUE, 0);

  vbox4 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox4);
  gtk_object_set_data_full (GTK_OBJECT (W_QUITTER), "vbox4", vbox4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox4);
  gtk_container_add (GTK_CONTAINER (frame1), vbox4);

  RB_DEL_LOG = gtk_radio_button_new_with_label (vbox4_group, "");
  RB_DEL_LOG_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (RB_DEL_LOG)->child),
                                   _(texte[29]));
  gtk_widget_add_accelerator (RB_DEL_LOG, "clicked", accel_group,
                              RB_DEL_LOG_key, GDK_MOD1_MASK, (GtkAccelFlags) 0);
  vbox4_group = gtk_radio_button_group (GTK_RADIO_BUTTON (RB_DEL_LOG));
  gtk_widget_ref (RB_DEL_LOG);
  gtk_object_set_data_full (GTK_OBJECT (W_QUITTER), "RB_DEL_LOG", RB_DEL_LOG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (RB_DEL_LOG);
  gtk_box_pack_start (GTK_BOX (vbox4), RB_DEL_LOG, FALSE, FALSE, 0);
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (RB_DEL_LOG), TRUE);

  RB_KEEP_LOG = gtk_radio_button_new_with_label (vbox4_group, "");
  RB_KEEP_LOG_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (RB_KEEP_LOG)->child),
                                   _(texte[30]));
  gtk_widget_add_accelerator (RB_KEEP_LOG, "clicked", accel_group,
                              RB_KEEP_LOG_key, GDK_MOD1_MASK, (GtkAccelFlags) 0);
  vbox4_group = gtk_radio_button_group (GTK_RADIO_BUTTON (RB_KEEP_LOG));
  gtk_widget_ref (RB_KEEP_LOG);
  gtk_object_set_data_full (GTK_OBJECT (W_QUITTER), "RB_KEEP_LOG", RB_KEEP_LOG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (RB_KEEP_LOG);
  gtk_box_pack_start (GTK_BOX (vbox4), RB_KEEP_LOG, FALSE, FALSE, 0);

  dialog_action_area1 = GNOME_DIALOG (W_QUITTER)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_QUITTER), "dialog_action_area1", dialog_action_area1);
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area1), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_QUITTER), GNOME_STOCK_BUTTON_OK);
  BT_QUITTER_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_QUITTER)->buttons)->data);
  gtk_widget_ref (BT_QUITTER_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_QUITTER), "BT_QUITTER_OK", BT_QUITTER_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_QUITTER_OK);
  GTK_WIDGET_SET_FLAGS (BT_QUITTER_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_QUITTER), GNOME_STOCK_BUTTON_CANCEL);
  BT_QUITTER_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_QUITTER)->buttons)->data);
  gtk_widget_ref (BT_QUITTER_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_QUITTER), "BT_QUITTER_ANNUL", BT_QUITTER_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_QUITTER_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_QUITTER_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_QUITTER), "destroy",
                      GTK_SIGNAL_FUNC (on_w_quitter_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (RB_DEL_LOG), "toggled",
                      GTK_SIGNAL_FUNC (on_rb_del_log_toggled),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (RB_KEEP_LOG), "toggled",
                      GTK_SIGNAL_FUNC (on_rb_keep_log_toggled),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_QUITTER_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_quitter_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_QUITTER_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_QUITTER));

  gtk_window_add_accel_group (GTK_WINDOW (W_QUITTER), accel_group);

  return W_QUITTER;
}

GtkWidget*
create_W_EXECUTER (void)
{
  GtkWidget *W_EXECUTER;
  GtkWidget *dialog_vbox2;
  GtkWidget *frame2;
  GtkWidget *hbox2;
  GtkWidget *CB_EXEC_PROG;
  GtkWidget *E_EXEC_PROG;
  GtkWidget *BT_EXEC_PARCOUR;
  GtkWidget *dialog_action_area2;
  GtkWidget *BT_EXEC_OK;
  GtkWidget *BT_EXEC_ANNUL;

  W_EXECUTER = gnome_dialog_new (_(texte[31]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_EXECUTER), "W_EXECUTER", W_EXECUTER);
  GTK_WINDOW (W_EXECUTER)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_EXECUTER), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_EXECUTER), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_EXECUTER), FALSE, FALSE, FALSE);

  dialog_vbox2 = GNOME_DIALOG (W_EXECUTER)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_EXECUTER), "dialog_vbox2", dialog_vbox2);
  gtk_widget_show (dialog_vbox2);

  frame2 = gtk_frame_new (NULL);
  gtk_widget_ref (frame2);
  gtk_object_set_data_full (GTK_OBJECT (W_EXECUTER), "frame2", frame2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame2);
  gtk_box_pack_start (GTK_BOX (dialog_vbox2), frame2, FALSE, FALSE, 0);

  hbox2 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox2);
  gtk_object_set_data_full (GTK_OBJECT (W_EXECUTER), "hbox2", hbox2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (frame2), hbox2);

  CB_EXEC_PROG = gnome_entry_new (NULL);
  gtk_widget_ref (CB_EXEC_PROG);
  gtk_object_set_data_full (GTK_OBJECT (W_EXECUTER), "CB_EXEC_PROG", CB_EXEC_PROG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_EXEC_PROG);
  gtk_box_pack_start (GTK_BOX (hbox2), CB_EXEC_PROG, TRUE, TRUE, 0);
  gtk_widget_set_usize (CB_EXEC_PROG, 280, -2);

  E_EXEC_PROG = gnome_entry_gtk_entry (GNOME_ENTRY (CB_EXEC_PROG));
  gtk_widget_ref (E_EXEC_PROG);
  gtk_object_set_data_full (GTK_OBJECT (W_EXECUTER), "E_EXEC_PROG", E_EXEC_PROG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_EXEC_PROG);

  BT_EXEC_PARCOUR = gtk_button_new_with_label (_("..."));
  gtk_widget_ref (BT_EXEC_PARCOUR);
  gtk_object_set_data_full (GTK_OBJECT (W_EXECUTER), "BT_EXEC_PARCOUR", BT_EXEC_PARCOUR,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_EXEC_PARCOUR);
  gtk_box_pack_start (GTK_BOX (hbox2), BT_EXEC_PARCOUR, FALSE, FALSE, 0);
  gtk_widget_set_usize (BT_EXEC_PARCOUR, 50, -2);

  dialog_action_area2 = GNOME_DIALOG (W_EXECUTER)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_EXECUTER), "dialog_action_area2", dialog_action_area2);
  gtk_widget_show (dialog_action_area2);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area2), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area2), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_EXECUTER), GNOME_STOCK_BUTTON_OK);
  BT_EXEC_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_EXECUTER)->buttons)->data);
  gtk_widget_ref (BT_EXEC_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_EXECUTER), "BT_EXEC_OK", BT_EXEC_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_EXEC_OK);
  GTK_WIDGET_SET_FLAGS (BT_EXEC_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_EXECUTER), GNOME_STOCK_BUTTON_CANCEL);
  BT_EXEC_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_EXECUTER)->buttons)->data);
  gtk_widget_ref (BT_EXEC_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_EXECUTER), "BT_EXEC_ANNUL", BT_EXEC_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_EXEC_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_EXEC_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_EXECUTER), "destroy",
                      GTK_SIGNAL_FUNC (on_w_executer_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_EXEC_PARCOUR), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_exec_parcour_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_EXEC_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_exec_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_EXEC_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (W_EXECUTER));

  return W_EXECUTER;
}

GtkWidget*
create_W_ABOUT (void)
{
  const gchar *authors[] = {
    "Philippe BOUSQUET",
    "Apt 21, résidence le \"Vendôme\",",
    "80 rue des Sablières,",
    "33800 BORDEAUX.",
    "tel: 06.61.99.25.84",
    "e-mail: ph.bousquet@abul.org",
    "site: http://darken33.free.fr",
    NULL
  };
  GtkWidget *W_ABOUT;

  W_ABOUT = gnome_about_new ("XWine", VERSION,
                        _("Copyright (c) 2001-2004 Philippe BOUSQUET"),
                        authors,
                        _(texte[32]),
                        "xwine/xwine_logo.png");
  gtk_object_set_data (GTK_OBJECT (W_ABOUT), "W_ABOUT", W_ABOUT);
  gtk_window_set_modal (GTK_WINDOW (W_ABOUT), TRUE);

  gtk_signal_connect (GTK_OBJECT (W_ABOUT), "destroy",
                      GTK_SIGNAL_FUNC (on_w_about_destroy),
                      NULL);

  return W_ABOUT;
}

GtkWidget*
create_W_LOG (void)
{
  GtkWidget *W_LOG;
  GtkWidget *dialog_vbox3;
  GtkWidget *scrolledwindow1;
  GtkWidget *TXT_LOG_FILE;
  GtkWidget *dialog_action_area3;
  GtkWidget *BT_LOG_IMPRIME;
  GtkWidget *BT_LOG_CLEAR;
  GtkWidget *BT_LOG_OK;

  W_LOG = gnome_dialog_new (_(texte[33]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_LOG), "W_LOG", W_LOG);
  gtk_widget_set_usize (W_LOG, 500, 300);
  GTK_WINDOW (W_LOG)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_LOG), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_LOG), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_LOG), FALSE, FALSE, FALSE);

  dialog_vbox3 = GNOME_DIALOG (W_LOG)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_LOG), "dialog_vbox3", dialog_vbox3);
  gtk_widget_show (dialog_vbox3);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow1);
  gtk_object_set_data_full (GTK_OBJECT (W_LOG), "scrolledwindow1", scrolledwindow1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow1);
  gtk_box_pack_start (GTK_BOX (dialog_vbox3), scrolledwindow1, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow1), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  TXT_LOG_FILE = gtk_text_new (NULL, NULL);
  gtk_widget_ref (TXT_LOG_FILE);
  gtk_object_set_data_full (GTK_OBJECT (W_LOG), "TXT_LOG_FILE", TXT_LOG_FILE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (TXT_LOG_FILE);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), TXT_LOG_FILE);

  dialog_action_area3 = GNOME_DIALOG (W_LOG)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_LOG), "dialog_action_area3", dialog_action_area3);
  gtk_widget_show (dialog_action_area3);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area3), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area3), 8);

  gnome_dialog_append_button_with_pixmap (GNOME_DIALOG (W_LOG),
                                          _(texte[34]), GNOME_STOCK_PIXMAP_PRINT);
  BT_LOG_IMPRIME = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_LOG)->buttons)->data);
  gtk_widget_ref (BT_LOG_IMPRIME);
  gtk_object_set_data_full (GTK_OBJECT (W_LOG), "BT_LOG_IMPRIME", BT_LOG_IMPRIME,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_LOG_IMPRIME);
  GTK_WIDGET_SET_FLAGS (BT_LOG_IMPRIME, GTK_CAN_DEFAULT);

  gnome_dialog_append_button_with_pixmap (GNOME_DIALOG (W_LOG),
                                          _(texte[35]), GNOME_STOCK_PIXMAP_TRASH);
  BT_LOG_CLEAR = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_LOG)->buttons)->data);
  gtk_widget_ref (BT_LOG_CLEAR);
  gtk_object_set_data_full (GTK_OBJECT (W_LOG), "BT_LOG_CLEAR", BT_LOG_CLEAR,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_LOG_CLEAR);
  GTK_WIDGET_SET_FLAGS (BT_LOG_CLEAR, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_LOG), GNOME_STOCK_BUTTON_OK);
  BT_LOG_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_LOG)->buttons)->data);
  gtk_widget_ref (BT_LOG_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_LOG), "BT_LOG_OK", BT_LOG_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_LOG_OK);
  GTK_WIDGET_SET_FLAGS (BT_LOG_OK, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_LOG), "destroy",
                      GTK_SIGNAL_FUNC (on_w_log_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_LOG_IMPRIME), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_log_imprime_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_LOG_CLEAR), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_log_clear_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_LOG_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_LOG));

  return W_LOG;
}

GtkWidget*
create_W_WINE_CONFIG (void)
{
  GtkWidget *W_WINE_CONFIG;
  GtkWidget *dialog_vbox4;
  GtkWidget *scrolledwindow2;
  GtkWidget *TXT_WINE_CONFIG;
  GtkWidget *dialog_action_area4;
  GtkWidget *BT_WINE_CONFIG_OK;
  GtkWidget *BT_WINE_CONFIG_ANNUL;

  W_WINE_CONFIG = gnome_dialog_new (_(texte[36]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_WINE_CONFIG), "W_WINE_CONFIG", W_WINE_CONFIG);
  gtk_widget_set_usize (W_WINE_CONFIG, 500, 300);
  GTK_WINDOW (W_WINE_CONFIG)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_WINE_CONFIG), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_WINE_CONFIG), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_WINE_CONFIG), FALSE, FALSE, FALSE);

  dialog_vbox4 = GNOME_DIALOG (W_WINE_CONFIG)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_WINE_CONFIG), "dialog_vbox4", dialog_vbox4);
  gtk_widget_show (dialog_vbox4);

  scrolledwindow2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow2);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONFIG), "scrolledwindow2", scrolledwindow2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow2);
  gtk_box_pack_start (GTK_BOX (dialog_vbox4), scrolledwindow2, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow2), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  TXT_WINE_CONFIG = gtk_text_new (NULL, NULL);
  gtk_widget_ref (TXT_WINE_CONFIG);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONFIG), "TXT_WINE_CONFIG", TXT_WINE_CONFIG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (TXT_WINE_CONFIG);
  gtk_container_add (GTK_CONTAINER (scrolledwindow2), TXT_WINE_CONFIG);
  gtk_text_set_editable (GTK_TEXT (TXT_WINE_CONFIG), TRUE);

  dialog_action_area4 = GNOME_DIALOG (W_WINE_CONFIG)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_WINE_CONFIG), "dialog_action_area4", dialog_action_area4);
  gtk_widget_show (dialog_action_area4);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area4), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area4), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_CONFIG), GNOME_STOCK_BUTTON_OK);
  BT_WINE_CONFIG_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_CONFIG)->buttons)->data);
  gtk_widget_ref (BT_WINE_CONFIG_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONFIG), "BT_WINE_CONFIG_OK", BT_WINE_CONFIG_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_CONFIG_OK);
  GTK_WIDGET_SET_FLAGS (BT_WINE_CONFIG_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_CONFIG), GNOME_STOCK_BUTTON_CANCEL);
  BT_WINE_CONFIG_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_CONFIG)->buttons)->data);
  gtk_widget_ref (BT_WINE_CONFIG_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONFIG), "BT_WINE_CONFIG_ANNUL", BT_WINE_CONFIG_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_CONFIG_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_WINE_CONFIG_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_WINE_CONFIG), "destroy",
                      GTK_SIGNAL_FUNC (on_w_wine_config_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_WINE_CONFIG_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_wine_config_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_WINE_CONFIG_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_WINE_CONFIG));

  return W_WINE_CONFIG;
}

GtkWidget*
create_W_PARCOUR_EXE (void)
{
  GtkWidget *W_PARCOUR_EXE;
  GtkWidget *BT_PARCOUR_EXE_OK;
  GtkWidget *BT_PARCOUR_EXE_ANNUL;

  W_PARCOUR_EXE = gtk_file_selection_new (_(texte[37]));
  gtk_object_set_data (GTK_OBJECT (W_PARCOUR_EXE), "W_PARCOUR_EXE", W_PARCOUR_EXE);
  gtk_container_set_border_width (GTK_CONTAINER (W_PARCOUR_EXE), 10);
  GTK_WINDOW (W_PARCOUR_EXE)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_PARCOUR_EXE), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_PARCOUR_EXE), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_PARCOUR_EXE), FALSE, FALSE, FALSE);
  gtk_file_selection_hide_fileop_buttons (GTK_FILE_SELECTION (W_PARCOUR_EXE));

  BT_PARCOUR_EXE_OK = GTK_FILE_SELECTION (W_PARCOUR_EXE)->ok_button;
  gtk_object_set_data (GTK_OBJECT (W_PARCOUR_EXE), "BT_PARCOUR_EXE_OK", BT_PARCOUR_EXE_OK);
  gtk_widget_show (BT_PARCOUR_EXE_OK);
  GTK_WIDGET_SET_FLAGS (BT_PARCOUR_EXE_OK, GTK_CAN_DEFAULT);

  BT_PARCOUR_EXE_ANNUL = GTK_FILE_SELECTION (W_PARCOUR_EXE)->cancel_button;
  gtk_object_set_data (GTK_OBJECT (W_PARCOUR_EXE), "BT_PARCOUR_EXE_ANNUL", BT_PARCOUR_EXE_ANNUL);
  gtk_widget_show (BT_PARCOUR_EXE_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_PARCOUR_EXE_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_PARCOUR_EXE), "destroy",
                      GTK_SIGNAL_FUNC (on_w_parcour_exe_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_PARCOUR_EXE_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_parcour_exe_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_PARCOUR_EXE_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (W_PARCOUR_EXE));

  return W_PARCOUR_EXE;
}

GtkWidget*
create_WARN_NOT_AVAILABLE (void)
{
  GtkWidget *WARN_NOT_AVAILABLE;
  GtkWidget *dialog_vbox5;
  GtkWidget *BT_NOT_AVAILABLE_OK;
  GtkWidget *dialog_action_area5;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  WARN_NOT_AVAILABLE = gnome_message_box_new (_(texte[41]),
                              GNOME_MESSAGE_BOX_WARNING,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (WARN_NOT_AVAILABLE)->action_area), GNOME_DIALOG (WARN_NOT_AVAILABLE)->buttons->data);
  GNOME_DIALOG (WARN_NOT_AVAILABLE)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (WARN_NOT_AVAILABLE), "WARN_NOT_AVAILABLE", WARN_NOT_AVAILABLE);
  gtk_window_set_title (GTK_WINDOW (WARN_NOT_AVAILABLE), _(texte[40]));
  gtk_window_set_position (GTK_WINDOW (WARN_NOT_AVAILABLE), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (WARN_NOT_AVAILABLE), TRUE);
  gtk_window_set_policy (GTK_WINDOW (WARN_NOT_AVAILABLE), FALSE, FALSE, FALSE);

  dialog_vbox5 = GNOME_DIALOG (WARN_NOT_AVAILABLE)->vbox;
  gtk_object_set_data (GTK_OBJECT (WARN_NOT_AVAILABLE), "dialog_vbox5", dialog_vbox5);
  gtk_widget_show (dialog_vbox5);

  gnome_dialog_append_button (GNOME_DIALOG (WARN_NOT_AVAILABLE), GNOME_STOCK_BUTTON_OK);
  BT_NOT_AVAILABLE_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (WARN_NOT_AVAILABLE)->buttons)->data);
  gtk_widget_ref (BT_NOT_AVAILABLE_OK);
  gtk_object_set_data_full (GTK_OBJECT (WARN_NOT_AVAILABLE), "BT_NOT_AVAILABLE_OK", BT_NOT_AVAILABLE_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_NOT_AVAILABLE_OK);
  GTK_WIDGET_SET_FLAGS (BT_NOT_AVAILABLE_OK, GTK_CAN_DEFAULT);

  dialog_action_area5 = GNOME_DIALOG (WARN_NOT_AVAILABLE)->action_area;
  gtk_widget_ref (dialog_action_area5);
  gtk_object_set_data_full (GTK_OBJECT (WARN_NOT_AVAILABLE), "dialog_action_area5", dialog_action_area5,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (WARN_NOT_AVAILABLE), "destroy",
                      GTK_SIGNAL_FUNC (on_warn_not_available_destroy),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_NOT_AVAILABLE_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (WARN_NOT_AVAILABLE));

  return WARN_NOT_AVAILABLE;
}

GtkWidget*
create_ERR_PROG_SELECT (void)
{
  GtkWidget *ERR_PROG_SELECT;
  GtkWidget *dialog_vbox6;
  GtkWidget *BT_PROG_SELECT_OK;
  GtkWidget *dialog_action_area6;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  ERR_PROG_SELECT = gnome_message_box_new (_(texte[42]),
                              GNOME_MESSAGE_BOX_ERROR,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (ERR_PROG_SELECT)->action_area), GNOME_DIALOG (ERR_PROG_SELECT)->buttons->data);
  GNOME_DIALOG (ERR_PROG_SELECT)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (ERR_PROG_SELECT), "ERR_PROG_SELECT", ERR_PROG_SELECT);
  gtk_window_set_title (GTK_WINDOW (ERR_PROG_SELECT), _(texte[38]));
  gtk_window_set_position (GTK_WINDOW (ERR_PROG_SELECT), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (ERR_PROG_SELECT), TRUE);
  gtk_window_set_policy (GTK_WINDOW (ERR_PROG_SELECT), FALSE, FALSE, FALSE);

  dialog_vbox6 = GNOME_DIALOG (ERR_PROG_SELECT)->vbox;
  gtk_object_set_data (GTK_OBJECT (ERR_PROG_SELECT), "dialog_vbox6", dialog_vbox6);
  gtk_widget_show (dialog_vbox6);

  gnome_dialog_append_button (GNOME_DIALOG (ERR_PROG_SELECT), GNOME_STOCK_BUTTON_OK);
  BT_PROG_SELECT_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (ERR_PROG_SELECT)->buttons)->data);
  gtk_widget_ref (BT_PROG_SELECT_OK);
  gtk_object_set_data_full (GTK_OBJECT (ERR_PROG_SELECT), "BT_PROG_SELECT_OK", BT_PROG_SELECT_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_PROG_SELECT_OK);
  GTK_WIDGET_SET_FLAGS (BT_PROG_SELECT_OK, GTK_CAN_DEFAULT);

  dialog_action_area6 = GNOME_DIALOG (ERR_PROG_SELECT)->action_area;
  gtk_widget_ref (dialog_action_area6);
  gtk_object_set_data_full (GTK_OBJECT (ERR_PROG_SELECT), "dialog_action_area6", dialog_action_area6,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (ERR_PROG_SELECT), "destroy",
                      GTK_SIGNAL_FUNC (on_err_prog_select_destroy),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_PROG_SELECT_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (ERR_PROG_SELECT));

  return ERR_PROG_SELECT;
}

GtkWidget*
create_INF_USE_CD (void)
{
  GtkWidget *INF_USE_CD;
  GtkWidget *dialog_vbox7;
  GtkWidget *BT_USE_CD_OK;
  GtkWidget *dialog_action_area7;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  INF_USE_CD = gnome_message_box_new (_(texte[43]),
                              GNOME_MESSAGE_BOX_INFO,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (INF_USE_CD)->action_area), GNOME_DIALOG (INF_USE_CD)->buttons->data);
  GNOME_DIALOG (INF_USE_CD)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (INF_USE_CD), "INF_USE_CD", INF_USE_CD);
  gtk_window_set_title (GTK_WINDOW (INF_USE_CD), _(texte[39]));
  gtk_window_set_position (GTK_WINDOW (INF_USE_CD), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (INF_USE_CD), TRUE);
  gtk_window_set_policy (GTK_WINDOW (INF_USE_CD), FALSE, FALSE, FALSE);

  dialog_vbox7 = GNOME_DIALOG (INF_USE_CD)->vbox;
  gtk_object_set_data (GTK_OBJECT (INF_USE_CD), "dialog_vbox7", dialog_vbox7);
  gtk_widget_show (dialog_vbox7);

  gnome_dialog_append_button (GNOME_DIALOG (INF_USE_CD), GNOME_STOCK_BUTTON_OK);
  BT_USE_CD_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (INF_USE_CD)->buttons)->data);
  gtk_widget_ref (BT_USE_CD_OK);
  gtk_object_set_data_full (GTK_OBJECT (INF_USE_CD), "BT_USE_CD_OK", BT_USE_CD_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_USE_CD_OK);
  GTK_WIDGET_SET_FLAGS (BT_USE_CD_OK, GTK_CAN_DEFAULT);

  dialog_action_area7 = GNOME_DIALOG (INF_USE_CD)->action_area;
  gtk_widget_ref (dialog_action_area7);
  gtk_object_set_data_full (GTK_OBJECT (INF_USE_CD), "dialog_action_area7", dialog_action_area7,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (INF_USE_CD), "destroy",
                      GTK_SIGNAL_FUNC (on_inf_use_cd_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_USE_CD_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_use_cd_ok_clicked),
                      NULL);

  return INF_USE_CD;
}

GtkWidget*
create_W_ADD_PARAM (void)
{
  GtkWidget *W_ADD_PARAM;
  GtkWidget *dialog_vbox8;
  GtkWidget *FRM_LST_PARAM;
  GtkWidget *E_PARAM;
  GtkWidget *dialog_action_area8;
  GtkWidget *BT_PARAM_OK;

  W_ADD_PARAM = gnome_dialog_new (_(texte[44]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_ADD_PARAM), "W_ADD_PARAM", W_ADD_PARAM);
  GTK_WINDOW (W_ADD_PARAM)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_ADD_PARAM), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_ADD_PARAM), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_ADD_PARAM), FALSE, FALSE, FALSE);

  dialog_vbox8 = GNOME_DIALOG (W_ADD_PARAM)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_ADD_PARAM), "dialog_vbox8", dialog_vbox8);
  gtk_widget_show (dialog_vbox8);

  FRM_LST_PARAM = gtk_frame_new (_(texte[45]));
  gtk_widget_ref (FRM_LST_PARAM);
  gtk_object_set_data_full (GTK_OBJECT (W_ADD_PARAM), "FRM_LST_PARAM", FRM_LST_PARAM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (FRM_LST_PARAM);
  gtk_box_pack_start (GTK_BOX (dialog_vbox8), FRM_LST_PARAM, TRUE, TRUE, 0);

  E_PARAM = gtk_entry_new ();
  gtk_widget_ref (E_PARAM);
  gtk_object_set_data_full (GTK_OBJECT (W_ADD_PARAM), "E_PARAM", E_PARAM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_PARAM);
  gtk_container_add (GTK_CONTAINER (FRM_LST_PARAM), E_PARAM);
  gtk_widget_set_usize (E_PARAM, 300, -2);

  dialog_action_area8 = GNOME_DIALOG (W_ADD_PARAM)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_ADD_PARAM), "dialog_action_area8", dialog_action_area8);
  gtk_widget_show (dialog_action_area8);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area8), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area8), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_ADD_PARAM), GNOME_STOCK_BUTTON_OK);
  BT_PARAM_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_ADD_PARAM)->buttons)->data);
  gtk_widget_ref (BT_PARAM_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_ADD_PARAM), "BT_PARAM_OK", BT_PARAM_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_PARAM_OK);
  GTK_WIDGET_SET_FLAGS (BT_PARAM_OK, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_ADD_PARAM), "destroy",
                      GTK_SIGNAL_FUNC (on_w_add_param_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_PARAM_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_param_ok_clicked),
                      NULL);

  return W_ADD_PARAM;
}

GtkWidget*
create_W_INSTALL_APP (void)
{
  GtkWidget *W_INSTALL_APP;
  GtkWidget *dialog_vbox9;
  GtkWidget *frame8;
  GtkWidget *vbox5;
  GtkWidget *ST_TITRE_APP;
  GtkWidget *E_TITRE_APP;
  GtkWidget *ST_PROG;
  GtkWidget *hbox5;
  GtkWidget *E_PROG;
  GtkWidget *BT_PARCOUR_PROG;
  GtkWidget *CHK_USE_CD;
  GtkWidget *CHK_PARAM;
  GtkWidget *hbox8;
  GtkWidget *ST_WINVER;
  GtkWidget *CB_WINVER;
  GList *CB_WINVER_items = NULL;
  GtkWidget *E_WINVER;
  GtkWidget *CHK_MSDOS;
  GtkWidget *hbox9;
  GtkWidget *hbox13;
  GtkWidget *OBJ_ICONE_SEL;
  GtkWidget *FRM_CONFIG;
  GtkWidget *hbuttonbox5;
  GtkWidget *BT_APP_DLL;
  GtkWidget *BT_APP_GFX;
  GtkWidget *dialog_action_area9;
  GtkWidget *BT_APP_OK;
  GtkWidget *BT_APP_ANNUL;

  W_INSTALL_APP = gnome_dialog_new (_(texte[46]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_INSTALL_APP), "W_INSTALL_APP", W_INSTALL_APP);
  gtk_widget_set_usize (W_INSTALL_APP, 350, -2);
  GTK_WINDOW (W_INSTALL_APP)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_INSTALL_APP), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_INSTALL_APP), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_INSTALL_APP), FALSE, FALSE, FALSE);

  dialog_vbox9 = GNOME_DIALOG (W_INSTALL_APP)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_INSTALL_APP), "dialog_vbox9", dialog_vbox9);
  gtk_widget_show (dialog_vbox9);

  frame8 = gtk_frame_new (NULL);
  gtk_widget_ref (frame8);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "frame8", frame8,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame8);
  gtk_box_pack_start (GTK_BOX (dialog_vbox9), frame8, TRUE, TRUE, 0);

  vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox5);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "vbox5", vbox5,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox5);
  gtk_container_add (GTK_CONTAINER (frame8), vbox5);

  ST_TITRE_APP = gtk_label_new (_(texte[47]));
  gtk_widget_ref (ST_TITRE_APP);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "ST_TITRE_APP", ST_TITRE_APP,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_TITRE_APP);
  gtk_box_pack_start (GTK_BOX (vbox5), ST_TITRE_APP, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (ST_TITRE_APP), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (ST_TITRE_APP), 0, 4);

  E_TITRE_APP = gtk_entry_new ();
  gtk_widget_ref (E_TITRE_APP);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "E_TITRE_APP", E_TITRE_APP,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_TITRE_APP);
  gtk_box_pack_start (GTK_BOX (vbox5), E_TITRE_APP, FALSE, FALSE, 6);

  ST_PROG = gtk_label_new (_(texte[48]));
  gtk_widget_ref (ST_PROG);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "ST_PROG", ST_PROG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_PROG);
  gtk_box_pack_start (GTK_BOX (vbox5), ST_PROG, FALSE, FALSE, 0);

  hbox5 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox5);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "hbox5", hbox5,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox5);
  gtk_box_pack_start (GTK_BOX (vbox5), hbox5, TRUE, TRUE, 0);

  E_PROG = gtk_entry_new ();
  gtk_widget_ref (E_PROG);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "E_PROG", E_PROG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_PROG);
  gtk_box_pack_start (GTK_BOX (hbox5), E_PROG, TRUE, TRUE, 0);

  BT_PARCOUR_PROG = gtk_button_new_with_label (_("..."));
  gtk_widget_ref (BT_PARCOUR_PROG);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "BT_PARCOUR_PROG", BT_PARCOUR_PROG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_PARCOUR_PROG);
  gtk_box_pack_start (GTK_BOX (hbox5), BT_PARCOUR_PROG, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (BT_PARCOUR_PROG), 10);

  CHK_USE_CD = gtk_check_button_new_with_label (_(texte[49]));
  gtk_widget_ref (CHK_USE_CD);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "CHK_USE_CD", CHK_USE_CD,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_USE_CD);
  gtk_box_pack_start (GTK_BOX (vbox5), CHK_USE_CD, FALSE, FALSE, 0);

  CHK_PARAM = gtk_check_button_new_with_label (_(texte[50]));
  gtk_widget_ref (CHK_PARAM);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "CHK_PARAM", CHK_PARAM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_PARAM);
  gtk_box_pack_start (GTK_BOX (vbox5), CHK_PARAM, FALSE, FALSE, 0);

  hbox8 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox8);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "hbox8", hbox8,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox8);
  gtk_box_pack_start (GTK_BOX (vbox5), hbox8, TRUE, TRUE, 0);

  ST_WINVER = gtk_label_new (_(texte[51]));
  gtk_widget_ref (ST_WINVER);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "ST_WINVER", ST_WINVER,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_WINVER);
  gtk_box_pack_start (GTK_BOX (hbox8), ST_WINVER, FALSE, FALSE, 0);
  gtk_widget_set_usize (ST_WINVER, 130, -2);

  CB_WINVER = gtk_combo_new ();
  gtk_widget_ref (CB_WINVER);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "CB_WINVER", CB_WINVER,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_WINVER);
  gtk_box_pack_start (GTK_BOX (hbox8), CB_WINVER, TRUE, TRUE, 0);
  gtk_combo_set_value_in_list (GTK_COMBO (CB_WINVER), TRUE, TRUE);
  CB_WINVER_items = g_list_append (CB_WINVER_items, (gpointer) _("default"));
  CB_WINVER_items = g_list_append (CB_WINVER_items, (gpointer) _("win95"));
  CB_WINVER_items = g_list_append (CB_WINVER_items, (gpointer) _("win98"));
  CB_WINVER_items = g_list_append (CB_WINVER_items, (gpointer) _("winme"));
  CB_WINVER_items = g_list_append (CB_WINVER_items, (gpointer) _("nt351"));
  CB_WINVER_items = g_list_append (CB_WINVER_items, (gpointer) _("nt40"));
  CB_WINVER_items = g_list_append (CB_WINVER_items, (gpointer) _("win2k"));
  CB_WINVER_items = g_list_append (CB_WINVER_items, (gpointer) _("winxp"));
  CB_WINVER_items = g_list_append (CB_WINVER_items, (gpointer) _("win20"));
  CB_WINVER_items = g_list_append (CB_WINVER_items, (gpointer) _("win30"));
  CB_WINVER_items = g_list_append (CB_WINVER_items, (gpointer) _("win31"));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_WINVER), CB_WINVER_items);
  g_list_free (CB_WINVER_items);

  E_WINVER = GTK_COMBO (CB_WINVER)->entry;
  gtk_widget_ref (E_WINVER);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "E_WINVER", E_WINVER,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_WINVER);
  gtk_entry_set_editable (GTK_ENTRY (E_WINVER), FALSE);
  gtk_entry_set_text (GTK_ENTRY (E_WINVER), _("default"));

  CHK_MSDOS = gtk_check_button_new_with_label (_(texte[52]));
  gtk_widget_ref (CHK_MSDOS);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "CHK_MSDOS", CHK_MSDOS,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_MSDOS);
  gtk_box_pack_start (GTK_BOX (vbox5), CHK_MSDOS, FALSE, FALSE, 0);

  hbox9 = gtk_hbox_new (TRUE, 0);
  gtk_widget_ref (hbox9);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "hbox9", hbox9,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox9);
  gtk_box_pack_start (GTK_BOX (vbox5), hbox9, TRUE, TRUE, 0);

  hbox13 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox13);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "hbox13", hbox13,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox13);
  gtk_box_pack_start (GTK_BOX (hbox9), hbox13, TRUE, TRUE, 0);

  OBJ_ICONE_SEL = gnome_icon_entry_new (NULL, NULL);
  gtk_widget_ref (OBJ_ICONE_SEL);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "OBJ_ICONE_SEL", OBJ_ICONE_SEL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (OBJ_ICONE_SEL);
  gtk_box_pack_start (GTK_BOX (hbox13), OBJ_ICONE_SEL, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (OBJ_ICONE_SEL), 5);

  FRM_CONFIG = gtk_frame_new (_(texte[53]));
  gtk_widget_ref (FRM_CONFIG);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "FRM_CONFIG", FRM_CONFIG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (FRM_CONFIG);
  gtk_box_pack_start (GTK_BOX (dialog_vbox9), FRM_CONFIG, TRUE, TRUE, 0);

  hbuttonbox5 = gtk_hbutton_box_new ();
  gtk_widget_ref (hbuttonbox5);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "hbuttonbox5", hbuttonbox5,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbuttonbox5);
  gtk_container_add (GTK_CONTAINER (FRM_CONFIG), hbuttonbox5);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox5), GTK_BUTTONBOX_SPREAD);

  BT_APP_DLL = gtk_button_new_with_label (_(texte[54]));
  gtk_widget_ref (BT_APP_DLL);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "BT_APP_DLL", BT_APP_DLL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_DLL);
  gtk_container_add (GTK_CONTAINER (hbuttonbox5), BT_APP_DLL);
  GTK_WIDGET_SET_FLAGS (BT_APP_DLL, GTK_CAN_DEFAULT);

  BT_APP_GFX = gtk_button_new_with_label (_(texte[55]));
  gtk_widget_ref (BT_APP_GFX);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "BT_APP_GFX", BT_APP_GFX,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_GFX);
  gtk_container_add (GTK_CONTAINER (hbuttonbox5), BT_APP_GFX);
  GTK_WIDGET_SET_FLAGS (BT_APP_GFX, GTK_CAN_DEFAULT);

  dialog_action_area9 = GNOME_DIALOG (W_INSTALL_APP)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_INSTALL_APP), "dialog_action_area9", dialog_action_area9);
  gtk_widget_show (dialog_action_area9);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area9), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area9), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_INSTALL_APP), GNOME_STOCK_BUTTON_OK);
  BT_APP_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_INSTALL_APP)->buttons)->data);
  gtk_widget_ref (BT_APP_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "BT_APP_OK", BT_APP_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_OK);
  GTK_WIDGET_SET_FLAGS (BT_APP_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_INSTALL_APP), GNOME_STOCK_BUTTON_CANCEL);
  BT_APP_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_INSTALL_APP)->buttons)->data);
  gtk_widget_ref (BT_APP_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_INSTALL_APP), "BT_APP_ANNUL", BT_APP_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_APP_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_INSTALL_APP), "destroy",
                      GTK_SIGNAL_FUNC (on_w_install_app_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_PARCOUR_PROG), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_parcour_app_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_USE_CD), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_use_cd_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_PARAM), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_param_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_MSDOS), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_msdos_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_APP_DLL), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_app_dll_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_APP_GFX), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_app_gfx_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_APP_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_app_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_APP_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_INSTALL_APP));

  return W_INSTALL_APP;
}

GtkWidget*
create_W_GEST_APP (void)
{
  GtkWidget *W_GEST_APP;
  GtkWidget *dialog_vbox10;
  GtkWidget *frame9;
  GtkWidget *vbox6;
  GtkWidget *frame10;
  GtkWidget *scrolledwindow4;
  GtkWidget *TAB_APP;
  GtkWidget *label3;
  GtkWidget *hbuttonbox1;
  GtkWidget *BT_APP_NEW;
  GtkWidget *BT_APP_MODIFY;
  GtkWidget *BT_APP_DEL;
  GtkWidget *BT_APP_DESK;
  GtkWidget *BT_TEST;
  GtkWidget *dialog_action_area10;
  GtkWidget *BT_GEST_APP_OK;

  W_GEST_APP = gnome_dialog_new (_(texte[56]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_GEST_APP), "W_GEST_APP", W_GEST_APP);
  GTK_WINDOW (W_GEST_APP)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_GEST_APP), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_GEST_APP), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_GEST_APP), FALSE, FALSE, FALSE);

  dialog_vbox10 = GNOME_DIALOG (W_GEST_APP)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_GEST_APP), "dialog_vbox10", dialog_vbox10);
  gtk_widget_show (dialog_vbox10);
  gtk_widget_set_usize (dialog_vbox10, 400, 300);

  frame9 = gtk_frame_new (NULL);
  gtk_widget_ref (frame9);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "frame9", frame9,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame9);
  gtk_box_pack_start (GTK_BOX (dialog_vbox10), frame9, TRUE, TRUE, 0);
  gtk_widget_set_usize (frame9, 486, -2);

  vbox6 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox6);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "vbox6", vbox6,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox6);
  gtk_container_add (GTK_CONTAINER (frame9), vbox6);

  frame10 = gtk_frame_new (NULL);
  gtk_widget_ref (frame10);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "frame10", frame10,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame10);
  gtk_box_pack_start (GTK_BOX (vbox6), frame10, TRUE, TRUE, 0);

  scrolledwindow4 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow4);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "scrolledwindow4", scrolledwindow4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow4);
  gtk_container_add (GTK_CONTAINER (frame10), scrolledwindow4);
  gtk_widget_set_usize (scrolledwindow4, -2, 186);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow4), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  TAB_APP = gtk_clist_new (1);
  gtk_widget_ref (TAB_APP);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "TAB_APP", TAB_APP,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (TAB_APP);
  gtk_container_add (GTK_CONTAINER (scrolledwindow4), TAB_APP);
  gtk_clist_set_column_width (GTK_CLIST (TAB_APP), 0, 80);
  gtk_clist_column_titles_hide (GTK_CLIST (TAB_APP));

  label3 = gtk_label_new (_(texte[57]));
  gtk_widget_ref (label3);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "label3", label3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label3);
  gtk_clist_set_column_widget (GTK_CLIST (TAB_APP), 0, label3);

  hbuttonbox1 = gtk_hbutton_box_new ();
  gtk_widget_ref (hbuttonbox1);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "hbuttonbox1", hbuttonbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbuttonbox1);
  gtk_box_pack_start (GTK_BOX (vbox6), hbuttonbox1, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox1), GTK_BUTTONBOX_SPREAD);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (hbuttonbox1), 0);
  gtk_button_box_set_child_size (GTK_BUTTON_BOX (hbuttonbox1), 0, 0);
  gtk_button_box_set_child_ipadding (GTK_BUTTON_BOX (hbuttonbox1), 0, 0);

  BT_APP_NEW = gtk_button_new_with_label (_(texte[58]));
  gtk_widget_ref (BT_APP_NEW);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "BT_APP_NEW", BT_APP_NEW,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_NEW);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), BT_APP_NEW);
  GTK_WIDGET_SET_FLAGS (BT_APP_NEW, GTK_CAN_DEFAULT);

  BT_APP_MODIFY = gtk_button_new_with_label (_(texte[59]));
  gtk_widget_ref (BT_APP_MODIFY);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "BT_APP_MODIFY", BT_APP_MODIFY,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_MODIFY);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), BT_APP_MODIFY);
  GTK_WIDGET_SET_FLAGS (BT_APP_MODIFY, GTK_CAN_DEFAULT);

  BT_APP_DEL = gtk_button_new_with_label (_(texte[60]));
  gtk_widget_ref (BT_APP_DEL);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "BT_APP_DEL", BT_APP_DEL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_DEL);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), BT_APP_DEL);
  GTK_WIDGET_SET_FLAGS (BT_APP_DEL, GTK_CAN_DEFAULT);

  BT_APP_DESK = gtk_button_new_with_label (_(texte[61]));
  gtk_widget_ref (BT_APP_DESK);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "BT_APP_DESK", BT_APP_DESK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_DESK);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), BT_APP_DESK);
  GTK_WIDGET_SET_FLAGS (BT_APP_DESK, GTK_CAN_DEFAULT);

  BT_TEST = gtk_button_new_with_label (_(texte[201]));
  gtk_widget_ref (BT_TEST);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "BT_TEST", BT_TEST,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_TEST);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), BT_TEST);
  GTK_WIDGET_SET_FLAGS (BT_TEST, GTK_CAN_DEFAULT);

  dialog_action_area10 = GNOME_DIALOG (W_GEST_APP)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_GEST_APP), "dialog_action_area10", dialog_action_area10);
  gtk_widget_show (dialog_action_area10);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area10), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area10), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_GEST_APP), GNOME_STOCK_BUTTON_OK);
  BT_GEST_APP_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_GEST_APP)->buttons)->data);
  gtk_widget_ref (BT_GEST_APP_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_APP), "BT_GEST_APP_OK", BT_GEST_APP_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_GEST_APP_OK);
  GTK_WIDGET_SET_FLAGS (BT_GEST_APP_OK, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_GEST_APP), "destroy",
                      GTK_SIGNAL_FUNC (on_w_gest_app_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (TAB_APP), "select_row",
                      GTK_SIGNAL_FUNC (on_tab_app_select_row),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_APP_NEW), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_app_new_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_APP_MODIFY), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_app_modify_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_APP_DEL), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_app_del_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_APP_DESK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_app_desk_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_TEST), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_test_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_GEST_APP_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_GEST_APP));

  return W_GEST_APP;
}

GtkWidget*
create_WARN_DEL_APP (void)
{
  GtkWidget *WARN_DEL_APP;
  GtkWidget *dialog_vbox11;
  GtkWidget *BT_DEL_APP_OUI;
  GtkWidget *BT_DEL_APP_NON;
  GtkWidget *dialog_action_area11;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  WARN_DEL_APP = gnome_message_box_new (_(texte[62]),
                              GNOME_MESSAGE_BOX_WARNING,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (WARN_DEL_APP)->action_area), GNOME_DIALOG (WARN_DEL_APP)->buttons->data);
  GNOME_DIALOG (WARN_DEL_APP)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (WARN_DEL_APP), "WARN_DEL_APP", WARN_DEL_APP);
  gtk_window_set_title (GTK_WINDOW (WARN_DEL_APP), _(texte[40]));
  gtk_window_set_position (GTK_WINDOW (WARN_DEL_APP), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (WARN_DEL_APP), TRUE);
  gtk_window_set_policy (GTK_WINDOW (WARN_DEL_APP), FALSE, FALSE, FALSE);

  dialog_vbox11 = GNOME_DIALOG (WARN_DEL_APP)->vbox;
  gtk_object_set_data (GTK_OBJECT (WARN_DEL_APP), "dialog_vbox11", dialog_vbox11);
  gtk_widget_show (dialog_vbox11);

  gnome_dialog_append_button (GNOME_DIALOG (WARN_DEL_APP), GNOME_STOCK_BUTTON_YES);
  BT_DEL_APP_OUI = GTK_WIDGET (g_list_last (GNOME_DIALOG (WARN_DEL_APP)->buttons)->data);
  gtk_widget_ref (BT_DEL_APP_OUI);
  gtk_object_set_data_full (GTK_OBJECT (WARN_DEL_APP), "BT_DEL_APP_OUI", BT_DEL_APP_OUI,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DEL_APP_OUI);
  GTK_WIDGET_SET_FLAGS (BT_DEL_APP_OUI, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (WARN_DEL_APP), GNOME_STOCK_BUTTON_NO);
  BT_DEL_APP_NON = GTK_WIDGET (g_list_last (GNOME_DIALOG (WARN_DEL_APP)->buttons)->data);
  gtk_widget_ref (BT_DEL_APP_NON);
  gtk_object_set_data_full (GTK_OBJECT (WARN_DEL_APP), "BT_DEL_APP_NON", BT_DEL_APP_NON,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DEL_APP_NON);
  GTK_WIDGET_SET_FLAGS (BT_DEL_APP_NON, GTK_CAN_DEFAULT);

  dialog_action_area11 = GNOME_DIALOG (WARN_DEL_APP)->action_area;
  gtk_widget_ref (dialog_action_area11);
  gtk_object_set_data_full (GTK_OBJECT (WARN_DEL_APP), "dialog_action_area11", dialog_action_area11,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (WARN_DEL_APP), "destroy",
                      GTK_SIGNAL_FUNC (on_warn_del_app_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DEL_APP_OUI), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_del_app_oui_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_DEL_APP_NON), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (WARN_DEL_APP));

  return WARN_DEL_APP;
}

GtkWidget*
create_ERR_PROG_EMPTY (void)
{
  GtkWidget *ERR_PROG_EMPTY;
  GtkWidget *dialog_vbox12;
  GtkWidget *BT_PROG_EMPTY_OK;
  GtkWidget *dialog_action_area12;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  ERR_PROG_EMPTY = gnome_message_box_new (_(texte[64]),
                              GNOME_MESSAGE_BOX_ERROR,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (ERR_PROG_EMPTY)->action_area), GNOME_DIALOG (ERR_PROG_EMPTY)->buttons->data);
  GNOME_DIALOG (ERR_PROG_EMPTY)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (ERR_PROG_EMPTY), "ERR_PROG_EMPTY", ERR_PROG_EMPTY);
  gtk_window_set_title (GTK_WINDOW (ERR_PROG_EMPTY), _(texte[38]));
  gtk_window_set_position (GTK_WINDOW (ERR_PROG_EMPTY), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (ERR_PROG_EMPTY), TRUE);
  gtk_window_set_policy (GTK_WINDOW (ERR_PROG_EMPTY), FALSE, FALSE, FALSE);

  dialog_vbox12 = GNOME_DIALOG (ERR_PROG_EMPTY)->vbox;
  gtk_object_set_data (GTK_OBJECT (ERR_PROG_EMPTY), "dialog_vbox12", dialog_vbox12);
  gtk_widget_show (dialog_vbox12);

  gnome_dialog_append_button (GNOME_DIALOG (ERR_PROG_EMPTY), GNOME_STOCK_BUTTON_OK);
  BT_PROG_EMPTY_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (ERR_PROG_EMPTY)->buttons)->data);
  gtk_widget_ref (BT_PROG_EMPTY_OK);
  gtk_object_set_data_full (GTK_OBJECT (ERR_PROG_EMPTY), "BT_PROG_EMPTY_OK", BT_PROG_EMPTY_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_PROG_EMPTY_OK);
  GTK_WIDGET_SET_FLAGS (BT_PROG_EMPTY_OK, GTK_CAN_DEFAULT);

  dialog_action_area12 = GNOME_DIALOG (ERR_PROG_EMPTY)->action_area;
  gtk_widget_ref (dialog_action_area12);
  gtk_object_set_data_full (GTK_OBJECT (ERR_PROG_EMPTY), "dialog_action_area12", dialog_action_area12,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (ERR_PROG_EMPTY), "destroy",
                      GTK_SIGNAL_FUNC (on_err_prog_empty_destroy),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_PROG_EMPTY_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (ERR_PROG_EMPTY));

  return ERR_PROG_EMPTY;
}

GtkWidget*
create_W_RUN_APP (void)
{
  GtkWidget *W_RUN_APP;
  GtkWidget *dialog_vbox13;
  GtkWidget *scrolledwindow5;
  GtkWidget *TAB_RUN_APP;
  GtkWidget *label4;
  GtkWidget *dialog_action_area13;
  GtkWidget *BT_RUN_OK;
  GtkWidget *BT_RUN_ANNUL;

  W_RUN_APP = gnome_dialog_new (_(texte[65]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_RUN_APP), "W_RUN_APP", W_RUN_APP);
  GTK_WINDOW (W_RUN_APP)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_RUN_APP), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_RUN_APP), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_RUN_APP), FALSE, FALSE, FALSE);

  dialog_vbox13 = GNOME_DIALOG (W_RUN_APP)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_RUN_APP), "dialog_vbox13", dialog_vbox13);
  gtk_widget_show (dialog_vbox13);

  scrolledwindow5 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow5);
  gtk_object_set_data_full (GTK_OBJECT (W_RUN_APP), "scrolledwindow5", scrolledwindow5,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow5);
  gtk_box_pack_start (GTK_BOX (dialog_vbox13), scrolledwindow5, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow5), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  TAB_RUN_APP = gtk_clist_new (1);
  gtk_widget_ref (TAB_RUN_APP);
  gtk_object_set_data_full (GTK_OBJECT (W_RUN_APP), "TAB_RUN_APP", TAB_RUN_APP,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (TAB_RUN_APP);
  gtk_container_add (GTK_CONTAINER (scrolledwindow5), TAB_RUN_APP);
  gtk_widget_set_usize (TAB_RUN_APP, -2, 200);
  gtk_clist_set_column_width (GTK_CLIST (TAB_RUN_APP), 0, 80);
  gtk_clist_column_titles_hide (GTK_CLIST (TAB_RUN_APP));

  label4 = gtk_label_new (_(texte[66]));
  gtk_widget_ref (label4);
  gtk_object_set_data_full (GTK_OBJECT (W_RUN_APP), "label4", label4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label4);
  gtk_clist_set_column_widget (GTK_CLIST (TAB_RUN_APP), 0, label4);

  dialog_action_area13 = GNOME_DIALOG (W_RUN_APP)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_RUN_APP), "dialog_action_area13", dialog_action_area13);
  gtk_widget_show (dialog_action_area13);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area13), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area13), 8);

  gnome_dialog_append_button_with_pixmap (GNOME_DIALOG (W_RUN_APP),
                                          _(texte[67]), GNOME_STOCK_PIXMAP_EXEC);
  BT_RUN_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_RUN_APP)->buttons)->data);
  gtk_widget_ref (BT_RUN_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_RUN_APP), "BT_RUN_OK", BT_RUN_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_RUN_OK);
  GTK_WIDGET_SET_FLAGS (BT_RUN_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_RUN_APP), GNOME_STOCK_BUTTON_CANCEL);
  BT_RUN_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_RUN_APP)->buttons)->data);
  gtk_widget_ref (BT_RUN_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_RUN_APP), "BT_RUN_ANNUL", BT_RUN_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_RUN_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_RUN_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_RUN_APP), "destroy",
                      GTK_SIGNAL_FUNC (on_w_run_app_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (TAB_RUN_APP), "select_row",
                      GTK_SIGNAL_FUNC (on_tab_run_app_select_row),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_RUN_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_run_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_RUN_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_RUN_APP));

  return W_RUN_APP;
}

GtkWidget*
create_W_CALC (void)
{
  GtkWidget *W_CALC;
  GtkWidget *calculator1;

  W_CALC = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_object_set_data (GTK_OBJECT (W_CALC), "W_CALC", W_CALC);
  gtk_window_set_title (GTK_WINDOW (W_CALC), _(texte[68]));
  gtk_window_set_position (GTK_WINDOW (W_CALC), GTK_WIN_POS_CENTER);
  gtk_window_set_policy (GTK_WINDOW (W_CALC), FALSE, FALSE, FALSE);

  calculator1 = gnome_calculator_new ();
  gtk_widget_ref (calculator1);
  gtk_object_set_data_full (GTK_OBJECT (W_CALC), "calculator1", calculator1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (calculator1);
  gtk_container_add (GTK_CONTAINER (W_CALC), calculator1);

  gtk_signal_connect (GTK_OBJECT (W_CALC), "destroy",
                      GTK_SIGNAL_FUNC (on_w_calc_destroy),
                      NULL);

  return W_CALC;
}

GtkWidget*
create_ERR_AIDE (void)
{
  GtkWidget *ERR_AIDE;
  GtkWidget *dialog_vbox14;
  GtkWidget *BT_ERR_AIDE_OK;
  GtkWidget *dialog_action_area14;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  ERR_AIDE = gnome_message_box_new (_(texte[69]),
                              GNOME_MESSAGE_BOX_ERROR,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (ERR_AIDE)->action_area), GNOME_DIALOG (ERR_AIDE)->buttons->data);
  GNOME_DIALOG (ERR_AIDE)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (ERR_AIDE), "ERR_AIDE", ERR_AIDE);
  gtk_window_set_title (GTK_WINDOW (ERR_AIDE), _(texte[38]));
  gtk_window_set_position (GTK_WINDOW (ERR_AIDE), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (ERR_AIDE), TRUE);
  gtk_window_set_policy (GTK_WINDOW (ERR_AIDE), FALSE, FALSE, FALSE);

  dialog_vbox14 = GNOME_DIALOG (ERR_AIDE)->vbox;
  gtk_object_set_data (GTK_OBJECT (ERR_AIDE), "dialog_vbox14", dialog_vbox14);
  gtk_widget_show (dialog_vbox14);

  gnome_dialog_append_button (GNOME_DIALOG (ERR_AIDE), GNOME_STOCK_BUTTON_OK);
  BT_ERR_AIDE_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (ERR_AIDE)->buttons)->data);
  gtk_widget_ref (BT_ERR_AIDE_OK);
  gtk_object_set_data_full (GTK_OBJECT (ERR_AIDE), "BT_ERR_AIDE_OK", BT_ERR_AIDE_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_ERR_AIDE_OK);
  GTK_WIDGET_SET_FLAGS (BT_ERR_AIDE_OK, GTK_CAN_DEFAULT);

  dialog_action_area14 = GNOME_DIALOG (ERR_AIDE)->action_area;
  gtk_widget_ref (dialog_action_area14);
  gtk_object_set_data_full (GTK_OBJECT (ERR_AIDE), "dialog_action_area14", dialog_action_area14,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (ERR_AIDE), "destroy",
                      GTK_SIGNAL_FUNC (on_err_aide_destroy),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_ERR_AIDE_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (ERR_AIDE));

  return ERR_AIDE;
}

static GnomeUIInfo M_EDIT_FILE_menu_uiinfo[] =
{
  GNOMEUIINFO_MENU_NEW_ITEM (N_(texte[70]), NULL, on_m_edit_new_activate, NULL),
  GNOMEUIINFO_MENU_OPEN_ITEM (on_m_edit_open_activate, NULL),
  GNOMEUIINFO_MENU_SAVE_AS_ITEM (on_m_edit_save_activate, NULL),
  GNOMEUIINFO_SEPARATOR,
  GNOMEUIINFO_MENU_PRINT_ITEM (on_m_edit_print_activate, NULL),
  GNOMEUIINFO_SEPARATOR,
  GNOMEUIINFO_MENU_EXIT_ITEM (on_m_edit_quit_activate, NULL),
  GNOMEUIINFO_END
};

static GnomeUIInfo M_MENU_EDITEUR_uiinfo[] =
{
  GNOMEUIINFO_MENU_FILE_TREE (M_EDIT_FILE_menu_uiinfo),
  GNOMEUIINFO_END
};

GtkWidget*
create_W_EDITEUR (void)
{
  GtkWidget *W_EDITEUR;
  GtkWidget *vbox8;
  GtkWidget *M_MENU_EDITEUR;
  GtkWidget *scrolledwindow6;
  GtkWidget *TXT_EDIT;

  W_EDITEUR = gtk_window_new (GTK_WINDOW_DIALOG);
  gtk_object_set_data (GTK_OBJECT (W_EDITEUR), "W_EDITEUR", W_EDITEUR);
  gtk_window_set_title (GTK_WINDOW (W_EDITEUR), _(texte[71]));
  gtk_window_set_position (GTK_WINDOW (W_EDITEUR), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size (GTK_WINDOW (W_EDITEUR), 400, 300);
  gtk_window_set_policy (GTK_WINDOW (W_EDITEUR), TRUE, TRUE, FALSE);

  vbox8 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox8);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "vbox8", vbox8,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox8);
  gtk_container_add (GTK_CONTAINER (W_EDITEUR), vbox8);

  M_MENU_EDITEUR = gtk_menu_bar_new ();
  gtk_widget_ref (M_MENU_EDITEUR);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "M_MENU_EDITEUR", M_MENU_EDITEUR,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (M_MENU_EDITEUR);
  gtk_box_pack_start (GTK_BOX (vbox8), M_MENU_EDITEUR, FALSE, FALSE, 0);
  gnome_app_fill_menu (GTK_MENU_SHELL (M_MENU_EDITEUR), M_MENU_EDITEUR_uiinfo,
                       NULL, FALSE, 0);

  gtk_widget_ref (M_MENU_EDITEUR_uiinfo[0].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "M_EDIT_FILE",
                            M_MENU_EDITEUR_uiinfo[0].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_EDIT_FILE_menu_uiinfo[0].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "M_EDIT_NEW",
                            M_EDIT_FILE_menu_uiinfo[0].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_EDIT_FILE_menu_uiinfo[1].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "M_EDIT_OPEN",
                            M_EDIT_FILE_menu_uiinfo[1].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_EDIT_FILE_menu_uiinfo[2].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "M_EDIT_SAVE",
                            M_EDIT_FILE_menu_uiinfo[2].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_EDIT_FILE_menu_uiinfo[3].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "M_EDIT_SEP1",
                            M_EDIT_FILE_menu_uiinfo[3].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_EDIT_FILE_menu_uiinfo[4].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "M_EDIT_PRINT",
                            M_EDIT_FILE_menu_uiinfo[4].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_EDIT_FILE_menu_uiinfo[5].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "M_EDIT_SEP2",
                            M_EDIT_FILE_menu_uiinfo[5].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_widget_ref (M_EDIT_FILE_menu_uiinfo[6].widget);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "M_EDIT_QUIT",
                            M_EDIT_FILE_menu_uiinfo[6].widget,
                            (GtkDestroyNotify) gtk_widget_unref);

  scrolledwindow6 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow6);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "scrolledwindow6", scrolledwindow6,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow6);
  gtk_box_pack_start (GTK_BOX (vbox8), scrolledwindow6, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow6), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  TXT_EDIT = gtk_text_new (NULL, NULL);
  gtk_widget_ref (TXT_EDIT);
  gtk_object_set_data_full (GTK_OBJECT (W_EDITEUR), "TXT_EDIT", TXT_EDIT,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (TXT_EDIT);
  gtk_container_add (GTK_CONTAINER (scrolledwindow6), TXT_EDIT);
  gtk_widget_set_usize (TXT_EDIT, 400, 300);
  gtk_text_set_editable (GTK_TEXT (TXT_EDIT), TRUE);

  gtk_signal_connect (GTK_OBJECT (W_EDITEUR), "destroy",
                      GTK_SIGNAL_FUNC (on_w_editeur_destroy),
                      NULL);

  return W_EDITEUR;
}

GtkWidget*
create_WARN_EDIT_QUIT (void)
{
  GtkWidget *WARN_EDIT_QUIT;
  GtkWidget *dialog_vbox16;
  GtkWidget *BT_EDIT_QUIT_OK;
  GtkWidget *BT_EDIT_QUIT_ANNUL;
  GtkWidget *dialog_action_area16;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  WARN_EDIT_QUIT = gnome_message_box_new (_(texte[72]),
                              GNOME_MESSAGE_BOX_WARNING,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (WARN_EDIT_QUIT)->action_area), GNOME_DIALOG (WARN_EDIT_QUIT)->buttons->data);
  GNOME_DIALOG (WARN_EDIT_QUIT)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (WARN_EDIT_QUIT), "WARN_EDIT_QUIT", WARN_EDIT_QUIT);
  gtk_window_set_title (GTK_WINDOW (WARN_EDIT_QUIT), _(texte[40]));
  gtk_window_set_position (GTK_WINDOW (WARN_EDIT_QUIT), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (WARN_EDIT_QUIT), TRUE);
  gtk_window_set_policy (GTK_WINDOW (WARN_EDIT_QUIT), FALSE, FALSE, FALSE);

  dialog_vbox16 = GNOME_DIALOG (WARN_EDIT_QUIT)->vbox;
  gtk_object_set_data (GTK_OBJECT (WARN_EDIT_QUIT), "dialog_vbox16", dialog_vbox16);
  gtk_widget_show (dialog_vbox16);

  gnome_dialog_append_button (GNOME_DIALOG (WARN_EDIT_QUIT), GNOME_STOCK_BUTTON_YES);
  BT_EDIT_QUIT_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (WARN_EDIT_QUIT)->buttons)->data);
  gtk_widget_ref (BT_EDIT_QUIT_OK);
  gtk_object_set_data_full (GTK_OBJECT (WARN_EDIT_QUIT), "BT_EDIT_QUIT_OK", BT_EDIT_QUIT_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_EDIT_QUIT_OK);
  GTK_WIDGET_SET_FLAGS (BT_EDIT_QUIT_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (WARN_EDIT_QUIT), GNOME_STOCK_BUTTON_NO);
  BT_EDIT_QUIT_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (WARN_EDIT_QUIT)->buttons)->data);
  gtk_widget_ref (BT_EDIT_QUIT_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (WARN_EDIT_QUIT), "BT_EDIT_QUIT_ANNUL", BT_EDIT_QUIT_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_EDIT_QUIT_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_EDIT_QUIT_ANNUL, GTK_CAN_DEFAULT);

  dialog_action_area16 = GNOME_DIALOG (WARN_EDIT_QUIT)->action_area;
  gtk_widget_ref (dialog_action_area16);
  gtk_object_set_data_full (GTK_OBJECT (WARN_EDIT_QUIT), "dialog_action_area16", dialog_action_area16,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (WARN_EDIT_QUIT), "destroy",
                      GTK_SIGNAL_FUNC (on_warn_edit_quit_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_EDIT_QUIT_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_edit_quit_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_EDIT_QUIT_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (WARN_EDIT_QUIT));

  return WARN_EDIT_QUIT;
}

GtkWidget*
create_W_EDIT_FILE_SELEC (void)
{
  GtkWidget *W_EDIT_FILE_SELEC;
  GtkWidget *BT_EDIT_FILE_OK;
  GtkWidget *BT_EDIT_FILE_ANNUL;

  W_EDIT_FILE_SELEC = gtk_file_selection_new (_(texte[73]));
  gtk_object_set_data (GTK_OBJECT (W_EDIT_FILE_SELEC), "W_EDIT_FILE_SELEC", W_EDIT_FILE_SELEC);
  gtk_container_set_border_width (GTK_CONTAINER (W_EDIT_FILE_SELEC), 10);
  GTK_WINDOW (W_EDIT_FILE_SELEC)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_EDIT_FILE_SELEC), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_EDIT_FILE_SELEC), TRUE);
  gtk_file_selection_hide_fileop_buttons (GTK_FILE_SELECTION (W_EDIT_FILE_SELEC));

  BT_EDIT_FILE_OK = GTK_FILE_SELECTION (W_EDIT_FILE_SELEC)->ok_button;
  gtk_object_set_data (GTK_OBJECT (W_EDIT_FILE_SELEC), "BT_EDIT_FILE_OK", BT_EDIT_FILE_OK);
  gtk_widget_show (BT_EDIT_FILE_OK);
  GTK_WIDGET_SET_FLAGS (BT_EDIT_FILE_OK, GTK_CAN_DEFAULT);

  BT_EDIT_FILE_ANNUL = GTK_FILE_SELECTION (W_EDIT_FILE_SELEC)->cancel_button;
  gtk_object_set_data (GTK_OBJECT (W_EDIT_FILE_SELEC), "BT_EDIT_FILE_ANNUL", BT_EDIT_FILE_ANNUL);
  gtk_widget_show (BT_EDIT_FILE_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_EDIT_FILE_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_EDIT_FILE_SELEC), "destroy",
                      GTK_SIGNAL_FUNC (on_w_edit_file_selec_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_EDIT_FILE_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_file_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_EDIT_FILE_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (W_EDIT_FILE_SELEC));

  return W_EDIT_FILE_SELEC;
}

GtkWidget*
create_W_GEST_DRIVE (void)
{
  GtkWidget *W_GEST_DRIVE;
  GtkWidget *dialog_vbox17;
  GtkWidget *vbox9;
  GtkWidget *scrolledwindow7;
  GtkWidget *TAB_DRIVE;
  GtkWidget *label7;
  GtkWidget *hbuttonbox3;
  GtkWidget *BT_DRIVE_NEW;
  GtkWidget *BT_DRIVE_MODIFY;
  GtkWidget *BT_DRIVE_DEL;
  GtkWidget *dialog_action_area17;
  GtkWidget *BT_GEST_DRIVE_OK;

  W_GEST_DRIVE = gnome_dialog_new (_(texte[74]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_GEST_DRIVE), "W_GEST_DRIVE", W_GEST_DRIVE);
  GTK_WINDOW (W_GEST_DRIVE)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_GEST_DRIVE), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_GEST_DRIVE), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_GEST_DRIVE), FALSE, FALSE, FALSE);

  dialog_vbox17 = GNOME_DIALOG (W_GEST_DRIVE)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_GEST_DRIVE), "dialog_vbox17", dialog_vbox17);
  gtk_widget_show (dialog_vbox17);

  vbox9 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox9);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_DRIVE), "vbox9", vbox9,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox9);
  gtk_box_pack_start (GTK_BOX (dialog_vbox17), vbox9, TRUE, TRUE, 0);

  scrolledwindow7 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow7);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_DRIVE), "scrolledwindow7", scrolledwindow7,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow7);
  gtk_box_pack_start (GTK_BOX (vbox9), scrolledwindow7, TRUE, TRUE, 0);
  gtk_widget_set_usize (scrolledwindow7, -2, 120);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow7), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  TAB_DRIVE = gtk_clist_new (1);
  gtk_widget_ref (TAB_DRIVE);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_DRIVE), "TAB_DRIVE", TAB_DRIVE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (TAB_DRIVE);
  gtk_container_add (GTK_CONTAINER (scrolledwindow7), TAB_DRIVE);
  gtk_clist_set_column_width (GTK_CLIST (TAB_DRIVE), 0, 80);
  gtk_clist_column_titles_hide (GTK_CLIST (TAB_DRIVE));

  label7 = gtk_label_new ("");
  gtk_widget_ref (label7);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_DRIVE), "label7", label7,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label7);
  gtk_clist_set_column_widget (GTK_CLIST (TAB_DRIVE), 0, label7);

  hbuttonbox3 = gtk_hbutton_box_new ();
  gtk_widget_ref (hbuttonbox3);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_DRIVE), "hbuttonbox3", hbuttonbox3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbuttonbox3);
  gtk_box_pack_start (GTK_BOX (vbox9), hbuttonbox3, TRUE, TRUE, 0);

  BT_DRIVE_NEW = gtk_button_new_with_label (_(texte[75]));
  gtk_widget_ref (BT_DRIVE_NEW);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_DRIVE), "BT_DRIVE_NEW", BT_DRIVE_NEW,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DRIVE_NEW);
  gtk_container_add (GTK_CONTAINER (hbuttonbox3), BT_DRIVE_NEW);
  GTK_WIDGET_SET_FLAGS (BT_DRIVE_NEW, GTK_CAN_DEFAULT);

  BT_DRIVE_MODIFY = gtk_button_new_with_label (_(texte[76]));
  gtk_widget_ref (BT_DRIVE_MODIFY);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_DRIVE), "BT_DRIVE_MODIFY", BT_DRIVE_MODIFY,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DRIVE_MODIFY);
  gtk_container_add (GTK_CONTAINER (hbuttonbox3), BT_DRIVE_MODIFY);
  GTK_WIDGET_SET_FLAGS (BT_DRIVE_MODIFY, GTK_CAN_DEFAULT);

  BT_DRIVE_DEL = gtk_button_new_with_label (_(texte[77]));
  gtk_widget_ref (BT_DRIVE_DEL);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_DRIVE), "BT_DRIVE_DEL", BT_DRIVE_DEL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DRIVE_DEL);
  gtk_container_add (GTK_CONTAINER (hbuttonbox3), BT_DRIVE_DEL);
  GTK_WIDGET_SET_FLAGS (BT_DRIVE_DEL, GTK_CAN_DEFAULT);

  dialog_action_area17 = GNOME_DIALOG (W_GEST_DRIVE)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_GEST_DRIVE), "dialog_action_area17", dialog_action_area17);
  gtk_widget_show (dialog_action_area17);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area17), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area17), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_GEST_DRIVE), GNOME_STOCK_BUTTON_OK);
  BT_GEST_DRIVE_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_GEST_DRIVE)->buttons)->data);
  gtk_widget_ref (BT_GEST_DRIVE_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_GEST_DRIVE), "BT_GEST_DRIVE_OK", BT_GEST_DRIVE_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_GEST_DRIVE_OK);
  GTK_WIDGET_SET_FLAGS (BT_GEST_DRIVE_OK, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_GEST_DRIVE), "destroy",
                      GTK_SIGNAL_FUNC (on_w_gest_drive_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (TAB_DRIVE), "select_row",
                      GTK_SIGNAL_FUNC (on_tab_drive_select_row),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DRIVE_NEW), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_drive_new_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DRIVE_MODIFY), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_drive_modify_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DRIVE_DEL), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_drive_del_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_GEST_DRIVE_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_GEST_DRIVE));

  return W_GEST_DRIVE;
}

GtkWidget*
create_W_DRIVE_CFG (void)
{
  GtkWidget *W_DRIVE_CFG;
  GtkWidget *dialog_vbox18;
  GtkWidget *FrmDisk;
  GtkWidget *table3;
  GtkWidget *E_SERIAL;
  GtkWidget *ST_SERIAL;
  GtkWidget *CB_FILESYSEM;
  GList *CB_FILESYSEM_items = NULL;
  GtkWidget *E_FILESYSTEM;
  GtkWidget *ST_FILESYSTEM;
  GtkWidget *ST_NAME;
  GtkWidget *E_NAME;
  GtkWidget *ST_TYPE;
  GtkWidget *CB_TYPE;
  GList *CB_TYPE_items = NULL;
  GtkWidget *E_TYPE;
  GtkWidget *ST_PATH;
  GtkWidget *E_PATH;
  GtkWidget *BT_DRIVE_PATH;
  GtkWidget *CB_DRIVE;
  GtkWidget *E_DRIVE;
  GtkWidget *ST_DEVICE;
  GtkWidget *E_DEVICE;
  GtkWidget *dialog_action_area18;
  GtkWidget *BT_DRIVE_CFG_OK;
  GtkWidget *BT_DRIVE_CFG_ANNUL;

  W_DRIVE_CFG = gnome_dialog_new (_(texte[78]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_DRIVE_CFG), "W_DRIVE_CFG", W_DRIVE_CFG);
  GTK_WINDOW (W_DRIVE_CFG)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_DRIVE_CFG), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_DRIVE_CFG), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_DRIVE_CFG), FALSE, FALSE, FALSE);

  dialog_vbox18 = GNOME_DIALOG (W_DRIVE_CFG)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_DRIVE_CFG), "dialog_vbox18", dialog_vbox18);
  gtk_widget_show (dialog_vbox18);

  FrmDisk = gtk_frame_new ("");
  gtk_widget_ref (FrmDisk);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "FrmDisk", FrmDisk,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (FrmDisk);
  gtk_box_pack_start (GTK_BOX (dialog_vbox18), FrmDisk, TRUE, TRUE, 1);
  gtk_container_set_border_width (GTK_CONTAINER (FrmDisk), 4);

  table3 = gtk_table_new (7, 3, FALSE);
  gtk_widget_ref (table3);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "table3", table3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table3);
  gtk_container_add (GTK_CONTAINER (FrmDisk), table3);

  E_SERIAL = gtk_entry_new_with_max_length (8);
  gtk_widget_ref (E_SERIAL);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "E_SERIAL", E_SERIAL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_SERIAL);
  gtk_table_attach (GTK_TABLE (table3), E_SERIAL, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ST_SERIAL = gtk_label_new (_(texte[79]));
  gtk_widget_ref (ST_SERIAL);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "ST_SERIAL", ST_SERIAL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_SERIAL);
  gtk_table_attach (GTK_TABLE (table3), ST_SERIAL, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 3, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_SERIAL), 0, 0.5);

  CB_FILESYSEM = gtk_combo_new ();
  gtk_widget_ref (CB_FILESYSEM);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "CB_FILESYSEM", CB_FILESYSEM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_FILESYSEM);
  gtk_table_attach (GTK_TABLE (table3), CB_FILESYSEM, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  CB_FILESYSEM_items = g_list_append (CB_FILESYSEM_items, (gpointer) "");
  CB_FILESYSEM_items = g_list_append (CB_FILESYSEM_items, (gpointer) _("win95"));
  CB_FILESYSEM_items = g_list_append (CB_FILESYSEM_items, (gpointer) _("msdos"));
  CB_FILESYSEM_items = g_list_append (CB_FILESYSEM_items, (gpointer) _("unix"));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_FILESYSEM), CB_FILESYSEM_items);
  g_list_free (CB_FILESYSEM_items);

  E_FILESYSTEM = GTK_COMBO (CB_FILESYSEM)->entry;
  gtk_widget_ref (E_FILESYSTEM);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "E_FILESYSTEM", E_FILESYSTEM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_FILESYSTEM);
  gtk_entry_set_editable (GTK_ENTRY (E_FILESYSTEM), FALSE);
  gtk_entry_set_text (GTK_ENTRY (E_FILESYSTEM), _("win95"));

  ST_FILESYSTEM = gtk_label_new (_(texte[80]));
  gtk_widget_ref (ST_FILESYSTEM);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "ST_FILESYSTEM", ST_FILESYSTEM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_FILESYSTEM);
  gtk_table_attach (GTK_TABLE (table3), ST_FILESYSTEM, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 3, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_FILESYSTEM), 0, 0.5);

  ST_NAME = gtk_label_new (_(texte[81]));
  gtk_widget_ref (ST_NAME);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "ST_NAME", ST_NAME,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_NAME);
  gtk_table_attach (GTK_TABLE (table3), ST_NAME, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 3, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_NAME), 0, 0.5);

  E_NAME = gtk_entry_new_with_max_length (11);
  gtk_widget_ref (E_NAME);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "E_NAME", E_NAME,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_NAME);
  gtk_table_attach (GTK_TABLE (table3), E_NAME, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ST_TYPE = gtk_label_new (_(texte[82]));
  gtk_widget_ref (ST_TYPE);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "ST_TYPE", ST_TYPE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_TYPE);
  gtk_table_attach (GTK_TABLE (table3), ST_TYPE, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 3, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_TYPE), 0, 0.5);

  CB_TYPE = gtk_combo_new ();
  gtk_widget_ref (CB_TYPE);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "CB_TYPE", CB_TYPE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_TYPE);
  gtk_table_attach (GTK_TABLE (table3), CB_TYPE, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  CB_TYPE_items = g_list_append (CB_TYPE_items, (gpointer) _("floppy"));
  CB_TYPE_items = g_list_append (CB_TYPE_items, (gpointer) _("hd"));
  CB_TYPE_items = g_list_append (CB_TYPE_items, (gpointer) _("cdrom"));
  CB_TYPE_items = g_list_append (CB_TYPE_items, (gpointer) _("network"));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_TYPE), CB_TYPE_items);
  g_list_free (CB_TYPE_items);

  E_TYPE = GTK_COMBO (CB_TYPE)->entry;
  gtk_widget_ref (E_TYPE);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "E_TYPE", E_TYPE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_TYPE);
  gtk_entry_set_editable (GTK_ENTRY (E_TYPE), FALSE);
  gtk_entry_set_text (GTK_ENTRY (E_TYPE), _("floppy"));

  ST_PATH = gtk_label_new (_(texte[83]));
  gtk_widget_ref (ST_PATH);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "ST_PATH", ST_PATH,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_PATH);
  gtk_table_attach (GTK_TABLE (table3), ST_PATH, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 3, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_PATH), 0, 0.5);

  E_PATH = gtk_entry_new_with_max_length (512);
  gtk_widget_ref (E_PATH);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "E_PATH", E_PATH,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_PATH);
  gtk_table_attach (GTK_TABLE (table3), E_PATH, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 3);

  BT_DRIVE_PATH = gtk_button_new_with_label (_("..."));
  gtk_widget_ref (BT_DRIVE_PATH);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "BT_DRIVE_PATH", BT_DRIVE_PATH,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DRIVE_PATH);
  gtk_table_attach (GTK_TABLE (table3), BT_DRIVE_PATH, 2, 3, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  CB_DRIVE = gtk_combo_new ();
  gtk_widget_ref (CB_DRIVE);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "CB_DRIVE", CB_DRIVE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_DRIVE);
  gtk_table_attach (GTK_TABLE (table3), CB_DRIVE, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 3, 0);
  gtk_widget_set_usize (CB_DRIVE, 100, -2);
  gtk_combo_set_value_in_list (GTK_COMBO (CB_DRIVE), TRUE, FALSE);

  E_DRIVE = GTK_COMBO (CB_DRIVE)->entry;
  gtk_widget_ref (E_DRIVE);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "E_DRIVE", E_DRIVE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_DRIVE);
  gtk_entry_set_editable (GTK_ENTRY (E_DRIVE), FALSE);

  ST_DEVICE = gtk_label_new (_(texte[84]));
  gtk_widget_ref (ST_DEVICE);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "ST_DEVICE", ST_DEVICE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_DEVICE);
  gtk_table_attach (GTK_TABLE (table3), ST_DEVICE, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 3, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_DEVICE), 0, 0.5);

  E_DEVICE = gtk_entry_new ();
  gtk_widget_ref (E_DEVICE);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "E_DEVICE", E_DEVICE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_DEVICE);
  gtk_table_attach (GTK_TABLE (table3), E_DEVICE, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  dialog_action_area18 = GNOME_DIALOG (W_DRIVE_CFG)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_DRIVE_CFG), "dialog_action_area18", dialog_action_area18);
  gtk_widget_show (dialog_action_area18);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area18), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area18), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_DRIVE_CFG), GNOME_STOCK_BUTTON_OK);
  BT_DRIVE_CFG_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_DRIVE_CFG)->buttons)->data);
  gtk_widget_ref (BT_DRIVE_CFG_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "BT_DRIVE_CFG_OK", BT_DRIVE_CFG_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DRIVE_CFG_OK);
  GTK_WIDGET_SET_FLAGS (BT_DRIVE_CFG_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_DRIVE_CFG), GNOME_STOCK_BUTTON_CANCEL);
  BT_DRIVE_CFG_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_DRIVE_CFG)->buttons)->data);
  gtk_widget_ref (BT_DRIVE_CFG_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_DRIVE_CFG), "BT_DRIVE_CFG_ANNUL", BT_DRIVE_CFG_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DRIVE_CFG_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_DRIVE_CFG_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_DRIVE_CFG), "destroy",
                      GTK_SIGNAL_FUNC (on_w_drive_cfg_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DRIVE_PATH), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_drive_path_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DRIVE_CFG_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_drive_cfg_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_DRIVE_CFG_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_DRIVE_CFG));

  return W_DRIVE_CFG;
}

GtkWidget*
create_ERR_DRIVE_SEL (void)
{
  GtkWidget *ERR_DRIVE_SEL;
  GtkWidget *dialog_vbox19;
  GtkWidget *ERR_DRIVE_SEL_OK;
  GtkWidget *dialog_action_area19;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  ERR_DRIVE_SEL = gnome_message_box_new (_(texte[85]),
                              GNOME_MESSAGE_BOX_ERROR,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (ERR_DRIVE_SEL)->action_area), GNOME_DIALOG (ERR_DRIVE_SEL)->buttons->data);
  GNOME_DIALOG (ERR_DRIVE_SEL)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (ERR_DRIVE_SEL), "ERR_DRIVE_SEL", ERR_DRIVE_SEL);
  gtk_window_set_title (GTK_WINDOW (ERR_DRIVE_SEL), _(texte[38]));
  gtk_window_set_position (GTK_WINDOW (ERR_DRIVE_SEL), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (ERR_DRIVE_SEL), TRUE);
  gtk_window_set_policy (GTK_WINDOW (ERR_DRIVE_SEL), FALSE, FALSE, FALSE);

  dialog_vbox19 = GNOME_DIALOG (ERR_DRIVE_SEL)->vbox;
  gtk_object_set_data (GTK_OBJECT (ERR_DRIVE_SEL), "dialog_vbox19", dialog_vbox19);
  gtk_widget_show (dialog_vbox19);

  gnome_dialog_append_button (GNOME_DIALOG (ERR_DRIVE_SEL), GNOME_STOCK_BUTTON_OK);
  ERR_DRIVE_SEL_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (ERR_DRIVE_SEL)->buttons)->data);
  gtk_widget_ref (ERR_DRIVE_SEL_OK);
  gtk_object_set_data_full (GTK_OBJECT (ERR_DRIVE_SEL), "ERR_DRIVE_SEL_OK", ERR_DRIVE_SEL_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ERR_DRIVE_SEL_OK);
  GTK_WIDGET_SET_FLAGS (ERR_DRIVE_SEL_OK, GTK_CAN_DEFAULT);

  dialog_action_area19 = GNOME_DIALOG (ERR_DRIVE_SEL)->action_area;
  gtk_widget_ref (dialog_action_area19);
  gtk_object_set_data_full (GTK_OBJECT (ERR_DRIVE_SEL), "dialog_action_area19", dialog_action_area19,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (ERR_DRIVE_SEL), "destroy",
                      GTK_SIGNAL_FUNC (on_err_drive_sel_destroy),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (ERR_DRIVE_SEL_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (ERR_DRIVE_SEL));

  return ERR_DRIVE_SEL;
}

GtkWidget*
create_ERR_DRIVE_PATH (void)
{
  GtkWidget *ERR_DRIVE_PATH;
  GtkWidget *dialog_vbox20;
  GtkWidget *ERR_DRIVE_PATH_OK;
  GtkWidget *dialog_action_area20;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  ERR_DRIVE_PATH = gnome_message_box_new (_(texte[86]),
                              GNOME_MESSAGE_BOX_ERROR,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (ERR_DRIVE_PATH)->action_area), GNOME_DIALOG (ERR_DRIVE_PATH)->buttons->data);
  GNOME_DIALOG (ERR_DRIVE_PATH)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (ERR_DRIVE_PATH), "ERR_DRIVE_PATH", ERR_DRIVE_PATH);
  gtk_window_set_title (GTK_WINDOW (ERR_DRIVE_PATH), _(texte[38]));
  gtk_window_set_position (GTK_WINDOW (ERR_DRIVE_PATH), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (ERR_DRIVE_PATH), TRUE);
  gtk_window_set_policy (GTK_WINDOW (ERR_DRIVE_PATH), FALSE, FALSE, FALSE);

  dialog_vbox20 = GNOME_DIALOG (ERR_DRIVE_PATH)->vbox;
  gtk_object_set_data (GTK_OBJECT (ERR_DRIVE_PATH), "dialog_vbox20", dialog_vbox20);
  gtk_widget_show (dialog_vbox20);

  gnome_dialog_append_button (GNOME_DIALOG (ERR_DRIVE_PATH), GNOME_STOCK_BUTTON_OK);
  ERR_DRIVE_PATH_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (ERR_DRIVE_PATH)->buttons)->data);
  gtk_widget_ref (ERR_DRIVE_PATH_OK);
  gtk_object_set_data_full (GTK_OBJECT (ERR_DRIVE_PATH), "ERR_DRIVE_PATH_OK", ERR_DRIVE_PATH_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ERR_DRIVE_PATH_OK);
  GTK_WIDGET_SET_FLAGS (ERR_DRIVE_PATH_OK, GTK_CAN_DEFAULT);

  dialog_action_area20 = GNOME_DIALOG (ERR_DRIVE_PATH)->action_area;
  gtk_widget_ref (dialog_action_area20);
  gtk_object_set_data_full (GTK_OBJECT (ERR_DRIVE_PATH), "dialog_action_area20", dialog_action_area20,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (ERR_DRIVE_PATH), "destroy",
                      GTK_SIGNAL_FUNC (on_err_drive_path_destroy),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (ERR_DRIVE_PATH_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (ERR_DRIVE_PATH));

  return ERR_DRIVE_PATH;
}

GtkWidget*
create_WARN_DRIVE_DEL (void)
{
  GtkWidget *WARN_DRIVE_DEL;
  GtkWidget *dialog_vbox21;
  GtkWidget *BT_DRIVE_DEL_OUI;
  GtkWidget *BT_DRIVE_DEL_NON;
  GtkWidget *dialog_action_area21;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  WARN_DRIVE_DEL = gnome_message_box_new (_(texte[87]),
                              GNOME_MESSAGE_BOX_WARNING,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (WARN_DRIVE_DEL)->action_area), GNOME_DIALOG (WARN_DRIVE_DEL)->buttons->data);
  GNOME_DIALOG (WARN_DRIVE_DEL)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (WARN_DRIVE_DEL), "WARN_DRIVE_DEL", WARN_DRIVE_DEL);
  gtk_window_set_title (GTK_WINDOW (WARN_DRIVE_DEL), _(texte[40]));
  gtk_window_set_position (GTK_WINDOW (WARN_DRIVE_DEL), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (WARN_DRIVE_DEL), TRUE);
  gtk_window_set_policy (GTK_WINDOW (WARN_DRIVE_DEL), FALSE, FALSE, FALSE);

  dialog_vbox21 = GNOME_DIALOG (WARN_DRIVE_DEL)->vbox;
  gtk_object_set_data (GTK_OBJECT (WARN_DRIVE_DEL), "dialog_vbox21", dialog_vbox21);
  gtk_widget_show (dialog_vbox21);

  gnome_dialog_append_button (GNOME_DIALOG (WARN_DRIVE_DEL), GNOME_STOCK_BUTTON_YES);
  BT_DRIVE_DEL_OUI = GTK_WIDGET (g_list_last (GNOME_DIALOG (WARN_DRIVE_DEL)->buttons)->data);
  gtk_widget_ref (BT_DRIVE_DEL_OUI);
  gtk_object_set_data_full (GTK_OBJECT (WARN_DRIVE_DEL), "BT_DRIVE_DEL_OUI", BT_DRIVE_DEL_OUI,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DRIVE_DEL_OUI);
  GTK_WIDGET_SET_FLAGS (BT_DRIVE_DEL_OUI, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (WARN_DRIVE_DEL), GNOME_STOCK_BUTTON_NO);
  BT_DRIVE_DEL_NON = GTK_WIDGET (g_list_last (GNOME_DIALOG (WARN_DRIVE_DEL)->buttons)->data);
  gtk_widget_ref (BT_DRIVE_DEL_NON);
  gtk_object_set_data_full (GTK_OBJECT (WARN_DRIVE_DEL), "BT_DRIVE_DEL_NON", BT_DRIVE_DEL_NON,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DRIVE_DEL_NON);
  GTK_WIDGET_SET_FLAGS (BT_DRIVE_DEL_NON, GTK_CAN_DEFAULT);

  dialog_action_area21 = GNOME_DIALOG (WARN_DRIVE_DEL)->action_area;
  gtk_widget_ref (dialog_action_area21);
  gtk_object_set_data_full (GTK_OBJECT (WARN_DRIVE_DEL), "dialog_action_area21", dialog_action_area21,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (WARN_DRIVE_DEL), "destroy",
                      GTK_SIGNAL_FUNC (on_warn_drive_del_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DRIVE_DEL_OUI), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_drive_del_oui_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_DRIVE_DEL_NON), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (WARN_DRIVE_DEL));

  return WARN_DRIVE_DEL;
}

GtkWidget*
create_W_DRIVE_SEL_PATH (void)
{
  GtkWidget *W_DRIVE_SEL_PATH;
  GtkWidget *BT_SEL_PATH_OK;
  GtkWidget *BT_SEL_PATH_ANNUL;

  W_DRIVE_SEL_PATH = gtk_file_selection_new (_(texte[88]));
  gtk_object_set_data (GTK_OBJECT (W_DRIVE_SEL_PATH), "W_DRIVE_SEL_PATH", W_DRIVE_SEL_PATH);
  gtk_container_set_border_width (GTK_CONTAINER (W_DRIVE_SEL_PATH), 10);
  GTK_WINDOW (W_DRIVE_SEL_PATH)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_DRIVE_SEL_PATH), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_DRIVE_SEL_PATH), TRUE);

  BT_SEL_PATH_OK = GTK_FILE_SELECTION (W_DRIVE_SEL_PATH)->ok_button;
  gtk_object_set_data (GTK_OBJECT (W_DRIVE_SEL_PATH), "BT_SEL_PATH_OK", BT_SEL_PATH_OK);
  gtk_widget_show (BT_SEL_PATH_OK);
  GTK_WIDGET_SET_FLAGS (BT_SEL_PATH_OK, GTK_CAN_DEFAULT);

  BT_SEL_PATH_ANNUL = GTK_FILE_SELECTION (W_DRIVE_SEL_PATH)->cancel_button;
  gtk_object_set_data (GTK_OBJECT (W_DRIVE_SEL_PATH), "BT_SEL_PATH_ANNUL", BT_SEL_PATH_ANNUL);
  gtk_widget_show (BT_SEL_PATH_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_SEL_PATH_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_DRIVE_SEL_PATH), "destroy",
                      GTK_SIGNAL_FUNC (on_w_drive_sel_path_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_SEL_PATH_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_sel_path_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_SEL_PATH_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (W_DRIVE_SEL_PATH));

  return W_DRIVE_SEL_PATH;
}

GtkWidget*
create_ERR_NOT_PATH (void)
{
  GtkWidget *ERR_NOT_PATH;
  GtkWidget *dialog_vbox22;
  GtkWidget *button22;
  GtkWidget *dialog_action_area22;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  ERR_NOT_PATH = gnome_message_box_new (_(texte[89]),
                              GNOME_MESSAGE_BOX_ERROR,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (ERR_NOT_PATH)->action_area), GNOME_DIALOG (ERR_NOT_PATH)->buttons->data);
  GNOME_DIALOG (ERR_NOT_PATH)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (ERR_NOT_PATH), "ERR_NOT_PATH", ERR_NOT_PATH);
  gtk_window_set_title (GTK_WINDOW (ERR_NOT_PATH), _(texte[38]));
  gtk_window_set_position (GTK_WINDOW (ERR_NOT_PATH), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (ERR_NOT_PATH), TRUE);
  gtk_window_set_policy (GTK_WINDOW (ERR_NOT_PATH), FALSE, FALSE, FALSE);

  dialog_vbox22 = GNOME_DIALOG (ERR_NOT_PATH)->vbox;
  gtk_object_set_data (GTK_OBJECT (ERR_NOT_PATH), "dialog_vbox22", dialog_vbox22);
  gtk_widget_show (dialog_vbox22);

  gnome_dialog_append_button (GNOME_DIALOG (ERR_NOT_PATH), GNOME_STOCK_BUTTON_OK);
  button22 = GTK_WIDGET (g_list_last (GNOME_DIALOG (ERR_NOT_PATH)->buttons)->data);
  gtk_widget_ref (button22);
  gtk_object_set_data_full (GTK_OBJECT (ERR_NOT_PATH), "button22", button22,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button22);
  GTK_WIDGET_SET_FLAGS (button22, GTK_CAN_DEFAULT);

  dialog_action_area22 = GNOME_DIALOG (ERR_NOT_PATH)->action_area;
  gtk_widget_ref (dialog_action_area22);
  gtk_object_set_data_full (GTK_OBJECT (ERR_NOT_PATH), "dialog_action_area22", dialog_action_area22,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (ERR_NOT_PATH), "destroy",
                      GTK_SIGNAL_FUNC (on_err_not_path_destroy),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (button22), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (ERR_NOT_PATH));

  return ERR_NOT_PATH;
}

GtkWidget*
create_W_WINE_SYSTEM (void)
{
  GtkWidget *W_WINE_SYSTEM;
  GtkWidget *dialog_vbox24;
  GtkWidget *table4;
  GtkWidget *E_WINDOWS;
  GtkWidget *E_SYSTEM;
  GtkWidget *E_TEMP;
  GtkWidget *E_PROFILE;
  GtkWidget *E_PATH;
  GtkWidget *ST_WINDOWS;
  GtkWidget *ST_SYSTEM;
  GtkWidget *ST_TEMP;
  GtkWidget *ST_PROFILE;
  GtkWidget *ST_PATH;
  GtkWidget *dialog_action_area24;
  GtkWidget *BT_SYSTEM_OK;
  GtkWidget *BT_SYSTEM_ANNUL;

  W_WINE_SYSTEM = gnome_dialog_new (_(texte[90]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_WINE_SYSTEM), "W_WINE_SYSTEM", W_WINE_SYSTEM);
  GTK_WINDOW (W_WINE_SYSTEM)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_WINE_SYSTEM), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_WINE_SYSTEM), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_WINE_SYSTEM), FALSE, FALSE, FALSE);

  dialog_vbox24 = GNOME_DIALOG (W_WINE_SYSTEM)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_WINE_SYSTEM), "dialog_vbox24", dialog_vbox24);
  gtk_widget_show (dialog_vbox24);

  table4 = gtk_table_new (5, 2, FALSE);
  gtk_widget_ref (table4);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "table4", table4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table4);
  gtk_box_pack_start (GTK_BOX (dialog_vbox24), table4, TRUE, TRUE, 0);

  E_WINDOWS = gtk_entry_new ();
  gtk_widget_ref (E_WINDOWS);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "E_WINDOWS", E_WINDOWS,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_WINDOWS);
  gtk_table_attach (GTK_TABLE (table4), E_WINDOWS, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_text (GTK_ENTRY (E_WINDOWS), _("C:\\\\Windows"));

  E_SYSTEM = gtk_entry_new ();
  gtk_widget_ref (E_SYSTEM);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "E_SYSTEM", E_SYSTEM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_SYSTEM);
  gtk_table_attach (GTK_TABLE (table4), E_SYSTEM, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_text (GTK_ENTRY (E_SYSTEM), _("C:\\\\Windows\\\\System"));

  E_TEMP = gtk_entry_new ();
  gtk_widget_ref (E_TEMP);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "E_TEMP", E_TEMP,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_TEMP);
  gtk_table_attach (GTK_TABLE (table4), E_TEMP, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_text (GTK_ENTRY (E_TEMP), _("C:\\\\Windows\\\\Temp"));

  E_PROFILE = gtk_entry_new ();
  gtk_widget_ref (E_PROFILE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "E_PROFILE", E_PROFILE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_PROFILE);
  gtk_table_attach (GTK_TABLE (table4), E_PROFILE, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  E_PATH = gtk_entry_new ();
  gtk_widget_ref (E_PATH);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "E_PATH", E_PATH,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_PATH);
  gtk_table_attach (GTK_TABLE (table4), E_PATH, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_text (GTK_ENTRY (E_PATH), _("C:\\\\Windows;C:\\\\Windows\\\\System;C:\\\\"));

  ST_WINDOWS = gtk_label_new (_(texte[91]));
  gtk_widget_ref (ST_WINDOWS);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "ST_WINDOWS", ST_WINDOWS,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_WINDOWS);
  gtk_table_attach (GTK_TABLE (table4), ST_WINDOWS, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_WINDOWS), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_WINDOWS), 10, 0);

  ST_SYSTEM = gtk_label_new (_(texte[92]));
  gtk_widget_ref (ST_SYSTEM);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "ST_SYSTEM", ST_SYSTEM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_SYSTEM);
  gtk_table_attach (GTK_TABLE (table4), ST_SYSTEM, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_SYSTEM), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_SYSTEM), 10, 0);

  ST_TEMP = gtk_label_new (_(texte[93]));
  gtk_widget_ref (ST_TEMP);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "ST_TEMP", ST_TEMP,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_TEMP);
  gtk_table_attach (GTK_TABLE (table4), ST_TEMP, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_TEMP), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_TEMP), 10, 0);

  ST_PROFILE = gtk_label_new (_(texte[94]));
  gtk_widget_ref (ST_PROFILE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "ST_PROFILE", ST_PROFILE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_PROFILE);
  gtk_table_attach (GTK_TABLE (table4), ST_PROFILE, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_PROFILE), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_PROFILE), 10, 0);

  ST_PATH = gtk_label_new (_(texte[95]));
  gtk_widget_ref (ST_PATH);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "ST_PATH", ST_PATH,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_PATH);
  gtk_table_attach (GTK_TABLE (table4), ST_PATH, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_PATH), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_PATH), 10, 0);

  dialog_action_area24 = GNOME_DIALOG (W_WINE_SYSTEM)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_WINE_SYSTEM), "dialog_action_area24", dialog_action_area24);
  gtk_widget_show (dialog_action_area24);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area24), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area24), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_SYSTEM), GNOME_STOCK_BUTTON_OK);
  BT_SYSTEM_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_SYSTEM)->buttons)->data);
  gtk_widget_ref (BT_SYSTEM_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "BT_SYSTEM_OK", BT_SYSTEM_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_SYSTEM_OK);
  GTK_WIDGET_SET_FLAGS (BT_SYSTEM_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_SYSTEM), GNOME_STOCK_BUTTON_CANCEL);
  BT_SYSTEM_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_SYSTEM)->buttons)->data);
  gtk_widget_ref (BT_SYSTEM_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_SYSTEM), "BT_SYSTEM_ANNUL", BT_SYSTEM_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_SYSTEM_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_SYSTEM_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_WINE_SYSTEM), "destroy",
                      GTK_SIGNAL_FUNC (on_w_wine_system_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_SYSTEM_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_system_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_SYSTEM_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_WINE_SYSTEM));

  return W_WINE_SYSTEM;
}

GtkWidget*
create_W_DLL_GEST (void)
{
  GtkWidget *W_DLL_GEST;
  GtkWidget *dialog_vbox25;
  GtkWidget *vbox10;
  GtkWidget *frame15;
  GtkWidget *hbox10;
  GtkWidget *ST_DEFAUT;
  GtkWidget *CB_DEFAUT;
  GList *CB_DEFAUT_items = NULL;
  GtkWidget *E_DEFAUT;
  GtkWidget *FRM_OVERRIDE;
  GtkWidget *vbox11;
  GtkWidget *scrolledwindow8;
  GtkWidget *TAB_OVERRIDE;
  GtkWidget *label20;
  GtkWidget *hbuttonbox4;
  GtkWidget *BT_DLL_GEST_NEW;
  GtkWidget *BT_DLL_GEST_MODIFY;
  GtkWidget *BT_DLL_GEST_DEL;
  GtkWidget *dialog_action_area25;
  GtkWidget *BT_DLL_GEST_OK;
  GtkWidget *BT_DLL_GEST_ANNUL;

  W_DLL_GEST = gnome_dialog_new (_(texte[96]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_DLL_GEST), "W_DLL_GEST", W_DLL_GEST);
  GTK_WINDOW (W_DLL_GEST)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_DLL_GEST), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_DLL_GEST), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_DLL_GEST), FALSE, FALSE, FALSE);

  dialog_vbox25 = GNOME_DIALOG (W_DLL_GEST)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_DLL_GEST), "dialog_vbox25", dialog_vbox25);
  gtk_widget_show (dialog_vbox25);

  vbox10 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox10);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "vbox10", vbox10,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox10);
  gtk_box_pack_start (GTK_BOX (dialog_vbox25), vbox10, TRUE, TRUE, 0);

  frame15 = gtk_frame_new (NULL);
  gtk_widget_ref (frame15);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "frame15", frame15,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame15);
  gtk_box_pack_start (GTK_BOX (vbox10), frame15, TRUE, TRUE, 5);

  hbox10 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox10);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "hbox10", hbox10,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (frame15), hbox10);

  ST_DEFAUT = gtk_label_new (_(texte[97]));
  gtk_widget_ref (ST_DEFAUT);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "ST_DEFAUT", ST_DEFAUT,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_DEFAUT);
  gtk_box_pack_start (GTK_BOX (hbox10), ST_DEFAUT, FALSE, FALSE, 0);
  gtk_misc_set_padding (GTK_MISC (ST_DEFAUT), 10, 15);

  CB_DEFAUT = gtk_combo_new ();
  gtk_widget_ref (CB_DEFAUT);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "CB_DEFAUT", CB_DEFAUT,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_DEFAUT);
  gtk_box_pack_start (GTK_BOX (hbox10), CB_DEFAUT, TRUE, TRUE, 10);
  gtk_combo_set_value_in_list (GTK_COMBO (CB_DEFAUT), TRUE, FALSE);
  CB_DEFAUT_items = g_list_append (CB_DEFAUT_items, (gpointer) _("native, builtin, so"));
  CB_DEFAUT_items = g_list_append (CB_DEFAUT_items, (gpointer) _("native, so, builtin"));
  CB_DEFAUT_items = g_list_append (CB_DEFAUT_items, (gpointer) _("builtin, native, so"));
  CB_DEFAUT_items = g_list_append (CB_DEFAUT_items, (gpointer) _("builtin, so, native"));
  CB_DEFAUT_items = g_list_append (CB_DEFAUT_items, (gpointer) _("so, native, builtin"));
  CB_DEFAUT_items = g_list_append (CB_DEFAUT_items, (gpointer) _("so, builtin, native"));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_DEFAUT), CB_DEFAUT_items);
  g_list_free (CB_DEFAUT_items);

  E_DEFAUT = GTK_COMBO (CB_DEFAUT)->entry;
  gtk_widget_ref (E_DEFAUT);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "E_DEFAUT", E_DEFAUT,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_DEFAUT);
  gtk_entry_set_editable (GTK_ENTRY (E_DEFAUT), FALSE);
  gtk_entry_set_text (GTK_ENTRY (E_DEFAUT), _("native, builtin, so"));

  FRM_OVERRIDE = gtk_frame_new (_(texte[98]));
  gtk_widget_ref (FRM_OVERRIDE);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "FRM_OVERRIDE", FRM_OVERRIDE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (FRM_OVERRIDE);
  gtk_box_pack_start (GTK_BOX (vbox10), FRM_OVERRIDE, TRUE, TRUE, 0);

  vbox11 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox11);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "vbox11", vbox11,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox11);
  gtk_container_add (GTK_CONTAINER (FRM_OVERRIDE), vbox11);

  scrolledwindow8 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow8);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "scrolledwindow8", scrolledwindow8,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow8);
  gtk_box_pack_start (GTK_BOX (vbox11), scrolledwindow8, TRUE, TRUE, 0);
  gtk_widget_set_usize (scrolledwindow8, -2, 90);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow8), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  TAB_OVERRIDE = gtk_clist_new (1);
  gtk_widget_ref (TAB_OVERRIDE);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "TAB_OVERRIDE", TAB_OVERRIDE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (TAB_OVERRIDE);
  gtk_container_add (GTK_CONTAINER (scrolledwindow8), TAB_OVERRIDE);
  gtk_clist_set_column_width (GTK_CLIST (TAB_OVERRIDE), 0, 80);
  gtk_clist_column_titles_hide (GTK_CLIST (TAB_OVERRIDE));

  label20 = gtk_label_new (_("label20"));
  gtk_widget_ref (label20);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "label20", label20,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label20);
  gtk_clist_set_column_widget (GTK_CLIST (TAB_OVERRIDE), 0, label20);

  hbuttonbox4 = gtk_hbutton_box_new ();
  gtk_widget_ref (hbuttonbox4);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "hbuttonbox4", hbuttonbox4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbuttonbox4);
  gtk_box_pack_start (GTK_BOX (vbox11), hbuttonbox4, TRUE, TRUE, 0);

  BT_DLL_GEST_NEW = gtk_button_new_with_label (_(texte[99]));
  gtk_widget_ref (BT_DLL_GEST_NEW);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "BT_DLL_GEST_NEW", BT_DLL_GEST_NEW,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DLL_GEST_NEW);
  gtk_container_add (GTK_CONTAINER (hbuttonbox4), BT_DLL_GEST_NEW);
  GTK_WIDGET_SET_FLAGS (BT_DLL_GEST_NEW, GTK_CAN_DEFAULT);

  BT_DLL_GEST_MODIFY = gtk_button_new_with_label (_(texte[100]));
  gtk_widget_ref (BT_DLL_GEST_MODIFY);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "BT_DLL_GEST_MODIFY", BT_DLL_GEST_MODIFY,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DLL_GEST_MODIFY);
  gtk_container_add (GTK_CONTAINER (hbuttonbox4), BT_DLL_GEST_MODIFY);
  GTK_WIDGET_SET_FLAGS (BT_DLL_GEST_MODIFY, GTK_CAN_DEFAULT);

  BT_DLL_GEST_DEL = gtk_button_new_with_label (_(texte[101]));
  gtk_widget_ref (BT_DLL_GEST_DEL);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "BT_DLL_GEST_DEL", BT_DLL_GEST_DEL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DLL_GEST_DEL);
  gtk_container_add (GTK_CONTAINER (hbuttonbox4), BT_DLL_GEST_DEL);
  GTK_WIDGET_SET_FLAGS (BT_DLL_GEST_DEL, GTK_CAN_DEFAULT);

  dialog_action_area25 = GNOME_DIALOG (W_DLL_GEST)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_DLL_GEST), "dialog_action_area25", dialog_action_area25);
  gtk_widget_show (dialog_action_area25);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area25), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area25), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_DLL_GEST), GNOME_STOCK_BUTTON_OK);
  BT_DLL_GEST_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_DLL_GEST)->buttons)->data);
  gtk_widget_ref (BT_DLL_GEST_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "BT_DLL_GEST_OK", BT_DLL_GEST_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DLL_GEST_OK);
  GTK_WIDGET_SET_FLAGS (BT_DLL_GEST_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_DLL_GEST), GNOME_STOCK_BUTTON_CANCEL);
  BT_DLL_GEST_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_DLL_GEST)->buttons)->data);
  gtk_widget_ref (BT_DLL_GEST_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_GEST), "BT_DLL_GEST_ANNUL", BT_DLL_GEST_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DLL_GEST_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_DLL_GEST_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_DLL_GEST), "destroy",
                      GTK_SIGNAL_FUNC (on_w_dll_gest_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (TAB_OVERRIDE), "select_row",
                      GTK_SIGNAL_FUNC (on_tab_override_select_row),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DLL_GEST_NEW), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_dll_gest_new_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DLL_GEST_MODIFY), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_dll_gest_modify_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DLL_GEST_DEL), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_dll_gest_del_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DLL_GEST_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_dll_gest_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_DLL_GEST_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_DLL_GEST));

  return W_DLL_GEST;
}

GtkWidget*
create_W_DLL_OVERRIDE (void)
{
  GtkWidget *W_DLL_OVERRIDE;
  GtkWidget *dialog_vbox26;
  GtkWidget *FRM_DLL;
  GtkWidget *hbox11;
  GtkWidget *E_DLL;
  GtkWidget *CB_OVERRIDE;
  GList *CB_OVERRIDE_items = NULL;
  GtkWidget *E_OVERRIDE;
  GtkWidget *dialog_action_area26;
  GtkWidget *BT_DLL_OVERRIDE;
  GtkWidget *BT_DLL_OVERRIDE_ANNUL;

  W_DLL_OVERRIDE = gnome_dialog_new (_(texte[102]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_DLL_OVERRIDE), "W_DLL_OVERRIDE", W_DLL_OVERRIDE);
  GTK_WINDOW (W_DLL_OVERRIDE)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_DLL_OVERRIDE), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_DLL_OVERRIDE), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_DLL_OVERRIDE), FALSE, FALSE, FALSE);

  dialog_vbox26 = GNOME_DIALOG (W_DLL_OVERRIDE)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_DLL_OVERRIDE), "dialog_vbox26", dialog_vbox26);
  gtk_widget_show (dialog_vbox26);

  FRM_DLL = gtk_frame_new (_(texte[103]));
  gtk_widget_ref (FRM_DLL);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_OVERRIDE), "FRM_DLL", FRM_DLL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (FRM_DLL);
  gtk_box_pack_start (GTK_BOX (dialog_vbox26), FRM_DLL, TRUE, TRUE, 0);

  hbox11 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox11);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_OVERRIDE), "hbox11", hbox11,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (FRM_DLL), hbox11);

  E_DLL = gtk_entry_new ();
  gtk_widget_ref (E_DLL);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_OVERRIDE), "E_DLL", E_DLL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_DLL);
  gtk_box_pack_start (GTK_BOX (hbox11), E_DLL, TRUE, TRUE, 0);
  gtk_widget_set_usize (E_DLL, 100, -2);

  CB_OVERRIDE = gtk_combo_new ();
  gtk_widget_ref (CB_OVERRIDE);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_OVERRIDE), "CB_OVERRIDE", CB_OVERRIDE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_OVERRIDE);
  gtk_box_pack_start (GTK_BOX (hbox11), CB_OVERRIDE, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (CB_OVERRIDE), 6);
  gtk_combo_set_value_in_list (GTK_COMBO (CB_OVERRIDE), TRUE, FALSE);
  CB_OVERRIDE_items = g_list_append (CB_OVERRIDE_items, (gpointer) _("native, builtin, so"));
  CB_OVERRIDE_items = g_list_append (CB_OVERRIDE_items, (gpointer) _("native, so, builtin"));
  CB_OVERRIDE_items = g_list_append (CB_OVERRIDE_items, (gpointer) _("builtin, native, so"));
  CB_OVERRIDE_items = g_list_append (CB_OVERRIDE_items, (gpointer) _("builtin, so, native"));
  CB_OVERRIDE_items = g_list_append (CB_OVERRIDE_items, (gpointer) _("so, native, builtin"));
  CB_OVERRIDE_items = g_list_append (CB_OVERRIDE_items, (gpointer) _("so, builtin, native"));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_OVERRIDE), CB_OVERRIDE_items);
  g_list_free (CB_OVERRIDE_items);

  E_OVERRIDE = GTK_COMBO (CB_OVERRIDE)->entry;
  gtk_widget_ref (E_OVERRIDE);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_OVERRIDE), "E_OVERRIDE", E_OVERRIDE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_OVERRIDE);
  gtk_entry_set_editable (GTK_ENTRY (E_OVERRIDE), FALSE);
  gtk_entry_set_text (GTK_ENTRY (E_OVERRIDE), _("native, builtin, so"));

  dialog_action_area26 = GNOME_DIALOG (W_DLL_OVERRIDE)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_DLL_OVERRIDE), "dialog_action_area26", dialog_action_area26);
  gtk_widget_show (dialog_action_area26);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area26), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area26), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_DLL_OVERRIDE), GNOME_STOCK_BUTTON_OK);
  BT_DLL_OVERRIDE = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_DLL_OVERRIDE)->buttons)->data);
  gtk_widget_ref (BT_DLL_OVERRIDE);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_OVERRIDE), "BT_DLL_OVERRIDE", BT_DLL_OVERRIDE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DLL_OVERRIDE);
  GTK_WIDGET_SET_FLAGS (BT_DLL_OVERRIDE, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_DLL_OVERRIDE), GNOME_STOCK_BUTTON_CANCEL);
  BT_DLL_OVERRIDE_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_DLL_OVERRIDE)->buttons)->data);
  gtk_widget_ref (BT_DLL_OVERRIDE_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_DLL_OVERRIDE), "BT_DLL_OVERRIDE_ANNUL", BT_DLL_OVERRIDE_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DLL_OVERRIDE_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_DLL_OVERRIDE_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_DLL_OVERRIDE), "destroy",
                      GTK_SIGNAL_FUNC (on_w_dll_override_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DLL_OVERRIDE), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_dll_override_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_DLL_OVERRIDE_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_DLL_OVERRIDE));

  return W_DLL_OVERRIDE;
}

GtkWidget*
create_ERR_DLL_SEL (void)
{
  GtkWidget *ERR_DLL_SEL;
  GtkWidget *dialog_vbox27;
  GtkWidget *BT_DLL_SEL;
  GtkWidget *dialog_action_area27;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  ERR_DLL_SEL = gnome_message_box_new (_(texte[104]),
                              GNOME_MESSAGE_BOX_ERROR,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (ERR_DLL_SEL)->action_area), GNOME_DIALOG (ERR_DLL_SEL)->buttons->data);
  GNOME_DIALOG (ERR_DLL_SEL)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (ERR_DLL_SEL), "ERR_DLL_SEL", ERR_DLL_SEL);
  gtk_window_set_title (GTK_WINDOW (ERR_DLL_SEL), _(texte[38]));
  gtk_window_set_position (GTK_WINDOW (ERR_DLL_SEL), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (ERR_DLL_SEL), TRUE);
  gtk_window_set_policy (GTK_WINDOW (ERR_DLL_SEL), FALSE, FALSE, FALSE);
  gnome_dialog_close_hides (GNOME_DIALOG (ERR_DLL_SEL), TRUE);

  dialog_vbox27 = GNOME_DIALOG (ERR_DLL_SEL)->vbox;
  gtk_object_set_data (GTK_OBJECT (ERR_DLL_SEL), "dialog_vbox27", dialog_vbox27);
  gtk_widget_show (dialog_vbox27);

  gnome_dialog_append_button (GNOME_DIALOG (ERR_DLL_SEL), GNOME_STOCK_BUTTON_OK);
  BT_DLL_SEL = GTK_WIDGET (g_list_last (GNOME_DIALOG (ERR_DLL_SEL)->buttons)->data);
  gtk_widget_ref (BT_DLL_SEL);
  gtk_object_set_data_full (GTK_OBJECT (ERR_DLL_SEL), "BT_DLL_SEL", BT_DLL_SEL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DLL_SEL);
  GTK_WIDGET_SET_FLAGS (BT_DLL_SEL, GTK_CAN_DEFAULT);

  dialog_action_area27 = GNOME_DIALOG (ERR_DLL_SEL)->action_area;
  gtk_widget_ref (dialog_action_area27);
  gtk_object_set_data_full (GTK_OBJECT (ERR_DLL_SEL), "dialog_action_area27", dialog_action_area27,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (ERR_DLL_SEL), "destroy",
                      GTK_SIGNAL_FUNC (on_err_dll_sel_destroy),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_DLL_SEL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (ERR_DLL_SEL));

  return ERR_DLL_SEL;
}

GtkWidget*
create_ERR_DLL_NAME (void)
{
  GtkWidget *ERR_DLL_NAME;
  GtkWidget *dialog_vbox28;
  GtkWidget *BT_DLL_NAME_OK;
  GtkWidget *dialog_action_area28;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  ERR_DLL_NAME = gnome_message_box_new (_(texte[105]),
                              GNOME_MESSAGE_BOX_ERROR,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (ERR_DLL_NAME)->action_area), GNOME_DIALOG (ERR_DLL_NAME)->buttons->data);
  GNOME_DIALOG (ERR_DLL_NAME)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (ERR_DLL_NAME), "ERR_DLL_NAME", ERR_DLL_NAME);
  gtk_window_set_title (GTK_WINDOW (ERR_DLL_NAME), _(texte[38]));
  gtk_window_set_position (GTK_WINDOW (ERR_DLL_NAME), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (ERR_DLL_NAME), TRUE);
  gtk_window_set_policy (GTK_WINDOW (ERR_DLL_NAME), FALSE, FALSE, FALSE);
  gnome_dialog_close_hides (GNOME_DIALOG (ERR_DLL_NAME), TRUE);

  dialog_vbox28 = GNOME_DIALOG (ERR_DLL_NAME)->vbox;
  gtk_object_set_data (GTK_OBJECT (ERR_DLL_NAME), "dialog_vbox28", dialog_vbox28);
  gtk_widget_show (dialog_vbox28);

  gnome_dialog_append_button (GNOME_DIALOG (ERR_DLL_NAME), GNOME_STOCK_BUTTON_OK);
  BT_DLL_NAME_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (ERR_DLL_NAME)->buttons)->data);
  gtk_widget_ref (BT_DLL_NAME_OK);
  gtk_object_set_data_full (GTK_OBJECT (ERR_DLL_NAME), "BT_DLL_NAME_OK", BT_DLL_NAME_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DLL_NAME_OK);
  GTK_WIDGET_SET_FLAGS (BT_DLL_NAME_OK, GTK_CAN_DEFAULT);

  dialog_action_area28 = GNOME_DIALOG (ERR_DLL_NAME)->action_area;
  gtk_widget_ref (dialog_action_area28);
  gtk_object_set_data_full (GTK_OBJECT (ERR_DLL_NAME), "dialog_action_area28", dialog_action_area28,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (ERR_DLL_NAME), "destroy",
                      GTK_SIGNAL_FUNC (on_err_dll_name_destroy),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_DLL_NAME_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (ERR_DLL_NAME));

  return ERR_DLL_NAME;
}

GtkWidget*
create_W_WINE_LOOK (void)
{
  GtkWidget *W_WINE_LOOK;
  GtkWidget *dialog_vbox29;
  GtkWidget *vbox12;
  GtkWidget *frame18;
  GtkWidget *hbox12;
  GtkWidget *ST_LOOK;
  GtkWidget *CB_LOOK;
  GList *CB_LOOK_items = NULL;
  GtkWidget *E_LOOK;
  GtkWidget *FRM_FONT;
  GtkWidget *table5;
  GtkObject *SP_SYSTEM_adj;
  GtkWidget *SP_SYSTEM;
  GtkWidget *ST_SYSTEM;
  GtkWidget *ST_SYSTEM_FIX;
  GtkWidget *ST_OEM_FIX;
  GtkWidget *ST_ANSI;
  GtkWidget *ST_ANSI_FIX;
  GtkObject *SP_SYSTEM_FIX_adj;
  GtkWidget *SP_SYSTEM_FIX;
  GtkObject *SP_OEM_FIX_adj;
  GtkWidget *SP_OEM_FIX;
  GtkObject *SP_ANSI_adj;
  GtkWidget *SP_ANSI;
  GtkObject *SP_ANSI_FIX_adj;
  GtkWidget *SP_ANSI_FIX;
  GtkWidget *CB_SYSTEM_STYLE;
  GList *CB_SYSTEM_STYLE_items = NULL;
  GtkWidget *E_SYSTEM_STYLE;
  GtkWidget *CB_SYSTEM_FIX_STYLE;
  GList *CB_SYSTEM_FIX_STYLE_items = NULL;
  GtkWidget *E_SYSTEM_FIX_STYLE;
  GtkWidget *CB_OEM_FIX_STYLE;
  GList *CB_OEM_FIX_STYLE_items = NULL;
  GtkWidget *E_OEM_FIX_STYLE;
  GtkWidget *CB_ANSI_STYLE;
  GList *CB_ANSI_STYLE_items = NULL;
  GtkWidget *E_ANSI_STYLE;
  GtkWidget *CB_ANSI_FIX_STYLE;
  GList *CB_ANSI_FIX_STYLE_items = NULL;
  GtkWidget *E_ANSI_FIX_STYLE;
  GtkWidget *dialog_action_area29;
  GtkWidget *BT_WINE_LOOK_OK;
  GtkWidget *BT_WINE_LOOK_ANNUL;

  W_WINE_LOOK = gnome_dialog_new (_(texte[106]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_WINE_LOOK), "W_WINE_LOOK", W_WINE_LOOK);
  GTK_WINDOW (W_WINE_LOOK)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_WINE_LOOK), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_WINE_LOOK), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_WINE_LOOK), FALSE, FALSE, FALSE);

  dialog_vbox29 = GNOME_DIALOG (W_WINE_LOOK)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_WINE_LOOK), "dialog_vbox29", dialog_vbox29);
  gtk_widget_show (dialog_vbox29);

  vbox12 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox12);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "vbox12", vbox12,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox12);
  gtk_box_pack_start (GTK_BOX (dialog_vbox29), vbox12, TRUE, TRUE, 0);

  frame18 = gtk_frame_new (NULL);
  gtk_widget_ref (frame18);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "frame18", frame18,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame18);
  gtk_box_pack_start (GTK_BOX (vbox12), frame18, TRUE, TRUE, 0);

  hbox12 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox12);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "hbox12", hbox12,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox12);
  gtk_container_add (GTK_CONTAINER (frame18), hbox12);

  ST_LOOK = gtk_label_new (_(texte[107]));
  gtk_widget_ref (ST_LOOK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "ST_LOOK", ST_LOOK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_LOOK);
  gtk_box_pack_start (GTK_BOX (hbox12), ST_LOOK, FALSE, FALSE, 0);
  gtk_misc_set_padding (GTK_MISC (ST_LOOK), 15, 11);

  CB_LOOK = gtk_combo_new ();
  gtk_widget_ref (CB_LOOK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "CB_LOOK", CB_LOOK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_LOOK);
  gtk_box_pack_start (GTK_BOX (hbox12), CB_LOOK, TRUE, TRUE, 10);
  CB_LOOK_items = g_list_append (CB_LOOK_items, (gpointer) _("Win31"));
  CB_LOOK_items = g_list_append (CB_LOOK_items, (gpointer) _("Win95"));
  CB_LOOK_items = g_list_append (CB_LOOK_items, (gpointer) _("Win98"));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_LOOK), CB_LOOK_items);
  g_list_free (CB_LOOK_items);

  E_LOOK = GTK_COMBO (CB_LOOK)->entry;
  gtk_widget_ref (E_LOOK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "E_LOOK", E_LOOK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_LOOK);
  gtk_entry_set_editable (GTK_ENTRY (E_LOOK), FALSE);
  gtk_entry_set_text (GTK_ENTRY (E_LOOK), _("Win98"));

  FRM_FONT = gtk_frame_new (_(texte[108]));
  gtk_widget_ref (FRM_FONT);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "FRM_FONT", FRM_FONT,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (FRM_FONT);
  gtk_box_pack_start (GTK_BOX (vbox12), FRM_FONT, TRUE, TRUE, 0);

  table5 = gtk_table_new (5, 3, FALSE);
  gtk_widget_ref (table5);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "table5", table5,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table5);
  gtk_container_add (GTK_CONTAINER (FRM_FONT), table5);

  SP_SYSTEM_adj = gtk_adjustment_new (10, 8, 40, 1, 10, 10);
  SP_SYSTEM = gtk_spin_button_new (GTK_ADJUSTMENT (SP_SYSTEM_adj), 1, 0);
  gtk_widget_ref (SP_SYSTEM);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "SP_SYSTEM", SP_SYSTEM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (SP_SYSTEM);
  gtk_table_attach (GTK_TABLE (table5), SP_SYSTEM, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ST_SYSTEM = gtk_label_new (_(texte[109]));
  gtk_widget_ref (ST_SYSTEM);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "ST_SYSTEM", ST_SYSTEM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_SYSTEM);
  gtk_table_attach (GTK_TABLE (table5), ST_SYSTEM, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_SYSTEM), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_SYSTEM), 15, 0);

  ST_SYSTEM_FIX = gtk_label_new (_(texte[110]));
  gtk_widget_ref (ST_SYSTEM_FIX);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "ST_SYSTEM_FIX", ST_SYSTEM_FIX,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_SYSTEM_FIX);
  gtk_table_attach (GTK_TABLE (table5), ST_SYSTEM_FIX, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_SYSTEM_FIX), 0, 0.5);

  ST_OEM_FIX = gtk_label_new (_(texte[111]));
  gtk_widget_ref (ST_OEM_FIX);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "ST_OEM_FIX", ST_OEM_FIX,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_OEM_FIX);
  gtk_table_attach (GTK_TABLE (table5), ST_OEM_FIX, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_OEM_FIX), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_OEM_FIX), 10, 0);

  ST_ANSI = gtk_label_new (_(texte[112]));
  gtk_widget_ref (ST_ANSI);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "ST_ANSI", ST_ANSI,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_ANSI);
  gtk_table_attach (GTK_TABLE (table5), ST_ANSI, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_ANSI), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_ANSI), 25, 0);

  ST_ANSI_FIX = gtk_label_new (_(texte[113]));
  gtk_widget_ref (ST_ANSI_FIX);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "ST_ANSI_FIX", ST_ANSI_FIX,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_ANSI_FIX);
  gtk_table_attach (GTK_TABLE (table5), ST_ANSI_FIX, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_ANSI_FIX), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_ANSI_FIX), 11, 0);

  SP_SYSTEM_FIX_adj = gtk_adjustment_new (10, 8, 40, 1, 10, 10);
  SP_SYSTEM_FIX = gtk_spin_button_new (GTK_ADJUSTMENT (SP_SYSTEM_FIX_adj), 1, 0);
  gtk_widget_ref (SP_SYSTEM_FIX);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "SP_SYSTEM_FIX", SP_SYSTEM_FIX,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (SP_SYSTEM_FIX);
  gtk_table_attach (GTK_TABLE (table5), SP_SYSTEM_FIX, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_spin_button_set_wrap (GTK_SPIN_BUTTON (SP_SYSTEM_FIX), TRUE);

  SP_OEM_FIX_adj = gtk_adjustment_new (10, 8, 40, 1, 10, 10);
  SP_OEM_FIX = gtk_spin_button_new (GTK_ADJUSTMENT (SP_OEM_FIX_adj), 1, 0);
  gtk_widget_ref (SP_OEM_FIX);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "SP_OEM_FIX", SP_OEM_FIX,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (SP_OEM_FIX);
  gtk_table_attach (GTK_TABLE (table5), SP_OEM_FIX, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  SP_ANSI_adj = gtk_adjustment_new (10, 8, 40, 1, 10, 10);
  SP_ANSI = gtk_spin_button_new (GTK_ADJUSTMENT (SP_ANSI_adj), 1, 0);
  gtk_widget_ref (SP_ANSI);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "SP_ANSI", SP_ANSI,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (SP_ANSI);
  gtk_table_attach (GTK_TABLE (table5), SP_ANSI, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  SP_ANSI_FIX_adj = gtk_adjustment_new (10, 8, 40, 1, 10, 10);
  SP_ANSI_FIX = gtk_spin_button_new (GTK_ADJUSTMENT (SP_ANSI_FIX_adj), 1, 0);
  gtk_widget_ref (SP_ANSI_FIX);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "SP_ANSI_FIX", SP_ANSI_FIX,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (SP_ANSI_FIX);
  gtk_table_attach (GTK_TABLE (table5), SP_ANSI_FIX, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  CB_SYSTEM_STYLE = gtk_combo_new ();
  gtk_widget_ref (CB_SYSTEM_STYLE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "CB_SYSTEM_STYLE", CB_SYSTEM_STYLE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_SYSTEM_STYLE);
  gtk_table_attach (GTK_TABLE (table5), CB_SYSTEM_STYLE, 2, 3, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  CB_SYSTEM_STYLE_items = g_list_append (CB_SYSTEM_STYLE_items, (gpointer) _(texte[114]));
  CB_SYSTEM_STYLE_items = g_list_append (CB_SYSTEM_STYLE_items, (gpointer) _(texte[115]));
  CB_SYSTEM_STYLE_items = g_list_append (CB_SYSTEM_STYLE_items, (gpointer) _(texte[116]));
  CB_SYSTEM_STYLE_items = g_list_append (CB_SYSTEM_STYLE_items, (gpointer) _(texte[117]));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_SYSTEM_STYLE), CB_SYSTEM_STYLE_items);
  g_list_free (CB_SYSTEM_STYLE_items);

  E_SYSTEM_STYLE = GTK_COMBO (CB_SYSTEM_STYLE)->entry;
  gtk_widget_ref (E_SYSTEM_STYLE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "E_SYSTEM_STYLE", E_SYSTEM_STYLE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_SYSTEM_STYLE);
  gtk_entry_set_text (GTK_ENTRY (E_SYSTEM_STYLE), _(texte[114]));

  CB_SYSTEM_FIX_STYLE = gtk_combo_new ();
  gtk_widget_ref (CB_SYSTEM_FIX_STYLE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "CB_SYSTEM_FIX_STYLE", CB_SYSTEM_FIX_STYLE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_SYSTEM_FIX_STYLE);
  gtk_table_attach (GTK_TABLE (table5), CB_SYSTEM_FIX_STYLE, 2, 3, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  CB_SYSTEM_FIX_STYLE_items = g_list_append (CB_SYSTEM_FIX_STYLE_items, (gpointer) _(texte[114]));
  CB_SYSTEM_FIX_STYLE_items = g_list_append (CB_SYSTEM_FIX_STYLE_items, (gpointer) _(texte[115]));
  CB_SYSTEM_FIX_STYLE_items = g_list_append (CB_SYSTEM_FIX_STYLE_items, (gpointer) _(texte[116]));
  CB_SYSTEM_FIX_STYLE_items = g_list_append (CB_SYSTEM_FIX_STYLE_items, (gpointer) _(texte[117]));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_SYSTEM_FIX_STYLE), CB_SYSTEM_FIX_STYLE_items);
  g_list_free (CB_SYSTEM_FIX_STYLE_items);

  E_SYSTEM_FIX_STYLE = GTK_COMBO (CB_SYSTEM_FIX_STYLE)->entry;
  gtk_widget_ref (E_SYSTEM_FIX_STYLE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "E_SYSTEM_FIX_STYLE", E_SYSTEM_FIX_STYLE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_SYSTEM_FIX_STYLE);
  gtk_entry_set_text (GTK_ENTRY (E_SYSTEM_FIX_STYLE), _(texte[114]));

  CB_OEM_FIX_STYLE = gtk_combo_new ();
  gtk_widget_ref (CB_OEM_FIX_STYLE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "CB_OEM_FIX_STYLE", CB_OEM_FIX_STYLE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_OEM_FIX_STYLE);
  gtk_table_attach (GTK_TABLE (table5), CB_OEM_FIX_STYLE, 2, 3, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  CB_OEM_FIX_STYLE_items = g_list_append (CB_OEM_FIX_STYLE_items, (gpointer) _(texte[114]));
  CB_OEM_FIX_STYLE_items = g_list_append (CB_OEM_FIX_STYLE_items, (gpointer) _(texte[115]));
  CB_OEM_FIX_STYLE_items = g_list_append (CB_OEM_FIX_STYLE_items, (gpointer) _(texte[116]));
  CB_OEM_FIX_STYLE_items = g_list_append (CB_OEM_FIX_STYLE_items, (gpointer) _(texte[117]));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_OEM_FIX_STYLE), CB_OEM_FIX_STYLE_items);
  g_list_free (CB_OEM_FIX_STYLE_items);

  E_OEM_FIX_STYLE = GTK_COMBO (CB_OEM_FIX_STYLE)->entry;
  gtk_widget_ref (E_OEM_FIX_STYLE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "E_OEM_FIX_STYLE", E_OEM_FIX_STYLE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_OEM_FIX_STYLE);
  gtk_entry_set_text (GTK_ENTRY (E_OEM_FIX_STYLE), _(texte[114]));

  CB_ANSI_STYLE = gtk_combo_new ();
  gtk_widget_ref (CB_ANSI_STYLE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "CB_ANSI_STYLE", CB_ANSI_STYLE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_ANSI_STYLE);
  gtk_table_attach (GTK_TABLE (table5), CB_ANSI_STYLE, 2, 3, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  CB_ANSI_STYLE_items = g_list_append (CB_ANSI_STYLE_items, (gpointer) _(texte[114]));
  CB_ANSI_STYLE_items = g_list_append (CB_ANSI_STYLE_items, (gpointer) _(texte[115]));
  CB_ANSI_STYLE_items = g_list_append (CB_ANSI_STYLE_items, (gpointer) _(texte[116]));
  CB_ANSI_STYLE_items = g_list_append (CB_ANSI_STYLE_items, (gpointer) _(texte[117]));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_ANSI_STYLE), CB_ANSI_STYLE_items);
  g_list_free (CB_ANSI_STYLE_items);

  E_ANSI_STYLE = GTK_COMBO (CB_ANSI_STYLE)->entry;
  gtk_widget_ref (E_ANSI_STYLE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "E_ANSI_STYLE", E_ANSI_STYLE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_ANSI_STYLE);
  gtk_entry_set_text (GTK_ENTRY (E_ANSI_STYLE), _(texte[114]));

  CB_ANSI_FIX_STYLE = gtk_combo_new ();
  gtk_widget_ref (CB_ANSI_FIX_STYLE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "CB_ANSI_FIX_STYLE", CB_ANSI_FIX_STYLE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_ANSI_FIX_STYLE);
  gtk_table_attach (GTK_TABLE (table5), CB_ANSI_FIX_STYLE, 2, 3, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  CB_ANSI_FIX_STYLE_items = g_list_append (CB_ANSI_FIX_STYLE_items, (gpointer) _(texte[114]));
  CB_ANSI_FIX_STYLE_items = g_list_append (CB_ANSI_FIX_STYLE_items, (gpointer) _(texte[115]));
  CB_ANSI_FIX_STYLE_items = g_list_append (CB_ANSI_FIX_STYLE_items, (gpointer) _(texte[116]));
  CB_ANSI_FIX_STYLE_items = g_list_append (CB_ANSI_FIX_STYLE_items, (gpointer) _(texte[117]));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_ANSI_FIX_STYLE), CB_ANSI_FIX_STYLE_items);
  g_list_free (CB_ANSI_FIX_STYLE_items);

  E_ANSI_FIX_STYLE = GTK_COMBO (CB_ANSI_FIX_STYLE)->entry;
  gtk_widget_ref (E_ANSI_FIX_STYLE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "E_ANSI_FIX_STYLE", E_ANSI_FIX_STYLE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_ANSI_FIX_STYLE);
  gtk_entry_set_text (GTK_ENTRY (E_ANSI_FIX_STYLE), _(texte[114]));

  dialog_action_area29 = GNOME_DIALOG (W_WINE_LOOK)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_WINE_LOOK), "dialog_action_area29", dialog_action_area29);
  gtk_widget_show (dialog_action_area29);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area29), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area29), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_LOOK), GNOME_STOCK_BUTTON_OK);
  BT_WINE_LOOK_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_LOOK)->buttons)->data);
  gtk_widget_ref (BT_WINE_LOOK_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "BT_WINE_LOOK_OK", BT_WINE_LOOK_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_LOOK_OK);
  GTK_WIDGET_SET_FLAGS (BT_WINE_LOOK_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_LOOK), GNOME_STOCK_BUTTON_CANCEL);
  BT_WINE_LOOK_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_LOOK)->buttons)->data);
  gtk_widget_ref (BT_WINE_LOOK_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_LOOK), "BT_WINE_LOOK_ANNUL", BT_WINE_LOOK_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_LOOK_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_WINE_LOOK_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_WINE_LOOK), "destroy",
                      GTK_SIGNAL_FUNC (on_w_wine_look_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_WINE_LOOK_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_wine_look_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_WINE_LOOK_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_WINE_LOOK));

  return W_WINE_LOOK;
}

GtkWidget*
create_ERR_WINESETUPTK (void)
{
  GtkWidget *ERR_WINESETUPTK;
  GtkWidget *dialog_vbox30;
  GtkWidget *BT_ERR_WINESETUPTK_OK;
  GtkWidget *dialog_action_area30;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  ERR_WINESETUPTK = gnome_message_box_new (_(texte[118]),
                              GNOME_MESSAGE_BOX_ERROR,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (ERR_WINESETUPTK)->action_area), GNOME_DIALOG (ERR_WINESETUPTK)->buttons->data);
  GNOME_DIALOG (ERR_WINESETUPTK)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (ERR_WINESETUPTK), "ERR_WINESETUPTK", ERR_WINESETUPTK);
  gtk_window_set_title (GTK_WINDOW (ERR_WINESETUPTK), _(texte[38]));
  gtk_window_set_position (GTK_WINDOW (ERR_WINESETUPTK), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (ERR_WINESETUPTK), TRUE);
  gtk_window_set_policy (GTK_WINDOW (ERR_WINESETUPTK), FALSE, FALSE, FALSE);
  gnome_dialog_close_hides (GNOME_DIALOG (ERR_WINESETUPTK), TRUE);

  dialog_vbox30 = GNOME_DIALOG (ERR_WINESETUPTK)->vbox;
  gtk_object_set_data (GTK_OBJECT (ERR_WINESETUPTK), "dialog_vbox30", dialog_vbox30);
  gtk_widget_show (dialog_vbox30);

  gnome_dialog_append_button (GNOME_DIALOG (ERR_WINESETUPTK), GNOME_STOCK_BUTTON_OK);
  BT_ERR_WINESETUPTK_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (ERR_WINESETUPTK)->buttons)->data);
  gtk_widget_ref (BT_ERR_WINESETUPTK_OK);
  gtk_object_set_data_full (GTK_OBJECT (ERR_WINESETUPTK), "BT_ERR_WINESETUPTK_OK", BT_ERR_WINESETUPTK_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_ERR_WINESETUPTK_OK);
  GTK_WIDGET_SET_FLAGS (BT_ERR_WINESETUPTK_OK, GTK_CAN_DEFAULT);

  dialog_action_area30 = GNOME_DIALOG (ERR_WINESETUPTK)->action_area;
  gtk_widget_ref (dialog_action_area30);
  gtk_object_set_data_full (GTK_OBJECT (ERR_WINESETUPTK), "dialog_action_area30", dialog_action_area30,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (ERR_WINESETUPTK), "destroy",
                      GTK_SIGNAL_FUNC (on_err_winesetuptk_destroy),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_ERR_WINESETUPTK_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (ERR_WINESETUPTK));

  return ERR_WINESETUPTK;
}

GtkWidget*
create_W_WINE_GFX (void)
{
  GtkWidget *W_WINE_GFX;
  GtkWidget *dialog_vbox31;
  GtkWidget *table6;
  GtkWidget *ST_MODE;
  GtkWidget *CB_MODE;
  GList *CB_MODE_items = NULL;
  GtkWidget *E_MODE;
  GtkObject *SP_COLOR_adj;
  GtkWidget *SP_COLOR;
  GtkWidget *ST_COLOR;
  GtkWidget *CHK_DOUBLE_BUFFER;
  GtkWidget *ST_DOUBLE_BUFFER;
  GtkWidget *FRM_DIRECT_DRAW;
  GtkWidget *vbox13;
  GtkWidget *CHK_DGA;
  GtkWidget *CHK_XSHM;
  GtkWidget *CHK_DXGRAB;
  GtkWidget *dialog_action_area31;
  GtkWidget *BT_WINE_GFX_OK;
  GtkWidget *BT_WINE_GFX_ANNUL;

  W_WINE_GFX = gnome_dialog_new (_(texte[119]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_WINE_GFX), "W_WINE_GFX", W_WINE_GFX);
  GTK_WINDOW (W_WINE_GFX)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_WINE_GFX), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_WINE_GFX), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_WINE_GFX), FALSE, FALSE, FALSE);

  dialog_vbox31 = GNOME_DIALOG (W_WINE_GFX)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_WINE_GFX), "dialog_vbox31", dialog_vbox31);
  gtk_widget_show (dialog_vbox31);

  table6 = gtk_table_new (3, 2, FALSE);
  gtk_widget_ref (table6);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "table6", table6,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table6);
  gtk_box_pack_start (GTK_BOX (dialog_vbox31), table6, TRUE, TRUE, 0);

  ST_MODE = gtk_label_new (_(texte[120]));
  gtk_widget_ref (ST_MODE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "ST_MODE", ST_MODE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_MODE);
  gtk_table_attach (GTK_TABLE (table6), ST_MODE, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_MODE), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_MODE), 10, 0);

  CB_MODE = gtk_combo_new ();
  gtk_widget_ref (CB_MODE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "CB_MODE", CB_MODE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_MODE);
  gtk_table_attach (GTK_TABLE (table6), CB_MODE, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 10);
  gtk_combo_set_value_in_list (GTK_COMBO (CB_MODE), TRUE, FALSE);
  CB_MODE_items = g_list_append (CB_MODE_items, (gpointer) _("Standard"));
  CB_MODE_items = g_list_append (CB_MODE_items, (gpointer) _("XWindow"));
  CB_MODE_items = g_list_append (CB_MODE_items, (gpointer) _("640x480"));
  CB_MODE_items = g_list_append (CB_MODE_items, (gpointer) _("800x600"));
  CB_MODE_items = g_list_append (CB_MODE_items, (gpointer) _("1024x768"));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_MODE), CB_MODE_items);
  g_list_free (CB_MODE_items);

  E_MODE = GTK_COMBO (CB_MODE)->entry;
  gtk_widget_ref (E_MODE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "E_MODE", E_MODE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_MODE);
  gtk_entry_set_editable (GTK_ENTRY (E_MODE), FALSE);
  gtk_entry_set_text (GTK_ENTRY (E_MODE), _("Standard"));

  SP_COLOR_adj = gtk_adjustment_new (100, 0, 256, 1, 10, 10);
  SP_COLOR = gtk_spin_button_new (GTK_ADJUSTMENT (SP_COLOR_adj), 1, 0);
  gtk_widget_ref (SP_COLOR);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "SP_COLOR", SP_COLOR,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (SP_COLOR);
  gtk_table_attach (GTK_TABLE (table6), SP_COLOR, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 10);

  ST_COLOR = gtk_label_new (_(texte[121]));
  gtk_widget_ref (ST_COLOR);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "ST_COLOR", ST_COLOR,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_COLOR);
  gtk_table_attach (GTK_TABLE (table6), ST_COLOR, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_COLOR), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_COLOR), 10, 0);

  CHK_DOUBLE_BUFFER = gtk_check_button_new_with_label (_(texte[122]));
  gtk_widget_ref (CHK_DOUBLE_BUFFER);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "CHK_DOUBLE_BUFFER", CHK_DOUBLE_BUFFER,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_DOUBLE_BUFFER);
  gtk_table_attach (GTK_TABLE (table6), CHK_DOUBLE_BUFFER, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ST_DOUBLE_BUFFER = gtk_label_new (_(texte[123]));
  gtk_widget_ref (ST_DOUBLE_BUFFER);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "ST_DOUBLE_BUFFER", ST_DOUBLE_BUFFER,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_DOUBLE_BUFFER);
  gtk_table_attach (GTK_TABLE (table6), ST_DOUBLE_BUFFER, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_DOUBLE_BUFFER), 0, 0.5);

  FRM_DIRECT_DRAW = gtk_frame_new (_(texte[124]));
  gtk_widget_ref (FRM_DIRECT_DRAW);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "FRM_DIRECT_DRAW", FRM_DIRECT_DRAW,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (FRM_DIRECT_DRAW);
  gtk_box_pack_start (GTK_BOX (dialog_vbox31), FRM_DIRECT_DRAW, TRUE, TRUE, 0);

  vbox13 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox13);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "vbox13", vbox13,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox13);
  gtk_container_add (GTK_CONTAINER (FRM_DIRECT_DRAW), vbox13);

  CHK_DGA = gtk_check_button_new_with_label (_(texte[125]));
  gtk_widget_ref (CHK_DGA);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "CHK_DGA", CHK_DGA,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_DGA);
  gtk_box_pack_start (GTK_BOX (vbox13), CHK_DGA, FALSE, FALSE, 0);

  CHK_XSHM = gtk_check_button_new_with_label (_(texte[126]));
  gtk_widget_ref (CHK_XSHM);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "CHK_XSHM", CHK_XSHM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_XSHM);
  gtk_box_pack_start (GTK_BOX (vbox13), CHK_XSHM, FALSE, FALSE, 0);

  CHK_DXGRAB = gtk_check_button_new_with_label (_(texte[127]));
  gtk_widget_ref (CHK_DXGRAB);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "CHK_DXGRAB", CHK_DXGRAB,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_DXGRAB);
  gtk_box_pack_start (GTK_BOX (vbox13), CHK_DXGRAB, FALSE, FALSE, 0);

  dialog_action_area31 = GNOME_DIALOG (W_WINE_GFX)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_WINE_GFX), "dialog_action_area31", dialog_action_area31);
  gtk_widget_show (dialog_action_area31);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area31), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area31), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_GFX), GNOME_STOCK_BUTTON_OK);
  BT_WINE_GFX_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_GFX)->buttons)->data);
  gtk_widget_ref (BT_WINE_GFX_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "BT_WINE_GFX_OK", BT_WINE_GFX_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_GFX_OK);
  GTK_WIDGET_SET_FLAGS (BT_WINE_GFX_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_GFX), GNOME_STOCK_BUTTON_CANCEL);
  BT_WINE_GFX_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_GFX)->buttons)->data);
  gtk_widget_ref (BT_WINE_GFX_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_GFX), "BT_WINE_GFX_ANNUL", BT_WINE_GFX_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_GFX_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_WINE_GFX_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_WINE_GFX), "destroy",
                      GTK_SIGNAL_FUNC (on_w_wine_gfx_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_DOUBLE_BUFFER), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_double_buffer_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_DGA), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_dga_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_XSHM), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_xshm_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_DXGRAB), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_dxgrab_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_WINE_GFX_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_wine_gfx_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_WINE_GFX_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_WINE_GFX));

  return W_WINE_GFX;
}

GtkWidget*
create_W_APP_DLL (void)
{
  GtkWidget *W_APP_DLL;
  GtkWidget *vbox14;
  GtkWidget *vbox15;
  GtkWidget *ST_DLL;
  GtkWidget *vbox16;
  GtkWidget *scrolledwindow9;
  GtkWidget *TAB_APP_DLL;
  GtkWidget *label31;
  GtkWidget *hbuttonbox7;
  GtkWidget *BT_APP_DLL_NEW;
  GtkWidget *BT_APP_DLL_MODIFY;
  GtkWidget *BT_APP_DLL_DEL;
  GtkWidget *hbuttonbox6;
  GtkWidget *BT_APP_DLL_OK;
  GtkWidget *BT_APP_DLL_ANNUL;

  W_APP_DLL = gnome_dialog_new (_(texte[128]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_APP_DLL), "W_APP_DLL", W_APP_DLL);
  GTK_WINDOW (W_APP_DLL)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_APP_DLL), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_APP_DLL), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_APP_DLL), FALSE, FALSE, FALSE);

  vbox14 = GNOME_DIALOG (W_APP_DLL)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_APP_DLL), "vbox14", vbox14);
  gtk_widget_show (vbox14);

  vbox15 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox15);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "vbox15", vbox15,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox15);
  gtk_box_pack_start (GTK_BOX (vbox14), vbox15, TRUE, TRUE, 0);

  ST_DLL = gtk_frame_new (_(texte[129]));
  gtk_widget_ref (ST_DLL);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "ST_DLL", ST_DLL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_DLL);
  gtk_box_pack_start (GTK_BOX (vbox15), ST_DLL, TRUE, TRUE, 0);

  vbox16 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox16);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "vbox16", vbox16,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox16);
  gtk_container_add (GTK_CONTAINER (ST_DLL), vbox16);

  scrolledwindow9 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow9);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "scrolledwindow9", scrolledwindow9,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow9);
  gtk_box_pack_start (GTK_BOX (vbox16), scrolledwindow9, TRUE, TRUE, 0);
  gtk_widget_set_usize (scrolledwindow9, -2, 90);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow9), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  TAB_APP_DLL = gtk_clist_new (1);
  gtk_widget_ref (TAB_APP_DLL);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "TAB_APP_DLL", TAB_APP_DLL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (TAB_APP_DLL);
  gtk_container_add (GTK_CONTAINER (scrolledwindow9), TAB_APP_DLL);
  gtk_clist_set_column_width (GTK_CLIST (TAB_APP_DLL), 0, 80);
  gtk_clist_column_titles_hide (GTK_CLIST (TAB_APP_DLL));

  label31 = gtk_label_new (_("label20"));
  gtk_widget_ref (label31);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "label31", label31,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label31);
  gtk_clist_set_column_widget (GTK_CLIST (TAB_APP_DLL), 0, label31);

  hbuttonbox7 = gtk_hbutton_box_new ();
  gtk_widget_ref (hbuttonbox7);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "hbuttonbox7", hbuttonbox7,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbuttonbox7);
  gtk_box_pack_start (GTK_BOX (vbox16), hbuttonbox7, TRUE, TRUE, 0);

  BT_APP_DLL_NEW = gtk_button_new_with_label (_(texte[130]));
  gtk_widget_ref (BT_APP_DLL_NEW);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "BT_APP_DLL_NEW", BT_APP_DLL_NEW,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_DLL_NEW);
  gtk_container_add (GTK_CONTAINER (hbuttonbox7), BT_APP_DLL_NEW);
  GTK_WIDGET_SET_FLAGS (BT_APP_DLL_NEW, GTK_CAN_DEFAULT);

  BT_APP_DLL_MODIFY = gtk_button_new_with_label (_(texte[131]));
  gtk_widget_ref (BT_APP_DLL_MODIFY);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "BT_APP_DLL_MODIFY", BT_APP_DLL_MODIFY,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_DLL_MODIFY);
  gtk_container_add (GTK_CONTAINER (hbuttonbox7), BT_APP_DLL_MODIFY);
  GTK_WIDGET_SET_FLAGS (BT_APP_DLL_MODIFY, GTK_CAN_DEFAULT);

  BT_APP_DLL_DEL = gtk_button_new_with_label (_(texte[132]));
  gtk_widget_ref (BT_APP_DLL_DEL);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "BT_APP_DLL_DEL", BT_APP_DLL_DEL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_DLL_DEL);
  gtk_container_add (GTK_CONTAINER (hbuttonbox7), BT_APP_DLL_DEL);
  GTK_WIDGET_SET_FLAGS (BT_APP_DLL_DEL, GTK_CAN_DEFAULT);

  hbuttonbox6 = GNOME_DIALOG (W_APP_DLL)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_APP_DLL), "hbuttonbox6", hbuttonbox6);
  gtk_widget_show (hbuttonbox6);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox6), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (hbuttonbox6), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_APP_DLL), GNOME_STOCK_BUTTON_OK);
  BT_APP_DLL_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_APP_DLL)->buttons)->data);
  gtk_widget_ref (BT_APP_DLL_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "BT_APP_DLL_OK", BT_APP_DLL_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_DLL_OK);
  GTK_WIDGET_SET_FLAGS (BT_APP_DLL_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_APP_DLL), GNOME_STOCK_BUTTON_CANCEL);
  BT_APP_DLL_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_APP_DLL)->buttons)->data);
  gtk_widget_ref (BT_APP_DLL_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_APP_DLL), "BT_APP_DLL_ANNUL", BT_APP_DLL_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_DLL_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_APP_DLL_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_APP_DLL), "destroy",
                      GTK_SIGNAL_FUNC (on_w_app_dll_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (TAB_APP_DLL), "select_row",
                      GTK_SIGNAL_FUNC (on_tab_app_dll_select_row),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_APP_DLL_NEW), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_app_dll_new_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_APP_DLL_MODIFY), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_app_dll_modify_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_APP_DLL_DEL), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_app_dll_del_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_APP_DLL_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_app_dll_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_APP_DLL_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_APP_DLL));

  return W_APP_DLL;
}

GtkWidget*
create_ERR_APP_NOT_FOUND (void)
{
  GtkWidget *ERR_APP_NOT_FOUND;
  GtkWidget *dialog_vbox32;
  GtkWidget *BT_APP_NOT_FOUND_OK;
  GtkWidget *dialog_action_area32;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  ERR_APP_NOT_FOUND = gnome_message_box_new (_(texte[133]),
                              GNOME_MESSAGE_BOX_ERROR,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (ERR_APP_NOT_FOUND)->action_area), GNOME_DIALOG (ERR_APP_NOT_FOUND)->buttons->data);
  GNOME_DIALOG (ERR_APP_NOT_FOUND)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (ERR_APP_NOT_FOUND), "ERR_APP_NOT_FOUND", ERR_APP_NOT_FOUND);
  gtk_window_set_title (GTK_WINDOW (ERR_APP_NOT_FOUND), _(texte[38]));
  gtk_window_set_position (GTK_WINDOW (ERR_APP_NOT_FOUND), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (ERR_APP_NOT_FOUND), TRUE);
  gtk_window_set_policy (GTK_WINDOW (ERR_APP_NOT_FOUND), FALSE, FALSE, FALSE);

  dialog_vbox32 = GNOME_DIALOG (ERR_APP_NOT_FOUND)->vbox;
  gtk_object_set_data (GTK_OBJECT (ERR_APP_NOT_FOUND), "dialog_vbox32", dialog_vbox32);
  gtk_widget_show (dialog_vbox32);

  gnome_dialog_append_button (GNOME_DIALOG (ERR_APP_NOT_FOUND), GNOME_STOCK_BUTTON_OK);
  BT_APP_NOT_FOUND_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (ERR_APP_NOT_FOUND)->buttons)->data);
  gtk_widget_ref (BT_APP_NOT_FOUND_OK);
  gtk_object_set_data_full (GTK_OBJECT (ERR_APP_NOT_FOUND), "BT_APP_NOT_FOUND_OK", BT_APP_NOT_FOUND_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_APP_NOT_FOUND_OK);
  GTK_WIDGET_SET_FLAGS (BT_APP_NOT_FOUND_OK, GTK_CAN_DEFAULT);

  dialog_action_area32 = GNOME_DIALOG (ERR_APP_NOT_FOUND)->action_area;
  gtk_widget_ref (dialog_action_area32);
  gtk_object_set_data_full (GTK_OBJECT (ERR_APP_NOT_FOUND), "dialog_action_area32", dialog_action_area32,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (ERR_APP_NOT_FOUND), "destroy",
                      GTK_SIGNAL_FUNC (on_err_app_not_found_destroy),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_APP_NOT_FOUND_OK), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (ERR_APP_NOT_FOUND));

  return ERR_APP_NOT_FOUND;
}

GtkWidget*
create_W_WINE_PORT (void)
{
  GtkWidget *W_WINE_PORT;
  GtkWidget *vbox17;
  GtkWidget *notebook2;
  GtkWidget *table7;
  GtkWidget *ST_COM1;
  GtkWidget *ST_COM2;
  GtkWidget *ST_COM3;
  GtkWidget *ST_COM4;
  GtkWidget *E_COM1;
  GtkWidget *E_COM2;
  GtkWidget *E_COM3;
  GtkWidget *E_COM4;
  GtkWidget *ST_SERIAL;
  GtkWidget *table8;
  GtkWidget *ST_LPT1;
  GtkWidget *ST_LPT2;
  GtkWidget *ST_LPT3;
  GtkWidget *E_LPT1;
  GtkWidget *E_LPT2;
  GtkWidget *E_LPT4;
  GtkWidget *E_LPT3;
  GtkWidget *ST_LPT4;
  GtkWidget *ST_PARALLEL;
  GtkWidget *table9;
  GtkWidget *ST_LPR1;
  GtkWidget *ST_LPR2;
  GtkWidget *ST_LPR3;
  GtkWidget *ST_LPR4;
  GtkWidget *E_LPR1;
  GtkWidget *E_LPR2;
  GtkWidget *E_LPR3;
  GtkWidget *E_LPR4;
  GtkWidget *ST_PRINTER;
  GtkWidget *hbuttonbox8;
  GtkWidget *BT_WINE_PORT_OK;
  GtkWidget *BT_WINE_PORT_ANNUL;

  W_WINE_PORT = gnome_dialog_new (_(texte[134]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_WINE_PORT), "W_WINE_PORT", W_WINE_PORT);
  GTK_WINDOW (W_WINE_PORT)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_WINE_PORT), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_WINE_PORT), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_WINE_PORT), FALSE, FALSE, FALSE);

  vbox17 = GNOME_DIALOG (W_WINE_PORT)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_WINE_PORT), "vbox17", vbox17);
  gtk_widget_show (vbox17);

  notebook2 = gtk_notebook_new ();
  gtk_widget_ref (notebook2);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "notebook2", notebook2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (notebook2);
  gtk_box_pack_start (GTK_BOX (vbox17), notebook2, TRUE, TRUE, 0);

  table7 = gtk_table_new (4, 2, FALSE);
  gtk_widget_ref (table7);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "table7", table7,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table7);
  gtk_container_add (GTK_CONTAINER (notebook2), table7);

  ST_COM1 = gtk_label_new (_("Com1 :"));
  gtk_widget_ref (ST_COM1);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_COM1", ST_COM1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_COM1);
  gtk_table_attach (GTK_TABLE (table7), ST_COM1, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_COM1), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_COM1), 5, 0);

  ST_COM2 = gtk_label_new (_("Com2 :"));
  gtk_widget_ref (ST_COM2);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_COM2", ST_COM2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_COM2);
  gtk_table_attach (GTK_TABLE (table7), ST_COM2, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_COM2), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_COM2), 5, 0);

  ST_COM3 = gtk_label_new (_("Com3 :"));
  gtk_widget_ref (ST_COM3);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_COM3", ST_COM3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_COM3);
  gtk_table_attach (GTK_TABLE (table7), ST_COM3, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_COM3), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_COM3), 5, 0);

  ST_COM4 = gtk_label_new (_("Com4 :"));
  gtk_widget_ref (ST_COM4);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_COM4", ST_COM4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_COM4);
  gtk_table_attach (GTK_TABLE (table7), ST_COM4, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_COM4), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_COM4), 5, 0);

  E_COM1 = gtk_entry_new ();
  gtk_widget_ref (E_COM1);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_COM1", E_COM1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_COM1);
  gtk_table_attach (GTK_TABLE (table7), E_COM1, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_text (GTK_ENTRY (E_COM1), _("/dev/ttyS0"));

  E_COM2 = gtk_entry_new ();
  gtk_widget_ref (E_COM2);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_COM2", E_COM2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_COM2);
  gtk_table_attach (GTK_TABLE (table7), E_COM2, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_text (GTK_ENTRY (E_COM2), _("/dev/ttyS1"));

  E_COM3 = gtk_entry_new ();
  gtk_widget_ref (E_COM3);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_COM3", E_COM3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_COM3);
  gtk_table_attach (GTK_TABLE (table7), E_COM3, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  E_COM4 = gtk_entry_new ();
  gtk_widget_ref (E_COM4);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_COM4", E_COM4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_COM4);
  gtk_table_attach (GTK_TABLE (table7), E_COM4, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ST_SERIAL = gtk_label_new (_(texte[208]));
  gtk_widget_ref (ST_SERIAL);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_SERIAL", ST_SERIAL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_SERIAL);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 0), ST_SERIAL);

  table8 = gtk_table_new (4, 2, FALSE);
  gtk_widget_ref (table8);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "table8", table8,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table8);
  gtk_container_add (GTK_CONTAINER (notebook2), table8);

  ST_LPT1 = gtk_label_new (_("Lpt1 :"));
  gtk_widget_ref (ST_LPT1);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_LPT1", ST_LPT1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_LPT1);
  gtk_table_attach (GTK_TABLE (table8), ST_LPT1, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_LPT1), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_LPT1), 5, 0);

  ST_LPT2 = gtk_label_new (_("Lpt2 :"));
  gtk_widget_ref (ST_LPT2);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_LPT2", ST_LPT2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_LPT2);
  gtk_table_attach (GTK_TABLE (table8), ST_LPT2, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_LPT2), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_LPT2), 5, 0);

  ST_LPT3 = gtk_label_new (_("Lpt3 :"));
  gtk_widget_ref (ST_LPT3);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_LPT3", ST_LPT3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_LPT3);
  gtk_table_attach (GTK_TABLE (table8), ST_LPT3, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_LPT3), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_LPT3), 5, 0);

  E_LPT1 = gtk_entry_new ();
  gtk_widget_ref (E_LPT1);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_LPT1", E_LPT1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_LPT1);
  gtk_table_attach (GTK_TABLE (table8), E_LPT1, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_text (GTK_ENTRY (E_LPT1), _("/dev/lp0"));

  E_LPT2 = gtk_entry_new ();
  gtk_widget_ref (E_LPT2);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_LPT2", E_LPT2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_LPT2);
  gtk_table_attach (GTK_TABLE (table8), E_LPT2, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  E_LPT4 = gtk_entry_new ();
  gtk_widget_ref (E_LPT4);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_LPT4", E_LPT4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_LPT4);
  gtk_table_attach (GTK_TABLE (table8), E_LPT4, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  E_LPT3 = gtk_entry_new ();
  gtk_widget_ref (E_LPT3);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_LPT3", E_LPT3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_LPT3);
  gtk_table_attach (GTK_TABLE (table8), E_LPT3, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ST_LPT4 = gtk_label_new (_("Lpt4 :"));
  gtk_widget_ref (ST_LPT4);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_LPT4", ST_LPT4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_LPT4);
  gtk_table_attach (GTK_TABLE (table8), ST_LPT4, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_LPT4), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_LPT4), 5, 0);

  ST_PARALLEL = gtk_label_new (_(texte[209]));
  gtk_widget_ref (ST_PARALLEL);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_PARALLEL", ST_PARALLEL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_PARALLEL);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 1), ST_PARALLEL);

  table9 = gtk_table_new (4, 2, FALSE);
  gtk_widget_ref (table9);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "table9", table9,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table9);
  gtk_container_add (GTK_CONTAINER (notebook2), table9);

  ST_LPR1 = gtk_label_new (_("Lpr1 :"));
  gtk_widget_ref (ST_LPR1);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_LPR1", ST_LPR1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_LPR1);
  gtk_table_attach (GTK_TABLE (table9), ST_LPR1, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_LPR1), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_LPR1), 5, 0);

  ST_LPR2 = gtk_label_new (_("Lpr2 :"));
  gtk_widget_ref (ST_LPR2);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_LPR2", ST_LPR2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_LPR2);
  gtk_table_attach (GTK_TABLE (table9), ST_LPR2, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_LPR2), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_LPR2), 5, 0);

  ST_LPR3 = gtk_label_new (_("Lpr3 :"));
  gtk_widget_ref (ST_LPR3);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_LPR3", ST_LPR3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_LPR3);
  gtk_table_attach (GTK_TABLE (table9), ST_LPR3, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_LPR3), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_LPR3), 5, 0);

  ST_LPR4 = gtk_label_new (_("Lpr4 :"));
  gtk_widget_ref (ST_LPR4);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_LPR4", ST_LPR4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_LPR4);
  gtk_table_attach (GTK_TABLE (table9), ST_LPR4, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_LPR4), 1, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_LPR4), 5, 0);

  E_LPR1 = gtk_entry_new ();
  gtk_widget_ref (E_LPR1);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_LPR1", E_LPR1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_LPR1);
  gtk_table_attach (GTK_TABLE (table9), E_LPR1, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_text (GTK_ENTRY (E_LPR1), _("|lpr"));

  E_LPR2 = gtk_entry_new ();
  gtk_widget_ref (E_LPR2);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_LPR2", E_LPR2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_LPR2);
  gtk_table_attach (GTK_TABLE (table9), E_LPR2, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_text (GTK_ENTRY (E_LPR2), _("|gs -sDEVICE=bj200 -sOutputFile=\"/tmp/winetmp-${USER} -q -"));

  E_LPR3 = gtk_entry_new ();
  gtk_widget_ref (E_LPR3);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_LPR3", E_LPR3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_LPR3);
  gtk_table_attach (GTK_TABLE (table9), E_LPR3, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  E_LPR4 = gtk_entry_new ();
  gtk_widget_ref (E_LPR4);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "E_LPR4", E_LPR4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_LPR4);
  gtk_table_attach (GTK_TABLE (table9), E_LPR4, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ST_PRINTER = gtk_label_new (_(texte[135]));
  gtk_widget_ref (ST_PRINTER);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "ST_PRINTER", ST_PRINTER,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_PRINTER);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 2), ST_PRINTER);

  hbuttonbox8 = GNOME_DIALOG (W_WINE_PORT)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_WINE_PORT), "hbuttonbox8", hbuttonbox8);
  gtk_widget_show (hbuttonbox8);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (hbuttonbox8), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_PORT), GNOME_STOCK_BUTTON_OK);
  BT_WINE_PORT_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_PORT)->buttons)->data);
  gtk_widget_ref (BT_WINE_PORT_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "BT_WINE_PORT_OK", BT_WINE_PORT_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_PORT_OK);
  GTK_WIDGET_SET_FLAGS (BT_WINE_PORT_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_PORT), GNOME_STOCK_BUTTON_CANCEL);
  BT_WINE_PORT_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_PORT)->buttons)->data);
  gtk_widget_ref (BT_WINE_PORT_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_PORT), "BT_WINE_PORT_ANNUL", BT_WINE_PORT_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_PORT_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_WINE_PORT_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_WINE_PORT), "destroy",
                      GTK_SIGNAL_FUNC (on_w_wine_port_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_WINE_PORT_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_wine_port_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_WINE_PORT_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_WINE_PORT));

  return W_WINE_PORT;
}

GtkWidget*
create_W_WINE_REGISTRY (void)
{
  GtkWidget *W_WINE_REGISTRY;
  GtkWidget *dialog_vbox33;
  GtkWidget *vbox18;
  GtkWidget *CHK_LOAD_GEN_REG;
  GtkWidget *CHK_LOAD_PERS_REG;
  GtkWidget *CHK_LOAD_WIN_REG;
  GtkWidget *CHK_SAVE_PERS_REG;
  GtkWidget *dialog_action_area33;
  GtkWidget *BT_WINE_REGISTRY_OK;
  GtkWidget *BT_WINE_REGISTRY_ANNUL;

  W_WINE_REGISTRY = gnome_dialog_new (_(texte[136]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_WINE_REGISTRY), "W_WINE_REGISTRY", W_WINE_REGISTRY);
  GTK_WINDOW (W_WINE_REGISTRY)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_WINE_REGISTRY), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_WINE_REGISTRY), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_WINE_REGISTRY), FALSE, FALSE, FALSE);

  dialog_vbox33 = GNOME_DIALOG (W_WINE_REGISTRY)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_WINE_REGISTRY), "dialog_vbox33", dialog_vbox33);
  gtk_widget_show (dialog_vbox33);

  vbox18 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox18);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_REGISTRY), "vbox18", vbox18,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox18);
  gtk_box_pack_start (GTK_BOX (dialog_vbox33), vbox18, TRUE, TRUE, 0);

  CHK_LOAD_GEN_REG = gtk_check_button_new_with_label (_(texte[137]));
  gtk_widget_ref (CHK_LOAD_GEN_REG);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_REGISTRY), "CHK_LOAD_GEN_REG", CHK_LOAD_GEN_REG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_LOAD_GEN_REG);
  gtk_box_pack_start (GTK_BOX (vbox18), CHK_LOAD_GEN_REG, FALSE, FALSE, 0);

  CHK_LOAD_PERS_REG = gtk_check_button_new_with_label (_(texte[138]));
  gtk_widget_ref (CHK_LOAD_PERS_REG);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_REGISTRY), "CHK_LOAD_PERS_REG", CHK_LOAD_PERS_REG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_LOAD_PERS_REG);
  gtk_box_pack_start (GTK_BOX (vbox18), CHK_LOAD_PERS_REG, FALSE, FALSE, 0);

  CHK_LOAD_WIN_REG = gtk_check_button_new_with_label (_(texte[139]));
  gtk_widget_ref (CHK_LOAD_WIN_REG);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_REGISTRY), "CHK_LOAD_WIN_REG", CHK_LOAD_WIN_REG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_LOAD_WIN_REG);
  gtk_box_pack_start (GTK_BOX (vbox18), CHK_LOAD_WIN_REG, FALSE, FALSE, 0);

  CHK_SAVE_PERS_REG = gtk_check_button_new_with_label (_(texte[140]));
  gtk_widget_ref (CHK_SAVE_PERS_REG);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_REGISTRY), "CHK_SAVE_PERS_REG", CHK_SAVE_PERS_REG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_SAVE_PERS_REG);
  gtk_box_pack_start (GTK_BOX (vbox18), CHK_SAVE_PERS_REG, FALSE, FALSE, 0);

  dialog_action_area33 = GNOME_DIALOG (W_WINE_REGISTRY)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_WINE_REGISTRY), "dialog_action_area33", dialog_action_area33);
  gtk_widget_show (dialog_action_area33);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area33), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_REGISTRY), GNOME_STOCK_BUTTON_OK);
  BT_WINE_REGISTRY_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_REGISTRY)->buttons)->data);
  gtk_widget_ref (BT_WINE_REGISTRY_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_REGISTRY), "BT_WINE_REGISTRY_OK", BT_WINE_REGISTRY_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_REGISTRY_OK);
  GTK_WIDGET_SET_FLAGS (BT_WINE_REGISTRY_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_REGISTRY), GNOME_STOCK_BUTTON_CANCEL);
  BT_WINE_REGISTRY_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_REGISTRY)->buttons)->data);
  gtk_widget_ref (BT_WINE_REGISTRY_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_REGISTRY), "BT_WINE_REGISTRY_ANNUL", BT_WINE_REGISTRY_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_REGISTRY_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_WINE_REGISTRY_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_WINE_REGISTRY), "destroy",
                      GTK_SIGNAL_FUNC (on_w_wine_registry_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_LOAD_GEN_REG), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_load_gen_reg_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_LOAD_PERS_REG), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_load_pers_reg_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_LOAD_WIN_REG), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_load_win_reg_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_SAVE_PERS_REG), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_save_pers_reg_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_WINE_REGISTRY_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_wine_registry_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_WINE_REGISTRY_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_WINE_REGISTRY));

  return W_WINE_REGISTRY;
}

GtkWidget*
create_W_WINE_MEDIA (void)
{
  GtkWidget *W_WINE_MEDIA;
  GtkWidget *dialog_vbox34;
  GtkWidget *table10;
  GtkWidget *ST_DRIVER;
  GtkWidget *ST_WAVE;
  GtkWidget *ST_MIDI;
  GtkWidget *E_DRIVER;
  GtkWidget *E_WAVE;
  GtkWidget *E_MIDI;
  GtkWidget *dialog_action_area34;
  GtkWidget *BT_WINE_MEDIA_OK;
  GtkWidget *BT_WINE_MEDIA_ANNUL;

  W_WINE_MEDIA = gnome_dialog_new (_(texte[141]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_WINE_MEDIA), "W_WINE_MEDIA", W_WINE_MEDIA);
  GTK_WINDOW (W_WINE_MEDIA)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_WINE_MEDIA), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_WINE_MEDIA), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_WINE_MEDIA), FALSE, FALSE, FALSE);

  dialog_vbox34 = GNOME_DIALOG (W_WINE_MEDIA)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_WINE_MEDIA), "dialog_vbox34", dialog_vbox34);
  gtk_widget_show (dialog_vbox34);

  table10 = gtk_table_new (3, 2, FALSE);
  gtk_widget_ref (table10);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_MEDIA), "table10", table10,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table10);
  gtk_box_pack_start (GTK_BOX (dialog_vbox34), table10, TRUE, TRUE, 0);

  ST_DRIVER = gtk_label_new (_(texte[142]));
  gtk_widget_ref (ST_DRIVER);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_MEDIA), "ST_DRIVER", ST_DRIVER,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_DRIVER);
  gtk_table_attach (GTK_TABLE (table10), ST_DRIVER, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_padding (GTK_MISC (ST_DRIVER), 20, 0);

  ST_WAVE = gtk_label_new (_(texte[143]));
  gtk_widget_ref (ST_WAVE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_MEDIA), "ST_WAVE", ST_WAVE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_WAVE);
  gtk_table_attach (GTK_TABLE (table10), ST_WAVE, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_padding (GTK_MISC (ST_WAVE), 20, 0);

  ST_MIDI = gtk_label_new (_(texte[144]));
  gtk_widget_ref (ST_MIDI);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_MEDIA), "ST_MIDI", ST_MIDI,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_MIDI);
  gtk_table_attach (GTK_TABLE (table10), ST_MIDI, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_padding (GTK_MISC (ST_MIDI), 20, 0);

  E_DRIVER = gtk_entry_new ();
  gtk_widget_ref (E_DRIVER);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_MEDIA), "E_DRIVER", E_DRIVER,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_DRIVER);
  gtk_table_attach (GTK_TABLE (table10), E_DRIVER, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 5, 5);
  gtk_entry_set_text (GTK_ENTRY (E_DRIVER), _("wineoss.drv"));

  E_WAVE = gtk_entry_new ();
  gtk_widget_ref (E_WAVE);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_MEDIA), "E_WAVE", E_WAVE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_WAVE);
  gtk_table_attach (GTK_TABLE (table10), E_WAVE, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 5, 5);
  gtk_entry_set_text (GTK_ENTRY (E_WAVE), _("msacm.drv"));

  E_MIDI = gtk_entry_new ();
  gtk_widget_ref (E_MIDI);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_MEDIA), "E_MIDI", E_MIDI,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_MIDI);
  gtk_table_attach (GTK_TABLE (table10), E_MIDI, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 5, 5);
  gtk_entry_set_text (GTK_ENTRY (E_MIDI), _("midimap.drv"));

  dialog_action_area34 = GNOME_DIALOG (W_WINE_MEDIA)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_WINE_MEDIA), "dialog_action_area34", dialog_action_area34);
  gtk_widget_show (dialog_action_area34);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area34), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area34), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_MEDIA), GNOME_STOCK_BUTTON_OK);
  BT_WINE_MEDIA_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_MEDIA)->buttons)->data);
  gtk_widget_ref (BT_WINE_MEDIA_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_MEDIA), "BT_WINE_MEDIA_OK", BT_WINE_MEDIA_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_MEDIA_OK);
  GTK_WIDGET_SET_FLAGS (BT_WINE_MEDIA_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_MEDIA), GNOME_STOCK_BUTTON_CANCEL);
  BT_WINE_MEDIA_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_MEDIA)->buttons)->data);
  gtk_widget_ref (BT_WINE_MEDIA_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_MEDIA), "BT_WINE_MEDIA_ANNUL", BT_WINE_MEDIA_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_MEDIA_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_WINE_MEDIA_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_WINE_MEDIA), "destroy",
                      GTK_SIGNAL_FUNC (on_w_wine_media_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_WINE_MEDIA_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_wine_media_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_WINE_MEDIA_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_WINE_MEDIA));

  return W_WINE_MEDIA;
}

GtkWidget*
create_W_WINE_CONSOLE (void)
{
  GtkWidget *W_WINE_CONSOLE;
  GtkWidget *dialog_vbox35;
  GtkWidget *table11;
  GtkWidget *ST_PROGRAM;
  GtkWidget *ST_WIDTH;
  GtkWidget *CB_WIDTH;
  GList *CB_WIDTH_items = NULL;
  GtkWidget *E_WIDTH;
  GtkWidget *CB_PROGRAM;
  GList *CB_PROGRAM_items = NULL;
  GtkWidget *E_PROGRAM;
  GtkWidget *dialog_action_area35;
  GtkWidget *BT_WINE_CONSOLE_OK;
  GtkWidget *BT_WINE_CONSOLE_ANNUL;

  W_WINE_CONSOLE = gnome_dialog_new (_(texte[145]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_WINE_CONSOLE), "W_WINE_CONSOLE", W_WINE_CONSOLE);
  GTK_WINDOW (W_WINE_CONSOLE)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_WINE_CONSOLE), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_WINE_CONSOLE), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_WINE_CONSOLE), FALSE, FALSE, FALSE);

  dialog_vbox35 = GNOME_DIALOG (W_WINE_CONSOLE)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_WINE_CONSOLE), "dialog_vbox35", dialog_vbox35);
  gtk_widget_show (dialog_vbox35);

  table11 = gtk_table_new (2, 2, FALSE);
  gtk_widget_ref (table11);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONSOLE), "table11", table11,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table11);
  gtk_box_pack_start (GTK_BOX (dialog_vbox35), table11, TRUE, TRUE, 0);

  ST_PROGRAM = gtk_label_new (_(texte[146]));
  gtk_widget_ref (ST_PROGRAM);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONSOLE), "ST_PROGRAM", ST_PROGRAM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_PROGRAM);
  gtk_table_attach (GTK_TABLE (table11), ST_PROGRAM, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_padding (GTK_MISC (ST_PROGRAM), 20, 0);

  ST_WIDTH = gtk_label_new (_(texte[147]));
  gtk_widget_ref (ST_WIDTH);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONSOLE), "ST_WIDTH", ST_WIDTH,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_WIDTH);
  gtk_table_attach (GTK_TABLE (table11), ST_WIDTH, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  CB_WIDTH = gtk_combo_new ();
  gtk_widget_ref (CB_WIDTH);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONSOLE), "CB_WIDTH", CB_WIDTH,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_WIDTH);
  gtk_table_attach (GTK_TABLE (table11), CB_WIDTH, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (CB_WIDTH), 5);
  gtk_combo_set_value_in_list (GTK_COMBO (CB_WIDTH), TRUE, FALSE);
  CB_WIDTH_items = g_list_append (CB_WIDTH_items, (gpointer) _("40x15"));
  CB_WIDTH_items = g_list_append (CB_WIDTH_items, (gpointer) _("80x24"));
  CB_WIDTH_items = g_list_append (CB_WIDTH_items, (gpointer) _("80x25"));
  CB_WIDTH_items = g_list_append (CB_WIDTH_items, (gpointer) _("80x40"));
  CB_WIDTH_items = g_list_append (CB_WIDTH_items, (gpointer) _("80x52"));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_WIDTH), CB_WIDTH_items);
  g_list_free (CB_WIDTH_items);

  E_WIDTH = GTK_COMBO (CB_WIDTH)->entry;
  gtk_widget_ref (E_WIDTH);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONSOLE), "E_WIDTH", E_WIDTH,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_WIDTH);
  gtk_entry_set_editable (GTK_ENTRY (E_WIDTH), FALSE);
  gtk_entry_set_text (GTK_ENTRY (E_WIDTH), _("80x25"));

  CB_PROGRAM = gtk_combo_new ();
  gtk_widget_ref (CB_PROGRAM);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONSOLE), "CB_PROGRAM", CB_PROGRAM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_PROGRAM);
  gtk_table_attach (GTK_TABLE (table11), CB_PROGRAM, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 5, 5);
  gtk_combo_set_value_in_list (GTK_COMBO (CB_PROGRAM), TRUE, FALSE);
  CB_PROGRAM_items = g_list_append (CB_PROGRAM_items, (gpointer) _("nxterm"));
  CB_PROGRAM_items = g_list_append (CB_PROGRAM_items, (gpointer) _("gnome-terminal"));
  CB_PROGRAM_items = g_list_append (CB_PROGRAM_items, (gpointer) _("konsole"));
  CB_PROGRAM_items = g_list_append (CB_PROGRAM_items, (gpointer) _("rxvt"));
  CB_PROGRAM_items = g_list_append (CB_PROGRAM_items, (gpointer) _("xterm"));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_PROGRAM), CB_PROGRAM_items);
  g_list_free (CB_PROGRAM_items);

  E_PROGRAM = GTK_COMBO (CB_PROGRAM)->entry;
  gtk_widget_ref (E_PROGRAM);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONSOLE), "E_PROGRAM", E_PROGRAM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_PROGRAM);
  gtk_entry_set_editable (GTK_ENTRY (E_PROGRAM), FALSE);
  gtk_entry_set_text (GTK_ENTRY (E_PROGRAM), _("nxterm"));

  dialog_action_area35 = GNOME_DIALOG (W_WINE_CONSOLE)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_WINE_CONSOLE), "dialog_action_area35", dialog_action_area35);
  gtk_widget_show (dialog_action_area35);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area35), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area35), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_CONSOLE), GNOME_STOCK_BUTTON_OK);
  BT_WINE_CONSOLE_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_CONSOLE)->buttons)->data);
  gtk_widget_ref (BT_WINE_CONSOLE_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONSOLE), "BT_WINE_CONSOLE_OK", BT_WINE_CONSOLE_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_CONSOLE_OK);
  GTK_WIDGET_SET_FLAGS (BT_WINE_CONSOLE_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_CONSOLE), GNOME_STOCK_BUTTON_CANCEL);
  BT_WINE_CONSOLE_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_CONSOLE)->buttons)->data);
  gtk_widget_ref (BT_WINE_CONSOLE_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_CONSOLE), "BT_WINE_CONSOLE_ANNUL", BT_WINE_CONSOLE_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_CONSOLE_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_WINE_CONSOLE_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_WINE_CONSOLE), "destroy",
                      GTK_SIGNAL_FUNC (on_w_wine_console_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_WINE_CONSOLE_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_wine_console_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_WINE_CONSOLE_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_WINE_CONSOLE));

  return W_WINE_CONSOLE;
}

GtkWidget*
create_WARN_RESTORE (void)
{
  GtkWidget *WARN_RESTORE;
  GtkWidget *dialog_vbox36;
  GtkWidget *BT_RESTORE_OK;
  GtkWidget *BT_RESTORE_ANNUL;
  GtkWidget *dialog_action_area36;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  WARN_RESTORE = gnome_message_box_new (_(texte[148]),
                              GNOME_MESSAGE_BOX_WARNING,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (WARN_RESTORE)->action_area), GNOME_DIALOG (WARN_RESTORE)->buttons->data);
  GNOME_DIALOG (WARN_RESTORE)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (WARN_RESTORE), "WARN_RESTORE", WARN_RESTORE);
  gtk_window_set_title (GTK_WINDOW (WARN_RESTORE), _(texte[40]));
  gtk_window_set_position (GTK_WINDOW (WARN_RESTORE), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (WARN_RESTORE), TRUE);
  gtk_window_set_policy (GTK_WINDOW (WARN_RESTORE), FALSE, FALSE, FALSE);

  dialog_vbox36 = GNOME_DIALOG (WARN_RESTORE)->vbox;
  gtk_object_set_data (GTK_OBJECT (WARN_RESTORE), "dialog_vbox36", dialog_vbox36);
  gtk_widget_show (dialog_vbox36);

  gnome_dialog_append_button (GNOME_DIALOG (WARN_RESTORE), GNOME_STOCK_BUTTON_YES);
  BT_RESTORE_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (WARN_RESTORE)->buttons)->data);
  gtk_widget_ref (BT_RESTORE_OK);
  gtk_object_set_data_full (GTK_OBJECT (WARN_RESTORE), "BT_RESTORE_OK", BT_RESTORE_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_RESTORE_OK);
  GTK_WIDGET_SET_FLAGS (BT_RESTORE_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (WARN_RESTORE), GNOME_STOCK_BUTTON_NO);
  BT_RESTORE_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (WARN_RESTORE)->buttons)->data);
  gtk_widget_ref (BT_RESTORE_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (WARN_RESTORE), "BT_RESTORE_ANNUL", BT_RESTORE_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_RESTORE_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_RESTORE_ANNUL, GTK_CAN_DEFAULT);

  dialog_action_area36 = GNOME_DIALOG (WARN_RESTORE)->action_area;
  gtk_widget_ref (dialog_action_area36);
  gtk_object_set_data_full (GTK_OBJECT (WARN_RESTORE), "dialog_action_area36", dialog_action_area36,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (WARN_RESTORE), "destroy",
                      GTK_SIGNAL_FUNC (on_warn_restore_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_RESTORE_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_restore_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (BT_RESTORE_ANNUL), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_hide),
                             GTK_OBJECT (WARN_RESTORE));

  return WARN_RESTORE;
}

GtkWidget*
create_W_WINE_VERSION (void)
{
  GtkWidget *W_WINE_VERSION;
  GtkWidget *dialog_vbox37;
  GtkWidget *table12;
  GtkWidget *ST_VERSION;
  GtkWidget *CB_VERSION;
  GList *CB_VERSION_items = NULL;
  GtkWidget *E_VERSION;
  GtkWidget *CHK_WINE_MSDOS;
  GtkWidget *dialog_action_area37;
  GtkWidget *BT_WINE_VERSION_OK;
  GtkWidget *WinVer_c;

  W_WINE_VERSION = gnome_dialog_new (_(texte[149]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_WINE_VERSION), "W_WINE_VERSION", W_WINE_VERSION);
  GTK_WINDOW (W_WINE_VERSION)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_WINE_VERSION), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_WINE_VERSION), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_WINE_VERSION), FALSE, FALSE, FALSE);

  dialog_vbox37 = GNOME_DIALOG (W_WINE_VERSION)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_WINE_VERSION), "dialog_vbox37", dialog_vbox37);
  gtk_widget_show (dialog_vbox37);

  table12 = gtk_table_new (2, 2, FALSE);
  gtk_widget_ref (table12);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_VERSION), "table12", table12,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table12);
  gtk_box_pack_start (GTK_BOX (dialog_vbox37), table12, TRUE, TRUE, 0);

  ST_VERSION = gtk_label_new (_(texte[150]));
  gtk_widget_ref (ST_VERSION);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_VERSION), "ST_VERSION", ST_VERSION,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ST_VERSION);
  gtk_table_attach (GTK_TABLE (table12), ST_VERSION, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (ST_VERSION), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (ST_VERSION), 5, 5);

  CB_VERSION = gtk_combo_new ();
  gtk_widget_ref (CB_VERSION);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_VERSION), "CB_VERSION", CB_VERSION,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_VERSION);
  gtk_table_attach (GTK_TABLE (table12), CB_VERSION, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  CB_VERSION_items = g_list_append (CB_VERSION_items, (gpointer) _("win95"));
  CB_VERSION_items = g_list_append (CB_VERSION_items, (gpointer) _("win98"));
  CB_VERSION_items = g_list_append (CB_VERSION_items, (gpointer) _("winme"));
  CB_VERSION_items = g_list_append (CB_VERSION_items, (gpointer) _("nt351"));
  CB_VERSION_items = g_list_append (CB_VERSION_items, (gpointer) _("nt40"));
  CB_VERSION_items = g_list_append (CB_VERSION_items, (gpointer) _("win2k"));
  CB_VERSION_items = g_list_append (CB_VERSION_items, (gpointer) _("winxp"));
  CB_VERSION_items = g_list_append (CB_VERSION_items, (gpointer) _("win20"));
  CB_VERSION_items = g_list_append (CB_VERSION_items, (gpointer) _("win30"));
  CB_VERSION_items = g_list_append (CB_VERSION_items, (gpointer) _("win31"));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_VERSION), CB_VERSION_items);
  g_list_free (CB_VERSION_items);

  E_VERSION = GTK_COMBO (CB_VERSION)->entry;
  gtk_widget_ref (E_VERSION);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_VERSION), "E_VERSION", E_VERSION,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_VERSION);
  gtk_entry_set_text (GTK_ENTRY (E_VERSION), _("win95"));

  CHK_WINE_MSDOS = gtk_check_button_new_with_label (_(texte[52]));
  gtk_widget_ref (CHK_WINE_MSDOS);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_VERSION), "CHK_WINE_MSDOS", CHK_WINE_MSDOS,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_WINE_MSDOS);
  gtk_table_attach (GTK_TABLE (table12), CHK_WINE_MSDOS, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  dialog_action_area37 = GNOME_DIALOG (W_WINE_VERSION)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_WINE_VERSION), "dialog_action_area37", dialog_action_area37);
  gtk_widget_show (dialog_action_area37);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area37), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area37), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_VERSION), GNOME_STOCK_BUTTON_OK);
  BT_WINE_VERSION_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_VERSION)->buttons)->data);
  gtk_widget_ref (BT_WINE_VERSION_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_VERSION), "BT_WINE_VERSION_OK", BT_WINE_VERSION_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WINE_VERSION_OK);
  GTK_WIDGET_SET_FLAGS (BT_WINE_VERSION_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_WINE_VERSION), GNOME_STOCK_BUTTON_CANCEL);
  WinVer_c = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_WINE_VERSION)->buttons)->data);
  gtk_widget_ref (WinVer_c);
  gtk_object_set_data_full (GTK_OBJECT (W_WINE_VERSION), "WinVer_c", WinVer_c,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (WinVer_c);
  GTK_WIDGET_SET_FLAGS (WinVer_c, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_WINE_VERSION), "destroy",
                      GTK_SIGNAL_FUNC (on_w_wine_version_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_WINE_MSDOS), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_wine_msdos_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_WINE_VERSION_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_wine_version_ok_clicked),
                      NULL);
  gtk_signal_connect_object (GTK_OBJECT (WinVer_c), "clicked",
                             GTK_SIGNAL_FUNC (gtk_widget_destroy),
                             GTK_OBJECT (W_WINE_VERSION));

  return W_WINE_VERSION;
}

GtkWidget*
create_W_CONFIG (void)
{
  GtkWidget *W_CONFIG;
  GtkWidget *vbox19;
  GtkWidget *table14;
  GtkWidget *pixmap1;
  GtkWidget *pixmap2;
  GtkWidget *pixmap3;
  GtkWidget *pixmap4;
  GtkWidget *pixmap5;
  GtkWidget *BT_DRIVE;
  GtkWidget *BT_FOLDER;
  GtkWidget *BT_VERSION;
  GtkWidget *BT_DLL;
  GtkWidget *BT_LOOK;
  GtkWidget *pixmap15;
  GtkWidget *BT_EXPORT;
  GtkWidget *pixmap6;
  GtkWidget *BT_GFX;
  GtkWidget *pixmap7;
  GtkWidget *BT_PORTS;
  GtkWidget *pixmap8;
  GtkWidget *pixmap9;
  GtkWidget *pixmap10;
  GtkWidget *BT_REGISTRY;
  GtkWidget *BT_CONSOLE;
  GtkWidget *BT_MEDIA;
  GtkWidget *pixmap11;
  GtkWidget *BT_SETUP;
  GtkWidget *pixmap16;
  GtkWidget *BT_ADD_PGM;
  GtkWidget *pixmap12;
  GtkWidget *BT_CONFIG;
  GtkWidget *pixmap14;
  GtkWidget *BT_DEBUG;
  GtkWidget *pixmap13;
  GtkWidget *BT_RESTORE;
  GtkWidget *pixmap18;
  GtkWidget *BT_LOG;
  GtkWidget *hseparator1;
  GtkWidget *BT_CONFIG_CLOSE;

  W_CONFIG = gtk_window_new (GTK_WINDOW_DIALOG);
  gtk_object_set_data (GTK_OBJECT (W_CONFIG), "W_CONFIG", W_CONFIG);
  gtk_window_set_title (GTK_WINDOW (W_CONFIG), _(texte[151]));
  gtk_window_set_position (GTK_WINDOW (W_CONFIG), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_CONFIG), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_CONFIG), FALSE, FALSE, FALSE);

  vbox19 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox19);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "vbox19", vbox19,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox19);
  gtk_container_add (GTK_CONTAINER (W_CONFIG), vbox19);

  table14 = gtk_table_new (6, 6, FALSE);
  gtk_widget_ref (table14);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "table14", table14,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table14);
  gtk_box_pack_start (GTK_BOX (vbox19), table14, TRUE, TRUE, 0);

  pixmap1 = create_pixmap (W_CONFIG, "xwine/hdd.xpm", FALSE);
  gtk_widget_ref (pixmap1);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap1", pixmap1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap1);
  gtk_table_attach (GTK_TABLE (table14), pixmap1, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap1), 10, 10);

  pixmap2 = create_pixmap (W_CONFIG, "xwine/folder.xpm", FALSE);
  gtk_widget_ref (pixmap2);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap2", pixmap2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap2);
  gtk_table_attach (GTK_TABLE (table14), pixmap2, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap2), 10, 10);

  pixmap3 = create_pixmap (W_CONFIG, "xwine/version.xpm", FALSE);
  gtk_widget_ref (pixmap3);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap3", pixmap3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap3);
  gtk_table_attach (GTK_TABLE (table14), pixmap3, 2, 3, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap3), 10, 10);

  pixmap4 = create_pixmap (W_CONFIG, "xwine/dll.xpm", FALSE);
  gtk_widget_ref (pixmap4);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap4", pixmap4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap4);
  gtk_table_attach (GTK_TABLE (table14), pixmap4, 3, 4, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap4), 10, 10);

  pixmap5 = create_pixmap (W_CONFIG, "xwine/look.xpm", FALSE);
  gtk_widget_ref (pixmap5);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap5", pixmap5,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap5);
  gtk_table_attach (GTK_TABLE (table14), pixmap5, 4, 5, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap5), 10, 10);

  BT_DRIVE = gtk_button_new_with_label (_(texte[152]));
  gtk_widget_ref (BT_DRIVE);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_DRIVE", BT_DRIVE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DRIVE);
  gtk_table_attach (GTK_TABLE (table14), BT_DRIVE, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  BT_FOLDER = gtk_button_new_with_label (_(texte[153]));
  gtk_widget_ref (BT_FOLDER);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_FOLDER", BT_FOLDER,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_FOLDER);
  gtk_table_attach (GTK_TABLE (table14), BT_FOLDER, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  BT_VERSION = gtk_button_new_with_label (_(texte[154]));
  gtk_widget_ref (BT_VERSION);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_VERSION", BT_VERSION,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_VERSION);
  gtk_table_attach (GTK_TABLE (table14), BT_VERSION, 2, 3, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  BT_DLL = gtk_button_new_with_label (_(texte[155]));
  gtk_widget_ref (BT_DLL);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_DLL", BT_DLL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DLL);
  gtk_table_attach (GTK_TABLE (table14), BT_DLL, 3, 4, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  BT_LOOK = gtk_button_new_with_label (_(texte[156]));
  gtk_widget_ref (BT_LOOK);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_LOOK", BT_LOOK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_LOOK);
  gtk_table_attach (GTK_TABLE (table14), BT_LOOK, 4, 5, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  pixmap15 = create_pixmap (W_CONFIG, "xwine/export.xpm", FALSE);
  gtk_widget_ref (pixmap15);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap15", pixmap15,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap15);
  gtk_table_attach (GTK_TABLE (table14), pixmap15, 4, 5, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap15), 10, 10);

  BT_EXPORT = gtk_button_new_with_label (_(texte[166]));
  gtk_widget_ref (BT_EXPORT);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_EXPORT", BT_EXPORT,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_EXPORT);
  gtk_table_attach (GTK_TABLE (table14), BT_EXPORT, 4, 5, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  pixmap6 = create_pixmap (W_CONFIG, "xwine/gfx.xpm", FALSE);
  gtk_widget_ref (pixmap6);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap6", pixmap6,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap6);
  gtk_table_attach (GTK_TABLE (table14), pixmap6, 5, 6, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  BT_GFX = gtk_button_new_with_label (_(texte[157]));
  gtk_widget_ref (BT_GFX);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_GFX", BT_GFX,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_GFX);
  gtk_table_attach (GTK_TABLE (table14), BT_GFX, 5, 6, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  pixmap7 = create_pixmap (W_CONFIG, "xwine/ports.xpm", FALSE);
  gtk_widget_ref (pixmap7);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap7", pixmap7,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap7);
  gtk_table_attach (GTK_TABLE (table14), pixmap7, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap7), 10, 10);

  BT_PORTS = gtk_button_new_with_label (_(texte[158]));
  gtk_widget_ref (BT_PORTS);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_PORTS", BT_PORTS,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_PORTS);
  gtk_table_attach (GTK_TABLE (table14), BT_PORTS, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  pixmap8 = create_pixmap (W_CONFIG, "xwine/registry.xpm", FALSE);
  gtk_widget_ref (pixmap8);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap8", pixmap8,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap8);
  gtk_table_attach (GTK_TABLE (table14), pixmap8, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap8), 10, 10);

  pixmap9 = create_pixmap (W_CONFIG, "xwine/console.xpm", FALSE);
  gtk_widget_ref (pixmap9);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap9", pixmap9,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap9);
  gtk_table_attach (GTK_TABLE (table14), pixmap9, 2, 3, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  pixmap10 = create_pixmap (W_CONFIG, "xwine/multimedia.xpm", FALSE);
  gtk_widget_ref (pixmap10);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap10", pixmap10,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap10);
  gtk_table_attach (GTK_TABLE (table14), pixmap10, 3, 4, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  BT_REGISTRY = gtk_button_new_with_label (_(texte[159]));
  gtk_widget_ref (BT_REGISTRY);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_REGISTRY", BT_REGISTRY,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_REGISTRY);
  gtk_table_attach (GTK_TABLE (table14), BT_REGISTRY, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  BT_CONSOLE = gtk_button_new_with_label (_(texte[160]));
  gtk_widget_ref (BT_CONSOLE);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_CONSOLE", BT_CONSOLE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_CONSOLE);
  gtk_table_attach (GTK_TABLE (table14), BT_CONSOLE, 2, 3, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  BT_MEDIA = gtk_button_new_with_label (_(texte[161]));
  gtk_widget_ref (BT_MEDIA);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_MEDIA", BT_MEDIA,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_MEDIA);
  gtk_table_attach (GTK_TABLE (table14), BT_MEDIA, 3, 4, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  pixmap11 = create_pixmap (W_CONFIG, "xwine/setup.xpm", FALSE);
  gtk_widget_ref (pixmap11);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap11", pixmap11,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap11);
  gtk_table_attach (GTK_TABLE (table14), pixmap11, 4, 5, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap11), 10, 10);

  BT_SETUP = gtk_button_new_with_label (_(texte[162]));
  gtk_widget_ref (BT_SETUP);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_SETUP", BT_SETUP,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_SETUP);
  gtk_table_attach (GTK_TABLE (table14), BT_SETUP, 4, 5, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  pixmap16 = create_pixmap (W_CONFIG, "xwine/progs.xpm", FALSE);
  gtk_widget_ref (pixmap16);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap16", pixmap16,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap16);
  gtk_table_attach (GTK_TABLE (table14), pixmap16, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap16), 10, 10);

  BT_ADD_PGM = gtk_button_new_with_label (_(texte[202]));
  gtk_widget_ref (BT_ADD_PGM);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_ADD_PGM", BT_ADD_PGM,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_ADD_PGM);
  gtk_table_attach (GTK_TABLE (table14), BT_ADD_PGM, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  pixmap12 = create_pixmap (W_CONFIG, "xwine/edit.xpm", FALSE);
  gtk_widget_ref (pixmap12);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap12", pixmap12,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap12);
  gtk_table_attach (GTK_TABLE (table14), pixmap12, 5, 6, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  BT_CONFIG = gtk_button_new_with_label (_(texte[163]));
  gtk_widget_ref (BT_CONFIG);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_CONFIG", BT_CONFIG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_CONFIG);
  gtk_table_attach (GTK_TABLE (table14), BT_CONFIG, 5, 6, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  pixmap14 = create_pixmap (W_CONFIG, "xwine/debug.xpm", FALSE);
  gtk_widget_ref (pixmap14);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap14", pixmap14,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap14);
  gtk_table_attach (GTK_TABLE (table14), pixmap14, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap14), 10, 10);

  BT_DEBUG = gtk_button_new_with_label (_(texte[165]));
  gtk_widget_ref (BT_DEBUG);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_DEBUG", BT_DEBUG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_DEBUG);
  gtk_table_attach (GTK_TABLE (table14), BT_DEBUG, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  pixmap13 = create_pixmap (W_CONFIG, "xwine/restore.xpm", FALSE);
  gtk_widget_ref (pixmap13);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap13", pixmap13,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap13);
  gtk_table_attach (GTK_TABLE (table14), pixmap13, 3, 4, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap13), 10, 10);

  BT_RESTORE = gtk_button_new_with_label (_(texte[164]));
  gtk_widget_ref (BT_RESTORE);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_RESTORE", BT_RESTORE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_RESTORE);
  gtk_table_attach (GTK_TABLE (table14), BT_RESTORE, 3, 4, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  pixmap18 = create_pixmap (W_CONFIG, "xwine/log.xpm", FALSE);
  gtk_widget_ref (pixmap18);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "pixmap18", pixmap18,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap18);
  gtk_table_attach (GTK_TABLE (table14), pixmap18, 2, 3, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_misc_set_padding (GTK_MISC (pixmap18), 10, 10);

  BT_LOG = gtk_button_new_with_label (_(texte[203]));
  gtk_widget_ref (BT_LOG);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_LOG", BT_LOG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_LOG);
  gtk_table_attach (GTK_TABLE (table14), BT_LOG, 2, 3, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  hseparator1 = gtk_hseparator_new ();
  gtk_widget_ref (hseparator1);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "hseparator1", hseparator1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hseparator1);
  gtk_box_pack_start (GTK_BOX (vbox19), hseparator1, TRUE, TRUE, 10);

  BT_CONFIG_CLOSE = gtk_button_new_with_label (_(texte[167]));
  gtk_widget_ref (BT_CONFIG_CLOSE);
  gtk_object_set_data_full (GTK_OBJECT (W_CONFIG), "BT_CONFIG_CLOSE", BT_CONFIG_CLOSE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_CONFIG_CLOSE);
  gtk_box_pack_start (GTK_BOX (vbox19), BT_CONFIG_CLOSE, FALSE, FALSE, 0);

  gtk_signal_connect (GTK_OBJECT (W_CONFIG), "destroy",
                      GTK_SIGNAL_FUNC (on_w_config_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DRIVE), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_drive_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_FOLDER), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_folder_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_VERSION), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_version_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DLL), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_dll_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_LOOK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_look_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_EXPORT), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_export_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_GFX), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_gfx_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_PORTS), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_ports_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_REGISTRY), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_registry_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_CONSOLE), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_console_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_MEDIA), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_media_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_SETUP), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_setup_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_ADD_PGM), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_add_pgm_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_CONFIG), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_config_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_DEBUG), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_debug_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_RESTORE), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_restore_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_LOG), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_log_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_CONFIG_CLOSE), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_config_close_clicked),
                      NULL);

  return W_CONFIG;
}

GtkWidget*
create_WARN_DEBUG (void)
{
  GtkWidget *WARN_DEBUG;
  GtkWidget *dialog_vbox38;
  GtkWidget *BT_WARN_DEBUG_VALID;
  GtkWidget *dialog_action_area38;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  WARN_DEBUG = gnome_message_box_new (_(texte[168]),
                              GNOME_MESSAGE_BOX_INFO,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (WARN_DEBUG)->action_area), GNOME_DIALOG (WARN_DEBUG)->buttons->data);
  GNOME_DIALOG (WARN_DEBUG)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (WARN_DEBUG), "WARN_DEBUG", WARN_DEBUG);
  gtk_window_set_title (GTK_WINDOW (WARN_DEBUG), _(texte[39]));
  gtk_window_set_position (GTK_WINDOW (WARN_DEBUG), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (WARN_DEBUG), TRUE);
  gtk_window_set_policy (GTK_WINDOW (WARN_DEBUG), FALSE, FALSE, FALSE);

  dialog_vbox38 = GNOME_DIALOG (WARN_DEBUG)->vbox;
  gtk_object_set_data (GTK_OBJECT (WARN_DEBUG), "dialog_vbox38", dialog_vbox38);
  gtk_widget_show (dialog_vbox38);

  gnome_dialog_append_button (GNOME_DIALOG (WARN_DEBUG), GNOME_STOCK_BUTTON_OK);
  BT_WARN_DEBUG_VALID = GTK_WIDGET (g_list_last (GNOME_DIALOG (WARN_DEBUG)->buttons)->data);
  gtk_widget_ref (BT_WARN_DEBUG_VALID);
  gtk_object_set_data_full (GTK_OBJECT (WARN_DEBUG), "BT_WARN_DEBUG_VALID", BT_WARN_DEBUG_VALID,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WARN_DEBUG_VALID);
  GTK_WIDGET_SET_FLAGS (BT_WARN_DEBUG_VALID, GTK_CAN_DEFAULT);

  dialog_action_area38 = GNOME_DIALOG (WARN_DEBUG)->action_area;
  gtk_widget_ref (dialog_action_area38);
  gtk_object_set_data_full (GTK_OBJECT (WARN_DEBUG), "dialog_action_area38", dialog_action_area38,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (WARN_DEBUG), "destroy",
                      GTK_SIGNAL_FUNC (on_WARN_DEBUG_destroy),
                      NULL);

  return WARN_DEBUG;
}

GtkWidget*
create_WARN_NODEBUG (void)
{
  GtkWidget *WARN_NODEBUG;
  GtkWidget *dialog_vbox39;
  GtkWidget *button24;
  GtkWidget *dialog_action_area39;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  WARN_NODEBUG = gnome_message_box_new (_(texte[169]),
                              GNOME_MESSAGE_BOX_INFO,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (WARN_NODEBUG)->action_area), GNOME_DIALOG (WARN_NODEBUG)->buttons->data);
  GNOME_DIALOG (WARN_NODEBUG)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (WARN_NODEBUG), "WARN_NODEBUG", WARN_NODEBUG);
  gtk_window_set_title (GTK_WINDOW (WARN_NODEBUG), _(texte[39]));
  gtk_window_set_position (GTK_WINDOW (WARN_NODEBUG), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (WARN_NODEBUG), TRUE);
  gtk_window_set_policy (GTK_WINDOW (WARN_NODEBUG), FALSE, FALSE, FALSE);

  dialog_vbox39 = GNOME_DIALOG (WARN_NODEBUG)->vbox;
  gtk_object_set_data (GTK_OBJECT (WARN_NODEBUG), "dialog_vbox39", dialog_vbox39);
  gtk_widget_show (dialog_vbox39);

  gnome_dialog_append_button (GNOME_DIALOG (WARN_NODEBUG), GNOME_STOCK_BUTTON_OK);
  button24 = GTK_WIDGET (g_list_last (GNOME_DIALOG (WARN_NODEBUG)->buttons)->data);
  gtk_widget_ref (button24);
  gtk_object_set_data_full (GTK_OBJECT (WARN_NODEBUG), "button24", button24,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button24);
  GTK_WIDGET_SET_FLAGS (button24, GTK_CAN_DEFAULT);

  dialog_action_area39 = GNOME_DIALOG (WARN_NODEBUG)->action_area;
  gtk_widget_ref (dialog_action_area39);
  gtk_object_set_data_full (GTK_OBJECT (WARN_NODEBUG), "dialog_action_area39", dialog_action_area39,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (WARN_NODEBUG), "destroy",
                      GTK_SIGNAL_FUNC (on_WARN_NODEBUG_destroy),
                      NULL);

  return WARN_NODEBUG;
}

GtkWidget*
create_W_PREFS (void)
{
  GtkWidget *W_PREFS;
  GtkWidget *dialog_vbox40;
  GtkWidget *vbox20;
  GtkWidget *frame19;
  GtkWidget *vbox21;
  GtkWidget *IMG_BACK;
  GtkWidget *EF_BACKGROUND;
  GtkWidget *E_BACKGROUND;
  GtkWidget *frame20;
  GtkWidget *CB_WINDOW;
  GList *CB_WINDOW_items = NULL;
  GtkWidget *E_WINDOW;
  GtkWidget *frame21;
  GtkWidget *CB_LANGUE;
  GtkWidget *E_LANGUE;
  GtkWidget *dialog_action_area40;
  GtkWidget *BT_PREFS_OK;
  GtkWidget *BT_PREFS_ANNUL;

  W_PREFS = gnome_dialog_new (_(texte[170]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_PREFS), "W_PREFS", W_PREFS);
  GTK_WINDOW (W_PREFS)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_PREFS), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_PREFS), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_PREFS), FALSE, FALSE, FALSE);

  dialog_vbox40 = GNOME_DIALOG (W_PREFS)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_PREFS), "dialog_vbox40", dialog_vbox40);
  gtk_widget_show (dialog_vbox40);

  vbox20 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox20);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "vbox20", vbox20,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox20);
  gtk_box_pack_start (GTK_BOX (dialog_vbox40), vbox20, TRUE, TRUE, 0);

  frame19 = gtk_frame_new (_(texte[171]));
  gtk_widget_ref (frame19);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "frame19", frame19,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame19);
  gtk_box_pack_start (GTK_BOX (vbox20), frame19, FALSE, FALSE, 0);

  vbox21 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox21);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "vbox21", vbox21,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox21);
  gtk_container_add (GTK_CONTAINER (frame19), vbox21);

  IMG_BACK = gtk_type_new (gnome_pixmap_get_type ());
  gtk_widget_ref (IMG_BACK);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "IMG_BACK", IMG_BACK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (IMG_BACK);
  gtk_box_pack_start (GTK_BOX (vbox21), IMG_BACK, FALSE, FALSE, 0);

  EF_BACKGROUND = gnome_file_entry_new (NULL, NULL);
  gtk_widget_ref (EF_BACKGROUND);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "EF_BACKGROUND", EF_BACKGROUND,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (EF_BACKGROUND);
  gtk_box_pack_start (GTK_BOX (vbox21), EF_BACKGROUND, FALSE, FALSE, 0);

  E_BACKGROUND = gnome_file_entry_gtk_entry (GNOME_FILE_ENTRY (EF_BACKGROUND));
  gtk_widget_ref (E_BACKGROUND);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "E_BACKGROUND", E_BACKGROUND,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_BACKGROUND);
  gtk_entry_set_editable (GTK_ENTRY (E_BACKGROUND), FALSE);

  frame20 = gtk_frame_new (_(texte[172]));
  gtk_widget_ref (frame20);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "frame20", frame20,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame20);
  gtk_box_pack_start (GTK_BOX (vbox20), frame20, TRUE, TRUE, 0);

  CB_WINDOW = gtk_combo_new ();
  gtk_widget_ref (CB_WINDOW);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "CB_WINDOW", CB_WINDOW,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_WINDOW);
  gtk_container_add (GTK_CONTAINER (frame20), CB_WINDOW);
  CB_WINDOW_items = g_list_append (CB_WINDOW_items, (gpointer) _("640x480"));
  CB_WINDOW_items = g_list_append (CB_WINDOW_items, (gpointer) _("800x600"));
  CB_WINDOW_items = g_list_append (CB_WINDOW_items, (gpointer) _("1024x768"));
  gtk_combo_set_popdown_strings (GTK_COMBO (CB_WINDOW), CB_WINDOW_items);
  g_list_free (CB_WINDOW_items);

  E_WINDOW = GTK_COMBO (CB_WINDOW)->entry;
  gtk_widget_ref (E_WINDOW);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "E_WINDOW", E_WINDOW,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_WINDOW);
  gtk_entry_set_text (GTK_ENTRY (E_WINDOW), _("640x480"));

  frame21 = gtk_frame_new (_(texte[210]));
  gtk_widget_ref (frame21);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "frame21", frame21,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame21);
  gtk_box_pack_start (GTK_BOX (vbox20), frame21, TRUE, TRUE, 0);

  CB_LANGUE = gnome_entry_new (NULL);
  gtk_widget_ref (CB_LANGUE);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "CB_LANGUE", CB_LANGUE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CB_LANGUE);
  gtk_container_add (GTK_CONTAINER (frame21), CB_LANGUE);
  gnome_entry_set_max_saved (GNOME_ENTRY (CB_LANGUE), 255);

  E_LANGUE = gnome_entry_gtk_entry (GNOME_ENTRY (CB_LANGUE));
  gtk_widget_ref (E_LANGUE);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "E_LANGUE", E_LANGUE,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_LANGUE);

  dialog_action_area40 = GNOME_DIALOG (W_PREFS)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_PREFS), "dialog_action_area40", dialog_action_area40);
  gtk_widget_show (dialog_action_area40);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area40), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area40), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_PREFS), GNOME_STOCK_BUTTON_OK);
  BT_PREFS_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_PREFS)->buttons)->data);
  gtk_widget_ref (BT_PREFS_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "BT_PREFS_OK", BT_PREFS_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_PREFS_OK);
  GTK_WIDGET_SET_FLAGS (BT_PREFS_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_PREFS), GNOME_STOCK_BUTTON_CANCEL);
  BT_PREFS_ANNUL = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_PREFS)->buttons)->data);
  gtk_widget_ref (BT_PREFS_ANNUL);
  gtk_object_set_data_full (GTK_OBJECT (W_PREFS), "BT_PREFS_ANNUL", BT_PREFS_ANNUL,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_PREFS_ANNUL);
  GTK_WIDGET_SET_FLAGS (BT_PREFS_ANNUL, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_PREFS), "destroy",
                      GTK_SIGNAL_FUNC (on_w_prefs_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (E_BACKGROUND), "changed",
                      GTK_SIGNAL_FUNC (on_e_background_changed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_PREFS_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_prefs_ok_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_PREFS_ANNUL), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_prefs_annul_clicked),
                      NULL);

  return W_PREFS;
}

GtkWidget*
create_W_EXPORT (void)
{
  GtkWidget *W_EXPORT;
  GtkWidget *dialog_vbox41;
  GtkWidget *vbox22;
  GtkWidget *label32;
  GtkWidget *CHK_EXPORT_CONFIG;
  GtkWidget *CHK_EXPORT_PROGRAMS;
  GtkWidget *dialog_action_area41;
  GtkWidget *BT_OK_EXPORT;
  GtkWidget *BT_ANNUL_EXPORT;

  W_EXPORT = gnome_dialog_new (_(texte[211]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_EXPORT), "W_EXPORT", W_EXPORT);
  GTK_WINDOW (W_EXPORT)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_EXPORT), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_EXPORT), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_EXPORT), FALSE, FALSE, FALSE);

  dialog_vbox41 = GNOME_DIALOG (W_EXPORT)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_EXPORT), "dialog_vbox41", dialog_vbox41);
  gtk_widget_show (dialog_vbox41);

  vbox22 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox22);
  gtk_object_set_data_full (GTK_OBJECT (W_EXPORT), "vbox22", vbox22,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox22);
  gtk_box_pack_start (GTK_BOX (dialog_vbox41), vbox22, TRUE, TRUE, 0);

  label32 = gtk_label_new (_(texte[212]));
  gtk_widget_ref (label32);
  gtk_object_set_data_full (GTK_OBJECT (W_EXPORT), "label32", label32,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label32);
  gtk_box_pack_start (GTK_BOX (vbox22), label32, FALSE, FALSE, 0);
  gtk_misc_set_padding (GTK_MISC (label32), 0, 15);

  CHK_EXPORT_CONFIG = gtk_check_button_new_with_label (_(texte[213]));
  gtk_widget_ref (CHK_EXPORT_CONFIG);
  gtk_object_set_data_full (GTK_OBJECT (W_EXPORT), "CHK_EXPORT_CONFIG", CHK_EXPORT_CONFIG,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_EXPORT_CONFIG);
  gtk_box_pack_start (GTK_BOX (vbox22), CHK_EXPORT_CONFIG, FALSE, FALSE, 0);

  CHK_EXPORT_PROGRAMS = gtk_check_button_new_with_label (_(texte[214]));
  gtk_widget_ref (CHK_EXPORT_PROGRAMS);
  gtk_object_set_data_full (GTK_OBJECT (W_EXPORT), "CHK_EXPORT_PROGRAMS", CHK_EXPORT_PROGRAMS,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CHK_EXPORT_PROGRAMS);
  gtk_box_pack_start (GTK_BOX (vbox22), CHK_EXPORT_PROGRAMS, FALSE, FALSE, 0);

  dialog_action_area41 = GNOME_DIALOG (W_EXPORT)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_EXPORT), "dialog_action_area41", dialog_action_area41);
  gtk_widget_show (dialog_action_area41);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area41), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area41), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_EXPORT), GNOME_STOCK_BUTTON_OK);
  BT_OK_EXPORT = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_EXPORT)->buttons)->data);
  gtk_widget_ref (BT_OK_EXPORT);
  gtk_object_set_data_full (GTK_OBJECT (W_EXPORT), "BT_OK_EXPORT", BT_OK_EXPORT,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_OK_EXPORT);
  GTK_WIDGET_SET_FLAGS (BT_OK_EXPORT, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_EXPORT), GNOME_STOCK_BUTTON_CANCEL);
  BT_ANNUL_EXPORT = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_EXPORT)->buttons)->data);
  gtk_widget_ref (BT_ANNUL_EXPORT);
  gtk_object_set_data_full (GTK_OBJECT (W_EXPORT), "BT_ANNUL_EXPORT", BT_ANNUL_EXPORT,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_ANNUL_EXPORT);
  GTK_WIDGET_SET_FLAGS (BT_ANNUL_EXPORT, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_EXPORT), "destroy",
                      GTK_SIGNAL_FUNC (on_w_export_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_EXPORT_CONFIG), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_export_config_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CHK_EXPORT_PROGRAMS), "clicked",
                      GTK_SIGNAL_FUNC (on_chk_export_programs_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_OK_EXPORT), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_ok_export_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_ANNUL_EXPORT), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_annul_export_clicked),
                      NULL);

  return W_EXPORT;
}
GtkWidget*
create_W_MENU (void)
{
  GtkWidget *W_MENU;
  GtkWidget *dialog_vbox42;
  GtkWidget *frame22;
  GtkWidget *E_MENU;
  GtkWidget *scrolledwindow10;
  GtkWidget *TAB_MENU;
  GtkWidget *label33;
  GtkWidget *dialog_action_area42;
  GtkWidget *BT_MENU_OK;
  GtkWidget *BT_MENU_KO;

  W_MENU = gnome_dialog_new (_(texte[204]), NULL);
  gtk_object_set_data (GTK_OBJECT (W_MENU), "W_MENU", W_MENU);
  gtk_widget_set_usize (W_MENU, 350, -2);
  GTK_WINDOW (W_MENU)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (W_MENU), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_MENU), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_MENU), FALSE, FALSE, FALSE);

  dialog_vbox42 = GNOME_DIALOG (W_MENU)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_MENU), "dialog_vbox42", dialog_vbox42);
  gtk_widget_show (dialog_vbox42);

  frame22 = gtk_frame_new (_(texte[206]));
  gtk_widget_ref (frame22);
  gtk_object_set_data_full (GTK_OBJECT (W_MENU), "frame22", frame22,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame22);
  gtk_box_pack_start (GTK_BOX (dialog_vbox42), frame22, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (frame22), 5);

  E_MENU = gtk_entry_new ();
  gtk_widget_ref (E_MENU);
  gtk_object_set_data_full (GTK_OBJECT (W_MENU), "E_MENU", E_MENU,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (E_MENU);
  gtk_container_add (GTK_CONTAINER (frame22), E_MENU);
  gtk_entry_set_editable (GTK_ENTRY (E_MENU), FALSE);

  scrolledwindow10 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow10);
  gtk_object_set_data_full (GTK_OBJECT (W_MENU), "scrolledwindow10", scrolledwindow10,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow10);
  gtk_box_pack_start (GTK_BOX (dialog_vbox42), scrolledwindow10, TRUE, TRUE, 0);

  TAB_MENU = gtk_clist_new (1);
  gtk_widget_ref (TAB_MENU);
  gtk_object_set_data_full (GTK_OBJECT (W_MENU), "TAB_MENU", TAB_MENU,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (TAB_MENU);
  gtk_container_add (GTK_CONTAINER (scrolledwindow10), TAB_MENU);
  gtk_widget_set_usize (TAB_MENU, -2, 200);
  gtk_clist_set_column_width (GTK_CLIST (TAB_MENU), 0, 80);
  gtk_clist_column_titles_show (GTK_CLIST (TAB_MENU));

  label33 = gtk_label_new (_(texte[218]));
  gtk_widget_ref (label33);
  gtk_object_set_data_full (GTK_OBJECT (W_MENU), "label33", label33,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label33);
  gtk_clist_set_column_widget (GTK_CLIST (TAB_MENU), 0, label33);

  dialog_action_area42 = GNOME_DIALOG (W_MENU)->action_area;
  gtk_object_set_data (GTK_OBJECT (W_MENU), "dialog_action_area42", dialog_action_area42);
  gtk_widget_show (dialog_action_area42);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area42), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area42), 8);

  gnome_dialog_append_button (GNOME_DIALOG (W_MENU), GNOME_STOCK_BUTTON_OK);
  BT_MENU_OK = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_MENU)->buttons)->data);
  gtk_widget_ref (BT_MENU_OK);
  gtk_object_set_data_full (GTK_OBJECT (W_MENU), "BT_MENU_OK", BT_MENU_OK,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_MENU_OK);
  GTK_WIDGET_SET_FLAGS (BT_MENU_OK, GTK_CAN_DEFAULT);

  gnome_dialog_append_button (GNOME_DIALOG (W_MENU), GNOME_STOCK_BUTTON_CANCEL);
  BT_MENU_KO = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_MENU)->buttons)->data);
  gtk_widget_ref (BT_MENU_KO);
  gtk_object_set_data_full (GTK_OBJECT (W_MENU), "BT_MENU_KO", BT_MENU_KO,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_MENU_KO);
  GTK_WIDGET_SET_FLAGS (BT_MENU_KO, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (W_MENU), "destroy",
                      GTK_SIGNAL_FUNC (on_w_menu_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (TAB_MENU), "select_row",
                      GTK_SIGNAL_FUNC (on_tab_menu_select_row),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_MENU_OK), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_menu_ok_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_MENU_KO), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_menu_ko_clicked),
                      NULL);

  return W_MENU;
}

GtkWidget*
create_W_INFO_MAJ (void)
{
  GtkWidget *W_INFO_MAJ;
  GtkWidget *dialog_vbox43;
  GtkWidget *BT_WARN_MAJ;
  GtkWidget *dialog_action_area43;

  /* We create it with an OK button, and then remove the button, to work
     around a bug in gnome-libs. */
  W_INFO_MAJ = gnome_message_box_new (_(texte[207]),
                              GNOME_MESSAGE_BOX_INFO,
                              GNOME_STOCK_BUTTON_OK, NULL);
  gtk_container_remove (GTK_CONTAINER (GNOME_DIALOG (W_INFO_MAJ)->action_area), GNOME_DIALOG (W_INFO_MAJ)->buttons->data);
  GNOME_DIALOG (W_INFO_MAJ)->buttons = NULL;
  gtk_object_set_data (GTK_OBJECT (W_INFO_MAJ), "W_INFO_MAJ", W_INFO_MAJ);
  gtk_window_set_title (GTK_WINDOW (W_INFO_MAJ), _(texte[40]));
  gtk_window_set_position (GTK_WINDOW (W_INFO_MAJ), GTK_WIN_POS_CENTER);
  gtk_window_set_modal (GTK_WINDOW (W_INFO_MAJ), TRUE);
  gtk_window_set_policy (GTK_WINDOW (W_INFO_MAJ), FALSE, FALSE, FALSE);

  dialog_vbox43 = GNOME_DIALOG (W_INFO_MAJ)->vbox;
  gtk_object_set_data (GTK_OBJECT (W_INFO_MAJ), "dialog_vbox43", dialog_vbox43);
  gtk_widget_show (dialog_vbox43);

  gnome_dialog_append_button (GNOME_DIALOG (W_INFO_MAJ), GNOME_STOCK_BUTTON_OK);
  BT_WARN_MAJ = GTK_WIDGET (g_list_last (GNOME_DIALOG (W_INFO_MAJ)->buttons)->data);
  gtk_widget_ref (BT_WARN_MAJ);
  gtk_object_set_data_full (GTK_OBJECT (W_INFO_MAJ), "BT_WARN_MAJ", BT_WARN_MAJ,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (BT_WARN_MAJ);
  GTK_WIDGET_SET_FLAGS (BT_WARN_MAJ, GTK_CAN_DEFAULT);

  dialog_action_area43 = GNOME_DIALOG (W_INFO_MAJ)->action_area;
  gtk_widget_ref (dialog_action_area43);
  gtk_object_set_data_full (GTK_OBJECT (W_INFO_MAJ), "dialog_action_area43", dialog_action_area43,
                            (GtkDestroyNotify) gtk_widget_unref);

  gtk_signal_connect (GTK_OBJECT (W_INFO_MAJ), "destroy",
                      GTK_SIGNAL_FUNC (on_w_info_maj_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (BT_WARN_MAJ), "clicked",
                      GTK_SIGNAL_FUNC (on_bt_warn_maj_clicked),
                      NULL);

  return W_INFO_MAJ;
}