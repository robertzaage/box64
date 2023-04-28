/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.17) *
 *******************************************************************/
#ifndef __wrappedgtk3TYPES_H_
#define __wrappedgtk3TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFi_t)(int32_t);
typedef void (*vFpp_t)(void*, void*);
typedef void (*vFpA_t)(void*, va_list);
typedef int32_t (*iFLp_t)(uintptr_t, void*);
typedef int32_t (*iFpp_t)(void*, void*);
typedef void* (*pFuV_t)(uint32_t, ...);
typedef void (*vFpiA_t)(void*, int32_t, va_list);
typedef void (*vFppp_t)(void*, void*, void*);
typedef void (*vFppV_t)(void*, void*, ...);
typedef uint32_t (*uFupp_t)(uint32_t, void*, void*);
typedef void (*vFpppi_t)(void*, void*, void*, int32_t);
typedef void (*vFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);
typedef void (*vFpippp_t)(void*, int32_t, void*, void*, void*);
typedef void (*vFppppp_t)(void*, void*, void*, void*, void*);
typedef int32_t (*iFppuppp_t)(void*, void*, uint32_t, void*, void*, void*);
typedef int32_t (*iFpppppp_t)(void*, void*, void*, void*, void*, void*);
typedef void (*vFpppppuu_t)(void*, void*, void*, void*, void*, uint32_t, uint32_t);
typedef void* (*pFppppppi_t)(void*, void*, void*, void*, void*, void*, int32_t);
typedef void* (*pFppppppp_t)(void*, void*, void*, void*, void*, void*, void*);
typedef uintptr_t (*LFppppppii_t)(void*, void*, void*, void*, void*, void*, int32_t, int32_t);
typedef void* (*pFpppppppi_t)(void*, void*, void*, void*, void*, void*, void*, int32_t);
typedef void* (*pFpippppppp_t)(void*, int32_t, void*, void*, void*, void*, void*, void*, void*);
typedef void* (*pFpipppppppi_t)(void*, int32_t, void*, void*, void*, void*, void*, void*, void*, int32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(gtk_type_class, pFi_t) \
	GO(gtk_builder_connect_signals, vFpp_t) \
	GO(gtk_init, vFpp_t) \
	GO(gtk_style_context_get_style_valist, vFpA_t) \
	GO(gtk_type_unique, iFLp_t) \
	GO(gtk_init_check, iFpp_t) \
	GO(gtk_tree_store_new, pFuV_t) \
	GO(gtk_style_context_get_valist, vFpiA_t) \
	GO(gtk_builder_connect_signals_full, vFppp_t) \
	GO(gtk_container_forall, vFppp_t) \
	GO(gtk_container_foreach, vFppp_t) \
	GO(gtk_menu_attach_to_widget, vFppp_t) \
	GO(gtk_dialog_add_buttons, vFppV_t) \
	GO(gtk_message_dialog_format_secondary_markup, vFppV_t) \
	GO(gtk_message_dialog_format_secondary_text, vFppV_t) \
	GO(gtk_timeout_add, uFupp_t) \
	GO(gtk_enumerate_printers, vFpppi_t) \
	GO(gtk_object_set_data_full, vFpppp_t) \
	GO(gtk_print_job_send, vFpppp_t) \
	GO(gtk_stock_set_translate_func, vFpppp_t) \
	GO(gtk_tree_sortable_set_default_sort_func, vFpppp_t) \
	GO(gtk_tree_view_set_search_equal_func, vFpppp_t) \
	GO(gtk_text_iter_backward_find_char, iFpppp_t) \
	GO(gtk_text_iter_forward_find_char, iFpppp_t) \
	GO(gtk_tree_sortable_set_sort_func, vFpippp_t) \
	GO(gtk_tree_view_column_set_cell_data_func, vFppppp_t) \
	GO(gtk_clipboard_set_with_data, iFppuppp_t) \
	GO(gtk_clipboard_set_with_owner, iFppuppp_t) \
	GO(gtk_init_with_args, iFpppppp_t) \
	GO(gtk_menu_popup, vFpppppuu_t) \
	GO(gtk_toolbar_insert_stock, pFppppppi_t) \
	GO(gtk_toolbar_append_item, pFppppppp_t) \
	GO(gtk_toolbar_prepend_item, pFppppppp_t) \
	GO(gtk_signal_connect_full, LFppppppii_t) \
	GO(gtk_toolbar_insert_item, pFpppppppi_t) \
	GO(gtk_toolbar_append_element, pFpippppppp_t) \
	GO(gtk_toolbar_prepend_element, pFpippppppp_t) \
	GO(gtk_toolbar_insert_element, pFpipppppppi_t)

#endif // __wrappedgtk3TYPES_H_
