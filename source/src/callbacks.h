#include <gnome.h>


void
on_w_xwine_destroy                     (GtkObject       *object,
                                        gpointer         user_data);

void
on_m_liste_prog_activate               (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_winemine_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_admin_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_regedit_activate                  (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_progman_activate                  (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_uninst_activate                   (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_notepad_activate                  (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_cmd_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_winhelp_activate                  (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_calc_activate                     (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_editor_activate                   (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_reset_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_install_activate                  (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_voir_log_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_wine_config_activate              (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_xwine_pref_activate               (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_faq_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_manual_activate                   (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_about_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_exec_activate                     (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_quitter_activate                  (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_bt_refresh_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_kill_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_obj_clock_draw                      (GtkWidget       *widget,
                                        GdkRectangle    *area,
                                        gpointer         user_data);

void
on_w_quitter_destroy                   (GtkObject       *object,
                                        gpointer         user_data);

void
on_rb_del_log_toggled                  (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb_keep_log_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_bt_quitter_ok_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_executer_destroy                  (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_exec_parcour_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_exec_ok_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_about_destroy                     (GtkObject       *object,
                                        gpointer         user_data);

void
on_w_log_destroy                       (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_log_imprime_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_log_clear_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_wine_config_destroy               (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_wine_config_ok_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_parcour_exe_destroy               (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_parcour_exe_ok_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_warn_not_available_destroy          (GtkObject       *object,
                                        gpointer         user_data);

void
on_err_prog_select_destroy             (GtkObject       *object,
                                        gpointer         user_data);

void
on_inf_use_cd_destroy                  (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_use_cd_ok_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_add_param_destroy                 (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_param_ok_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_install_app_destroy               (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_parcour_app_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_chk_use_cd_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_chk_param_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_chk_msdos_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_app_dll_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_app_gfx_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_app_ok_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_gest_app_destroy                  (GtkObject       *object,
                                        gpointer         user_data);

void
on_tab_app_select_row                  (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data);

void
on_bt_app_new_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_app_modify_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_app_del_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_app_desk_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_warn_del_app_destroy                (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_del_app_oui_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_err_prog_empty_destroy              (GtkObject       *object,
                                        gpointer         user_data);

void
on_w_run_app_destroy                   (GtkObject       *object,
                                        gpointer         user_data);

void
on_tab_run_app_select_row              (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data);

void
on_bt_run_ok_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_calc_destroy                      (GtkObject       *object,
                                        gpointer         user_data);

void
on_err_aide_destroy                    (GtkObject       *object,
                                        gpointer         user_data);

void
on_w_editeur_destroy                   (GtkObject       *object,
                                        gpointer         user_data);

void
on_m_edit_new_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_edit_open_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_edit_save_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_edit_print_activate               (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_m_edit_quit_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_warn_edit_quit_destroy              (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_edit_quit_ok_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_edit_file_selec_destroy           (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_file_ok_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_gest_drive_destroy                (GtkObject       *object,
                                        gpointer         user_data);

void
on_tab_drive_select_row                (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data);

void
on_bt_drive_new_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_drive_modify_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_drive_del_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_drive_cfg_destroy                 (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_drive_path_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_drive_cfg_ok_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_err_drive_sel_destroy               (GtkObject       *object,
                                        gpointer         user_data);

void
on_err_drive_path_destroy              (GtkObject       *object,
                                        gpointer         user_data);

void
on_warn_drive_del_destroy              (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_drive_del_oui_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_drive_sel_path_destroy            (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_sel_path_ok_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_err_not_path_destroy                (GtkObject       *object,
                                        gpointer         user_data);

void
on_w_wine_system_destroy               (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_system_ok_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_dll_gest_destroy                  (GtkObject       *object,
                                        gpointer         user_data);

void
on_tab_override_select_row             (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data);

void
on_bt_dll_gest_new_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_dll_gest_modify_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_dll_gest_del_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_dll_gest_ok_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_dll_override_destroy              (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_dll_override_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_err_dll_sel_destroy                 (GtkObject       *object,
                                        gpointer         user_data);

void
on_err_dll_name_destroy                (GtkObject       *object,
                                        gpointer         user_data);

void
on_w_wine_look_destroy                 (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_wine_look_ok_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_err_winesetuptk_destroy             (GtkObject       *object,
                                        gpointer         user_data);

void
on_w_wine_gfx_destroy                  (GtkObject       *object,
                                        gpointer         user_data);

void
on_chk_double_buffer_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_chk_dga_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_chk_xshm_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_chk_dxgrab_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_wine_gfx_ok_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_app_dll_destroy                   (GtkObject       *object,
                                        gpointer         user_data);

void
on_tab_app_dll_select_row              (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data);

void
on_bt_app_dll_new_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_app_dll_modify_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_app_dll_del_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_app_dll_ok_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_err_app_not_found_destroy           (GtkObject       *object,
                                        gpointer         user_data);

void
on_w_wine_port_destroy                 (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_wine_port_ok_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_wine_registry_destroy             (GtkObject       *object,
                                        gpointer         user_data);

void
on_chk_load_gen_reg_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_chk_load_pers_reg_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_chk_load_win_reg_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_chk_save_pers_reg_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_wine_registry_ok_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_wine_media_destroy                (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_wine_media_ok_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_wine_console_destroy              (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_wine_console_ok_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_warn_restore_destroy                (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_restore_ok_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_wine_version_destroy              (GtkObject       *object,
                                        gpointer         user_data);

void
on_chk_wine_msdos_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_wine_version_ok_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_config_destroy                    (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_drive_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_folder_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_version_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_dll_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_look_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_gfx_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_ports_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_registry_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_console_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_media_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_setup_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_config_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_restore_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_debug_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_export_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_config_close_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_WARN_DEBUG_destroy                  (GtkObject       *object,
                                        gpointer         user_data);

void
on_WARN_NODEBUG_destroy                (GtkObject       *object,
                                        gpointer         user_data);

void
on_w_prefs_destroy                     (GtkObject       *object,
                                        gpointer         user_data);

void
on_e_background_changed                (GtkEditable     *editable,
                                        gpointer         user_data);

void
on_bt_prefs_ok_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_prefs_annul_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_export_destroy                    (GtkObject       *object,
                                        gpointer         user_data);

void
on_chk_export_config_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_chk_export_programs_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_ok_export_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_annul_export_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_menu_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_add_pgm_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_log_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_menu_destroy                      (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_menu_ok_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_menu_ko_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_w_info_maj_destroy                  (GtkObject       *object,
                                        gpointer         user_data);

void
on_bt_warn_maj_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_bt_test_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_tab_menu_select_row                 (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data);
