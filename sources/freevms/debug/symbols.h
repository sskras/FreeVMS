static const char *symbols[] = {
"00000000010000b0", 
"dbg$backtrace_amd64", 
"0000000001000110", 
"dbg$backtrace", 
"0000000001000150", 
"dbg$sigma0", 
"0000000001000360", 
"dev$init", 
"0000000001000510", 
"jobctl$bfl_alloc", 
"0000000001000600", 
"jobctl$bfl_free", 
"0000000001000670", 
"jobctl$bfl_new", 
"00000000010006f0", 
"jobctl$utcb_init", 
"0000000001000740", 
"jobctl$threadno", 
"0000000001000750", 
"jobctl$pd_setup", 
"00000000010007f0", 
"jobctl$pd_create", 
"0000000001000910", 
"jobctl$thread_init", 
"00000000010009d0", 
"jobctl$pd_init", 
"0000000001000a50", 
"set_quota", 
"0000000001000aa0", 
"new_quota", 
"0000000001000ae0", 
"jobctl$thread_free", 
"0000000001000b20", 
"jobctl$thread_start", 
"0000000001000d20", 
"jobctl$session_delete", 
"0000000001000e60", 
"jobctl$thread_delete", 
"0000000001000f70", 
"jobctl$thread_lookup", 
"0000000001000f90", 
"jobctl$pd_add_clist", 
"0000000001001010", 
"jobctl$pd_create_thread", 
"0000000001001590", 
"jobctl$rfl_alloc", 
"00000000010015f0", 
"jobctl$rfl_insert_range", 
"0000000001001710", 
"jobctl$rfl_free", 
"0000000001001720", 
"jobctl$rfl_new", 
"0000000001001730", 
"init$process", 
"00000000010017c0", 
"__vga_putc", 
"00000000010018c0", 
"__l4_putc", 
"00000000010019c0", 
"__l4_getc", 
"00000000010019e0", 
"get_hex", 
"0000000001001a70", 
"__l4_vsnprintf", 
"0000000001002db0", 
"__l4_snprintf", 
"0000000001002e50", 
"__l4_printf", 
"0000000001002f50", 
"__l4_putchar", 
"0000000001002f70", 
"__l4_puts", 
"0000000001002fe0", 
"hash_lookup", 
"0000000001003080", 
"hash_insert", 
"0000000001003150", 
"hash_remove", 
"0000000001003230", 
"hash_init", 
"00000000010032f0", 
"dl_list_init", 
"0000000001003300", 
"ll_insert_before", 
"0000000001003350", 
"ll_new", 
"0000000001003380", 
"dl_list_create_back", 
"00000000010033c0", 
"dl_list_create_front", 
"0000000001003400", 
"ll_delete", 
"0000000001003430", 
"dl_list_clear", 
"0000000001003480", 
"lock$mutex_init", 
"00000000010034a0", 
"lock$mutex_count_unlock", 
"0000000001003510", 
"lock$mutex_count_lock", 
"0000000001003580", 
"try_lock_amd64", 
"00000000010035b0", 
"sec$check", 
"00000000010036b0", 
"sec$create_capability", 
"00000000010036e0", 
"rand$init", 
"0000000001003730", 
"rand$extract_number", 
"00000000010038d0", 
"rand$extract_number", 
"0000000001003930", 
"_start", 
"0000000001003930", 
"_stext", 
"0000000001003951", 
"_return_from_main", 
"0000000001003970", 
"sys$init", 
"0000000001003fc0", 
"sys$loop", 
"0000000001004190", 
"strstr", 
"0000000001004240", 
"main", 
"0000000001004820", 
"sys$parsing", 
"0000000001004a60", 
"vms$min_pagebits", 
"0000000001004aa0", 
"vms$min_pagesize", 
"0000000001004ae0", 
"vms$page_round_down", 
"0000000001004af0", 
"vms$page_round_up", 
"0000000001004b10", 
"vms$biggest_fpage", 
"0000000001004c20", 
"vms$remove_chunk", 
"0000000001004df0", 
"vms$remove_virtmem", 
"0000000001004e30", 
"vms$back_mem", 
"0000000001005010", 
"vms$fpage_alloc_internal", 
"00000000010051c0", 
"vms$fpage_alloc", 
"0000000001005640", 
"vms$fpage_clear_internal", 
"00000000010058e0", 
"vms$fpage_free_internal", 
"0000000001005940", 
"vms$fpage_free_chunk", 
"0000000001005990", 
"vms$fpage_free_list", 
"0000000001005a60", 
"vms$fpage_remove_chunk", 
"0000000001005c40", 
"vms$fpage_alloc_chunk", 
"0000000001005d60", 
"vms$fpage_alloc_list", 
"0000000001005f60", 
"ObjBTSearch", 
"0000000001006030", 
"BTInsert", 
"0000000001006510", 
"ObjBTIns", 
"0000000001006670", 
"vms$free", 
"0000000001006740", 
"vms$alloc", 
"00000000010068d0", 
"vms$alloc_init", 
"00000000010068f0", 
"vms$add_initial_object", 
"0000000001006970", 
"vms$find_memory_info", 
"0000000001006a60", 
"vms$populate_init_objects", 
"0000000001006b60", 
"vms$bootstrap", 
"0000000001006f90", 
"T.156", 
"0000000001007180", 
"vms$init", 
"00000000010078d0", 
"vms$objtable_init", 
"0000000001007900", 
"ObjFreePage", 
"0000000001007910", 
"ObjAllocPage", 
"0000000001007920", 
"objtable_insert", 
"0000000001007970", 
"objtable_setup_internal", 
"00000000010079f0", 
"objtable_setup_utcb", 
"0000000001007a90", 
"objtable_setup_fixed", 
"0000000001007b80", 
"objtable_setup", 
"0000000001007c80", 
"vms$objtable_lookup", 
"0000000001007cf0", 
"vms$pagefault", 
"0000000001008060", 
"vms$sigma0_map_fpage", 
"0000000001008530", 
"vms$sigma0_map", 
"0000000001008760", 
"vms$initmem", 
"0000000001008780", 
"vms$memsection_back", 
"00000000010088f0", 
"vms$slab_cache_free", 
"0000000001008940", 
"vms$memsection_page_map", 
"0000000001008b40", 
"vms$memsection_create_cache", 
"0000000001008e10", 
"vms$slab_cache_alloc", 
"0000000001008ee0", 
"vms$pd_create_memsection", 
"0000000001009000", 
"__L4_Init", 
"00000000010090a0", 
"dbg$hex_to_bin", 
"0000000001009270", 
"dbg$symbol", 
0 };
