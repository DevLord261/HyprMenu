#pragma once

#include <gtk/gtk.h>
#include <gio/gdesktopappinfo.h>

G_BEGIN_DECLS

#define HYPRMENU_TYPE_CATEGORY_LIST (hyprmenu_category_list_get_type())
G_DECLARE_FINAL_TYPE (HyprMenuCategoryList, hyprmenu_category_list, HYPRMENU, CATEGORY_LIST, GtkBox)

HyprMenuCategoryList* hyprmenu_category_list_new (void);
void hyprmenu_category_list_add_category (HyprMenuCategoryList *self, const char *category_name, GtkWidget *app_widget);
GtkWidget* hyprmenu_category_list_get_category_content (HyprMenuCategoryList *self, const char *category_name);
void hyprmenu_category_list_clear (HyprMenuCategoryList *self);
void hyprmenu_category_list_set_grid_view (HyprMenuCategoryList *self, gboolean use_grid_view);

/* New functions */
gboolean hyprmenu_category_list_add_app (HyprMenuCategoryList *self, GDesktopAppInfo *app_info);
gboolean hyprmenu_category_list_filter (HyprMenuCategoryList *self, const char *search_text);

G_END_DECLS 