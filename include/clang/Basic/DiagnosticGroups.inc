
#ifdef GET_DIAG_ARRAYS
static const int16_t DiagArrays[] = {
  /* Empty */ -1,
  /* DiagArray1 */ diag::warn_pragma_message, -1,
  /* DiagArray2 */ diag::pp_hash_warning, -1,
  /* DiagArray3 */ diag::warn_cfstring_truncated, -1,
  /* DiagArray5 */ diag::warn_independentclass_attribute, diag::warn_ptr_independentclass_attribute, -1,
  /* DiagArray6 */ diag::warn_nsobject_attribute, -1,
  /* DiagArray8 */ diag::warn_abs_too_small, diag::warn_pointer_abs, diag::warn_unsigned_abs, diag::warn_wrong_absolute_value_type, -1,
  /* DiagArray9 */ diag::warn_abstract_final_class, -1,
  /* DiagArray10 */ diag::warn_abstract_vbase_init_ignored, -1,
  /* DiagArray12 */ diag::warn_taking_address_of_packed_member, -1,
  /* DiagArray13 */ diag::ext_typecheck_addrof_temporary, -1,
  /* DiagArray15 */ diag::warn_not_xl_compatible, diag::warn_pragma_align_not_xl_compatible, -1,
  /* DiagArray16 */ diag::warn_param_mismatched_alignment, -1,
  /* DiagArray18 */ diag::warn_alloca, -1,
  /* DiagArray19 */ diag::warn_alloca_align_alignof, -1,
  /* DiagArray20 */ diag::warn_always_inline_coroutine, -1,
  /* DiagArray21 */ diag::warn_ambiguous_suitable_delete_function_found, -1,
  /* DiagArray22 */ diag::warn_misplaced_ellipsis_vararg, -1,
  /* DiagArray23 */ diag::warn_pp_ambiguous_macro, -1,
  /* DiagArray24 */ diag::ext_nested_name_member_ref_lookup_ambiguous, -1,
  /* DiagArray25 */ diag::ext_ovl_ambiguous_oper_binary_reversed, -1,
  /* DiagArray26 */ diag::warn_incompatible_analyzer_plugin_api, -1,
  /* DiagArray27 */ diag::warn_arith_conv_mixed_anon_enum_types, -1,
  /* DiagArray28 */ diag::ext_abstract_pack_declarator_parens, -1,
  /* DiagArray30 */ diag::warn_arc_bridge_cast_nonarc, -1,
  /* DiagArray31 */ diag::warn_arc_possible_repeated_use_of_weak, -1,
  /* DiagArray32 */ diag::warn_arc_object_memaccess, -1,
  /* DiagArray33 */ diag::warn_arc_perform_selector_leaks, -1,
  /* DiagArray34 */ diag::warn_arc_repeated_use_of_weak, -1,
  /* DiagArray35 */ diag::warn_arc_retain_cycle, -1,
  /* DiagArray36 */ diag::warn_arc_literal_assign, diag::warn_arc_retained_assign, diag::warn_arc_retained_property_assign, -1,
  /* DiagArray37 */ diag::warn_argument_invalid_range, -1,
  /* DiagArray38 */ diag::warn_argument_undefined_behaviour, -1,
  /* DiagArray39 */ diag::warn_array_index_exceeds_bounds, diag::warn_array_index_exceeds_max_addressable_bounds, diag::warn_array_index_precedes_bounds, diag::warn_ptr_arith_exceeds_max_addressable_bounds, diag::warn_static_array_too_small, -1,
  /* DiagArray40 */ diag::warn_ptr_arith_exceeds_bounds, diag::warn_ptr_arith_precedes_bounds, -1,
  /* DiagArray42 */ diag::warn_asm_mismatched_size_modifier, -1,
  /* DiagArray43 */ diag::warn_not_in_enum_assignment, -1,
  /* DiagArray44 */ diag::warn_assume_side_effects, -1,
  /* DiagArray46 */ diag::warn_atimport_in_framework_header, -1,
  /* DiagArray47 */ diag::warn_atomic_op_misaligned, diag::warn_atomic_op_oversized, -1,
  /* DiagArray48 */ diag::warn_atomic_implicit_seq_cst, -1,
  /* DiagArray49 */ diag::warn_atomic_op_has_invalid_memory_order, -1,
  /* DiagArray51 */ diag::warn_atomic_property_rule, -1,
  /* DiagArray52 */ diag::warn_attribute_packed_for_bitfield, -1,
  /* DiagArray53 */ diag::warn_fe_backend_warning_attr, -1,
  /* DiagArray55 */ diag::warn_drv_disabling_vptr_no_rtti_default, -1,
  /* DiagArray56 */ diag::warn_auto_module_import, -1,
  /* DiagArray57 */ diag::ext_auto_storage_class, -1,
  /* DiagArray58 */ diag::warn_auto_var_is_id, -1,
  /* DiagArray59 */ diag::warn_availability_and_unavailable, diag::warn_availability_fuchsia_unavailable_minor, diag::warn_availability_on_static_initializer, diag::warn_availability_swift_unavailable_deprecated_only, diag::warn_availability_unknown_platform, diag::warn_availability_version_ordering, diag::warn_expected_consistent_version_separator, diag::warn_mismatched_availability, diag::warn_mismatched_availability_override, diag::warn_mismatched_availability_override_unavail, -1,
  /* DiagArray60 */ diag::warn_drv_avr_family_linking_stdlibs_not_implemented, diag::warn_drv_avr_gcc_not_found, diag::warn_drv_avr_libc_not_found, diag::warn_drv_avr_linker_section_addresses_not_implemented, diag::warn_drv_avr_mcu_not_specified, diag::warn_drv_avr_stdlib_not_linked, -1,
  /* DiagArray61 */ diag::warn_fe_backend_plugin, -1,
  /* DiagArray62 */ diag::backslash_newline_space, -1,
  /* DiagArray63 */ diag::warn_bad_function_cast, -1,
  /* DiagArray65 */ diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, -1,
  /* DiagArray66 */ diag::ext_decomp_decl_cond, -1,
  /* DiagArray67 */ diag::ext_bit_int, -1,
  /* DiagArray68 */ diag::warn_impcast_bitfield_precision_constant, -1,
  /* DiagArray69 */ diag::warn_bitfield_too_small_for_enum, diag::warn_signed_bitfield_enum_conversion, diag::warn_unsigned_bitfield_assigned_signed_enum, -1,
  /* DiagArray70 */ diag::warn_bitfield_width_exceeds_type_width, -1,
  /* DiagArray71 */ diag::warn_precedence_bitwise_conditional, -1,
  /* DiagArray72 */ diag::warn_bitwise_instead_of_logical, -1,
  /* DiagArray73 */ diag::warn_bitwise_op_in_bitwise_op, -1,
  /* DiagArray74 */ diag::warn_block_capture_autoreleasing, -1,
  /* DiagArray75 */ diag::warn_impcast_bool_to_null_pointer, -1,
  /* DiagArray77 */ diag::warn_bitwise_negation_bool, -1,
  /* DiagArray78 */ diag::warn_braces_around_init, -1,
  /* DiagArray79 */ diag::warn_incompatible_branch_protection_option, diag::warn_target_unsupported_branch_protection_attribute, diag::warn_unsupported_branch_protection, diag::warn_unsupported_branch_protection_spec, -1,
  /* DiagArray80 */ diag::warn_objc_invalid_bridge, diag::warn_objc_invalid_bridge_to_cf, -1,
  /* DiagArray81 */ diag::warn_assume_aligned_too_great, -1,
  /* DiagArray82 */ diag::ext_pp_redef_builtin_macro, diag::ext_pp_undef_builtin_macro, -1,
  /* DiagArray83 */ diag::warn_builtin_chk_overflow, -1,
  /* DiagArray84 */ diag::warn_implicit_decl_requires_sysheader, -1,
  /* DiagArray85 */ diag::warn_zero_size_struct_union_compat, -1,
  /* DiagArray89 */ diag::ext_old_implicitly_unsigned_long_cxx, diag::warn_auto_storage_class, diag::warn_cxx11_compat_user_defined_literal, diag::warn_cxx11_keyword, diag::warn_cxx11_right_shift_in_template_arg, diag::warn_explicit_instantiation_inline_0x, diag::warn_explicit_instantiation_must_be_global_0x, diag::warn_explicit_instantiation_out_of_scope_0x, diag::warn_explicit_instantiation_unqualified_wrong_namespace_0x, diag::warn_old_implicitly_unsigned_long_cxx, -1,
  /* DiagArray90 */ diag::warn_deprecated_string_literal_conversion, -1,
  /* DiagArray92 */ diag::warn_cxx11_compat_reserved_user_defined_literal, -1,
  /* DiagArray93 */ diag::ext_alias_declaration, diag::ext_array_size_conversion, diag::ext_auto_type_specifier, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_defaulted_deleted_function, diag::ext_enum_friend, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_conversion_functions, diag::ext_extern_template, diag::ext_for_range, diag::ext_generalized_initializer_lists, diag::ext_nested_name_spec_is_enum, diag::ext_nonclass_type_friend, diag::ext_nonstatic_member_init, diag::ext_override_control_keyword, diag::ext_ref_qualifier, diag::ext_rvalue_reference, diag::ext_scoped_enum, diag::ext_static_data_member_in_union, diag::ext_template_arg_object_internal, diag::ext_template_outside_of_template, diag::ext_template_parameter_default_in_function_template, diag::ext_typename_outside_of_template, diag::ext_unelaborated_friend_type, diag::ext_variadic_templates, -1,
  /* DiagArray94 */ diag::ext_extra_semi_cxx11, -1,
  /* DiagArray95 */ diag::ext_inline_namespace, -1,
  /* DiagArray96 */ diag::ext_cxx11_longlong, -1,
  /* DiagArray97 */ diag::ext_cce_narrowing, diag::ext_init_list_constant_narrowing, diag::ext_init_list_type_narrowing, diag::ext_init_list_variable_narrowing, diag::warn_init_list_constant_narrowing, diag::warn_init_list_type_narrowing, diag::warn_init_list_variable_narrowing, -1,
  /* DiagArray98 */ diag::ext_cxx14_attr, -1,
  /* DiagArray99 */ diag::ext_binary_literal_cxx14, -1,
  /* DiagArray102 */ diag::ext_constexpr_body_invalid_stmt, diag::ext_constexpr_body_multiple_return, diag::ext_constexpr_local_var, diag::ext_constexpr_type_definition, diag::ext_decltype_auto_type_specifier, diag::ext_init_capture, diag::ext_variable_template, -1,
  /* DiagArray103 */ diag::ext_cxx17_attr, -1,
  /* DiagArray105 */ diag::warn_cxx17_compat_exception_spec_in_signature, -1,
  /* DiagArray107 */ diag::ext_auto_new_list_init, diag::ext_constexpr_if, diag::ext_constexpr_on_lambda_cxx17, diag::ext_cxx_static_assert_no_message, diag::ext_decomp_decl, diag::ext_fold_expression, diag::ext_for_range_begin_end_types_differ, diag::ext_hex_literal_invalid, diag::ext_init_statement, diag::ext_inline_variable, diag::ext_multi_using_declaration, diag::ext_nested_namespace_definition, diag::ext_ns_enum_attribute, diag::ext_star_this_lambda_capture_cxx17, diag::ext_template_template_param_typename, diag::ext_using_attribute_ns, diag::ext_using_declaration_pack, -1,
  /* DiagArray112 */ diag::ext_cxx20_attr, -1,
  /* DiagArray113 */ diag::warn_cxx20_compat_aggregate_init_with_ctors, diag::warn_cxx20_compat_consteval, diag::warn_cxx20_compat_constinit, diag::warn_cxx20_compat_explicit_bool, diag::warn_cxx20_compat_spaceship, diag::warn_cxx20_compat_utf8_string, diag::warn_cxx20_keyword, -1,
  /* DiagArray115 */ diag::ext_cxx_designated_init, -1,
  /* DiagArray116 */ diag::ext_adl_only_template_id, diag::ext_bitfield_member_init, diag::ext_constexpr_body_invalid_stmt_cxx20, diag::ext_constexpr_ctor_missing_init, diag::ext_constexpr_function_try_block_cxx20, diag::ext_constexpr_local_var_no_init, diag::ext_constexpr_union_ctor_no_init, diag::ext_decomp_decl_spec, diag::ext_defaulted_comparison, diag::ext_equals_this_lambda_capture_cxx20, diag::ext_explicit_bool, diag::ext_for_range_init_stmt, diag::ext_init_capture_pack, diag::ext_inline_nested_namespace_definition, diag::ext_lambda_template_parameter_list, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_using_decl_class_member_enumerator, diag::ext_using_decl_scoped_enumerator, diag::ext_using_enum_declaration, -1,
  /* DiagArray120 */ diag::ext_alias_in_init_statement, diag::ext_consteval_if, diag::ext_cxx2b_size_t_suffix, diag::ext_decl_attrs_on_lambda, diag::ext_lambda_missing_parens, -1,
  /* DiagArray126 */ diag::warn_cxx11_compat_binary_literal, -1,
  /* DiagArray128 */ diag::warn_cxx98_compat_alias_declaration, diag::warn_cxx98_compat_alignas, diag::warn_cxx98_compat_alignof, diag::warn_cxx98_compat_attribute, diag::warn_cxx98_compat_auto_type_specifier, diag::warn_cxx98_compat_constexpr, diag::warn_cxx98_compat_ctor_list_init, diag::warn_cxx98_compat_decltype, diag::warn_cxx98_compat_defaulted_deleted_function, diag::warn_cxx98_compat_delegating_ctor, diag::warn_cxx98_compat_empty_scalar_initializer, diag::warn_cxx98_compat_empty_sizeless_initializer, diag::warn_cxx98_compat_enum_fixed_underlying_type, diag::warn_cxx98_compat_enum_friend, diag::warn_cxx98_compat_enum_nested_name_spec, diag::warn_cxx98_compat_explicit_conversion_functions, diag::warn_cxx98_compat_for_range, diag::warn_cxx98_compat_friend_is_member, diag::warn_cxx98_compat_generalized_initializer_lists, diag::warn_cxx98_compat_goto_into_protected_scope, diag::warn_cxx98_compat_indirect_goto_in_protected_scope, diag::warn_cxx98_compat_initializer_list_init, diag::warn_cxx98_compat_inline_namespace, diag::warn_cxx98_compat_lambda, diag::warn_cxx98_compat_less_colon_colon, diag::warn_cxx98_compat_literal_operator, diag::warn_cxx98_compat_literal_ucn_control_character, diag::warn_cxx98_compat_literal_ucn_escape_basic_scs, diag::warn_cxx98_compat_noexcept_decl, diag::warn_cxx98_compat_noexcept_expr, diag::warn_cxx98_compat_non_static_member_use, diag::warn_cxx98_compat_nonclass_type_friend, diag::warn_cxx98_compat_nonstatic_member_init, diag::warn_cxx98_compat_nontrivial_union_or_anon_struct_member, diag::warn_cxx98_compat_nullptr, diag::warn_cxx98_compat_override_control_keyword, diag::warn_cxx98_compat_pass_non_pod_arg_to_vararg, diag::warn_cxx98_compat_raw_string_literal, diag::warn_cxx98_compat_ref_qualifier, diag::warn_cxx98_compat_reference_list_init, diag::warn_cxx98_compat_rvalue_reference, diag::warn_cxx98_compat_scoped_enum, diag::warn_cxx98_compat_sfinae_access_control, diag::warn_cxx98_compat_static_assert, diag::warn_cxx98_compat_static_data_member_in_union, diag::warn_cxx98_compat_switch_into_protected_scope, diag::warn_cxx98_compat_template_arg_extra_parens, diag::warn_cxx98_compat_template_arg_null, diag::warn_cxx98_compat_template_arg_object_internal, diag::warn_cxx98_compat_template_outside_of_template, diag::warn_cxx98_compat_template_parameter_default_in_function_template, diag::warn_cxx98_compat_trailing_return_type, diag::warn_cxx98_compat_two_right_angle_brackets, diag::warn_cxx98_compat_typename_outside_of_template, diag::warn_cxx98_compat_unelaborated_friend_type, diag::warn_cxx98_compat_unicode_literal, diag::warn_cxx98_compat_unicode_type, diag::warn_cxx98_compat_using_decl_constructor, diag::warn_cxx98_compat_variadic_templates, -1,
  /* DiagArray129 */ diag::warn_cxx98_compat_temp_copy, -1,
  /* DiagArray130 */ diag::warn_cxx98_compat_top_level_semi, -1,
  /* DiagArray131 */ diag::warn_cxx98_compat_template_arg_local_type, -1,
  /* DiagArray132 */ diag::warn_cxx98_compat_array_size_conversion, diag::warn_cxx98_compat_cast_fn_obj, diag::warn_cxx98_compat_empty_fnmacro_arg, diag::warn_cxx98_compat_enumerator_list_comma, diag::warn_cxx98_compat_extern_template, diag::warn_cxx98_compat_longlong, diag::warn_cxx98_compat_no_newline_eof, diag::warn_cxx98_compat_pp_line_too_big, diag::warn_cxx98_compat_variadic_macro, -1,
  /* DiagArray133 */ diag::warn_cxx98_compat_template_arg_unnamed_type, -1,
  /* DiagArray134 */ diag::ext_anonymous_union, diag::ext_c11_anonymous_struct, diag::ext_c11_feature, diag::ext_typecheck_compare_complete_incomplete_pointers, -1,
  /* DiagArray135 */ diag::ext_c_static_assert_no_message, diag::ext_parameter_name_omitted_c2x, -1,
  /* DiagArray136 */ diag::warn_c99_compat_unicode_id, diag::warn_c99_compat_unicode_literal, diag::warn_old_implicitly_unsigned_long, -1,
  /* DiagArray137 */ diag::ext_designated_init, diag::ext_designated_init_array, diag::ext_designated_init_brace_elision, diag::ext_designated_init_mixed, diag::ext_designated_init_nested, -1,
  /* DiagArray138 */ diag::ext_aggregate_init_not_constant, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c99_whitespace_required_after_macro_name, diag::ext_empty_fnmacro_arg, diag::ext_enumerator_list_comma_c, diag::ext_hex_constant_invalid, -1,
  /* DiagArray139 */ diag::warn_call_to_pure_virtual_member_function_from_ctor_dtor, -1,
  /* DiagArray140 */ diag::warn_called_once_gets_called_twice, diag::warn_called_once_never_called, diag::warn_called_once_never_called_when, -1,
  /* DiagArray141 */ diag::warn_cast_align, -1,
  /* DiagArray142 */ diag::warn_cast_calling_conv, -1,
  /* DiagArray143 */ diag::warn_cast_function_type, -1,
  /* DiagArray144 */ diag::warn_cast_pointer_from_sel, -1,
  /* DiagArray145 */ diag::warn_cast_qual, diag::warn_cast_qual2, -1,
  /* DiagArray146 */ diag::ext_bad_cxx_cast_qualifiers_away_incoherent, -1,
  /* DiagArray148 */ diag::warn_omp_section_is_char, diag::warn_subscript_is_char, -1,
  /* DiagArray149 */ diag::warn_drv_yc_multiple_inputs_clang_cl, diag::warn_drv_ycyu_different_arg_clang_cl, diag::warn_pp_hdrstop_filename_ignored, diag::warn_pp_macro_def_mismatch_with_pch, -1,
  /* DiagArray150 */ diag::warn_conv_to_base_not_used, diag::warn_conv_to_self_not_used, diag::warn_conv_to_void_not_used, -1,
  /* DiagArray151 */ diag::warn_pass_class_arg_to_vararg, -1,
  /* DiagArray152 */ diag::warn_cmse_nonsecure_union, -1,
  /* DiagArray153 */ diag::warn_comma_operator, -1,
  /* DiagArray154 */ diag::escaped_newline_block_comment_end, diag::ext_line_comment, diag::ext_multi_line_line_comment, diag::warn_nested_block_comment, -1,
  /* DiagArray156 */ diag::ext_typecheck_comparison_of_distinct_pointers, -1,
  /* DiagArray157 */ diag::warn_completion_handler_called_twice, diag::warn_completion_handler_never_called, diag::warn_completion_handler_never_called_when, -1,
  /* DiagArray158 */ diag::ext_complex_component_init, -1,
  /* DiagArray160 */ diag::warn_compound_token_split_by_macro, -1,
  /* DiagArray161 */ diag::warn_compound_token_split_by_whitespace, -1,
  /* DiagArray162 */ diag::ext_concept_legacy_bool_keyword, -1,
  /* DiagArray163 */ diag::ext_typecheck_cond_pointer_integer_mismatch, -1,
  /* DiagArray164 */ diag::warn_maybe_uninit_var, -1,
  /* DiagArray165 */ diag::warn_module_config_macro_undef, -1,
  /* DiagArray166 */ diag::warn_impcast_integer_precision_constant, -1,
  /* DiagArray167 */ diag::warn_is_constant_evaluated_always_true_constexpr, -1,
  /* DiagArray168 */ diag::warn_logical_instead_of_bitwise, -1,
  /* DiagArray169 */ diag::warn_cxx14_compat_constexpr_not_const, -1,
  /* DiagArray170 */ diag::warn_attr_on_unconsumable_class, diag::warn_loop_state_mismatch, diag::warn_param_return_typestate_mismatch, diag::warn_param_typestate_mismatch, diag::warn_return_typestate_for_unconsumable_type, diag::warn_return_typestate_mismatch, diag::warn_use_in_invalid_state, diag::warn_use_of_temp_in_invalid_state, -1,
  /* DiagArray171 */ diag::warn_impcast_complex_scalar, diag::warn_impcast_vector_scalar, diag::warn_opencl_generic_address_space_arg, diag::warn_template_arg_negative, diag::warn_template_arg_too_large, -1,
  /* DiagArray173 */ diag::warn_coroutine_handle_address_invalid_return_type, -1,
  /* DiagArray174 */ diag::warn_coroutine_promise_unhandled_exception_required_with_exceptions, -1,
  /* DiagArray175 */ diag::warn_unreachable_default, -1,
  /* DiagArray177 */ diag::warn_objc_cdirective_format_string, -1,
  /* DiagArray178 */ diag::warn_ctad_maybe_unsupported, -1,
  /* DiagArray180 */ diag::warn_ctu_incompat_triple, -1,
  /* DiagArray181 */ diag::warn_attribute_argument_n_negative, diag::warn_cuda_attr_lambda_position, diag::warn_kern_is_inline, diag::warn_kern_is_method, diag::warn_pragma_unroll_cuda_value_in_parens, -1,
  /* DiagArray182 */ diag::warn_default_atomic_custom_getter_setter, -1,
  /* DiagArray183 */ diag::ext_cxx11_attr_placement, -1,
  /* DiagArray184 */ diag::warn_dangling_variable, diag::warn_unsupported_lifetime_extension, -1,
  /* DiagArray185 */ diag::warn_dangling_else, -1,
  /* DiagArray186 */ diag::warn_bind_ref_member_to_parameter, diag::warn_dangling_member, diag::warn_init_ptr_member_to_parameter_addr, diag::warn_new_dangling_reference, -1,
  /* DiagArray187 */ diag::warn_dangling_lifetime_pointer, diag::warn_dangling_lifetime_pointer_member, -1,
  /* DiagArray188 */ diag::warn_new_dangling_initializer_list, -1,
  /* DiagArray189 */ diag::warn_drv_darwin_sdk_invalid_settings, -1,
  /* DiagArray190 */ diag::warn_pp_date_time, -1,
  /* DiagArray191 */ diag::warn_dealloc_in_category, -1,
  /* DiagArray192 */ diag::warn_debug_compression_unavailable, -1,
  /* DiagArray193 */ diag::ext_mixed_decls_code, diag::warn_mixed_decls_code, -1,
  /* DiagArray194 */ diag::warn_defaulted_comparison_deleted, diag::warn_defaulted_method_deleted, -1,
  /* DiagArray195 */ diag::warn_delegating_ctor_cycle, -1,
  /* DiagArray196 */ diag::warn_delete_abstract_non_virtual_dtor, -1,
  /* DiagArray197 */ diag::ext_delete_void_ptr_operand, diag::warn_delete_incomplete, -1,
  /* DiagArray198 */ diag::warn_delete_non_virtual_dtor, -1,
  /* DiagArray200 */ diag::ext_delimited_escape_sequence, -1,
  /* DiagArray201 */ diag::warn_O4_is_O3, diag::warn_access_decl_deprecated, diag::warn_deprecated_redundant_constexpr_static_def, diag::warn_drv_deprecated_arg, diag::warn_drv_treating_input_as_cxx, diag::warn_fe_concepts_ts_flag, diag::warn_option_invalid_ocl_version, diag::warn_vector_long_decl_spec_combination, -1,
  /* DiagArray202 */ diag::warn_deprecated_altivec_src_compat, -1,
  /* DiagArray203 */ diag::warn_arith_conv_mixed_anon_enum_types_cxx20, -1,
  /* DiagArray204 */ diag::warn_depr_array_comparison, -1,
  /* DiagArray205 */ diag::warn_deprecated_noreturn_spelling, diag::warn_vector_mode_deprecated, -1,
  /* DiagArray206 */ diag::warn_deprecated_comma_subscript, -1,
  /* DiagArray207 */ diag::warn_deprecated_copy, -1,
  /* DiagArray209 */ diag::warn_deprecated_copy_with_dtor, -1,
  /* DiagArray210 */ diag::warn_deprecated_copy_with_user_provided_copy, -1,
  /* DiagArray211 */ diag::warn_deprecated_copy_with_user_provided_dtor, -1,
  /* DiagArray212 */ diag::warn_deprecated_for_co_await, -1,
  /* DiagArray213 */ diag::warn_atl_uuid_deprecated, diag::warn_cstyle_param, diag::warn_deprecated, diag::warn_deprecated_fwdclass_message, diag::warn_deprecated_message, diag::warn_property_method_deprecated, -1,
  /* DiagArray214 */ diag::warn_exception_spec_deprecated, -1,
  /* DiagArray215 */ diag::warn_comparison_mixed_enum_types_cxx20, -1,
  /* DiagArray216 */ diag::warn_conditional_mixed_enum_types_cxx20, -1,
  /* DiagArray217 */ diag::warn_arith_conv_mixed_enum_types_cxx20, -1,
  /* DiagArray218 */ diag::warn_arith_conv_enum_float_cxx20, -1,
  /* DiagArray219 */ diag::warn_deprecated_coroutine_namespace, -1,
  /* DiagArray220 */ diag::warn_deprecated_def, diag::warn_unavailable_def, -1,
  /* DiagArray221 */ diag::warn_increment_bool, -1,
  /* DiagArray222 */ diag::warn_objc_isa_assign, diag::warn_objc_isa_use, -1,
  /* DiagArray223 */ diag::warn_objc_pointer_masking, -1,
  /* DiagArray224 */ diag::warn_objc_pointer_masking_performSelector, -1,
  /* DiagArray225 */ diag::warn_pragma_deprecated_macro_use, -1,
  /* DiagArray226 */ diag::warn_deprecated_register, -1,
  /* DiagArray227 */ diag::warn_deprecated_this_capture, -1,
  /* DiagArray228 */ diag::warn_ext_int_deprecated, -1,
  /* DiagArray229 */ diag::warn_deprecated_compound_assign_volatile, diag::warn_deprecated_increment_decrement_volatile, diag::warn_deprecated_simple_assign_volatile, diag::warn_deprecated_volatile_param, diag::warn_deprecated_volatile_return, diag::warn_deprecated_volatile_structured_binding, -1,
  /* DiagArray231 */ diag::warn_direct_ivar_access, -1,
  /* DiagArray232 */ diag::pp_disabled_macro_expansion, -1,
  /* DiagArray235 */ diag::warn_conflicting_param_modifiers, diag::warn_conflicting_ret_type_modifiers, -1,
  /* DiagArray237 */ diag::warn_remainder_division_by_zero, -1,
  /* DiagArray238 */ diag::warn_attribute_dll_redeclaration, -1,
  /* DiagArray239 */ diag::warn_attribute_dllexport_explicit_instantiation_decl, -1,
  /* DiagArray240 */ diag::warn_attribute_dllimport_static_field_definition, -1,
  /* DiagArray241 */ diag::warn_doc_api_container_decl_mismatch, diag::warn_doc_block_command_duplicate, diag::warn_doc_block_command_empty_paragraph, diag::warn_doc_container_decl_mismatch, diag::warn_doc_function_method_decl_mismatch, diag::warn_doc_html_start_tag_expected_ident_or_greater, diag::warn_doc_html_start_tag_expected_quoted_string, diag::warn_doc_inline_contents_no_argument, diag::warn_doc_param_duplicate, diag::warn_doc_param_invalid_direction, diag::warn_doc_param_not_attached_to_a_function_decl, diag::warn_doc_param_not_found, diag::warn_doc_returns_attached_to_a_void_function, diag::warn_doc_returns_not_attached_to_a_function_decl, diag::warn_doc_tparam_duplicate, diag::warn_doc_tparam_not_attached_to_a_template_decl, diag::warn_doc_tparam_not_found, diag::warn_not_a_doxygen_trailing_member_comment, diag::warn_verbatim_block_end_without_start, -1,
  /* DiagArray242 */ diag::warn_doc_deprecated_not_sync, -1,
  /* DiagArray243 */ diag::warn_doc_html_end_forbidden, diag::warn_doc_html_end_unbalanced, diag::warn_doc_html_missing_end_tag, diag::warn_doc_html_start_end_mismatch, -1,
  /* DiagArray244 */ diag::warn_doc_param_spaces_in_direction, -1,
  /* DiagArray245 */ diag::warn_correct_comment_command_name, diag::warn_unknown_comment_command_name, -1,
  /* DiagArray246 */ diag::ext_dollar_in_identifier, -1,
  /* DiagArray247 */ diag::warn_impcast_double_promotion, -1,
  /* DiagArray248 */ diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_qualified_dtor_named_in_lexical_scope, -1,
  /* DiagArray249 */ diag::ext_destructor_typedef_name, -1,
  /* DiagArray250 */ diag::ext_duplicate_declspec, diag::ext_warn_duplicate_declspec, diag::warn_attribute_address_multiple_identical_qualifiers, diag::warn_duplicate_declspec, -1,
  /* DiagArray251 */ diag::warn_duplicate_enum_values, -1,
  /* DiagArray252 */ diag::warn_method_param_declaration, -1,
  /* DiagArray253 */ diag::warn_duplicate_method_decl, -1,
  /* DiagArray254 */ diag::warn_duplicate_protocol_def, -1,
  /* DiagArray255 */ diag::warn_dyn_class_memaccess, -1,
  /* DiagArray256 */ diag::ext_dynamic_exception_spec, -1,
  /* DiagArray258 */ diag::ext_enum_base_in_type_specifier, -1,
  /* DiagArray259 */ diag::ext_elaborated_enum_class, -1,
  /* DiagArray260 */ diag::ext_embedded_directive, -1,
  /* DiagArray261 */ diag::warn_empty_for_body, diag::warn_empty_if_body, diag::warn_empty_range_based_for_body, diag::warn_empty_switch_body, diag::warn_empty_while_body, -1,
  /* DiagArray262 */ diag::ext_decomp_decl_empty, -1,
  /* DiagArray263 */ diag::warn_empty_init_statement, -1,
  /* DiagArray264 */ diag::ext_empty_translation_unit, -1,
  /* DiagArray265 */ diag::warn_incomplete_encoded_type, -1,
  /* DiagArray267 */ diag::warn_comparison_mixed_enum_types, -1,
  /* DiagArray268 */ diag::warn_conditional_mixed_enum_types, -1,
  /* DiagArray269 */ diag::warn_comparison_of_mixed_enum_types_switch, -1,
  /* DiagArray270 */ diag::warn_impcast_different_enum_types, -1,
  /* DiagArray271 */ diag::warn_arith_conv_mixed_enum_types, -1,
  /* DiagArray272 */ diag::warn_arith_conv_enum_float, -1,
  /* DiagArray273 */ diag::ext_enum_too_large, diag::ext_enumerator_increment_too_large, -1,
  /* DiagArray274 */ diag::warn_cdtor_function_try_handler_mem_expr, diag::warn_exception_caught_by_earlier_handler, diag::warn_throw_in_noexcept_func, -1,
  /* DiagArray275 */ diag::ext_excess_initializers, diag::ext_excess_initializers_for_sizeless_type, diag::ext_excess_initializers_in_char_array_initializer, diag::ext_initializer_string_for_char_array_too_long, -1,
  /* DiagArray276 */ diag::warn_exit_time_destructor, -1,
  /* DiagArray277 */ diag::warn_defined_in_function_type_macro, diag::warn_defined_in_object_type_macro, -1,
  /* DiagArray278 */ diag::warn_direct_initialize_call, diag::warn_direct_super_initialize_call, -1,
  /* DiagArray279 */ diag::warn_arc_strong_pointer_objc_pointer, -1,
  /* DiagArray280 */ diag::ext_export_no_name_block, diag::ext_export_no_names, -1,
  /* DiagArray281 */ diag::ext_export_using_directive, -1,
  /* DiagArray282 */ diag::warn_zero_size_struct_union_in_extern_c, -1,
  /* DiagArray283 */ diag::warn_extern_init, -1,
  /* DiagArray284 */ diag::warn_arm_interrupt_calling_convention, -1,
  /* DiagArray285 */ diag::warn_namespace_member_extra_qualification, -1,
  /* DiagArray286 */ diag::ext_extra_semi, diag::warn_extra_semi_after_mem_fn_def, -1,
  /* DiagArray287 */ diag::warn_null_statement, -1,
  /* DiagArray288 */ diag::ext_pp_extra_tokens_at_eol, diag::warn_omp_extra_tokens_at_eol, -1,
  /* DiagArray289 */ diag::warn_final_dtor_non_final_class, -1,
  /* DiagArray290 */ diag::warn_pragma_final_macro, -1,
  /* DiagArray291 */ diag::ext_clang_c_enum_fixed_underlying_type, -1,
  /* DiagArray292 */ diag::warn_fixedpoint_constant_overflow, -1,
  /* DiagArray293 */ diag::warn_flag_enum_constant_out_of_range, -1,
  /* DiagArray294 */ diag::ext_flexible_array_in_array, diag::ext_flexible_array_in_struct, -1,
  /* DiagArray295 */ diag::warn_impcast_float_integer, -1,
  /* DiagArray296 */ diag::warn_floatingpoint_eq, -1,
  /* DiagArray297 */ diag::warn_impcast_float_to_integer, diag::warn_impcast_float_to_integer_out_of_range, -1,
  /* DiagArray298 */ diag::warn_impcast_float_to_integer_zero, -1,
  /* DiagArray299 */ diag::warn_redundant_loop_iteration, diag::warn_variables_not_in_loop_body, -1,
  /* DiagArray300 */ diag::warn_format_P_no_precision, diag::warn_format_argument_needs_cast, diag::warn_format_bool_as_character, diag::warn_format_conversion_argument_type_mismatch, diag::warn_format_invalid_annotation, diag::warn_format_invalid_positional_specifier, diag::warn_format_mix_positional_nonpositional_args, diag::warn_format_nonsensical_length, diag::warn_format_string_is_wide_literal, diag::warn_format_zero_positional_specifier, diag::warn_missing_format_string, diag::warn_printf_ObjCflags_without_ObjCConversion, diag::warn_printf_asterisk_missing_arg, diag::warn_printf_asterisk_wrong_type, diag::warn_printf_empty_objc_flag, diag::warn_printf_format_string_contains_null_char, diag::warn_printf_format_string_not_null_terminated, diag::warn_printf_ignored_flag, diag::warn_printf_incomplete_specifier, diag::warn_printf_invalid_objc_flag, diag::warn_printf_narg_not_supported, diag::warn_printf_nonsensical_flag, diag::warn_printf_nonsensical_optional_amount, diag::warn_printf_positional_arg_exceeds_data_args, diag::warn_scanf_nonzero_width, diag::warn_scanf_scanlist_incomplete, -1,
  /* DiagArray301 */ diag::warn_printf_data_arg_not_used, -1,
  /* DiagArray302 */ diag::warn_printf_insufficient_data_args, -1,
  /* DiagArray303 */ diag::warn_format_invalid_conversion, -1,
  /* DiagArray304 */ diag::warn_format_non_standard, diag::warn_format_non_standard_conversion_spec, diag::warn_format_non_standard_positional_arg, -1,
  /* DiagArray305 */ diag::warn_format_nonliteral, -1,
  /* DiagArray306 */ diag::warn_format_argument_needs_cast_pedantic, diag::warn_format_conversion_argument_type_mismatch_pedantic, -1,
  /* DiagArray307 */ diag::warn_format_nonliteral_noargs, -1,
  /* DiagArray308 */ diag::warn_format_conversion_argument_type_mismatch_confusion, -1,
  /* DiagArray310 */ diag::warn_empty_format_string, -1,
  /* DiagArray312 */ diag::warn_fortify_scanf_overflow, diag::warn_fortify_source_format_overflow, diag::warn_fortify_source_overflow, diag::warn_fortify_source_size_mismatch, diag::warn_fortify_strlen_overflow, -1,
  /* DiagArray313 */ diag::warn_four_char_character_literal, -1,
  /* DiagArray314 */ diag::warn_frame_address, -1,
  /* DiagArray315 */ diag::warn_fe_backend_frame_larger_than, diag::warn_fe_frame_larger_than, -1,
  /* DiagArray317 */ diag::warn_framework_include_private_from_public, -1,
  /* DiagArray318 */ diag::warn_free_nonheap_object, -1,
  /* DiagArray319 */ diag::warn_function_def_in_objc_container, -1,
  /* DiagArray320 */ diag::warn_dispatch_body_ignored, diag::warn_multiversion_duplicate_entries, diag::warn_target_clone_duplicate_options, -1,
  /* DiagArray321 */ diag::warn_drv_fuse_ld_path, -1,
  /* DiagArray324 */ diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_warn_gnu_final, diag::warn_attribute_on_function_definition, diag::warn_break_binds_to_switch, diag::warn_cleanup_ext, diag::warn_gcc_attribute_location, diag::warn_gcc_ignores_type_attr, diag::warn_gcc_variable_decl_in_for_loop, diag::warn_loop_ctrl_binds_to_inner, -1,
  /* DiagArray325 */ diag::warn_global_constructor, diag::warn_global_destructor, -1,
  /* DiagArray326 */ diag::warn_drv_global_isel_incomplete, diag::warn_drv_global_isel_incomplete_opt, -1,
  /* DiagArray328 */ diag::ext_alignof_expr, -1,
  /* DiagArray329 */ diag::ext_gnu_anonymous_struct, -1,
  /* DiagArray330 */ diag::ext_array_init_parens, -1,
  /* DiagArray331 */ diag::ext_auto_type, -1,
  /* DiagArray332 */ diag::ext_binary_literal, -1,
  /* DiagArray333 */ diag::ext_gnu_case_range, -1,
  /* DiagArray334 */ diag::ext_integer_complex, -1,
  /* DiagArray335 */ diag::ext_array_init_copy, -1,
  /* DiagArray336 */ diag::ext_gnu_conditional_expr, -1,
  /* DiagArray337 */ diag::ext_gnu_array_range, diag::ext_gnu_missing_equal_designator, diag::ext_gnu_old_style_field_designator, -1,
  /* DiagArray338 */ diag::ext_gnu_empty_initializer, -1,
  /* DiagArray339 */ diag::ext_empty_struct_union, diag::ext_flexible_array_empty_aggregate_gnu, diag::ext_no_named_members_in_struct_union, -1,
  /* DiagArray340 */ diag::ext_flexible_array_init, -1,
  /* DiagArray341 */ diag::ext_flexible_array_union_gnu, -1,
  /* DiagArray342 */ diag::ext_expr_not_ice, diag::ext_in_class_initializer_non_constant, diag::ext_vla_folded_to_constant, -1,
  /* DiagArray343 */ diag::ext_imaginary_constant, -1,
  /* DiagArray344 */ diag::ext_pp_include_next_directive, -1,
  /* DiagArray345 */ diag::warn_gnu_inline_cplusplus_without_extern, -1,
  /* DiagArray346 */ diag::ext_gnu_address_of_label, diag::ext_gnu_indirect_goto, -1,
  /* DiagArray347 */ diag::ext_forward_ref_enum_def, -1,
  /* DiagArray348 */ diag::ext_gnu_statement_expr, -1,
  /* DiagArray349 */ diag::ext_in_class_initializer_float_type, -1,
  /* DiagArray350 */ diag::ext_string_literal_operator_template, -1,
  /* DiagArray351 */ diag::ext_typecheck_cast_to_union, -1,
  /* DiagArray352 */ diag::ext_variable_sized_type_in_struct, -1,
  /* DiagArray353 */ diag::ext_pp_line_zero, -1,
  /* DiagArray354 */ diag::ext_missing_varargs_arg, diag::ext_paste_comma, -1,
  /* DiagArray355 */ diag::warn_maybe_capture_bad_target_this_ptr, -1,
  /* DiagArray356 */ diag::warn_header_guard, -1,
  /* DiagArray357 */ diag::warn_using_directive_in_header, -1,
  /* DiagArray358 */ diag::warn_ignored_hip_only_option, -1,
  /* DiagArray359 */ diag::warn_condition_is_idiomatic_assignment, -1,
  /* DiagArray360 */ diag::ext_cannot_use_trivial_abi, diag::warn_alias_to_weak_alias, diag::warn_alias_with_section, diag::warn_aligned_attr_underaligned, diag::warn_attr_abi_tag_namespace, diag::warn_attribute_after_definition_ignored, diag::warn_attribute_cmse_entry_static, diag::warn_attribute_dllexport_explicit_instantiation_def, diag::warn_attribute_has_no_effect_on_compile_time_if, diag::warn_attribute_has_no_effect_on_infinite_loop, diag::warn_attribute_iboutlet, diag::warn_attribute_ignored, diag::warn_attribute_ignored_for_field_of_type, diag::warn_attribute_ignored_on_inline, diag::warn_attribute_ignored_on_non_definition, diag::warn_attribute_invalid_on_definition, diag::warn_attribute_no_decl, diag::warn_attribute_nonnull_no_pointers, diag::warn_attribute_nonnull_parm_no_args, diag::warn_attribute_not_on_decl, diag::warn_attribute_pointer_or_reference_only, diag::warn_attribute_pointers_only, diag::warn_attribute_precede_definition, diag::warn_attribute_return_pointers_only, diag::warn_attribute_return_pointers_refs_only, diag::warn_attribute_sentinel_named_arguments, diag::warn_attribute_sentinel_not_variadic, diag::warn_attribute_type_not_supported, diag::warn_attribute_unknown_visibility, diag::warn_attribute_void_function_method, diag::warn_attribute_weak_on_field, diag::warn_attribute_weak_on_local, diag::warn_attribute_wrong_decl_type, diag::warn_attribute_wrong_decl_type_str, diag::warn_attributes_likelihood_ifstmt_conflict, diag::warn_block_literal_attributes_on_omitted_return_type, diag::warn_cconv_unsupported, diag::warn_cxx11_gnu_attribute_on_type, diag::warn_declspec_allocator_nonpointer, diag::warn_declspec_attribute_ignored, diag::warn_deprecated_anonymous_namespace, diag::warn_deprecated_ignored_on_using, diag::warn_dllimport_dropped_from_inline_function, diag::warn_duplicate_attribute, diag::warn_duplicate_attribute_exact, diag::warn_gc_attribute_weak_on_local, diag::warn_gnu_inline_attribute_requires_inline, diag::warn_ignored_ms_inheritance, diag::warn_ignored_objc_externally_retained, diag::warn_import_on_definition, diag::warn_internal_linkage_local_storage, diag::warn_interrupt_attribute_invalid, diag::warn_microsoft_qualifiers_ignored, diag::warn_mig_server_routine_does_not_return_kern_return_t, diag::warn_mismatched_import, diag::warn_mmap_unknown_attribute, diag::warn_nocf_check_attribute_ignored, diag::warn_noderef_on_non_pointer_or_array, diag::warn_nomerge_attribute_ignored_in_stmt, diag::warn_nothrow_attribute_ignored, diag::warn_ns_attribute_wrong_parameter_type, diag::warn_ns_attribute_wrong_return_type, diag::warn_objc_direct_ignored, diag::warn_objc_direct_property_ignored, diag::warn_opencl_attr_deprecated_ignored, diag::warn_require_const_init_added_too_late, diag::warn_riscv_repeated_interrupt_attribute, diag::warn_sycl_kernel_invalid_template_param_type, diag::warn_sycl_kernel_num_of_function_params, diag::warn_sycl_kernel_num_of_template_params, diag::warn_sycl_kernel_return_type, diag::warn_transparent_union_attribute_field_size_align, diag::warn_transparent_union_attribute_floating, diag::warn_transparent_union_attribute_not_definition, diag::warn_transparent_union_attribute_zero_fields, diag::warn_type_attribute_wrong_type, diag::warn_unhandled_ms_attribute_ignored, diag::warn_unsupported_target_attribute, diag::warn_wrong_clang_attr_namespace, -1,
  /* DiagArray361 */ diag::warn_missing_sdksettings_for_availability_checking, -1,
  /* DiagArray362 */ diag::warn_drv_unsupported_opt_for_target, diag::warn_ignored_gcc_optimization, -1,
  /* DiagArray363 */ diag::warn_pragma_intrinsic_builtin, -1,
  /* DiagArray364 */ diag::warn_pragma_optimize, -1,
  /* DiagArray365 */ diag::warn_pragma_align_expected_equal, diag::warn_pragma_align_invalid_option, diag::warn_pragma_comment_ignored, diag::warn_pragma_debug_missing_argument, diag::warn_pragma_debug_unexpected_command, diag::warn_pragma_debug_unknown_module, diag::warn_pragma_expected_action_or_r_paren, diag::warn_pragma_expected_colon, diag::warn_pragma_expected_colon_r_paren, diag::warn_pragma_expected_comma, diag::warn_pragma_expected_identifier, diag::warn_pragma_expected_init_seg, diag::warn_pragma_expected_integer, diag::warn_pragma_expected_lparen, diag::warn_pragma_expected_non_wide_string, diag::warn_pragma_expected_predicate, diag::warn_pragma_expected_punc, diag::warn_pragma_expected_rparen, diag::warn_pragma_expected_section_label_or_name, diag::warn_pragma_expected_section_name, diag::warn_pragma_expected_section_push_pop_or_name, diag::warn_pragma_expected_string, diag::warn_pragma_extra_tokens_at_eol, diag::warn_pragma_force_cuda_host_device_bad_arg, diag::warn_pragma_fp_ignored, diag::warn_pragma_init_seg_unsupported_target, diag::warn_pragma_invalid_action, diag::warn_pragma_invalid_argument, diag::warn_pragma_invalid_specific_action, diag::warn_pragma_missing_argument, diag::warn_pragma_ms_fenv_access, diag::warn_pragma_ms_struct, diag::warn_pragma_options_align_reset_failed, diag::warn_pragma_options_expected_align, diag::warn_pragma_pack_invalid_alignment, diag::warn_pragma_pack_malformed, diag::warn_pragma_pop_failed, diag::warn_pragma_pop_macro_no_push, diag::warn_pragma_unknown_extension, diag::warn_pragma_unsupported_action, diag::warn_pragma_unsupported_extension, diag::warn_pragma_unused_expected_var, diag::warn_pragma_unused_expected_var_arg, diag::warn_pragma_unused_undeclared_var, diag::warn_stdc_unknown_rounding_mode, -1,
  /* DiagArray366 */ diag::warn_arc_lifetime_result_type, diag::warn_block_literal_qualifiers_on_omitted_return_type, diag::warn_qual_return_type, diag::warn_typecheck_function_qualifiers_ignored, -1,
  /* DiagArray367 */ diag::warn_typecheck_reference_qualifiers, -1,
  /* DiagArray369 */ diag::warn_auto_implicit_atomic_property, diag::warn_implicit_atomic_property, -1,
  /* DiagArray370 */ diag::warn_impcast_integer_float_precision_constant, -1,
  /* DiagArray371 */ diag::warn_impcast_floating_point_to_bool, -1,
  /* DiagArray372 */ diag::ext_implicit_exception_spec_mismatch, -1,
  /* DiagArray373 */ diag::warn_unannotated_fallthrough, -1,
  /* DiagArray374 */ diag::warn_unannotated_fallthrough_per_function, -1,
  /* DiagArray375 */ diag::warn_impcast_fixed_point_range, -1,
  /* DiagArray376 */ diag::warn_impcast_float_precision, diag::warn_impcast_float_result_precision, -1,
  /* DiagArray377 */ diag::ext_implicit_function_decl, diag::ext_implicit_lib_function_decl, diag::warn_builtin_unknown, diag::warn_implicit_function_decl, -1,
  /* DiagArray378 */ diag::ext_missing_type_specifier, -1,
  /* DiagArray379 */ diag::warn_impcast_high_order_zero_bits, diag::warn_impcast_integer_precision, -1,
  /* DiagArray380 */ diag::warn_impcast_integer_float_precision, -1,
  /* DiagArray381 */ diag::warn_implicitly_retains_self, -1,
  /* DiagArray382 */ diag::ext_integer_literal_too_large_for_signed, -1,
  /* DiagArray384 */ diag::ext_pp_import_directive, -1,
  /* DiagArray385 */ diag::warn_inaccessible_base_class, -1,
  /* DiagArray386 */ diag::pp_include_next_absolute_path, -1,
  /* DiagArray387 */ diag::pp_include_next_in_primary, -1,
  /* DiagArray388 */ diag::warn_deep_exception_specs_differ, diag::warn_incompatible_exception_specs, -1,
  /* DiagArray389 */ diag::ext_typecheck_convert_incompatible_function_pointer, -1,
  /* DiagArray390 */ diag::warn_redecl_library_builtin, -1,
  /* DiagArray391 */ diag::warn_cxx_ms_struct, diag::warn_npot_ms_struct, -1,
  /* DiagArray392 */ diag::ext_typecheck_convert_incompatible_pointer, -1,
  /* DiagArray393 */ diag::ext_nested_pointer_qualifier_mismatch, diag::ext_typecheck_convert_discards_qualifiers, diag::warn_bad_cxx_cast_nested_pointer_addr_space, -1,
  /* DiagArray394 */ diag::warn_property_types_are_incompatible, -1,
  /* DiagArray395 */ diag::warn_incompatible_sysroot, -1,
  /* DiagArray396 */ diag::warn_mmap_incomplete_framework_module_declaration, -1,
  /* DiagArray397 */ diag::warn_undef_method_impl, -1,
  /* DiagArray399 */ diag::warn_implicit_decl_no_jmp_buf, -1,
  /* DiagArray400 */ diag::warn_missing_submodule, diag::warn_mmap_umbrella_dir_not_found, diag::warn_uncovered_module_header, -1,
  /* DiagArray401 */ diag::warn_redeclaration_without_attribute_prev_attribute_ignored, diag::warn_redeclaration_without_import_attribute, -1,
  /* DiagArray402 */ diag::warn_inconsistent_destructor_marked_not_override_overriding, -1,
  /* DiagArray403 */ diag::warn_inconsistent_function_marked_not_override_overriding, -1,
  /* DiagArray404 */ diag::ext_increment_bool, -1,
  /* DiagArray405 */ diag::warn_infinite_recursive_function, -1,
  /* DiagArray407 */ diag::ext_initializer_overrides, diag::warn_initializer_overrides, -1,
  /* DiagArray408 */ diag::ext_out_of_line_qualified_id_type_names_constructor, -1,
  /* DiagArray410 */ diag::warn_fe_inline_asm, -1,
  /* DiagArray411 */ diag::warn_inline_namespace_reopened_noninline, -1,
  /* DiagArray412 */ diag::ext_operator_new_delete_declared_inline, -1,
  /* DiagArray413 */ diag::warn_explicit_instantiation_after_specialization, -1,
  /* DiagArray414 */ diag::ext_typecheck_convert_int_pointer, diag::ext_typecheck_convert_pointer_int, -1,
  /* DiagArray416 */ diag::warn_enum_constant_in_bool_context, diag::warn_left_shift_in_bool_context, -1,
  /* DiagArray417 */ diag::warn_int_to_pointer_cast, -1,
  /* DiagArray418 */ diag::warn_int_to_void_pointer_cast, -1,
  /* DiagArray419 */ diag::warn_integer_constant_overflow, -1,
  /* DiagArray420 */ diag::warn_anyx86_interrupt_regsave, -1,
  /* DiagArray421 */ diag::warn_drv_missing_plugin_arg, diag::warn_drv_missing_plugin_name, diag::warn_drv_msp430_hwmult_mismatch, diag::warn_drv_msp430_hwmult_no_device, diag::warn_drv_msp430_hwmult_unsupported, diag::warn_drv_object_size_disabled_O0, diag::warn_drv_optimization_value, diag::warn_target_unsupported_extension, -1,
  /* DiagArray422 */ diag::ext_constexpr_function_never_constant_expr, -1,
  /* DiagArray423 */ diag::warn_iboutlet_object_type, diag::warn_iboutletcollection_property_assign, -1,
  /* DiagArray424 */ diag::warn_invalid_initializer_from_system_header, -1,
  /* DiagArray425 */ diag::warn_invalid_ios_deployment_target, -1,
  /* DiagArray426 */ diag::warn_attribute_no_builtin_invalid_builtin_name, -1,
  /* DiagArray427 */ diag::warn_falloff_noreturn_function, diag::warn_noreturn_function_has_return_expr, -1,
  /* DiagArray428 */ diag::ext_offsetof_non_pod_type, diag::ext_offsetof_non_standardlayout_type, -1,
  /* DiagArray429 */ diag::warn_drv_ps4_sdk_dir, diag::warn_drv_unable_to_find_directory_expected, -1,
  /* DiagArray430 */ diag::ext_partial_spec_not_more_specialized_than_primary, -1,
  /* DiagArray432 */ diag::ext_empty_character, diag::ext_unterminated_char_or_string, -1,
  /* DiagArray433 */ diag::warn_bad_character_encoding, diag::warn_bad_string_encoding, -1,
  /* DiagArray434 */ diag::ext_pp_bad_paste_ms, -1,
  /* DiagArray435 */ diag::warn_jump_out_of_seh_finally, -1,
  /* DiagArray436 */ diag::ext_keyword_as_ident, -1,
  /* DiagArray437 */ diag::warn_pp_macro_hides_keyword, -1,
  /* DiagArray438 */ diag::ext_param_promoted_not_compatible_with_prototype, -1,
  /* DiagArray439 */ diag::ext_token_used, -1,
  /* DiagArray440 */ diag::warn_parameter_size, diag::warn_return_value_size, -1,
  /* DiagArray442 */ diag::warn_fe_linking_module, -1,
  /* DiagArray443 */ diag::warn_impcast_literal_float_to_integer, diag::warn_impcast_literal_float_to_integer_out_of_range, -1,
  /* DiagArray444 */ diag::warn_float_overflow, diag::warn_float_underflow, -1,
  /* DiagArray445 */ diag::ext_template_arg_local_type, -1,
  /* DiagArray446 */ diag::warn_logical_not_on_lhs_of_check, -1,
  /* DiagArray447 */ diag::warn_logical_and_in_logical_or, -1,
  /* DiagArray448 */ diag::ext_c99_longlong, -1,
  /* DiagArray450 */ diag::ext_pp_macro_redef, -1,
  /* DiagArray451 */ diag::ext_main_used, diag::ext_noreturn_main, diag::ext_variadic_main, diag::warn_main_one_arg, diag::warn_main_redefined, diag::warn_main_returns_bool_literal, diag::warn_static_main, -1,
  /* DiagArray452 */ diag::ext_main_returns_nonint, -1,
  /* DiagArray453 */ diag::warn_has_warning_invalid_option, -1,
  /* DiagArray454 */ diag::ext_many_braces_around_init, -1,
  /* DiagArray455 */ diag::warn_max_tokens, diag::warn_max_tokens_total, -1,
  /* DiagArray456 */ diag::warn_max_unsigned_zero, -1,
  /* DiagArray457 */ diag::warn_suspicious_sizeof_memset, -1,
  /* DiagArray458 */ diag::warn_memsize_comparison, -1,
  /* DiagArray459 */ diag::warn_non_contravariant_param_types, diag::warn_non_covariant_ret_types, -1,
  /* DiagArray461 */ diag::ext_ms_abstract_keyword, -1,
  /* DiagArray462 */ diag::ext_anonymous_record_with_type, diag::ext_ms_anonymous_record, -1,
  /* DiagArray463 */ diag::ext_ms_cast_fn_obj, diag::ext_ms_impcast_fn_obj, -1,
  /* DiagArray464 */ diag::ext_charize_microsoft, -1,
  /* DiagArray465 */ diag::ext_comment_paste_microsoft, -1,
  /* DiagArray466 */ diag::ext_default_init_const, -1,
  /* DiagArray467 */ diag::ext_pp_operator_used_as_macro_name, -1,
  /* DiagArray468 */ diag::ext_param_default_argument_redefinition, -1,
  /* DiagArray469 */ diag::warn_attribute_section_drectve, -1,
  /* DiagArray470 */ diag::ext_ctrl_z_eof_microsoft, -1,
  /* DiagArray471 */ diag::ext_ms_forward_ref_enum, -1,
  /* DiagArray472 */ diag::ext_enumerator_too_large, -1,
  /* DiagArray473 */ diag::ext_ellipsis_exception_spec, diag::ext_incomplete_in_exception_spec, diag::ext_mismatched_exception_spec, diag::ext_mismatched_exception_spec_explicit_instantiation, diag::ext_override_exception_spec, -1,
  /* DiagArray474 */ diag::warn_microsoft_dependent_exists, -1,
  /* DiagArray475 */ diag::ext_ms_explicit_constructor_call, -1,
  /* DiagArray476 */ diag::warn_member_extra_qualification, -1,
  /* DiagArray477 */ diag::ext_ms_c_enum_fixed_underlying_type, -1,
  /* DiagArray478 */ diag::ext_flexible_array_empty_aggregate_ms, diag::ext_flexible_array_union_ms, -1,
  /* DiagArray479 */ diag::ext_goto_into_protected_scope, -1,
  /* DiagArray480 */ diag::ext_ms_ambiguous_direct_base, -1,
  /* DiagArray481 */ diag::ext_pp_include_search_ms, -1,
  /* DiagArray482 */ diag::ext_mutable_reference, -1,
  /* DiagArray483 */ diag::ext_pure_function_definition, -1,
  /* DiagArray484 */ diag::ext_static_non_static, -1,
  /* DiagArray485 */ diag::ext_ms_sealed_keyword, -1,
  /* DiagArray486 */ diag::ext_ms_static_assert, -1,
  /* DiagArray487 */ diag::ext_explicit_instantiation_duplicate, diag::ext_found_in_dependent_base, diag::ext_found_later_in_class, diag::ext_ms_delayed_template_argument, diag::ext_ms_deref_template_argument, diag::ext_ms_template_spec_redecl_out_of_scope, diag::ext_ms_template_type_arg_missing_typename, diag::ext_static_out_of_line, diag::ext_undeclared_unqual_id_with_dependent_base, -1,
  /* DiagArray488 */ diag::ext_template_param_shadow, -1,
  /* DiagArray489 */ diag::ext_union_member_of_reference_type, -1,
  /* DiagArray490 */ diag::ext_friend_tag_redecl_outside_namespace, -1,
  /* DiagArray491 */ diag::ext_ms_using_declaration_inaccessible, -1,
  /* DiagArray492 */ diag::ext_pseudo_dtor_on_void, -1,
  /* DiagArray493 */ diag::warn_misleading_indentation, -1,
  /* DiagArray494 */ diag::warn_mismatched_delete_new, -1,
  /* DiagArray495 */ diag::warn_conflicting_param_types, -1,
  /* DiagArray496 */ diag::warn_conflicting_ret_types, -1,
  /* DiagArray497 */ diag::warn_struct_class_previous_tag_mismatch, diag::warn_struct_class_tag_mismatch, -1,
  /* DiagArray498 */ diag::warn_missing_braces, -1,
  /* DiagArray499 */ diag::ext_constinit_missing, -1,
  /* DiagArray500 */ diag::ext_no_declarators, diag::ext_standalone_specifier, diag::ext_typedef_without_a_name, diag::warn_standalone_specifier, -1,
  /* DiagArray501 */ diag::ext_missing_exception_specification, -1,
  /* DiagArray502 */ diag::warn_missing_field_initializers, -1,
  /* DiagArray505 */ diag::warn_missing_method_return_type, -1,
  /* DiagArray506 */ diag::warn_overriding_method_missing_noescape, -1,
  /* DiagArray507 */ diag::warn_suggest_noreturn_block, diag::warn_suggest_noreturn_function, -1,
  /* DiagArray508 */ diag::warn_cconv_knr, -1,
  /* DiagArray509 */ diag::warn_missing_prototype, -1,
  /* DiagArray510 */ diag::warn_missing_selector_name, -1,
  /* DiagArray511 */ diag::warn_missing_sysroot, -1,
  /* DiagArray512 */ diag::warn_missing_variable_declarations, -1,
  /* DiagArray513 */ diag::warn_assume_attribute_string_unknown_suggested, -1,
  /* DiagArray514 */ diag::remark_module_build, diag::remark_module_build_done, diag::remark_module_lock_failure, diag::remark_module_lock_timeout, -1,
  /* DiagArray515 */ diag::warn_module_conflict, diag::warn_module_system_bit_conflict, -1,
  /* DiagArray516 */ diag::warn_module_config_mismatch, -1,
  /* DiagArray517 */ diag::warn_duplicate_module_file_extension, -1,
  /* DiagArray518 */ diag::remark_module_import, -1,
  /* DiagArray519 */ diag::ext_module_import_in_extern_c, -1,
  /* DiagArray520 */ diag::remark_module_lock, -1,
  /* DiagArray521 */ diag::ext_equivalent_internal_linkage_decl_in_modules, -1,
  /* DiagArray522 */ diag::ext_module_import_not_at_top_level_noop, -1,
  /* DiagArray526 */ diag::warn_drv_msvc_not_found, -1,
  /* DiagArray527 */ diag::warn_multichar_character_literal, -1,
  /* DiagArray528 */ diag::warn_vbase_moved_multiple_times, -1,
  /* DiagArray530 */ diag::ext_anonymous_record_with_anonymous_type, -1,
  /* DiagArray532 */ diag::warn_operator_new_returns_null, -1,
  /* DiagArray533 */ diag::ext_no_newline_eof, diag::warn_no_newline_eof, -1,
  /* DiagArray534 */ diag::warn_dereference_of_noderef_type, diag::warn_dereference_of_noderef_type_no_decl, diag::warn_noderef_to_dereferenceable_pointer, -1,
  /* DiagArray536 */ diag::ext_non_c_like_anon_struct_in_typedef, -1,
  /* DiagArray538 */ diag::warn_non_literal_null_pointer, -1,
  /* DiagArray539 */ diag::warn_non_modular_include_in_framework_module, -1,
  /* DiagArray540 */ diag::warn_non_modular_include_in_module, -1,
  /* DiagArray541 */ diag::warn_cannot_pass_non_pod_arg_to_vararg, diag::warn_non_pod_vararg_with_format_string, diag::warn_second_parameter_to_va_arg_not_pod, diag::warn_second_parameter_to_va_arg_ownership_qualified, -1,
  /* DiagArray542 */ diag::warn_alignment_not_power_of_two, -1,
  /* DiagArray543 */ diag::warn_non_virtual_dtor, -1,
  /* DiagArray544 */ diag::warn_null_arg, diag::warn_null_ret, -1,
  /* DiagArray546 */ diag::pp_nonportable_path, -1,
  /* DiagArray547 */ diag::pp_nonportable_system_path, -1,
  /* DiagArray548 */ diag::warn_neon_vector_initializer_non_portable, -1,
  /* DiagArray549 */ diag::warn_cstruct_memaccess, -1,
  /* DiagArray550 */ diag::warn_nsconsumed_attribute_mismatch, -1,
  /* DiagArray551 */ diag::warn_nsreturns_retained_attribute_mismatch, -1,
  /* DiagArray552 */ diag::warn_null_in_arithmetic_operation, diag::warn_null_in_comparison_operation, -1,
  /* DiagArray553 */ diag::null_in_char_or_string, diag::null_in_file, -1,
  /* DiagArray554 */ diag::warn_impcast_null_pointer_to_integer, -1,
  /* DiagArray555 */ diag::warn_binding_null_to_reference, diag::warn_indirection_through_null, -1,
  /* DiagArray556 */ diag::warn_gnu_null_ptr_arith, diag::warn_pointer_arith_null_ptr, -1,
  /* DiagArray557 */ diag::warn_pointer_sub_null_ptr, -1,
  /* DiagArray558 */ diag::warn_conflicting_nullability_attr_overriding_param_types, diag::warn_conflicting_nullability_attr_overriding_ret_types, diag::warn_mismatched_nullability_attr, diag::warn_null_resettable_setter, diag::warn_nullability_duplicate, -1,
  /* DiagArray559 */ diag::warn_nullability_missing, -1,
  /* DiagArray560 */ diag::warn_nullability_missing_array, -1,
  /* DiagArray561 */ diag::warn_nullability_declspec, -1,
  /* DiagArray562 */ diag::ext_nullability, -1,
  /* DiagArray563 */ diag::warn_nullability_inferred_on_nested_type, -1,
  /* DiagArray564 */ diag::warn_nullability_lost, -1,
  /* DiagArray565 */ diag::warn_autosynthesis_property_ivar_match, -1,
  /* DiagArray566 */ diag::warn_impcast_constant_value_to_objc_bool, -1,
  /* DiagArray567 */ diag::warn_objc_boxing_invalid_utf8_string, -1,
  /* DiagArray568 */ diag::warn_objc_circular_container, -1,
  /* DiagArray570 */ diag::warn_objc_designated_init_missing_super_call, diag::warn_objc_designated_init_non_designated_init_call, diag::warn_objc_designated_init_non_super_designated_init_call, diag::warn_objc_implementation_missing_designated_init_override, diag::warn_objc_secondary_init_missing_init_call, diag::warn_objc_secondary_init_super_init_call, -1,
  /* DiagArray571 */ diag::warn_nsdictionary_duplicate_key, -1,
  /* DiagArray572 */ diag::warn_superclass_variable_sized_type_not_at_end, diag::warn_variable_sized_ivar_visibility, -1,
  /* DiagArray573 */ diag::warn_forward_class_redefinition, -1,
  /* DiagArray574 */ diag::warn_ivars_in_interface, -1,
  /* DiagArray575 */ diag::warn_objc_literal_comparison, -1,
  /* DiagArray576 */ diag::warn_impcast_objective_c_literal_to_bool, diag::warn_objc_collection_literal_element, -1,
  /* DiagArray577 */ diag::warn_pp_objc_macro_redef_ignored, -1,
  /* DiagArray578 */ diag::warn_messaging_unqualified_id, -1,
  /* DiagArray579 */ diag::warn_class_method_not_found, diag::warn_class_method_not_found_with_typo, diag::warn_inst_method_not_found, diag::warn_instance_method_not_found_with_typo, diag::warn_instance_method_on_class_found, diag::warn_root_inst_method_not_found, -1,
  /* DiagArray580 */ diag::warn_missing_explicit_synthesis, -1,
  /* DiagArray581 */ diag::warn_objc_missing_super_call, -1,
  /* DiagArray582 */ diag::warn_multiple_method_decl, -1,
  /* DiagArray583 */ diag::warn_objc_property_retain_of_block, -1,
  /* DiagArray584 */ diag::warn_objc_pointer_cxx_catch_fragile, -1,
  /* DiagArray585 */ diag::warn_objc_property_assign_on_object, -1,
  /* DiagArray586 */ diag::warn_impl_required_for_class_property, diag::warn_impl_required_in_category_for_class_property, diag::warn_setter_getter_impl_required, diag::warn_setter_getter_impl_required_in_category, -1,
  /* DiagArray587 */ diag::warn_property_implicitly_mismatched, -1,
  /* DiagArray588 */ diag::warn_cocoa_naming_owned_rule, -1,
  /* DiagArray589 */ diag::warn_objc_property_default_assign_on_object, diag::warn_objc_property_no_assignment_attribute, -1,
  /* DiagArray590 */ diag::warn_autosynthesis_property_in_superclass, diag::warn_no_autosynthesis_property, diag::warn_no_autosynthesis_shared_ivar_property, -1,
  /* DiagArray591 */ diag::warn_category_method_impl_match, -1,
  /* DiagArray592 */ diag::warn_auto_synthesizing_protocol_property, -1,
  /* DiagArray593 */ diag::warn_objc_redundant_qualified_class_type, -1,
  /* DiagArray594 */ diag::warn_objc_readonly_property_has_setter, -1,
  /* DiagArray596 */ diag::warn_objc_redundant_literal_use, -1,
  /* DiagArray597 */ diag::warn_objc_root_class_missing, -1,
  /* DiagArray599 */ diag::warn_impcast_float_to_objc_signed_char_bool, -1,
  /* DiagArray600 */ diag::warn_impcast_int_to_objc_signed_char_bool, -1,
  /* DiagArray601 */ diag::warn_objc_string_literal_comparison, -1,
  /* DiagArray602 */ diag::warn_concatenated_nsarray_literal, -1,
  /* DiagArray603 */ diag::warn_objc_unsafe_perform_selector, -1,
  /* DiagArray604 */ diag::warn_odr_different_num_template_parameters, diag::warn_odr_different_template_parameter_kind, diag::warn_odr_field_type_inconsistent, diag::warn_odr_function_type_inconsistent, diag::warn_odr_ivar_type_inconsistent, diag::warn_odr_non_type_parameter_type_inconsistent, diag::warn_odr_objc_method_num_params_inconsistent, diag::warn_odr_objc_method_param_type_inconsistent, diag::warn_odr_objc_method_result_type_inconsistent, diag::warn_odr_objc_method_variadic_inconsistent, diag::warn_odr_objc_property_impl_kind_inconsistent, diag::warn_odr_objc_property_type_inconsistent, diag::warn_odr_objc_superclass_inconsistent, diag::warn_odr_objc_synthesize_ivar_inconsistent, diag::warn_odr_parameter_pack_non_pack, diag::warn_odr_tag_type_inconsistent, diag::warn_odr_variable_multiple_def, diag::warn_odr_variable_type_inconsistent, -1,
  /* DiagArray605 */ diag::warn_old_style_cast, -1,
  /* DiagArray607 */ diag::ext_opencl_ext_vector_type_rgba_selector, -1,
  /* DiagArray609 */ diag::ext_omp_attributes, -1,
  /* DiagArray610 */ diag::warn_omp_alignment_not_power_of_two, diag::warn_omp_allocate_thread_on_task_target_directive, diag::warn_omp_ctx_incompatible_property_for_selector, diag::warn_omp_ctx_incompatible_score_for_property, diag::warn_omp_ctx_incompatible_selector_for_set, diag::warn_omp_ctx_selector_without_properties, diag::warn_omp_declare_variant_ctx_mutiple_use, diag::warn_omp_declare_variant_ctx_not_a_property, diag::warn_omp_declare_variant_ctx_not_a_selector, diag::warn_omp_declare_variant_ctx_not_a_set, diag::warn_omp_declare_variant_expected, diag::warn_omp_declare_variant_string_literal_or_identifier, diag::warn_omp_linear_step_zero, diag::warn_omp_more_one_device_type_clause, diag::warn_omp_more_one_interop_type, diag::warn_omp_unknown_assumption_clause_missing_id, diag::warn_omp_unknown_assumption_clause_without_args, diag::warn_omp_used_different_allocator, -1,
  /* DiagArray611 */ diag::ext_omp_loop_not_canonical_init, diag::warn_omp_loop_64_bit_var, -1,
  /* DiagArray612 */ diag::warn_omp_non_trivial_type_mapped, -1,
  /* DiagArray613 */ diag::warn_drv_omp_offload_target_duplicate, diag::warn_omp_declare_target_after_first_use, diag::warn_omp_not_in_target_context, -1,
  /* DiagArray614 */ diag::warn_drv_fine_grained_bitfield_accesses_ignored, diag::warn_drv_jmc_requires_debuginfo, diag::warn_drv_moutline_atomics_unsupported_opt, diag::warn_drv_moutline_unsupported_opt, diag::warn_drv_needs_hvx, diag::warn_drv_ps4_force_pic, diag::warn_drv_unsupported_longcalls, diag::warn_drv_unsupported_option_for_offload_arch_req_feature, diag::warn_drv_unsupported_option_for_target, diag::warn_drv_unsupported_pic_with_mabicalls, diag::warn_drv_unsupported_sdata, -1,
  /* DiagArray615 */ diag::ext_typecheck_ordered_comparison_of_function_pointers, diag::warn_typecheck_ordered_comparison_of_function_pointers, -1,
  /* DiagArray616 */ diag::ext_out_of_line_declaration, -1,
  /* DiagArray617 */ diag::ext_use_out_of_scope_declaration, -1,
  /* DiagArray618 */ diag::warn_overaligned_type, -1,
  /* DiagArray620 */ diag::ext_string_too_long, -1,
  /* DiagArray621 */ diag::warn_overloaded_shift_in_comparison, -1,
  /* DiagArray622 */ diag::warn_overloaded_virtual, -1,
  /* DiagArray624 */ diag::warn_fe_override_module, -1,
  /* DiagArray625 */ diag::warn_conflicting_overriding_param_modifiers, diag::warn_conflicting_overriding_param_types, diag::warn_conflicting_overriding_ret_type_modifiers, diag::warn_conflicting_overriding_ret_types, diag::warn_conflicting_overriding_variadic, diag::warn_non_contravariant_overriding_param_types, diag::warn_non_covariant_overriding_ret_types, -1,
  /* DiagArray626 */ diag::warn_drv_overriding_flag_option, -1,
  /* DiagArray627 */ diag::warn_unnecessary_packed, -1,
  /* DiagArray628 */ diag::warn_padded_struct_anon_field, diag::warn_padded_struct_field, diag::warn_padded_struct_size, -1,
  /* DiagArray629 */ diag::warn_condition_is_assignment, diag::warn_precedence_bitwise_rel, diag::warn_precedence_conditional, -1,
  /* DiagArray630 */ diag::warn_equality_with_extra_parens, -1,
  /* DiagArray632 */ diag::remark_fe_backend_optimization_remark, -1,
  /* DiagArray633 */ diag::remark_fe_backend_optimization_remark_analysis, diag::remark_fe_backend_optimization_remark_analysis_aliasing, diag::remark_fe_backend_optimization_remark_analysis_fpcommute, -1,
  /* DiagArray634 */ diag::warn_fe_backend_optimization_failure, -1,
  /* DiagArray635 */ diag::remark_fe_backend_optimization_remark_missed, -1,
  /* DiagArray636 */ diag::warn_module_uses_date_time, -1,
  /* DiagArray637 */ diag::ext_aggregate_init_not_constant, diag::ext_anonymous_record_with_type, diag::ext_anonymous_struct_union_qualified, diag::ext_array_size_conversion, diag::ext_auto_new_list_init, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_cast_fn_obj, diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_designated_init, diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_duplicate_declspec, diag::ext_ellipsis_exception_spec, diag::ext_empty_fnmacro_arg, diag::ext_enum_value_not_int, diag::ext_enumerator_list_comma_c, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_instantiation_without_qualified_id, diag::ext_expr_not_ice, diag::ext_extern_template, diag::ext_extra_semi, diag::ext_forward_ref_enum, diag::ext_freestanding_complex, diag::ext_gnu_array_range, diag::ext_gnu_ptr_func_arith, diag::ext_gnu_subscript_void_type, diag::ext_gnu_void_ptr, diag::ext_hex_constant_invalid, diag::ext_hex_literal_invalid, diag::ext_ident_list_in_param, diag::ext_in_class_initializer_non_constant, diag::ext_integer_complement_complex, diag::ext_integer_increment_complex, diag::ext_internal_in_extern_inline_quiet, diag::ext_line_comment, diag::ext_main_used, diag::ext_mixed_decls_code, diag::ext_multi_line_line_comment, diag::ext_named_variadic_macro, diag::ext_no_newline_eof, diag::ext_nonstandard_escape, diag::ext_ns_enum_attribute, diag::ext_opencl_double_without_pragma, diag::ext_param_not_declared, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_pp_bad_vaargs_use, diag::ext_pp_comma_expr, diag::ext_pp_ident_directive, diag::ext_pp_line_too_big, diag::ext_pp_opencl_variadic_macros, diag::ext_pp_warning_directive, diag::ext_return_has_void_expr, diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::ext_subscript_non_lvalue, diag::ext_subscript_overload, diag::ext_thread_before, diag::ext_typecheck_addrof_void, diag::ext_typecheck_cast_nonscalar, diag::ext_typecheck_comparison_of_fptr_to_void, diag::ext_typecheck_cond_one_void, diag::ext_typecheck_convert_pointer_void_func, diag::ext_typecheck_ordered_comparison_of_pointer_and_zero, diag::ext_variadic_macro, diag::warn_defined_in_function_type_macro, diag::warn_format_conversion_argument_type_mismatch_pedantic, diag::warn_kern_is_method, -1,
  /* DiagArray638 */ diag::warn_opencl_unsupported_core_feature, diag::warn_pragma_extension_is_core, -1,
  /* DiagArray640 */ diag::warn_pessimizing_move_on_initialization, diag::warn_pessimizing_move_on_return, -1,
  /* DiagArray641 */ diag::ext_gnu_ptr_func_arith, diag::ext_gnu_subscript_void_type, diag::ext_gnu_void_ptr, diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::warn_sub_ptr_zero_size_types, -1,
  /* DiagArray642 */ diag::warn_cast_nonnull_to_bool, diag::warn_impcast_pointer_to_bool, -1,
  /* DiagArray643 */ diag::warn_pointer_compare, -1,
  /* DiagArray644 */ diag::ext_typecheck_comparison_of_pointer_integer, -1,
  /* DiagArray645 */ diag::ext_typecheck_convert_incompatible_pointer_sign, -1,
  /* DiagArray646 */ diag::warn_pointer_to_enum_cast, -1,
  /* DiagArray647 */ diag::warn_pointer_to_int_cast, -1,
  /* DiagArray648 */ diag::ext_typecheck_cond_incompatible_pointers, -1,
  /* DiagArray649 */ diag::warn_poison_system_directories, -1,
  /* DiagArray650 */ diag::warn_potentially_direct_selector_expression, -1,
  /* DiagArray651 */ diag::warn_side_effects_typeid, -1,
  /* DiagArray652 */ diag::warn_pragma_attribute_unused, -1,
  /* DiagArray653 */ diag::pp_pragma_once_in_main_file, -1,
  /* DiagArray654 */ diag::warn_pragma_pack_modified_after_include, diag::warn_pragma_pack_no_pop_eof, -1,
  /* DiagArray655 */ diag::warn_pragma_pack_non_default_at_include, -1,
  /* DiagArray656 */ diag::pp_pragma_sysheader_in_main_file, -1,
  /* DiagArray657 */ diag::warn_redefine_extname_not_applied, -1,
  /* DiagArray658 */ diag::warn_cxx11_compat_constexpr_body_invalid_stmt, diag::warn_cxx11_compat_constexpr_body_multiple_return, diag::warn_cxx11_compat_constexpr_body_no_return, diag::warn_cxx11_compat_constexpr_local_var, diag::warn_cxx11_compat_constexpr_type_definition, diag::warn_cxx11_compat_decltype_auto_type_specifier, diag::warn_cxx11_compat_deduced_return_type, diag::warn_cxx11_compat_digit_separator, diag::warn_cxx11_compat_generic_lambda, diag::warn_cxx11_compat_init_capture, diag::warn_cxx11_compat_variable_template, -1,
  /* DiagArray660 */ diag::warn_cxx14_compat_class_template_argument_deduction, diag::warn_cxx14_compat_constexpr_if, diag::warn_cxx14_compat_constexpr_on_lambda, diag::warn_cxx14_compat_decomp_decl, diag::warn_cxx14_compat_fold_expression, diag::warn_cxx14_compat_init_statement, diag::warn_cxx14_compat_inline_variable, diag::warn_cxx14_compat_nested_namespace_definition, diag::warn_cxx14_compat_star_this_lambda_capture, diag::warn_cxx14_compat_static_assert_no_message, diag::warn_cxx14_compat_template_nontype_parm_auto_type, diag::warn_cxx14_compat_template_template_param_typename, diag::warn_cxx14_compat_u8_character_literal, diag::warn_cxx14_compat_using_attribute_ns, diag::warn_cxx17_compat_multi_using_declaration, diag::warn_cxx17_compat_using_declaration_pack, diag::warn_for_range_begin_end_types_differ, -1,
  /* DiagArray661 */ diag::warn_cxx14_compat_ns_enum_attribute, diag::warn_cxx17_hex_literal, -1,
  /* DiagArray662 */ diag::warn_cxx17_compat_adl_only_template_id, diag::warn_cxx17_compat_bitfield_member_init, diag::warn_cxx17_compat_constexpr_body_invalid_stmt, diag::warn_cxx17_compat_constexpr_ctor_missing_init, diag::warn_cxx17_compat_constexpr_function_try_block, diag::warn_cxx17_compat_constexpr_local_var_no_init, diag::warn_cxx17_compat_constexpr_union_ctor_no_init, diag::warn_cxx17_compat_constexpr_virtual, diag::warn_cxx17_compat_decomp_decl_spec, diag::warn_cxx17_compat_defaulted_comparison, diag::warn_cxx17_compat_defaulted_method_type_mismatch, diag::warn_cxx17_compat_equals_this_lambda_capture, diag::warn_cxx17_compat_explicit_bool, diag::warn_cxx17_compat_for_range_init_stmt, diag::warn_cxx17_compat_init_capture_pack, diag::warn_cxx17_compat_inline_nested_namespace_definition, diag::warn_cxx17_compat_lambda_def_ctor_assign, diag::warn_cxx17_compat_lambda_template_parameter_list, diag::warn_cxx17_compat_missing_varargs_arg, diag::warn_cxx17_compat_spaceship, diag::warn_cxx17_compat_template_nontype_parm_type, diag::warn_cxx17_compat_unicode_type, diag::warn_cxx17_compat_using_decl_class_member_enumerator, diag::warn_cxx17_compat_using_decl_non_member_enumerator, diag::warn_cxx17_compat_using_decl_scoped_enumerator, diag::warn_cxx17_compat_using_enum_declaration, -1,
  /* DiagArray663 */ diag::warn_cxx17_compat_designated_init, diag::warn_cxx17_compat_pointer_to_const_ref_member_on_rvalue, -1,
  /* DiagArray664 */ diag::ext_subscript_overload, diag::warn_cxx20_alias_in_init_statement, diag::warn_cxx20_compat_consteval_if, diag::warn_cxx20_compat_decl_attrs_on_lambda, diag::warn_cxx20_compat_size_t_suffix, -1,
  /* DiagArray666 */ diag::warn_c17_compat_bit_int, diag::warn_c17_compat_static_assert_no_message, diag::warn_c2x_compat_digit_separator, -1,
  /* DiagArray668 */ diag::warn_omp51_compat_attributes, -1,
  /* DiagArray669 */ diag::ext_predef_outside_function, -1,
  /* DiagArray670 */ diag::warn_private_extern, -1,
  /* DiagArray671 */ diag::warn_use_of_private_header_outside_module, -1,
  /* DiagArray672 */ diag::warn_mmap_mismatched_private_module_name, diag::warn_mmap_mismatched_private_submodule, diag::warn_mmap_redundant_export_as, diag::warn_no_priv_submodule_use_toplevel, -1,
  /* DiagArray673 */ diag::warn_profile_data_missing, -1,
  /* DiagArray674 */ diag::warn_profile_data_out_of_date, -1,
  /* DiagArray675 */ diag::warn_profile_data_unprofiled, -1,
  /* DiagArray676 */ diag::warn_property_access_suggest, -1,
  /* DiagArray677 */ diag::warn_property_attr_mismatch, diag::warn_property_attribute, diag::warn_property_redecl_getter_mismatch, diag::warn_readonly_property, -1,
  /* DiagArray678 */ diag::warn_unimplemented_protocol_method, -1,
  /* DiagArray679 */ diag::warn_protocol_property_mismatch, -1,
  /* DiagArray680 */ diag::warn_avx_calling_convention, -1,
  /* DiagArray681 */ diag::err_func_returning_qualified_void, -1,
  /* DiagArray682 */ diag::warn_quoted_include_in_framework_header, -1,
  /* DiagArray684 */ diag::warn_for_range_ref_binds_ret_temp, -1,
  /* DiagArray685 */ diag::warn_for_range_const_ref_binds_temp_built_from_ref, diag::warn_for_range_copy, -1,
  /* DiagArray686 */ diag::warn_auto_readonly_iboutlet_property, -1,
  /* DiagArray687 */ diag::warn_bad_receiver_type, -1,
  /* DiagArray688 */ diag::warn_receiver_forward_class, diag::warn_receiver_forward_instance, -1,
  /* DiagArray689 */ diag::ext_member_redeclared, -1,
  /* DiagArray690 */ diag::warn_consteval_if_always_true, -1,
  /* DiagArray692 */ diag::warn_redundant_move_on_return, -1,
  /* DiagArray693 */ diag::warn_redundant_parens_around_declarator, -1,
  /* DiagArray694 */ diag::ext_register_storage_class, -1,
  /* DiagArray695 */ diag::warn_reinterpret_different_from_static, -1,
  /* DiagArray696 */ diag::remark_fe_backend_plugin, -1,
  /* DiagArray698 */ diag::warn_initializer_out_of_order, diag::warn_some_initializers_out_of_order, -1,
  /* DiagArray699 */ diag::ext_designated_init_reordered, -1,
  /* DiagArray700 */ diag::warn_objc_requires_super_protocol, -1,
  /* DiagArray702 */ diag::warn_reserved_extern_symbol, -1,
  /* DiagArray703 */ diag::warn_pp_macro_is_reserved_id, -1,
  /* DiagArray704 */ diag::ext_ms_reserved_user_defined_literal, diag::ext_reserved_user_defined_literal, -1,
  /* DiagArray705 */ diag::warn_pragma_restrict_expansion_macro_use, -1,
  /* DiagArray706 */ diag::ext_retained_language_linkage, -1,
  /* DiagArray707 */ diag::warn_ret_addr_label, diag::warn_ret_local_temp_addr_ref, diag::warn_ret_stack_addr_ref, -1,
  /* DiagArray709 */ diag::ext_return_has_expr, diag::ext_return_missing_expr, diag::warn_falloff_nonvoid_coroutine, diag::warn_falloff_nonvoid_function, diag::warn_falloff_nonvoid_lambda, diag::warn_maybe_falloff_nonvoid_coroutine, diag::warn_maybe_falloff_nonvoid_function, diag::warn_maybe_falloff_nonvoid_lambda, diag::warn_return_missing_expr, -1,
  /* DiagArray710 */ diag::warn_return_value_udt, diag::warn_return_value_udt_incomplete, -1,
  /* DiagArray711 */ diag::ext_ovl_rewrite_equalequal_not_bool, -1,
  /* DiagArray712 */ diag::remark_cc1_round_trip_generated, -1,
  /* DiagArray713 */ diag::warn_no_dynamic_cast_with_rtti_disabled, diag::warn_no_typeid_with_rtti_disabled, -1,
  /* DiagArray714 */ diag::remark_sanitize_address_insert_extra_padding_accepted, diag::remark_sanitize_address_insert_extra_padding_rejected, -1,
  /* DiagArray715 */ diag::remark_pp_search_path_usage, -1,
  /* DiagArray716 */ diag::warn_attribute_section_on_redeclaration, diag::warn_duplicate_codeseg_attribute, diag::warn_mismatched_section, -1,
  /* DiagArray717 */ diag::warn_unimplemented_selector, -1,
  /* DiagArray718 */ diag::warn_multiple_selectors, -1,
  /* DiagArray719 */ diag::warn_self_assignment_builtin, -1,
  /* DiagArray720 */ diag::warn_identity_field_assign, -1,
  /* DiagArray721 */ diag::warn_self_assignment_overloaded, -1,
  /* DiagArray722 */ diag::warn_self_move, -1,
  /* DiagArray723 */ diag::warn_semicolon_before_method_body, -1,
  /* DiagArray724 */ diag::warn_missing_sentinel, diag::warn_not_enough_argument, -1,
  /* DiagArray726 */ diag::warn_fe_serialized_diag_failure, diag::warn_fe_serialized_diag_failure_during_finalisation, diag::warn_fe_serialized_diag_merge_failure, -1,
  /* DiagArray727 */ diag::warn_decl_shadow, -1,
  /* DiagArray729 */ diag::warn_shadow_field, -1,
  /* DiagArray730 */ diag::warn_ctor_parm_shadows_field, -1,
  /* DiagArray731 */ diag::warn_modifying_shadowing_decl, -1,
  /* DiagArray732 */ diag::warn_ivar_use_hidden, -1,
  /* DiagArray733 */ diag::warn_decl_shadow_uncaptured_local, -1,
  /* DiagArray734 */ diag::warn_shift_negative, -1,
  /* DiagArray735 */ diag::warn_shift_gt_typewidth, -1,
  /* DiagArray736 */ diag::warn_shift_lhs_negative, -1,
  /* DiagArray737 */ diag::warn_addition_in_bitshift, -1,
  /* DiagArray738 */ diag::warn_shift_result_gt_typewidth, -1,
  /* DiagArray739 */ diag::warn_shift_result_sets_sign_bit, -1,
  /* DiagArray740 */ diag::warn_impcast_integer_64_32, -1,
  /* DiagArray741 */ diag::warn_mixed_sign_comparison, -1,
  /* DiagArray742 */ diag::warn_impcast_integer_sign, diag::warn_impcast_integer_sign_conditional, diag::warn_impcast_nonnegative_result, -1,
  /* DiagArray744 */ diag::warn_no_underlying_type_specified_for_enum_bitfield, -1,
  /* DiagArray745 */ diag::ext_wchar_t_sign_spec, -1,
  /* DiagArray746 */ diag::warn_sizeof_array_param, -1,
  /* DiagArray747 */ diag::warn_sizeof_array_decay, -1,
  /* DiagArray748 */ diag::warn_division_sizeof_array, -1,
  /* DiagArray749 */ diag::warn_division_sizeof_ptr, -1,
  /* DiagArray750 */ diag::warn_sizeof_pointer_expr_memaccess, diag::warn_sizeof_pointer_type_memaccess, -1,
  /* DiagArray751 */ diag::warn_slash_u_filename, -1,
  /* DiagArray752 */ diag::warn_slh_does_not_support_asm_goto, -1,
  /* DiagArray753 */ diag::warn_sometimes_uninit_var, -1,
  /* DiagArray754 */ diag::warn_fe_source_mgr, -1,
  /* DiagArray755 */ diag::warn_omp_declare_variant_after_emitted, diag::warn_omp_declare_variant_after_used, diag::warn_omp_declare_variant_marked_as_declare_variant, diag::warn_omp_declare_variant_score_not_constant, diag::warn_omp_nesting_simd, diag::warn_pragma_omp_ignored, diag::warn_unknown_declare_variant_isa_trait, -1,
  /* DiagArray756 */ diag::warn_sampler_initializer_invalid_bits, -1,
  /* DiagArray758 */ diag::warn_stack_exhausted, -1,
  /* DiagArray759 */ diag::warn_stack_clash_protection_inline_asm, -1,
  /* DiagArray760 */ diag::ext_in_class_initializer_float_type_cxx11, -1,
  /* DiagArray761 */ diag::ext_internal_in_extern_inline, diag::ext_internal_in_extern_inline_quiet, -1,
  /* DiagArray762 */ diag::warn_static_inline_explicit_inst_ignored, -1,
  /* DiagArray763 */ diag::warn_static_local_in_extern_inline, -1,
  /* DiagArray764 */ diag::warn_static_self_reference_in_init, -1,
  /* DiagArray765 */ diag::warn_drv_libstdcxx_not_found, -1,
  /* DiagArray777 */ diag::warn_strict_potentially_direct_selector_expression, -1,
  /* DiagArray778 */ diag::warn_strict_prototypes, -1,
  /* DiagArray779 */ diag::warn_strict_multiple_method_decl, -1,
  /* DiagArray780 */ diag::warn_stringcompare, -1,
  /* DiagArray781 */ diag::warn_concatenated_literal_array_init, -1,
  /* DiagArray782 */ diag::warn_impcast_string_literal_to_bool, -1,
  /* DiagArray783 */ diag::warn_string_plus_char, -1,
  /* DiagArray784 */ diag::warn_string_plus_int, -1,
  /* DiagArray785 */ diag::warn_strlcpycat_wrong_size, -1,
  /* DiagArray786 */ diag::warn_strncat_large_size, diag::warn_strncat_src_size, diag::warn_strncat_wrong_size, -1,
  /* DiagArray787 */ diag::warn_suggest_destructor_marked_not_override_overriding, -1,
  /* DiagArray788 */ diag::warn_suggest_function_marked_not_override_overriding, -1,
  /* DiagArray789 */ diag::ext_typecheck_base_super, -1,
  /* DiagArray790 */ diag::warn_suspicious_bzero_size, -1,
  /* DiagArray792 */ diag::warn_attr_swift_name_decl_kind, diag::warn_attr_swift_name_decl_missing_params, diag::warn_attr_swift_name_function, diag::warn_attr_swift_name_getter_parameters, diag::warn_attr_swift_name_invalid_identifier, diag::warn_attr_swift_name_missing_parameters, diag::warn_attr_swift_name_multiple_selfs, diag::warn_attr_swift_name_num_params, diag::warn_attr_swift_name_setter_parameters, diag::warn_attr_swift_name_subscript_getter_newValue, diag::warn_attr_swift_name_subscript_invalid_parameter, diag::warn_attr_swift_name_subscript_setter_multiple_newValues, diag::warn_attr_swift_name_subscript_setter_no_newValue, -1,
  /* DiagArray793 */ diag::warn_case_value_overflow, diag::warn_missing_case, diag::warn_not_in_enum, -1,
  /* DiagArray794 */ diag::warn_bool_switch_condition, -1,
  /* DiagArray796 */ diag::warn_def_missing_case, -1,
  /* DiagArray797 */ diag::warn_sync_fetch_and_nand_semantics_change, -1,
  /* DiagArray799 */ diag::warn_target_clone_mixed_values, -1,
  /* DiagArray800 */ diag::warn_comparison_bitwise_always, diag::warn_comparison_bitwise_or, -1,
  /* DiagArray801 */ diag::warn_alignment_builtin_useless, diag::warn_comparison_always, -1,
  /* DiagArray802 */ diag::warn_integer_constants_in_conditional_always_true, diag::warn_left_shift_always, diag::warn_tautological_bool_compare, -1,
  /* DiagArray804 */ diag::warn_out_of_range_compare, -1,
  /* DiagArray805 */ diag::warn_tautological_compare_objc_bool, -1,
  /* DiagArray806 */ diag::warn_tautological_overlap_comparison, -1,
  /* DiagArray807 */ diag::warn_nonnull_expr_compare, diag::warn_null_pointer_compare, -1,
  /* DiagArray808 */ diag::warn_tautological_constant_compare, -1,
  /* DiagArray809 */ diag::warn_address_of_reference_null_compare, diag::warn_this_null_compare, -1,
  /* DiagArray810 */ diag::warn_unsigned_char_always_true_comparison, -1,
  /* DiagArray811 */ diag::warn_unsigned_enum_always_true_comparison, -1,
  /* DiagArray812 */ diag::warn_unsigned_always_true_comparison, -1,
  /* DiagArray813 */ diag::warn_tautological_compare_value_range, -1,
  /* DiagArray814 */ diag::warn_tcb_enforcement_violation, -1,
  /* DiagArray815 */ diag::ext_typecheck_decl_incomplete_type, -1,
  /* DiagArray817 */ diag::warn_acquired_before, diag::warn_acquired_before_after_cycle, diag::warn_cannot_resolve_lock, diag::warn_double_lock, diag::warn_expecting_lock_held_on_loop, diag::warn_expecting_locked, diag::warn_fun_excludes_mutex, diag::warn_fun_requires_lock, diag::warn_fun_requires_negative_cap, diag::warn_lock_exclusive_and_shared, diag::warn_lock_some_predecessors, diag::warn_no_unlock, diag::warn_unlock_but_no_lock, diag::warn_unlock_kind_mismatch, diag::warn_var_deref_requires_any_lock, diag::warn_var_deref_requires_lock, diag::warn_variable_requires_any_lock, diag::warn_variable_requires_lock, -1,
  /* DiagArray818 */ diag::warn_thread_attribute_argument_not_lockable, diag::warn_thread_attribute_decl_not_lockable, diag::warn_thread_attribute_decl_not_pointer, diag::warn_thread_attribute_ignored, diag::warn_thread_attribute_not_on_capability_member, diag::warn_thread_attribute_not_on_non_static_member, -1,
  /* DiagArray819 */ diag::warn_thread_safety_beta, -1,
  /* DiagArray820 */ diag::warn_acquire_requires_negative_cap, -1,
  /* DiagArray821 */ diag::warn_fun_requires_lock_precise, diag::warn_var_deref_requires_lock_precise, diag::warn_variable_requires_lock_precise, -1,
  /* DiagArray822 */ diag::warn_guarded_pass_by_reference, diag::warn_pt_guarded_pass_by_reference, -1,
  /* DiagArray823 */ diag::warn_thread_safety_verbose, -1,
  /* DiagArray824 */ diag::trigraph_converted, diag::trigraph_ends_block_comment, diag::trigraph_ignored, diag::trigraph_ignored_block_comment, -1,
  /* DiagArray826 */ diag::warn_type_safety_null_pointer_required, diag::warn_type_safety_type_mismatch, diag::warn_type_tag_for_datatype_wrong_kind, -1,
  /* DiagArray827 */ diag::ext_redefinition_of_typedef, -1,
  /* DiagArray828 */ diag::ext_typename_missing, -1,
  /* DiagArray829 */ diag::warn_fe_unable_to_open_stats_file, -1,
  /* DiagArray830 */ diag::warn_unaligned_access, -1,
  /* DiagArray831 */ diag::warn_unavailable_fwdclass_message, -1,
  /* DiagArray832 */ diag::warn_undeclared_selector, diag::warn_undeclared_selector_with_typo, -1,
  /* DiagArray833 */ diag::warn_pp_undef_identifier, -1,
  /* DiagArray834 */ diag::warn_pp_undef_prefix, -1,
  /* DiagArray835 */ diag::warn_address_of_reference_bool_conversion, diag::warn_this_bool_conversion, -1,
  /* DiagArray836 */ diag::warn_func_template_missing, -1,
  /* DiagArray837 */ diag::warn_undefined_inline, -1,
  /* DiagArray838 */ diag::warn_undefined_internal, -1,
  /* DiagArray839 */ diag::ext_undefined_internal_type, -1,
  /* DiagArray840 */ diag::warn_pointer_indirection_from_incompatible_type, diag::warn_undefined_reinterpret_cast, -1,
  /* DiagArray841 */ diag::warn_var_template_missing, -1,
  /* DiagArray842 */ diag::warn_throw_underaligned_obj, -1,
  /* DiagArray843 */ diag::warn_side_effects_unevaluated_context, -1,
  /* DiagArray844 */ diag::warn_unguarded_availability, -1,
  /* DiagArray845 */ diag::warn_unguarded_availability_new, -1,
  /* DiagArray846 */ diag::warn_delimited_ucn_empty, diag::warn_delimited_ucn_incomplete, diag::warn_ucn_escape_incomplete, diag::warn_ucn_escape_no_digits, diag::warn_ucn_escape_surrogate, diag::warn_ucn_not_valid_in_c89, diag::warn_ucn_not_valid_in_c89_literal, -1,
  /* DiagArray847 */ diag::warn_utf8_symbol_homoglyph, -1,
  /* DiagArray848 */ diag::ext_unicode_whitespace, -1,
  /* DiagArray849 */ diag::warn_utf8_symbol_zero_width, -1,
  /* DiagArray850 */ diag::warn_base_class_is_uninit, diag::warn_field_is_uninit, diag::warn_reference_field_is_uninit, diag::warn_uninit_byref_blockvar_captured_by_block, diag::warn_uninit_self_reference_in_init, diag::warn_uninit_self_reference_in_reference_init, diag::warn_uninit_var, -1,
  /* DiagArray851 */ diag::warn_uninit_const_reference, -1,
  /* DiagArray852 */ diag::warn_drv_unknown_argument_clang_cl, diag::warn_drv_unknown_argument_clang_cl_with_suggestion, -1,
  /* DiagArray853 */ diag::warn_assume_attribute_string_unknown, -1,
  /* DiagArray854 */ diag::warn_unknown_attribute_ignored, -1,
  /* DiagArray855 */ diag::warn_drv_new_cuda_version, diag::warn_drv_partially_supported_cuda_version, -1,
  /* DiagArray856 */ diag::ext_unknown_escape, -1,
  /* DiagArray857 */ diag::ext_on_off_switch_syntax, diag::ext_pragma_syntax_eod, diag::ext_stdc_pragma_ignored, diag::warn_pragma_diagnostic_cannot_pop, diag::warn_pragma_diagnostic_invalid, diag::warn_pragma_diagnostic_invalid_option, diag::warn_pragma_diagnostic_invalid_token, diag::warn_pragma_exec_charset_expected, diag::warn_pragma_exec_charset_push_invalid, diag::warn_pragma_exec_charset_spec_invalid, diag::warn_pragma_ignored, diag::warn_pragma_include_alias_expected, diag::warn_pragma_include_alias_expected_filename, diag::warn_pragma_include_alias_mismatch_angle, diag::warn_pragma_include_alias_mismatch_quote, diag::warn_pragma_warning_expected, diag::warn_pragma_warning_expected_number, diag::warn_pragma_warning_push_level, diag::warn_pragma_warning_spec_invalid, diag::warn_stdc_fenv_round_not_supported, -1,
  /* DiagArray858 */ diag::warn_unknown_sanitizer_ignored, -1,
  /* DiagArray859 */ diag::warn_pragma_diagnostic_unknown_warning, diag::warn_unknown_diag_option, diag::warn_unknown_warning_specifier, -1,
  /* DiagArray860 */ diag::ext_template_arg_unnamed_type, -1,
  /* DiagArray861 */ diag::warn_unneeded_internal_decl, diag::warn_unneeded_static_internal_decl, -1,
  /* DiagArray862 */ diag::warn_unneeded_member_function, -1,
  /* DiagArray863 */ diag::warn_unreachable, -1,
  /* DiagArray865 */ diag::warn_unreachable_break, -1,
  /* DiagArray866 */ diag::warn_unreachable_fallthrough_attr, -1,
  /* DiagArray867 */ diag::warn_unreachable_loop_increment, -1,
  /* DiagArray868 */ diag::warn_unreachable_return, -1,
  /* DiagArray869 */ diag::warn_unsequenced_mod_mod, diag::warn_unsequenced_mod_use, -1,
  /* DiagArray870 */ diag::warn_drv_unsupported_float_abi_by_lib, -1,
  /* DiagArray871 */ diag::warn_target_unsupported_abs2008, diag::warn_target_unsupported_abslegacy, -1,
  /* DiagArray872 */ diag::warn_at_available_unchecked_use, -1,
  /* DiagArray873 */ diag::warn_target_unsupported_compact_branches, -1,
  /* DiagArray874 */ diag::warn_attribute_dll_instantiated_base_class, -1,
  /* DiagArray875 */ diag::warn_fe_backend_unsupported_fp_exceptions, diag::warn_fe_backend_unsupported_fp_rounding, -1,
  /* DiagArray876 */ diag::warn_template_qualified_friend_ignored, diag::warn_template_qualified_friend_unsupported, -1,
  /* DiagArray877 */ diag::warn_drv_unsupported_gpopt, -1,
  /* DiagArray878 */ diag::warn_target_unsupported_nan2008, diag::warn_target_unsupported_nanlegacy, -1,
  /* DiagArray879 */ diag::warn_drv_dwarf_version_limited_by_target, diag::warn_drv_unsupported_debug_info_opt_for_target, -1,
  /* DiagArray880 */ diag::warn_attribute_protected_visibility, -1,
  /* DiagArray881 */ diag::ext_partial_specs_not_deducible, -1,
  /* DiagArray884 */ diag::warn_unused_but_set_parameter, -1,
  /* DiagArray885 */ diag::warn_unused_but_set_variable, -1,
  /* DiagArray886 */ diag::warn_drv_diagnostics_hotness_requires_pgo, diag::warn_drv_empty_joined_argument, diag::warn_drv_input_file_unused, diag::warn_drv_input_file_unused_by_cpp, diag::warn_drv_invalid_arch_name_with_suggestion, diag::warn_drv_preprocessed_input_file_unused, diag::warn_drv_unused_argument, diag::warn_ignored_clang_option, diag::warn_ignoring_fdiscard_for_bitcode, diag::warn_ignoring_verify_debuginfo_preserve_export, -1,
  /* DiagArray887 */ diag::warn_unused_comparison, -1,
  /* DiagArray888 */ diag::warn_unused_const_variable, -1,
  /* DiagArray889 */ diag::warn_unused_exception_param, -1,
  /* DiagArray890 */ diag::warn_unused_function, -1,
  /* DiagArray891 */ diag::warn_unused_property_expr, -1,
  /* DiagArray892 */ diag::warn_unused_label, -1,
  /* DiagArray893 */ diag::warn_unused_lambda_capture, -1,
  /* DiagArray894 */ diag::warn_unused_local_typedef, -1,
  /* DiagArray896 */ diag::pp_macro_not_used, -1,
  /* DiagArray897 */ diag::warn_unused_member_function, -1,
  /* DiagArray898 */ diag::warn_unused_parameter, -1,
  /* DiagArray899 */ diag::warn_unused_private_field, -1,
  /* DiagArray900 */ diag::warn_unused_property_backing_ivar, -1,
  /* DiagArray901 */ diag::warn_unused_result, diag::warn_unused_result_msg, -1,
  /* DiagArray902 */ diag::warn_unused_template, -1,
  /* DiagArray903 */ diag::warn_unused_call, diag::warn_unused_comma_left_operand, diag::warn_unused_constructor, diag::warn_unused_constructor_msg, diag::warn_unused_container_subscript_expr, diag::warn_unused_expr, diag::warn_unused_voidptr, -1,
  /* DiagArray904 */ diag::warn_unused_variable, -1,
  /* DiagArray905 */ diag::warn_unused_volatile, -1,
  /* DiagArray906 */ diag::warn_used_but_marked_unused, -1,
  /* DiagArray907 */ diag::warn_user_literal_reserved, -1,
  /* DiagArray908 */ diag::warn_diagnose_if_succeeded, -1,
  /* DiagArray909 */ diag::warn_second_arg_of_va_start_not_last_named_param, diag::warn_second_parameter_to_va_arg_never_compatible, diag::warn_va_start_type_is_undefined, -1,
  /* DiagArray910 */ diag::ext_named_variadic_macro, diag::ext_pp_bad_vaopt_use, diag::ext_variadic_macro, -1,
  /* DiagArray911 */ diag::warn_typecheck_vector_element_sizes_not_equal, -1,
  /* DiagArray912 */ diag::warn_incompatible_vectors, -1,
  /* DiagArray914 */ diag::warn_empty_parens_are_function_decl, diag::warn_parens_disambiguated_as_function_declaration, diag::warn_parens_disambiguated_as_variable_declaration, -1,
  /* DiagArray915 */ diag::warn_decl_in_param_list, diag::warn_redefinition_in_param_list, -1,
  /* DiagArray916 */ diag::warn_vla_used, -1,
  /* DiagArray917 */ diag::ext_vla, -1,
  /* DiagArray918 */ diag::warn_void_pointer_to_enum_cast, -1,
  /* DiagArray919 */ diag::warn_void_pointer_to_int_cast, -1,
  /* DiagArray920 */ diag::ext_typecheck_indirection_through_void_pointer, -1,
  /* DiagArray922 */ diag::warn_wasm_dynamic_exception_spec_ignored, -1,
  /* DiagArray923 */ diag::warn_weak_template_vtable, -1,
  /* DiagArray924 */ diag::warn_weak_vtable, -1,
  /* DiagArray925 */ diag::ext_deprecated_string_literal_conversion, -1,
  /* DiagArray927 */ diag::warn_xor_used_as_pow, diag::warn_xor_used_as_pow_base, diag::warn_xor_used_as_pow_base_extra, -1,
  /* DiagArray928 */ diag::warn_zero_as_null_pointer_constant, -1,
  /* DiagArray929 */ diag::ext_typecheck_zero_array_size, -1,
};

static const int16_t DiagSubGroups[] = {
  /* Empty */ -1,
  /* DiagSubGroup0 */ 284, -1,
  /* DiagSubGroup4 */ 17, 284, -1,
  /* DiagSubGroup11 */ 642, 780, 807, -1,
  /* DiagSubGroup17 */ 523, 629, 793, 794, 493, -1,
  /* DiagSubGroup27 */ 203, -1,
  /* DiagSubGroup29 */ 36, 35, 32, -1,
  /* DiagSubGroup34 */ 31, -1,
  /* DiagSubGroup41 */ 42, -1,
  /* DiagSubGroup50 */ 369, 182, -1,
  /* DiagSubGroup54 */ 854, 360, -1,
  /* DiagSubGroup64 */ 99, 126, 332, -1,
  /* DiagSubGroup65 */ 129, -1,
  /* DiagSubGroup75 */ 642, 835, -1,
  /* DiagSubGroup76 */ 75, -1,
  /* DiagSubGroup77 */ 72, -1,
  /* DiagSubGroup86 */ 89, -1,
  /* DiagSubGroup87 */ 93, -1,
  /* DiagSubGroup88 */ 97, -1,
  /* DiagSubGroup89 */ 97, 92, 90, 658, 660, 662, 664, -1,
  /* DiagSubGroup91 */ 89, 659, 661, 663, 665, -1,
  /* DiagSubGroup93 */ 94, 95, 96, -1,
  /* DiagSubGroup100 */ 660, 662, 664, -1,
  /* DiagSubGroup101 */ 100, 661, 663, 665, -1,
  /* DiagSubGroup102 */ 99, 98, -1,
  /* DiagSubGroup104 */ 226, 221, 105, 662, 664, -1,
  /* DiagSubGroup106 */ 104, 663, 665, -1,
  /* DiagSubGroup107 */ 103, -1,
  /* DiagSubGroup108 */ 102, -1,
  /* DiagSubGroup109 */ 104, -1,
  /* DiagSubGroup110 */ 105, -1,
  /* DiagSubGroup111 */ 107, -1,
  /* DiagSubGroup113 */ 664, -1,
  /* DiagSubGroup114 */ 113, 665, -1,
  /* DiagSubGroup116 */ 115, 112, -1,
  /* DiagSubGroup117 */ 113, -1,
  /* DiagSubGroup118 */ 114, -1,
  /* DiagSubGroup119 */ 116, -1,
  /* DiagSubGroup121 */ 662, -1,
  /* DiagSubGroup122 */ 663, -1,
  /* DiagSubGroup123 */ 660, -1,
  /* DiagSubGroup124 */ 661, -1,
  /* DiagSubGroup125 */ 658, -1,
  /* DiagSubGroup127 */ 659, -1,
  /* DiagSubGroup128 */ 131, 133, 658, 660, 662, 664, -1,
  /* DiagSubGroup132 */ 128, 129, 130, 659, 661, 663, 665, -1,
  /* DiagSubGroup137 */ 115, -1,
  /* DiagSubGroup138 */ 137, -1,
  /* DiagSubGroup140 */ 157, -1,
  /* DiagSubGroup151 */ 541, -1,
  /* DiagSubGroup155 */ 154, -1,
  /* DiagSubGroup159 */ 160, 161, -1,
  /* DiagSubGroup166 */ 68, 566, -1,
  /* DiagSubGroup171 */ 75, 166, 270, 69, 295, 740, 414, 379, 376, 443, 538, 554, 576, 742, 782, -1,
  /* DiagSubGroup172 */ 554, -1,
  /* DiagSubGroup173 */ 174, 212, 20, -1,
  /* DiagSubGroup176 */ 2, -1,
  /* DiagSubGroup184 */ 186, 188, 187, 707, -1,
  /* DiagSubGroup199 */ 198, 196, -1,
  /* DiagSubGroup201 */ 203, 204, 205, 206, 207, 209, 213, 214, 215, 216, 217, 218, 221, 225, 226, 227, 228, 229, 230, -1,
  /* DiagSubGroup207 */ 210, -1,
  /* DiagSubGroup208 */ 209, -1,
  /* DiagSubGroup209 */ 211, -1,
  /* DiagSubGroup212 */ 219, -1,
  /* DiagSubGroup223 */ 224, -1,
  /* DiagSubGroup230 */ 90, -1,
  /* DiagSubGroup236 */ 237, -1,
  /* DiagSubGroup241 */ 243, 242, -1,
  /* DiagSubGroup244 */ 245, -1,
  /* DiagSubGroup256 */ 214, -1,
  /* DiagSubGroup257 */ 543, -1,
  /* DiagSubGroup266 */ 288, -1,
  /* DiagSubGroup267 */ 269, 215, -1,
  /* DiagSubGroup268 */ 216, -1,
  /* DiagSubGroup270 */ 271, 272, 268, -1,
  /* DiagSubGroup271 */ 217, -1,
  /* DiagSubGroup272 */ 218, -1,
  /* DiagSubGroup284 */ 207, 502, 366, 407, 723, 505, 741, 898, 884, 556, 557, 263, 781, 321, -1,
  /* DiagSubGroup286 */ 130, 94, -1,
  /* DiagSubGroup287 */ 263, -1,
  /* DiagSubGroup295 */ 297, 298, -1,
  /* DiagSubGroup300 */ 301, 310, 544, 307, 309, 303, 302, -1,
  /* DiagSubGroup311 */ 305, 307, 309, -1,
  /* DiagSubGroup316 */ 315, -1,
  /* DiagSubGroup320 */ 799, -1,
  /* DiagSubGroup322 */ 98, 103, 112, -1,
  /* DiagSubGroup327 */ 328, 329, 331, 332, 333, 334, 335, 336, 337, 338, 339, 917, 340, 341, 342, 343, 344, 346, 689, 347, 348, 349, 350, 351, 352, 929, 353, 354, -1,
  /* DiagSubGroup365 */ 363, 364, -1,
  /* DiagSubGroup366 */ 367, -1,
  /* DiagSubGroup368 */ 377, 378, -1,
  /* DiagSubGroup373 */ 374, -1,
  /* DiagSubGroup376 */ 380, 599, -1,
  /* DiagSubGroup379 */ 600, -1,
  /* DiagSubGroup380 */ 370, -1,
  /* DiagSubGroup392 */ 393, 389, -1,
  /* DiagSubGroup398 */ 400, 540, -1,
  /* DiagSubGroup404 */ 221, -1,
  /* DiagSubGroup415 */ 414, -1,
  /* DiagSubGroup417 */ 418, -1,
  /* DiagSubGroup421 */ 362, -1,
  /* DiagSubGroup445 */ 131, -1,
  /* DiagSubGroup448 */ 96, -1,
  /* DiagSubGroup449 */ 299, 683, -1,
  /* DiagSubGroup460 */ 464, 469, 481, 467, 477, 485, 461, 490, 473, 491, 482, 483, 489, 475, 472, 468, 487, 484, 471, 479, 478, 476, 463, 466, 492, 462, 465, 470, 486, 401, -1,
  /* DiagSubGroup487 */ 488, -1,
  /* DiagSubGroup523 */ 77, 148, 154, 199, 300, 299, 314, 368, 405, 416, 497, 498, 524, 527, 685, 697, 709, 719, 722, 746, 747, 784, 801, 824, 850, 857, 882, 921, 581, 570, 572, 622, 670, 144, 282, 908, -1,
  /* DiagSubGroup524 */ 640, 692, 708, 722, -1,
  /* DiagSubGroup525 */ 481, -1,
  /* DiagSubGroup529 */ 97, -1,
  /* DiagSubGroup535 */ 105, -1,
  /* DiagSubGroup537 */ 741, 171, 444, -1,
  /* DiagSubGroup540 */ 539, -1,
  /* DiagSubGroup559 */ 560, -1,
  /* DiagSubGroup569 */ 595, -1,
  /* DiagSubGroup575 */ 601, -1,
  /* DiagSubGroup595 */ 596, -1,
  /* DiagSubGroup598 */ 600, 599, 566, 805, -1,
  /* DiagSubGroup608 */ 755, 610, 611, 613, 612, 609, -1,
  /* DiagSubGroup613 */ 612, -1,
  /* DiagSubGroup623 */ 407, -1,
  /* DiagSubGroup629 */ 447, 446, 71, 73, 737, 621, 630, 185, -1,
  /* DiagSubGroup631 */ 844, -1,
  /* DiagSubGroup637 */ 134, 94, 96, 98, 99, 103, 112, 115, 294, 322, 329, 331, 332, 333, 334, 335, 336, 338, 339, 340, 341, 343, 344, 346, 347, 348, 351, 353, 354, 437, 448, 464, 465, 467, 470, 472, 477, 478, 484, 620, 917, 929, 384, 260, 264, 562, 291, 67, 839, 706, 158, 530, 246, 439, 200, -1,
  /* DiagSubGroup639 */ 225, 450, 82, 705, 290, -1,
  /* DiagSubGroup646 */ 918, -1,
  /* DiagSubGroup647 */ 646, 919, -1,
  /* DiagSubGroup654 */ 655, -1,
  /* DiagSubGroup657 */ 857, 365, 652, 654, -1,
  /* DiagSubGroup659 */ 658, 126, -1,
  /* DiagSubGroup661 */ 660, -1,
  /* DiagSubGroup663 */ 662, -1,
  /* DiagSubGroup665 */ 664, -1,
  /* DiagSubGroup667 */ 666, -1,
  /* DiagSubGroup683 */ 685, 684, -1,
  /* DiagSubGroup694 */ 226, -1,
  /* DiagSubGroup697 */ 698, 699, -1,
  /* DiagSubGroup701 */ 703, -1,
  /* DiagSubGroup702 */ 703, -1,
  /* DiagSubGroup704 */ 92, -1,
  /* DiagSubGroup709 */ 710, -1,
  /* DiagSubGroup717 */ 718, -1,
  /* DiagSubGroup719 */ 721, 720, -1,
  /* DiagSubGroup725 */ 869, -1,
  /* DiagSubGroup727 */ 731, 732, -1,
  /* DiagSubGroup728 */ 727, 730, 733, 729, -1,
  /* DiagSubGroup730 */ 731, -1,
  /* DiagSubGroup757 */ 756, -1,
  /* DiagSubGroup760 */ 349, -1,
  /* DiagSubGroup777 */ 650, -1,
  /* DiagSubGroup791 */ 750, 255, 549, 457, 790, -1,
  /* DiagSubGroup801 */ 802, 807, 806, 800, 809, 805, -1,
  /* DiagSubGroup802 */ 804, -1,
  /* DiagSubGroup803 */ 825, 813, -1,
  /* DiagSubGroup816 */ 818, 817, 821, 822, -1,
  /* DiagSubGroup825 */ 808, 812, 810, 811, -1,
  /* DiagSubGroup843 */ 651, -1,
  /* DiagSubGroup844 */ 845, -1,
  /* DiagSubGroup850 */ 753, 764, 851, -1,
  /* DiagSubGroup860 */ 133, -1,
  /* DiagSubGroup863 */ 867, 866, -1,
  /* DiagSubGroup864 */ 863, 865, 868, -1,
  /* DiagSubGroup882 */ 883, 890, 892, 899, 893, 894, 903, 904, 885, 900, -1,
  /* DiagSubGroup890 */ 861, -1,
  /* DiagSubGroup895 */ 894, -1,
  /* DiagSubGroup897 */ 862, -1,
  /* DiagSubGroup902 */ 861, -1,
  /* DiagSubGroup903 */ 887, 901, 843, -1,
  /* DiagSubGroup904 */ 888, -1,
  /* DiagSubGroup913 */ 912, -1,
  /* DiagSubGroup916 */ 917, -1,
  /* DiagSubGroup919 */ 918, -1,
  /* DiagSubGroup925 */ 230, -1,
  /* DiagSubGroup926 */ 925, -1,
};

static const char DiagGroupNames[] = {
    "\000\020#pragma-messages\t#warnings\020CFString-literal\003CL4\032Indep"
    "endentClass-attribute\022NSObject-attribute\003abi\016absolute-value\024"
    "abstract-final-class\023abstract-vbase-init\007address\030address-of-pa"
    "cked-member\024address-of-temporary\020aggregate-return\naix-compat\016"
    "align-mismatch\003all\006alloca\031alloca-with-align-alignof\027always-"
    "inline-coroutine\020ambiguous-delete\022ambiguous-ellipsis\017ambiguous"
    "-macro\031ambiguous-member-template\033ambiguous-reversed-operator\034a"
    "nalyzer-incompatible-plugin\031anon-enum-enum-conversion\025anonymous-p"
    "ack-parens\003arc%arc-bridge-casts-disallowed-in-nonarc\036arc-maybe-re"
    "peated-use-of-weak\025arc-non-pod-memaccess\031arc-performSelector-leak"
    "s\030arc-repeated-use-of-weak\021arc-retain-cycles\032arc-unsafe-retain"
    "ed-assign\026argument-outside-range\034argument-undefined-behaviour\014"
    "array-bounds\037array-bounds-pointer-arithmetic\003asm\022asm-operand-w"
    "idths\013assign-enum\006assume\013at-protocol\034atimport-in-framework-"
    "header\020atomic-alignment\027atomic-implicit-seq-cst\026atomic-memory-"
    "ordering\021atomic-properties*atomic-property-with-user-defined-accesso"
    "r\035attribute-packed-for-bitfield\021attribute-warning\nattributes\033"
    "auto-disable-vptr-sanitizer\013auto-import\022auto-storage-class\013aut"
    "o-var-id\014availability\030avr-rtlib-linking-quirks\016backend-plugin\030"
    "backslash-newline-escape\021bad-function-cast\016binary-literal\026bind"
    "-to-temporary-copy\024binding-in-condition\021bit-int-extension\034bitf"
    "ield-constant-conversion\030bitfield-enum-conversion\016bitfield-width\037"
    "bitwise-conditional-parentheses\032bitwise-instead-of-logical\026bitwis"
    "e-op-parentheses\033block-capture-autoreleasing\017bool-conversion\020b"
    "ool-conversions\016bool-operation\022braced-scalar-init\021branch-prote"
    "ction\013bridge-cast builtin-assume-aligned-alignment\027builtin-macro-"
    "redefined\027builtin-memcpy-chk-size\027builtin-requires-header\nc++-co"
    "mpat\014c++0x-compat\020c++0x-extensions\017c++0x-narrowing\014c++11-co"
    "mpat(c++11-compat-deprecated-writable-strings\025c++11-compat-pedantic*"
    "c++11-compat-reserved-user-defined-literal\020c++11-extensions\020c++11"
    "-extra-semi\026c++11-inline-namespace\017c++11-long-long\017c++11-narro"
    "wing\032c++14-attribute-extensions\024c++14-binary-literal\014c++14-com"
    "pat\025c++14-compat-pedantic\020c++14-extensions\032c++17-attribute-ext"
    "ensions\014c++17-compat\025c++17-compat-mangling\025c++17-compat-pedant"
    "ic\020c++17-extensions\020c++1y-extensions\014c++1z-compat\025c++1z-com"
    "pat-mangling\020c++1z-extensions\032c++20-attribute-extensions\014c++20"
    "-compat\025c++20-compat-pedantic\020c++20-designator\020c++20-extension"
    "s\014c++2a-compat\025c++2a-compat-pedantic\020c++2a-extensions\020c++2b"
    "-extensions\036c++98-c++11-c++14-c++17-compat'c++98-c++11-c++14-c++17-c"
    "ompat-pedantic\030c++98-c++11-c++14-compat!c++98-c++11-c++14-compat-ped"
    "antic\022c++98-c++11-compat!c++98-c++11-compat-binary-literal\033c++98-"
    "c++11-compat-pedantic\014c++98-compat#c++98-compat-bind-to-temporary-co"
    "py\027c++98-compat-extra-semi%c++98-compat-local-type-template-args\025"
    "c++98-compat-pedantic'c++98-compat-unnamed-type-template-args\016c11-ex"
    "tensions\016c2x-extensions\nc99-compat\016c99-designator\016c99-extensi"
    "ons#call-to-pure-virtual-from-ctor-dtor\025called-once-parameter\ncast-"
    "align\027cast-calling-convention\022cast-function-type\020cast-of-sel-t"
    "ype\tcast-qual\023cast-qual-unrelated\nchar-align\017char-subscripts\014"
    "clang-cl-pch\020class-conversion\015class-varargs\017cmse-union-leak\005"
    "comma\007comment\010comments\036compare-distinct-pointer-types\022compl"
    "etion-handler\026complex-component-init\024compound-token-split\035comp"
    "ound-token-split-by-macro\035compound-token-split-by-space\022concepts-"
    "ts-compat\031conditional-type-mismatch\031conditional-uninitialized\015"
    "config-macros\023constant-conversion\022constant-evaluated\030constant-"
    "logical-operand\023constexpr-not-const\010consumed\nconversion\017conve"
    "rsion-null\tcoroutine%coroutine-missing-unhandled-exception\026covered-"
    "switch-default\003cpp\030cstring-format-directive\026ctad-maybe-unsuppo"
    "rted\021ctor-dtor-privacy\003ctu\013cuda-compat\030custom-atomic-proper"
    "ties\027cxx-attribute-extension\010dangling\015dangling-else\016danglin"
    "g-field\014dangling-gsl\031dangling-initializer-list\023darwin-sdk-sett"
    "ings\tdate-time\023dealloc-in-category\035debug-compression-unavailable"
    "\033declaration-after-statement\032defaulted-function-deleted\026delega"
    "ting-ctor-cycles delete-abstract-non-virtual-dtor\021delete-incomplete$"
    "delete-non-abstract-non-virtual-dtor\027delete-non-virtual-dtor#delimit"
    "ed-escape-sequence-extension\ndeprecated\035deprecated-altivec-src-comp"
    "at$deprecated-anon-enum-enum-conversion\030deprecated-array-compare\025"
    "deprecated-attributes\032deprecated-comma-subscript\017deprecated-copy\024"
    "deprecated-copy-dtor\031deprecated-copy-with-dtor'deprecated-copy-with-"
    "user-provided-copy'deprecated-copy-with-user-provided-dtor\024deprecate"
    "d-coroutine\027deprecated-declarations!deprecated-dynamic-exception-spe"
    "c\027deprecated-enum-compare#deprecated-enum-compare-conditional\037dep"
    "recated-enum-enum-conversion deprecated-enum-float-conversion!deprecate"
    "d-experimental-coroutine\032deprecated-implementations\031deprecated-in"
    "crement-bool\031deprecated-objc-isa-usage%deprecated-objc-pointer-intro"
    "spection5deprecated-objc-pointer-introspection-performSelector\021depre"
    "cated-pragma\023deprecated-register\027deprecated-this-capture\017depre"
    "cated-type\023deprecated-volatile\033deprecated-writable-strings\022dir"
    "ect-ivar-access\030disabled-macro-expansion\025disabled-optimization\014"
    "discard-qual\034distributed-object-modifiers\013div-by-zero\020division"
    "-by-zero\036dll-attribute-on-redeclaration%dllexport-explicit-instantia"
    "tion-decl\032dllimport-static-field-def\015documentation\035documentati"
    "on-deprecated-sync\022documentation-html\026documentation-pedantic\035d"
    "ocumentation-unknown-command\036dollar-in-identifier-extension\020doubl"
    "e-promotion\tdtor-name\014dtor-typedef\030duplicate-decl-specifier\016d"
    "uplicate-enum\024duplicate-method-arg\026duplicate-method-match\022dupl"
    "icate-protocol\027dynamic-class-memaccess\026dynamic-exception-spec\006"
    "effc++\024elaborated-enum-base\025elaborated-enum-class\022embedded-dir"
    "ective\nempty-body\023empty-decomposition\017empty-init-stmt\026empty-t"
    "ranslation-unit\013encode-type\014endif-labels\014enum-compare\030enum-"
    "compare-conditional\023enum-compare-switch\017enum-conversion\024enum-e"
    "num-conversion\025enum-float-conversion\016enum-too-large\nexceptions\023"
    "excess-initializers\025exit-time-destructors\024expansion-to-defined\030"
    "explicit-initialize-call\027explicit-ownership-type\016export-unnamed\026"
    "export-using-directive\017extern-c-compat\022extern-initializer\005extr"
    "a\023extra-qualification\nextra-semi\017extra-semi-stmt\014extra-tokens"
    "\032final-dtor-non-final-class\013final-macro\024fixed-enum-extension\024"
    "fixed-point-overflow\tflag-enum\031flexible-array-extensions\020float-c"
    "onversion\013float-equal\031float-overflow-conversion\025float-zero-con"
    "version\021for-loop-analysis\006format\021format-extra-args\030format-i"
    "nsufficient-args\030format-invalid-specifier\016format-non-iso\021forma"
    "t-nonliteral\017format-pedantic\017format-security\025format-type-confu"
    "sion\nformat-y2k\022format-zero-length\010format=2\016fortify-source\023"
    "four-char-constants\015frame-address\021frame-larger-than\022frame-larg"
    "er-than=%framework-include-private-from-public\023free-nonheap-object\036"
    "function-def-in-objc-container\025function-multiversion\014fuse-ld-path"
    "\033future-attribute-extensions\015future-compat\ngcc-compat\023global-"
    "constructors\013global-isel\003gnu\026gnu-alignof-expression\024gnu-ano"
    "nymous-struct\033gnu-array-member-paren-init\015gnu-auto-type\022gnu-bi"
    "nary-literal\016gnu-case-range\023gnu-complex-integer gnu-compound-lite"
    "ral-initializer\037gnu-conditional-omitted-operand\016gnu-designator\025"
    "gnu-empty-initializer\020gnu-empty-struct\036gnu-flexible-array-initial"
    "izer\037gnu-flexible-array-union-member\024gnu-folding-constant\026gnu-"
    "imaginary-constant\020gnu-include-next\035gnu-inline-cpp-without-extern"
    "\022gnu-label-as-value\023gnu-redeclared-enum\030gnu-statement-expressi"
    "on\025gnu-static-float-init$gnu-string-literal-operator-template\016gnu"
    "-union-cast\"gnu-variable-sized-type-not-at-end\027gnu-zero-line-direct"
    "ive!gnu-zero-variadic-macro-arguments\024gpu-maybe-wrong-side\014header"
    "-guard\016header-hygiene\010hip-only\025idiomatic-parentheses\022ignore"
    "d-attributes)ignored-availability-without-sdk-settings\035ignored-optim"
    "ization-argument\030ignored-pragma-intrinsic\027ignored-pragma-optimize"
    "\017ignored-pragmas\022ignored-qualifiers\034ignored-reference-qualifie"
    "rs\010implicit\032implicit-atomic-properties#implicit-const-int-float-c"
    "onversion*implicit-conversion-floating-point-to-bool implicit-exception"
    "-spec-mismatch\024implicit-fallthrough!implicit-fallthrough-per-functio"
    "n\037implicit-fixed-point-conversion\031implicit-float-conversion\035im"
    "plicit-function-declaration\014implicit-int\027implicit-int-conversion\035"
    "implicit-int-float-conversion\024implicit-retain-self\033implicitly-uns"
    "igned-literal\006import&import-preprocessor-directive-pedantic\021inacc"
    "essible-base\032include-next-absolute-path\033include-next-outside-head"
    "er\033incompatible-exception-spec#incompatible-function-pointer-types\""
    "incompatible-library-redeclaration\026incompatible-ms-struct\032incompa"
    "tible-pointer-types.incompatible-pointer-types-discards-qualifiers\032i"
    "ncompatible-property-type\024incompatible-sysroot'incomplete-framework-"
    "module-declaration\031incomplete-implementation\021incomplete-module\035"
    "incomplete-setjmp-declaration\023incomplete-umbrella\026inconsistent-dl"
    "limport(inconsistent-missing-destructor-override\035inconsistent-missin"
    "g-override\016increment-bool\022infinite-recursion\tinit-self\025initia"
    "lizer-overrides\023injected-class-name\006inline\ninline-asm#inline-nam"
    "espace-reopened-noninline\021inline-new-delete\"instantiation-after-spe"
    "cialization\016int-conversion\017int-conversions\023int-in-bool-context"
    "\023int-to-pointer-cast\030int-to-void-pointer-cast\020integer-overflow"
    "\031interrupt-service-routine\035invalid-command-line-argument\021inval"
    "id-constexpr\020invalid-iboutlet&invalid-initializer-from-system-header"
    "\035invalid-ios-deployment-target\030invalid-no-builtin-names\020invali"
    "d-noreturn\020invalid-offsetof invalid-or-nonexistent-directory\036inva"
    "lid-partial-specialization\013invalid-pch\020invalid-pp-token\027invali"
    "d-source-encoding\023invalid-token-paste\020jump-seh-finally\016keyword"
    "-compat\015keyword-macro\026knr-promoted-parameter\030language-extensio"
    "n-token\023large-by-value-copy\006liblto\017linker-warnings\022literal-"
    "conversion\015literal-range\030local-type-template-args\027logical-not-"
    "parentheses\026logical-op-parentheses\tlong-long\015loop-analysis\017ma"
    "cro-redefined\004main\020main-return-type\027malformed-warning-check\036"
    "many-braces-around-scalar-init\nmax-tokens\021max-unsigned-zero\026mems"
    "et-transposed-args\022memsize-comparison\021method-signatures\tmicrosof"
    "t\022microsoft-abstract\022microsoft-anon-tag\016microsoft-cast\021micr"
    "osoft-charize\027microsoft-comment-paste\024microsoft-const-init\023mic"
    "rosoft-cpp-macro\"microsoft-default-arg-redefinition\031microsoft-drect"
    "ve-section\025microsoft-end-of-file microsoft-enum-forward-reference\024"
    "microsoft-enum-value\030microsoft-exception-spec\020microsoft-exists#mi"
    "crosoft-explicit-constructor-call\035microsoft-extra-qualification\024m"
    "icrosoft-fixed-enum\030microsoft-flexible-array\016microsoft-goto\033mi"
    "crosoft-inaccessible-base\021microsoft-include\033microsoft-mutable-ref"
    "erence\031microsoft-pure-definition\032microsoft-redeclare-static\020mi"
    "crosoft-sealed\027microsoft-static-assert\022microsoft-template\031micr"
    "osoft-template-shadow microsoft-union-member-reference\034microsoft-unq"
    "ualified-friend\024microsoft-using-decl\032microsoft-void-pseudo-dtor\026"
    "misleading-indentation\025mismatched-new-delete\032mismatched-parameter"
    "-types\027mismatched-return-types\017mismatched-tags\016missing-braces\021"
    "missing-constinit\024missing-declarations\026missing-exception-spec\032"
    "missing-field-initializers\030missing-format-attribute\024missing-inclu"
    "de-dirs\032missing-method-return-type\020missing-noescape\020missing-no"
    "return\030missing-prototype-for-cc\022missing-prototypes\025missing-sel"
    "ector-name\017missing-sysroot\035missing-variable-declarations\025missp"
    "elled-assumption\014module-build\017module-conflict\033module-file-conf"
    "ig-mismatch\025module-file-extension\015module-import\031module-import-"
    "in-extern-c\013module-lock\"modules-ambiguous-internal-linkage\037modul"
    "es-import-nested-redundant\004most\004move\014msvc-include\016msvc-not-"
    "found\tmultichar\023multiple-move-vbase\tnarrowing\021nested-anon-types"
    "\016nested-externs\020new-returns-null\013newline-eof\007noderef\015noe"
    "xcept-type\031non-c-typedef-for-linkage\007non-gcc\033non-literal-null-"
    "conversion'non-modular-include-in-framework-module\035non-modular-inclu"
    "de-in-module\017non-pod-varargs\032non-power-of-two-alignment\020non-vi"
    "rtual-dtor\007nonnull\025nonportable-cfstrings\030nonportable-include-p"
    "ath\037nonportable-system-include-path!nonportable-vector-initializatio"
    "n\024nontrivial-memaccess\023nsconsumed-mismatch\022nsreturns-mismatch\017"
    "null-arithmetic\016null-character\017null-conversion\020null-dereferenc"
    "e\027null-pointer-arithmetic\030null-pointer-subtraction\013nullability"
    "\030nullability-completeness\"nullability-completeness-on-arrays\024nul"
    "lability-declspec\025nullability-extension#nullability-inferred-on-nest"
    "ed-type\036nullable-to-nonnull-conversion+objc-autosynthesis-property-i"
    "var-name-match\035objc-bool-constant-conversion\013objc-boxing\027objc-"
    "circular-container\016objc-cocoa-api\034objc-designated-initializers\036"
    "objc-dictionary-duplicate-keys\023objc-flexible-array\037objc-forward-c"
    "lass-redefinition\024objc-interface-ivars\024objc-literal-compare\027ob"
    "jc-literal-conversion\027objc-macro-redefinition\021objc-messaging-id\022"
    "objc-method-access\037objc-missing-property-synthesis\030objc-missing-s"
    "uper-calls\032objc-multiple-method-names\"objc-noncopy-retain-block-pro"
    "perty\032objc-nonunified-exceptions#objc-property-assign-on-object-type"
    "\034objc-property-implementation\037objc-property-implicit-mismatch*obj"
    "c-property-matches-cocoa-ownership-rule\032objc-property-no-attribute\027"
    "objc-property-synthesis#objc-protocol-method-implementation objc-protoc"
    "ol-property-synthesis\030objc-protocol-qualifiers\"objc-readonly-with-s"
    "etter-property\026objc-redundant-api-use\032objc-redundant-literal-use\017"
    "objc-root-class\025objc-signed-char-bool/objc-signed-char-bool-implicit"
    "-float-conversion-objc-signed-char-bool-implicit-int-conversion\023objc"
    "-string-compare\031objc-string-concatenation\034objc-unsafe-perform-sel"
    "ector\003odr\016old-style-cast\024old-style-definition\027opencl-unsupp"
    "orted-rgba\006openmp\024openmp-51-extensions\016openmp-clauses\020openm"
    "p-loop-form\016openmp-mapping\015openmp-target\016option-ignored!ordere"
    "d-compare-function-pointers\027out-of-line-declaration\025out-of-scope-"
    "function\014over-aligned\010overflow\022overlength-strings\037overloade"
    "d-shift-op-parentheses\022overloaded-virtual\015override-init\017overri"
    "de-module\032overriding-method-mismatch\023overriding-t-option\006packe"
    "d\006padded\013parentheses\024parentheses-equality\024partial-availabil"
    "ity\004pass\015pass-analysis\013pass-failed\013pass-missed\015pch-date-"
    "time\010pedantic\026pedantic-core-features\017pedantic-macros\020pessim"
    "izing-move\015pointer-arith\027pointer-bool-conversion\017pointer-compa"
    "re\027pointer-integer-compare\014pointer-sign\024pointer-to-enum-cast\023"
    "pointer-to-int-cast\025pointer-type-mismatch\031poison-system-directori"
    "es\033potentially-direct-selector potentially-evaluated-expression\026p"
    "ragma-clang-attribute\032pragma-once-outside-header\013pragma-pack\036p"
    "ragma-pack-suspicious-include#pragma-system-header-outside-header\007pr"
    "agmas\020pre-c++14-compat\031pre-c++14-compat-pedantic\020pre-c++17-com"
    "pat\031pre-c++17-compat-pedantic\020pre-c++20-compat\031pre-c++20-compa"
    "t-pedantic\020pre-c++2b-compat\031pre-c++2b-compat-pedantic\016pre-c2x-"
    "compat\027pre-c2x-compat-pedantic\024pre-openmp-51-compat&predefined-id"
    "entifier-outside-function\016private-extern\016private-header\016privat"
    "e-module\025profile-instr-missing\031profile-instr-out-of-date\030profi"
    "le-instr-unprofiled\032property-access-dot-syntax\033property-attribute"
    "-mismatch\010protocol%protocol-property-synthesis-ambiguity\005psabi\032"
    "qualified-void-return-type\"quoted-include-in-framework-header\023range"
    "-loop-analysis\031range-loop-bind-reference\024range-loop-construct\032"
    "readonly-iboutlet-property\015receiver-expr\026receiver-forward-class\027"
    "redeclared-class-member\026redundant-consteval-if\017redundant-decls\016"
    "redundant-move\020redundant-parens\010register\026reinterpret-base-clas"
    "s\025remark-backend-plugin\007reorder\014reorder-ctor\021reorder-init-l"
    "ist\030requires-super-attribute\021reserved-id-macro\023reserved-identi"
    "fier\031reserved-macro-identifier\035reserved-user-defined-literal\022r"
    "estrict-expansion\031retained-language-linkage\024return-stack-address\017"
    "return-std-move\013return-type\025return-type-c-linkage\020rewrite-not-"
    "bool\023round-trip-cc1-args\004rtti\020sanitize-address\021search-path-"
    "usage\007section\010selector\026selector-type-mismatch\013self-assign\021"
    "self-assign-field\026self-assign-overloaded\tself-move\034semicolon-bef"
    "ore-method-body\010sentinel\016sequence-point\026serialized-diagnostics"
    "\006shadow\nshadow-all\014shadow-field\033shadow-field-in-constructor$s"
    "hadow-field-in-constructor-modified\013shadow-ivar\027shadow-uncaptured"
    "-local\024shift-count-negative\024shift-count-overflow\024shift-negativ"
    "e-value\024shift-op-parentheses\016shift-overflow\023shift-sign-overflo"
    "w\020shorten-64-to-32\014sign-compare\017sign-conversion\nsign-promo\024"
    "signed-enum-bitfield\025signed-unsigned-wchar\025sizeof-array-argument\022"
    "sizeof-array-decay\020sizeof-array-div\022sizeof-pointer-div\030sizeof-"
    "pointer-memaccess\020slash-u-filename\014slh-asm-goto\027sometimes-unin"
    "itialized\nsource-mgr\022source-uses-openmp\013spir-compat\014spirv-com"
    "pat\017stack-exhausted\017stack-protector\021static-float-init\020stati"
    "c-in-inline$static-inline-explicit-instantiation\026static-local-in-inl"
    "ine\020static-self-init\023stdlibcxx-not-found\017strict-aliasing\021st"
    "rict-aliasing=0\021strict-aliasing=1\021strict-aliasing=2\017strict-ove"
    "rflow\021strict-overflow=0\021strict-overflow=1\021strict-overflow=2\021"
    "strict-overflow=3\021strict-overflow=4\021strict-overflow=5\"strict-pot"
    "entially-direct-selector\021strict-prototypes\025strict-selector-match\016"
    "string-compare\024string-concatenation\021string-conversion\020string-p"
    "lus-char\017string-plus-int\024strlcpy-strlcat-size\014strncat-size\033"
    "suggest-destructor-override\020suggest-override\033super-class-method-m"
    "ismatch\020suspicious-bzero\024suspicious-memaccess\024swift-name-attri"
    "bute\006switch\013switch-bool\016switch-default\013switch-enum%sync-fet"
    "ch-and-nand-semantics-changed\005synth\036target-clones-mixed-specifier"
    "s\034tautological-bitwise-compare\024tautological-compare\035tautologic"
    "al-constant-compare&tautological-constant-in-range-compare*tautological"
    "-constant-out-of-range-compare\036tautological-objc-bool-compare\034tau"
    "tological-overlap-compare\034tautological-pointer-compare\037tautologic"
    "al-type-limit-compare\036tautological-undefined-compare'tautological-un"
    "signed-char-zero-compare'tautological-unsigned-enum-zero-compare\"tauto"
    "logical-unsigned-zero-compare tautological-value-range-compare\017tcb-e"
    "nforcement$tentative-definition-incomplete-type\015thread-safety\026thr"
    "ead-safety-analysis\030thread-safety-attributes\022thread-safety-beta\026"
    "thread-safety-negative\025thread-safety-precise\027thread-safety-refere"
    "nce\025thread-safety-verbose\ttrigraphs\013type-limits\013type-safety\024"
    "typedef-redefinition\020typename-missing\031unable-to-open-stats-file\020"
    "unaligned-access\030unavailable-declarations\023undeclared-selector\005"
    "undef\014undef-prefix\031undefined-bool-conversion\027undefined-func-te"
    "mplate\020undefined-inline\022undefined-internal\027undefined-internal-"
    "type\032undefined-reinterpret-cast\026undefined-var-template\035underal"
    "igned-exception-object\026unevaluated-expression\026unguarded-availabil"
    "ity\032unguarded-availability-new\007unicode\021unicode-homoglyph\022un"
    "icode-whitespace\022unicode-zero-width\015uninitialized\035uninitialize"
    "d-const-reference\020unknown-argument\022unknown-assumption\022unknown-"
    "attributes\024unknown-cuda-version\027unknown-escape-sequence\017unknow"
    "n-pragmas\022unknown-sanitizers\026unknown-warning-option\032unnamed-ty"
    "pe-template-args\035unneeded-internal-declaration\030unneeded-member-fu"
    "nction\020unreachable-code\033unreachable-code-aggressive\026unreachabl"
    "e-code-break\034unreachable-code-fallthrough\037unreachable-code-loop-i"
    "ncrement\027unreachable-code-return\013unsequenced\017unsupported-abi\017"
    "unsupported-abs\036unsupported-availability-guard\016unsupported-cb#uns"
    "upported-dll-base-class-template\036unsupported-floating-point-opt\022u"
    "nsupported-friend\021unsupported-gpopt\017unsupported-nan\026unsupporte"
    "d-target-opt\026unsupported-visibility\037unusable-partial-specializati"
    "on\006unused\017unused-argument\030unused-but-set-parameter\027unused-b"
    "ut-set-variable\034unused-command-line-argument\021unused-comparison\025"
    "unused-const-variable\032unused-exception-parameter\017unused-function\032"
    "unused-getter-return-value\014unused-label\025unused-lambda-capture\024"
    "unused-local-typedef\025unused-local-typedefs\015unused-macros\026unuse"
    "d-member-function\020unused-parameter\024unused-private-field\024unused"
    "-property-ivar\015unused-result\017unused-template\014unused-value\017u"
    "nused-variable\026unused-volatile-lvalue\026used-but-marked-unused\025u"
    "ser-defined-literals\025user-defined-warnings\007varargs\017variadic-ma"
    "cros\015vec-elem-size\021vector-conversion\022vector-conversions\014vex"
    "ing-parse\nvisibility\003vla\015vla-extension\031void-pointer-to-enum-c"
    "ast\030void-pointer-to-int-cast\024void-ptr-dereference\025volatile-reg"
    "ister-var\023wasm-exception-spec\025weak-template-vtables\014weak-vtabl"
    "es\020writable-strings\015write-strings\017xor-used-as-pow\035zero-as-n"
    "ull-pointer-constant\021zero-length-array"};

#endif // GET_DIAG_ARRAYS


#ifdef DIAG_ENTRY
DIAG_ENTRY(anonymous_53 /*  */, 0, 0, /* DiagSubGroup0 */ 1)
DIAG_ENTRY(PoundPragmaMessage /* #pragma-messages */, 1, /* DiagArray1 */ 1, 0)
DIAG_ENTRY(PoundWarning /* #warnings */, 18, /* DiagArray2 */ 3, 0)
DIAG_ENTRY(anonymous_250 /* CFString-literal */, 28, /* DiagArray3 */ 5, 0)
DIAG_ENTRY(anonymous_52 /* CL4 */, 45, 0, /* DiagSubGroup4 */ 3)
DIAG_ENTRY(IndependentClassAttribute /* IndependentClass-attribute */, 49, /* DiagArray5 */ 7, 0)
DIAG_ENTRY(NSobjectAttribute /* NSObject-attribute */, 76, /* DiagArray6 */ 10, 0)
DIAG_ENTRY(anonymous_0 /* abi */, 95, 0, 0)
DIAG_ENTRY(AbsoluteValue /* absolute-value */, 99, /* DiagArray8 */ 12, 0)
DIAG_ENTRY(AbstractFinalClass /* abstract-final-class */, 114, /* DiagArray9 */ 17, 0)
DIAG_ENTRY(anonymous_244 /* abstract-vbase-init */, 135, /* DiagArray10 */ 19, 0)
DIAG_ENTRY(anonymous_51 /* address */, 155, 0, /* DiagSubGroup11 */ 6)
DIAG_ENTRY(anonymous_224 /* address-of-packed-member */, 163, /* DiagArray12 */ 21, 0)
DIAG_ENTRY(AddressOfTemporary /* address-of-temporary */, 188, /* DiagArray13 */ 23, 0)
DIAG_ENTRY(anonymous_1 /* aggregate-return */, 209, 0, 0)
DIAG_ENTRY(AIXCompat /* aix-compat */, 226, /* DiagArray15 */ 25, 0)
DIAG_ENTRY(anonymous_225 /* align-mismatch */, 237, /* DiagArray16 */ 28, 0)
DIAG_ENTRY(All /* all */, 252, 0, /* DiagSubGroup17 */ 10)
DIAG_ENTRY(anonymous_170 /* alloca */, 256, /* DiagArray18 */ 30, 0)
DIAG_ENTRY(anonymous_171 /* alloca-with-align-alignof */, 263, /* DiagArray19 */ 32, 0)
DIAG_ENTRY(AlwaysInlineCoroutine /* always-inline-coroutine */, 289, /* DiagArray20 */ 34, 0)
DIAG_ENTRY(anonymous_231 /* ambiguous-delete */, 313, /* DiagArray21 */ 36, 0)
DIAG_ENTRY(anonymous_125 /* ambiguous-ellipsis */, 330, /* DiagArray22 */ 38, 0)
DIAG_ENTRY(AmbiguousMacro /* ambiguous-macro */, 349, /* DiagArray23 */ 40, 0)
DIAG_ENTRY(AmbigMemberTemplate /* ambiguous-member-template */, 365, /* DiagArray24 */ 42, 0)
DIAG_ENTRY(anonymous_191 /* ambiguous-reversed-operator */, 391, /* DiagArray25 */ 44, 0)
DIAG_ENTRY(anonymous_87 /* analyzer-incompatible-plugin */, 419, /* DiagArray26 */ 46, 0)
DIAG_ENTRY(AnonEnumEnumConversion /* anon-enum-enum-conversion */, 448, /* DiagArray27 */ 48, /* DiagSubGroup27 */ 16)
DIAG_ENTRY(anonymous_126 /* anonymous-pack-parens */, 474, /* DiagArray28 */ 50, 0)
DIAG_ENTRY(AutomaticReferenceCounting /* arc */, 496, 0, /* DiagSubGroup29 */ 18)
DIAG_ENTRY(anonymous_124 /* arc-bridge-casts-disallowed-in-nonarc */, 500, /* DiagArray30 */ 52, 0)
DIAG_ENTRY(ARCRepeatedUseOfWeakMaybe /* arc-maybe-repeated-use-of-weak */, 538, /* DiagArray31 */ 54, 0)
DIAG_ENTRY(ARCNonPodMemAccess /* arc-non-pod-memaccess */, 569, /* DiagArray32 */ 56, 0)
DIAG_ENTRY(anonymous_155 /* arc-performSelector-leaks */, 591, /* DiagArray33 */ 58, 0)
DIAG_ENTRY(ARCRepeatedUseOfWeak /* arc-repeated-use-of-weak */, 617, /* DiagArray34 */ 60, /* DiagSubGroup34 */ 22)
DIAG_ENTRY(ARCRetainCycles /* arc-retain-cycles */, 642, /* DiagArray35 */ 62, 0)
DIAG_ENTRY(ARCUnsafeRetainedAssign /* arc-unsafe-retained-assign */, 660, /* DiagArray36 */ 64, 0)
DIAG_ENTRY(anonymous_252 /* argument-outside-range */, 687, /* DiagArray37 */ 68, 0)
DIAG_ENTRY(anonymous_253 /* argument-undefined-behaviour */, 710, /* DiagArray38 */ 70, 0)
DIAG_ENTRY(ArrayBounds /* array-bounds */, 739, /* DiagArray39 */ 72, 0)
DIAG_ENTRY(ArrayBoundsPointerArithmetic /* array-bounds-pointer-arithmetic */, 752, /* DiagArray40 */ 78, 0)
DIAG_ENTRY(ASM /* asm */, 784, 0, /* DiagSubGroup41 */ 24)
DIAG_ENTRY(ASMOperandWidths /* asm-operand-widths */, 788, /* DiagArray42 */ 81, 0)
DIAG_ENTRY(anonymous_251 /* assign-enum */, 807, /* DiagArray43 */ 83, 0)
DIAG_ENTRY(anonymous_142 /* assume */, 819, /* DiagArray44 */ 85, 0)
DIAG_ENTRY(anonymous_50 /* at-protocol */, 826, 0, 0)
DIAG_ENTRY(FrameworkHdrAtImport /* atimport-in-framework-header */, 838, /* DiagArray46 */ 87, 0)
DIAG_ENTRY(AtomicAlignment /* atomic-alignment */, 867, /* DiagArray47 */ 89, 0)
DIAG_ENTRY(anonymous_237 /* atomic-implicit-seq-cst */, 884, /* DiagArray48 */ 92, 0)
DIAG_ENTRY(anonymous_236 /* atomic-memory-ordering */, 908, /* DiagArray49 */ 94, 0)
DIAG_ENTRY(AtomicProperties /* atomic-properties */, 931, 0, /* DiagSubGroup50 */ 26)
DIAG_ENTRY(anonymous_150 /* atomic-property-with-user-defined-accessor */, 949, /* DiagArray51 */ 96, 0)
DIAG_ENTRY(anonymous_187 /* attribute-packed-for-bitfield */, 992, /* DiagArray52 */ 98, 0)
DIAG_ENTRY(BackendWarningAttributes /* attribute-warning */, 1022, /* DiagArray53 */ 100, 0)
DIAG_ENTRY(Attributes /* attributes */, 1040, 0, /* DiagSubGroup54 */ 29)
DIAG_ENTRY(AutoDisableVptrSanitizer /* auto-disable-vptr-sanitizer */, 1051, /* DiagArray55 */ 102, 0)
DIAG_ENTRY(AutoImport /* auto-import */, 1079, /* DiagArray56 */ 104, 0)
DIAG_ENTRY(anonymous_122 /* auto-storage-class */, 1091, /* DiagArray57 */ 106, 0)
DIAG_ENTRY(anonymous_167 /* auto-var-id */, 1110, /* DiagArray58 */ 108, 0)
DIAG_ENTRY(Availability /* availability */, 1122, /* DiagArray59 */ 110, 0)
DIAG_ENTRY(AVRRtlibLinkingQuirks /* avr-rtlib-linking-quirks */, 1135, /* DiagArray60 */ 121, 0)
DIAG_ENTRY(BackendPlugin /* backend-plugin */, 1160, /* DiagArray61 */ 128, 0)
DIAG_ENTRY(anonymous_90 /* backslash-newline-escape */, 1175, /* DiagArray62 */ 130, 0)
DIAG_ENTRY(BadFunctionCast /* bad-function-cast */, 1200, /* DiagArray63 */ 132, 0)
DIAG_ENTRY(BinaryLiteral /* binary-literal */, 1218, 0, /* DiagSubGroup64 */ 32)
DIAG_ENTRY(BindToTemporaryCopy /* bind-to-temporary-copy */, 1233, /* DiagArray65 */ 134, /* DiagSubGroup65 */ 36)
DIAG_ENTRY(anonymous_137 /* binding-in-condition */, 1256, /* DiagArray66 */ 137, 0)
DIAG_ENTRY(anonymous_129 /* bit-int-extension */, 1277, /* DiagArray67 */ 139, 0)
DIAG_ENTRY(BitFieldConstantConversion /* bitfield-constant-conversion */, 1295, /* DiagArray68 */ 141, 0)
DIAG_ENTRY(BitFieldEnumConversion /* bitfield-enum-conversion */, 1324, /* DiagArray69 */ 143, 0)
DIAG_ENTRY(BitFieldWidth /* bitfield-width */, 1349, /* DiagArray70 */ 147, 0)
DIAG_ENTRY(BitwiseConditionalParentheses /* bitwise-conditional-parentheses */, 1364, /* DiagArray71 */ 149, 0)
DIAG_ENTRY(BitwiseInsteadOfLogical /* bitwise-instead-of-logical */, 1396, /* DiagArray72 */ 151, 0)
DIAG_ENTRY(BitwiseOpParentheses /* bitwise-op-parentheses */, 1423, /* DiagArray73 */ 153, 0)
DIAG_ENTRY(BlockCaptureAutoReleasing /* block-capture-autoreleasing */, 1446, /* DiagArray74 */ 155, 0)
DIAG_ENTRY(BoolConversion /* bool-conversion */, 1474, /* DiagArray75 */ 157, /* DiagSubGroup75 */ 38)
DIAG_ENTRY(anonymous_58 /* bool-conversions */, 1490, 0, /* DiagSubGroup76 */ 41)
DIAG_ENTRY(BoolOperation /* bool-operation */, 1507, /* DiagArray77 */ 159, /* DiagSubGroup77 */ 43)
DIAG_ENTRY(anonymous_208 /* braced-scalar-init */, 1522, /* DiagArray78 */ 161, 0)
DIAG_ENTRY(BranchProtection /* branch-protection */, 1541, /* DiagArray79 */ 163, 0)
DIAG_ENTRY(ObjCBridge /* bridge-cast */, 1559, /* DiagArray80 */ 168, 0)
DIAG_ENTRY(anonymous_173 /* builtin-assume-aligned-alignment */, 1571, /* DiagArray81 */ 171, 0)
DIAG_ENTRY(BuiltinMacroRedefined /* builtin-macro-redefined */, 1604, /* DiagArray82 */ 173, 0)
DIAG_ENTRY(anonymous_143 /* builtin-memcpy-chk-size */, 1628, /* DiagArray83 */ 176, 0)
DIAG_ENTRY(BuiltinRequiresHeader /* builtin-requires-header */, 1652, /* DiagArray84 */ 178, 0)
DIAG_ENTRY(CXXCompat /* c++-compat */, 1676, /* DiagArray85 */ 180, 0)
DIAG_ENTRY(anonymous_18 /* c++0x-compat */, 1687, 0, /* DiagSubGroup86 */ 45)
DIAG_ENTRY(anonymous_62 /* c++0x-extensions */, 1700, 0, /* DiagSubGroup87 */ 47)
DIAG_ENTRY(anonymous_16 /* c++0x-narrowing */, 1717, 0, /* DiagSubGroup88 */ 49)
DIAG_ENTRY(CXX11Compat /* c++11-compat */, 1733, /* DiagArray89 */ 182, /* DiagSubGroup89 */ 51)
DIAG_ENTRY(CXX11CompatDeprecatedWritableStr /* c++11-compat-deprecated-writable-strings */, 1746, /* DiagArray90 */ 193, 0)
DIAG_ENTRY(CXX11CompatPedantic /* c++11-compat-pedantic */, 1787, 0, /* DiagSubGroup91 */ 59)
DIAG_ENTRY(CXX11CompatReservedUserDefinedLiteral /* c++11-compat-reserved-user-defined-literal */, 1809, /* DiagArray92 */ 195, 0)
DIAG_ENTRY(CXX11 /* c++11-extensions */, 1852, /* DiagArray93 */ 197, /* DiagSubGroup93 */ 65)
DIAG_ENTRY(CXX11ExtraSemi /* c++11-extra-semi */, 1869, /* DiagArray94 */ 223, 0)
DIAG_ENTRY(CXX11InlineNamespace /* c++11-inline-namespace */, 1886, /* DiagArray95 */ 225, 0)
DIAG_ENTRY(CXX11LongLong /* c++11-long-long */, 1909, /* DiagArray96 */ 227, 0)
DIAG_ENTRY(CXX11Narrowing /* c++11-narrowing */, 1925, /* DiagArray97 */ 229, 0)
DIAG_ENTRY(CXX14Attrs /* c++14-attribute-extensions */, 1941, /* DiagArray98 */ 237, 0)
DIAG_ENTRY(CXX14BinaryLiteral /* c++14-binary-literal */, 1968, /* DiagArray99 */ 239, 0)
DIAG_ENTRY(CXX14Compat /* c++14-compat */, 1989, 0, /* DiagSubGroup100 */ 69)
DIAG_ENTRY(CXX14CompatPedantic /* c++14-compat-pedantic */, 2002, 0, /* DiagSubGroup101 */ 73)
DIAG_ENTRY(CXX14 /* c++14-extensions */, 2024, /* DiagArray102 */ 241, /* DiagSubGroup102 */ 78)
DIAG_ENTRY(CXX17Attrs /* c++17-attribute-extensions */, 2041, /* DiagArray103 */ 249, 0)
DIAG_ENTRY(CXX17Compat /* c++17-compat */, 2068, 0, /* DiagSubGroup104 */ 81)
DIAG_ENTRY(CXX17CompatMangling /* c++17-compat-mangling */, 2081, /* DiagArray105 */ 251, 0)
DIAG_ENTRY(CXX17CompatPedantic /* c++17-compat-pedantic */, 2103, 0, /* DiagSubGroup106 */ 87)
DIAG_ENTRY(CXX17 /* c++17-extensions */, 2125, /* DiagArray107 */ 253, /* DiagSubGroup107 */ 91)
DIAG_ENTRY(anonymous_63 /* c++1y-extensions */, 2142, 0, /* DiagSubGroup108 */ 93)
DIAG_ENTRY(anonymous_19 /* c++1z-compat */, 2159, 0, /* DiagSubGroup109 */ 95)
DIAG_ENTRY(anonymous_9 /* c++1z-compat-mangling */, 2172, 0, /* DiagSubGroup110 */ 97)
DIAG_ENTRY(anonymous_64 /* c++1z-extensions */, 2194, 0, /* DiagSubGroup111 */ 99)
DIAG_ENTRY(CXX20Attrs /* c++20-attribute-extensions */, 2211, /* DiagArray112 */ 271, 0)
DIAG_ENTRY(CXX20Compat /* c++20-compat */, 2238, /* DiagArray113 */ 273, /* DiagSubGroup113 */ 101)
DIAG_ENTRY(CXX20CompatPedantic /* c++20-compat-pedantic */, 2251, 0, /* DiagSubGroup114 */ 103)
DIAG_ENTRY(CXX20Designator /* c++20-designator */, 2273, /* DiagArray115 */ 281, 0)
DIAG_ENTRY(CXX20 /* c++20-extensions */, 2290, /* DiagArray116 */ 283, /* DiagSubGroup116 */ 106)
DIAG_ENTRY(anonymous_20 /* c++2a-compat */, 2307, 0, /* DiagSubGroup117 */ 109)
DIAG_ENTRY(anonymous_21 /* c++2a-compat-pedantic */, 2320, 0, /* DiagSubGroup118 */ 111)
DIAG_ENTRY(anonymous_65 /* c++2a-extensions */, 2342, 0, /* DiagSubGroup119 */ 113)
DIAG_ENTRY(CXX2b /* c++2b-extensions */, 2359, /* DiagArray120 */ 303, 0)
DIAG_ENTRY(anonymous_14 /* c++98-c++11-c++14-c++17-compat */, 2376, 0, /* DiagSubGroup121 */ 115)
DIAG_ENTRY(anonymous_15 /* c++98-c++11-c++14-c++17-compat-pedantic */, 2407, 0, /* DiagSubGroup122 */ 117)
DIAG_ENTRY(anonymous_12 /* c++98-c++11-c++14-compat */, 2447, 0, /* DiagSubGroup123 */ 119)
DIAG_ENTRY(anonymous_13 /* c++98-c++11-c++14-compat-pedantic */, 2472, 0, /* DiagSubGroup124 */ 121)
DIAG_ENTRY(anonymous_10 /* c++98-c++11-compat */, 2506, 0, /* DiagSubGroup125 */ 123)
DIAG_ENTRY(CXXPre14CompatBinaryLiteral /* c++98-c++11-compat-binary-literal */, 2525, /* DiagArray126 */ 309, 0)
DIAG_ENTRY(anonymous_11 /* c++98-c++11-compat-pedantic */, 2559, 0, /* DiagSubGroup127 */ 125)
DIAG_ENTRY(CXX98Compat /* c++98-compat */, 2587, /* DiagArray128 */ 311, /* DiagSubGroup128 */ 127)
DIAG_ENTRY(CXX98CompatBindToTemporaryCopy /* c++98-compat-bind-to-temporary-copy */, 2600, /* DiagArray129 */ 371, 0)
DIAG_ENTRY(CXX98CompatExtraSemi /* c++98-compat-extra-semi */, 2636, /* DiagArray130 */ 373, 0)
DIAG_ENTRY(CXX98CompatLocalTypeTemplateArgs /* c++98-compat-local-type-template-args */, 2660, /* DiagArray131 */ 375, 0)
DIAG_ENTRY(CXX98CompatPedantic /* c++98-compat-pedantic */, 2698, /* DiagArray132 */ 377, /* DiagSubGroup132 */ 134)
DIAG_ENTRY(CXX98CompatUnnamedTypeTemplateArgs /* c++98-compat-unnamed-type-template-args */, 2720, /* DiagArray133 */ 387, 0)
DIAG_ENTRY(C11 /* c11-extensions */, 2760, /* DiagArray134 */ 389, 0)
DIAG_ENTRY(C2x /* c2x-extensions */, 2775, /* DiagArray135 */ 394, 0)
DIAG_ENTRY(C99Compat /* c99-compat */, 2790, /* DiagArray136 */ 397, 0)
DIAG_ENTRY(C99Designator /* c99-designator */, 2801, /* DiagArray137 */ 401, /* DiagSubGroup137 */ 142)
DIAG_ENTRY(C99 /* c99-extensions */, 2816, /* DiagArray138 */ 407, /* DiagSubGroup138 */ 144)
DIAG_ENTRY(PureVirtualCallFromCtorDtor /* call-to-pure-virtual-from-ctor-dtor */, 2831, /* DiagArray139 */ 418, 0)
DIAG_ENTRY(CalledOnceParameter /* called-once-parameter */, 2867, /* DiagArray140 */ 420, /* DiagSubGroup140 */ 146)
DIAG_ENTRY(CastAlign /* cast-align */, 2889, /* DiagArray141 */ 424, 0)
DIAG_ENTRY(anonymous_239 /* cast-calling-convention */, 2900, /* DiagArray142 */ 426, 0)
DIAG_ENTRY(CastFunctionType /* cast-function-type */, 2924, /* DiagArray143 */ 428, 0)
DIAG_ENTRY(SelTypeCast /* cast-of-sel-type */, 2943, /* DiagArray144 */ 430, 0)
DIAG_ENTRY(CastQual /* cast-qual */, 2960, /* DiagArray145 */ 432, 0)
DIAG_ENTRY(anonymous_229 /* cast-qual-unrelated */, 2970, /* DiagArray146 */ 435, 0)
DIAG_ENTRY(anonymous_2 /* char-align */, 2990, 0, 0)
DIAG_ENTRY(CharSubscript /* char-subscripts */, 3001, /* DiagArray148 */ 437, 0)
DIAG_ENTRY(ClangClPch /* clang-cl-pch */, 3017, /* DiagArray149 */ 440, 0)
DIAG_ENTRY(ClassConversion /* class-conversion */, 3030, /* DiagArray150 */ 445, 0)
DIAG_ENTRY(ClassVarargs /* class-varargs */, 3047, /* DiagArray151 */ 449, /* DiagSubGroup151 */ 148)
DIAG_ENTRY(anonymous_174 /* cmse-union-leak */, 3061, /* DiagArray152 */ 451, 0)
DIAG_ENTRY(anonymous_132 /* comma */, 3077, /* DiagArray153 */ 453, 0)
DIAG_ENTRY(Comment /* comment */, 3083, /* DiagArray154 */ 455, 0)
DIAG_ENTRY(anonymous_56 /* comments */, 3091, 0, /* DiagSubGroup155 */ 150)
DIAG_ENTRY(CompareDistinctPointerType /* compare-distinct-pointer-types */, 3100, /* DiagArray156 */ 460, 0)
DIAG_ENTRY(CompletionHandler /* completion-handler */, 3131, /* DiagArray157 */ 462, 0)
DIAG_ENTRY(anonymous_210 /* complex-component-init */, 3150, /* DiagArray158 */ 466, 0)
DIAG_ENTRY(CompoundTokenSplit /* compound-token-split */, 3173, 0, /* DiagSubGroup159 */ 152)
DIAG_ENTRY(CompoundTokenSplitByMacro /* compound-token-split-by-macro */, 3194, /* DiagArray160 */ 468, 0)
DIAG_ENTRY(CompoundTokenSplitBySpace /* compound-token-split-by-space */, 3224, /* DiagArray161 */ 470, 0)
DIAG_ENTRY(anonymous_130 /* concepts-ts-compat */, 3254, /* DiagArray162 */ 472, 0)
DIAG_ENTRY(anonymous_241 /* conditional-type-mismatch */, 3273, /* DiagArray163 */ 474, 0)
DIAG_ENTRY(UninitializedMaybe /* conditional-uninitialized */, 3299, /* DiagArray164 */ 476, 0)
DIAG_ENTRY(ConfigMacros /* config-macros */, 3325, /* DiagArray165 */ 478, 0)
DIAG_ENTRY(ConstantConversion /* constant-conversion */, 3339, /* DiagArray166 */ 480, /* DiagSubGroup166 */ 155)
DIAG_ENTRY(anonymous_71 /* constant-evaluated */, 3359, /* DiagArray167 */ 482, 0)
DIAG_ENTRY(anonymous_219 /* constant-logical-operand */, 3378, /* DiagArray168 */ 484, 0)
DIAG_ENTRY(anonymous_165 /* constexpr-not-const */, 3403, /* DiagArray169 */ 486, 0)
DIAG_ENTRY(Consumed /* consumed */, 3423, /* DiagArray170 */ 488, 0)
DIAG_ENTRY(Conversion /* conversion */, 3432, /* DiagArray171 */ 497, /* DiagSubGroup171 */ 158)
DIAG_ENTRY(anonymous_57 /* conversion-null */, 3443, 0, /* DiagSubGroup172 */ 174)
DIAG_ENTRY(Coroutine /* coroutine */, 3459, /* DiagArray173 */ 503, /* DiagSubGroup173 */ 176)
DIAG_ENTRY(CoroutineMissingUnhandledException /* coroutine-missing-unhandled-exception */, 3469, /* DiagArray174 */ 505, 0)
DIAG_ENTRY(CoveredSwitchDefault /* covered-switch-default */, 3507, /* DiagArray175 */ 507, 0)
DIAG_ENTRY(anonymous_55 /* cpp */, 3530, 0, /* DiagSubGroup176 */ 180)
DIAG_ENTRY(ObjCCStringFormat /* cstring-format-directive */, 3534, /* DiagArray177 */ 509, 0)
DIAG_ENTRY(CTADMaybeUnsupported /* ctad-maybe-unsupported */, 3559, /* DiagArray178 */ 511, 0)
DIAG_ENTRY(anonymous_3 /* ctor-dtor-privacy */, 3582, 0, 0)
DIAG_ENTRY(CrossTU /* ctu */, 3600, /* DiagArray180 */ 513, 0)
DIAG_ENTRY(CudaCompat /* cuda-compat */, 3604, /* DiagArray181 */ 515, 0)
DIAG_ENTRY(CustomAtomic /* custom-atomic-properties */, 3616, /* DiagArray182 */ 521, 0)
DIAG_ENTRY(anonymous_127 /* cxx-attribute-extension */, 3641, /* DiagArray183 */ 523, 0)
DIAG_ENTRY(Dangling /* dangling */, 3665, /* DiagArray184 */ 525, /* DiagSubGroup184 */ 182)
DIAG_ENTRY(DanglingElse /* dangling-else */, 3674, /* DiagArray185 */ 528, 0)
DIAG_ENTRY(DanglingField /* dangling-field */, 3688, /* DiagArray186 */ 530, 0)
DIAG_ENTRY(DanglingGsl /* dangling-gsl */, 3703, /* DiagArray187 */ 535, 0)
DIAG_ENTRY(DanglingInitializerList /* dangling-initializer-list */, 3716, /* DiagArray188 */ 538, 0)
DIAG_ENTRY(anonymous_83 /* darwin-sdk-settings */, 3742, /* DiagArray189 */ 540, 0)
DIAG_ENTRY(anonymous_112 /* date-time */, 3762, /* DiagArray190 */ 542, 0)
DIAG_ENTRY(DeallocInCategory /* dealloc-in-category */, 3772, /* DiagArray191 */ 544, 0)
DIAG_ENTRY(anonymous_80 /* debug-compression-unavailable */, 3792, /* DiagArray192 */ 546, 0)
DIAG_ENTRY(DeclarationAfterStatement /* declaration-after-statement */, 3822, /* DiagArray193 */ 548, 0)
DIAG_ENTRY(DefaultedFunctionDeleted /* defaulted-function-deleted */, 3850, /* DiagArray194 */ 551, 0)
DIAG_ENTRY(DelegatingCtorCycles /* delegating-ctor-cycles */, 3877, /* DiagArray195 */ 554, 0)
DIAG_ENTRY(DeleteAbstractNonVirtualDtor /* delete-abstract-non-virtual-dtor */, 3900, /* DiagArray196 */ 556, 0)
DIAG_ENTRY(DeleteIncomplete /* delete-incomplete */, 3933, /* DiagArray197 */ 558, 0)
DIAG_ENTRY(DeleteNonAbstractNonVirtualDtor /* delete-non-abstract-non-virtual-dtor */, 3951, /* DiagArray198 */ 561, 0)
DIAG_ENTRY(DeleteNonVirtualDtor /* delete-non-virtual-dtor */, 3988, 0, /* DiagSubGroup199 */ 187)
DIAG_ENTRY(anonymous_96 /* delimited-escape-sequence-extension */, 4012, /* DiagArray200 */ 563, 0)
DIAG_ENTRY(Deprecated /* deprecated */, 4048, /* DiagArray201 */ 565, /* DiagSubGroup201 */ 190)
DIAG_ENTRY(anonymous_232 /* deprecated-altivec-src-compat */, 4059, /* DiagArray202 */ 574, 0)
DIAG_ENTRY(DeprecatedAnonEnumEnumConversion /* deprecated-anon-enum-enum-conversion */, 4089, /* DiagArray203 */ 576, 0)
DIAG_ENTRY(DeprecatedArrayCompare /* deprecated-array-compare */, 4126, /* DiagArray204 */ 578, 0)
DIAG_ENTRY(DeprecatedAttributes /* deprecated-attributes */, 4151, /* DiagArray205 */ 580, 0)
DIAG_ENTRY(DeprecatedCommaSubscript /* deprecated-comma-subscript */, 4173, /* DiagArray206 */ 583, 0)
DIAG_ENTRY(DeprecatedCopy /* deprecated-copy */, 4200, /* DiagArray207 */ 585, /* DiagSubGroup207 */ 210)
DIAG_ENTRY(anonymous_4 /* deprecated-copy-dtor */, 4216, 0, /* DiagSubGroup208 */ 212)
DIAG_ENTRY(DeprecatedCopyWithDtor /* deprecated-copy-with-dtor */, 4237, /* DiagArray209 */ 587, /* DiagSubGroup209 */ 214)
DIAG_ENTRY(DeprecatedCopyWithUserProvidedCopy /* deprecated-copy-with-user-provided-copy */, 4263, /* DiagArray210 */ 589, 0)
DIAG_ENTRY(DeprecatedCopyWithUserProvidedDtor /* deprecated-copy-with-user-provided-dtor */, 4303, /* DiagArray211 */ 591, 0)
DIAG_ENTRY(DeprecatedCoroutine /* deprecated-coroutine */, 4343, /* DiagArray212 */ 593, /* DiagSubGroup212 */ 216)
DIAG_ENTRY(DeprecatedDeclarations /* deprecated-declarations */, 4364, /* DiagArray213 */ 595, 0)
DIAG_ENTRY(DeprecatedDynamicExceptionSpec /* deprecated-dynamic-exception-spec */, 4388, /* DiagArray214 */ 602, 0)
DIAG_ENTRY(DeprecatedEnumCompare /* deprecated-enum-compare */, 4422, /* DiagArray215 */ 604, 0)
DIAG_ENTRY(DeprecatedEnumCompareConditional /* deprecated-enum-compare-conditional */, 4446, /* DiagArray216 */ 606, 0)
DIAG_ENTRY(DeprecatedEnumEnumConversion /* deprecated-enum-enum-conversion */, 4482, /* DiagArray217 */ 608, 0)
DIAG_ENTRY(DeprecatedEnumFloatConversion /* deprecated-enum-float-conversion */, 4514, /* DiagArray218 */ 610, 0)
DIAG_ENTRY(DeprecatedExperimentalCoroutine /* deprecated-experimental-coroutine */, 4547, /* DiagArray219 */ 612, 0)
DIAG_ENTRY(DeprecatedImplementations /* deprecated-implementations */, 4581, /* DiagArray220 */ 614, 0)
DIAG_ENTRY(DeprecatedIncrementBool /* deprecated-increment-bool */, 4608, /* DiagArray221 */ 617, 0)
DIAG_ENTRY(DeprecatedObjCIsaUsage /* deprecated-objc-isa-usage */, 4634, /* DiagArray222 */ 619, 0)
DIAG_ENTRY(ObjCPointerIntrospect /* deprecated-objc-pointer-introspection */, 4660, /* DiagArray223 */ 622, /* DiagSubGroup223 */ 218)
DIAG_ENTRY(ObjCPointerIntrospectPerformSelector /* deprecated-objc-pointer-introspection-performSelector */, 4698, /* DiagArray224 */ 624, 0)
DIAG_ENTRY(DeprecatedPragma /* deprecated-pragma */, 4752, /* DiagArray225 */ 626, 0)
DIAG_ENTRY(DeprecatedRegister /* deprecated-register */, 4770, /* DiagArray226 */ 628, 0)
DIAG_ENTRY(DeprecatedThisCapture /* deprecated-this-capture */, 4790, /* DiagArray227 */ 630, 0)
DIAG_ENTRY(DeprecatedType /* deprecated-type */, 4814, /* DiagArray228 */ 632, 0)
DIAG_ENTRY(DeprecatedVolatile /* deprecated-volatile */, 4830, /* DiagArray229 */ 634, 0)
DIAG_ENTRY(DeprecatedWritableStr /* deprecated-writable-strings */, 4850, 0, /* DiagSubGroup230 */ 220)
DIAG_ENTRY(anonymous_257 /* direct-ivar-access */, 4878, /* DiagArray231 */ 641, 0)
DIAG_ENTRY(anonymous_104 /* disabled-macro-expansion */, 4897, /* DiagArray232 */ 643, 0)
DIAG_ENTRY(anonymous_6 /* disabled-optimization */, 4922, 0, 0)
DIAG_ENTRY(anonymous_7 /* discard-qual */, 4944, 0, 0)
DIAG_ENTRY(DistributedObjectModifiers /* distributed-object-modifiers */, 4957, /* DiagArray235 */ 645, 0)
DIAG_ENTRY(anonymous_8 /* div-by-zero */, 4986, 0, /* DiagSubGroup236 */ 222)
DIAG_ENTRY(DivZero /* division-by-zero */, 4998, /* DiagArray237 */ 648, 0)
DIAG_ENTRY(anonymous_175 /* dll-attribute-on-redeclaration */, 5015, /* DiagArray238 */ 650, 0)
DIAG_ENTRY(DllexportExplicitInstantiationDecl /* dllexport-explicit-instantiation-decl */, 5046, /* DiagArray239 */ 652, 0)
DIAG_ENTRY(anonymous_176 /* dllimport-static-field-def */, 5084, /* DiagArray240 */ 654, 0)
DIAG_ENTRY(Documentation /* documentation */, 5111, /* DiagArray241 */ 656, /* DiagSubGroup241 */ 224)
DIAG_ENTRY(DocumentationDeprecatedSync /* documentation-deprecated-sync */, 5125, /* DiagArray242 */ 676, 0)
DIAG_ENTRY(DocumentationHTML /* documentation-html */, 5155, /* DiagArray243 */ 678, 0)
DIAG_ENTRY(DocumentationPedantic /* documentation-pedantic */, 5174, /* DiagArray244 */ 683, /* DiagSubGroup244 */ 227)
DIAG_ENTRY(DocumentationUnknownCommand /* documentation-unknown-command */, 5197, /* DiagArray245 */ 685, 0)
DIAG_ENTRY(anonymous_91 /* dollar-in-identifier-extension */, 5227, /* DiagArray246 */ 688, 0)
DIAG_ENTRY(DoublePromotion /* double-promotion */, 5258, /* DiagArray247 */ 690, 0)
DIAG_ENTRY(DtorName /* dtor-name */, 5275, /* DiagArray248 */ 692, 0)
DIAG_ENTRY(anonymous_164 /* dtor-typedef */, 5285, /* DiagArray249 */ 696, 0)
DIAG_ENTRY(DuplicateDeclSpecifier /* duplicate-decl-specifier */, 5298, /* DiagArray250 */ 698, 0)
DIAG_ENTRY(anonymous_131 /* duplicate-enum */, 5323, /* DiagArray251 */ 703, 0)
DIAG_ENTRY(DuplicateArgDecl /* duplicate-method-arg */, 5338, /* DiagArray252 */ 705, 0)
DIAG_ENTRY(MethodDuplicate /* duplicate-method-match */, 5359, /* DiagArray253 */ 707, 0)
DIAG_ENTRY(anonymous_145 /* duplicate-protocol */, 5382, /* DiagArray254 */ 709, 0)
DIAG_ENTRY(DynamicClassMemaccess /* dynamic-class-memaccess */, 5401, /* DiagArray255 */ 711, 0)
DIAG_ENTRY(DynamicExceptionSpec /* dynamic-exception-spec */, 5425, /* DiagArray256 */ 713, /* DiagSubGroup256 */ 229)
DIAG_ENTRY(anonymous_31 /* effc++ */, 5448, 0, /* DiagSubGroup257 */ 231)
DIAG_ENTRY(anonymous_118 /* elaborated-enum-base */, 5455, /* DiagArray258 */ 715, 0)
DIAG_ENTRY(anonymous_119 /* elaborated-enum-class */, 5476, /* DiagArray259 */ 717, 0)
DIAG_ENTRY(anonymous_110 /* embedded-directive */, 5498, /* DiagArray260 */ 719, 0)
DIAG_ENTRY(EmptyBody /* empty-body */, 5517, /* DiagArray261 */ 721, 0)
DIAG_ENTRY(anonymous_123 /* empty-decomposition */, 5528, /* DiagArray262 */ 727, 0)
DIAG_ENTRY(EmptyInitStatement /* empty-init-stmt */, 5548, /* DiagArray263 */ 729, 0)
DIAG_ENTRY(anonymous_115 /* empty-translation-unit */, 5564, /* DiagArray264 */ 731, 0)
DIAG_ENTRY(anonymous_179 /* encode-type */, 5587, /* DiagArray265 */ 733, 0)
DIAG_ENTRY(anonymous_54 /* endif-labels */, 5599, 0, /* DiagSubGroup266 */ 233)
DIAG_ENTRY(EnumCompare /* enum-compare */, 5612, /* DiagArray267 */ 735, /* DiagSubGroup267 */ 235)
DIAG_ENTRY(EnumCompareConditional /* enum-compare-conditional */, 5625, /* DiagArray268 */ 737, /* DiagSubGroup268 */ 238)
DIAG_ENTRY(EnumCompareSwitch /* enum-compare-switch */, 5650, /* DiagArray269 */ 739, 0)
DIAG_ENTRY(EnumConversion /* enum-conversion */, 5670, /* DiagArray270 */ 741, /* DiagSubGroup270 */ 240)
DIAG_ENTRY(EnumEnumConversion /* enum-enum-conversion */, 5686, /* DiagArray271 */ 743, /* DiagSubGroup271 */ 244)
DIAG_ENTRY(EnumFloatConversion /* enum-float-conversion */, 5707, /* DiagArray272 */ 745, /* DiagSubGroup272 */ 246)
DIAG_ENTRY(EnumTooLarge /* enum-too-large */, 5729, /* DiagArray273 */ 747, 0)
DIAG_ENTRY(Exceptions /* exceptions */, 5744, /* DiagArray274 */ 750, 0)
DIAG_ENTRY(ExcessInitializers /* excess-initializers */, 5755, /* DiagArray275 */ 754, 0)
DIAG_ENTRY(ExitTimeDestructors /* exit-time-destructors */, 5775, /* DiagArray276 */ 759, 0)
DIAG_ENTRY(ExpansionToDefined /* expansion-to-defined */, 5797, /* DiagArray277 */ 761, 0)
DIAG_ENTRY(ExplicitInitializeCall /* explicit-initialize-call */, 5818, /* DiagArray278 */ 764, 0)
DIAG_ENTRY(anonymous_212 /* explicit-ownership-type */, 5843, /* DiagArray279 */ 767, 0)
DIAG_ENTRY(ExportUnnamed /* export-unnamed */, 5867, /* DiagArray280 */ 769, 0)
DIAG_ENTRY(anonymous_260 /* export-using-directive */, 5882, /* DiagArray281 */ 772, 0)
DIAG_ENTRY(ExternCCompat /* extern-c-compat */, 5905, /* DiagArray282 */ 774, 0)
DIAG_ENTRY(anonymous_207 /* extern-initializer */, 5921, /* DiagArray283 */ 776, 0)
DIAG_ENTRY(Extra /* extra */, 5940, /* DiagArray284 */ 778, /* DiagSubGroup284 */ 248)
DIAG_ENTRY(anonymous_220 /* extra-qualification */, 5946, /* DiagArray285 */ 780, 0)
DIAG_ENTRY(ExtraSemi /* extra-semi */, 5966, /* DiagArray286 */ 782, /* DiagSubGroup286 */ 263)
DIAG_ENTRY(ExtraSemiStmt /* extra-semi-stmt */, 5977, /* DiagArray287 */ 785, /* DiagSubGroup287 */ 266)
DIAG_ENTRY(ExtraTokens /* extra-tokens */, 5993, /* DiagArray288 */ 787, 0)
DIAG_ENTRY(FinalDtorNonFinalClass /* final-dtor-non-final-class */, 6006, /* DiagArray289 */ 790, 0)
DIAG_ENTRY(FinalMacro /* final-macro */, 6033, /* DiagArray290 */ 792, 0)
DIAG_ENTRY(anonymous_117 /* fixed-enum-extension */, 6045, /* DiagArray291 */ 794, 0)
DIAG_ENTRY(anonymous_70 /* fixed-point-overflow */, 6066, /* DiagArray292 */ 796, 0)
DIAG_ENTRY(FlagEnum /* flag-enum */, 6087, /* DiagArray293 */ 798, 0)
DIAG_ENTRY(FlexibleArrayExtensions /* flexible-array-extensions */, 6097, /* DiagArray294 */ 800, 0)
DIAG_ENTRY(FloatConversion /* float-conversion */, 6123, /* DiagArray295 */ 803, /* DiagSubGroup295 */ 268)
DIAG_ENTRY(anonymous_213 /* float-equal */, 6140, /* DiagArray296 */ 805, 0)
DIAG_ENTRY(FloatOverflowConversion /* float-overflow-conversion */, 6152, /* DiagArray297 */ 807, 0)
DIAG_ENTRY(FloatZeroConversion /* float-zero-conversion */, 6178, /* DiagArray298 */ 810, 0)
DIAG_ENTRY(ForLoopAnalysis /* for-loop-analysis */, 6200, /* DiagArray299 */ 812, 0)
DIAG_ENTRY(Format /* format */, 6218, /* DiagArray300 */ 815, /* DiagSubGroup300 */ 271)
DIAG_ENTRY(FormatExtraArgs /* format-extra-args */, 6225, /* DiagArray301 */ 842, 0)
DIAG_ENTRY(FormatInsufficientArgs /* format-insufficient-args */, 6243, /* DiagArray302 */ 844, 0)
DIAG_ENTRY(FormatInvalidSpecifier /* format-invalid-specifier */, 6268, /* DiagArray303 */ 846, 0)
DIAG_ENTRY(FormatNonStandard /* format-non-iso */, 6293, /* DiagArray304 */ 848, 0)
DIAG_ENTRY(FormatNonLiteral /* format-nonliteral */, 6308, /* DiagArray305 */ 852, 0)
DIAG_ENTRY(FormatPedantic /* format-pedantic */, 6326, /* DiagArray306 */ 854, 0)
DIAG_ENTRY(FormatSecurity /* format-security */, 6342, /* DiagArray307 */ 857, 0)
DIAG_ENTRY(FormatTypeConfusion /* format-type-confusion */, 6358, /* DiagArray308 */ 859, 0)
DIAG_ENTRY(FormatY2K /* format-y2k */, 6380, 0, 0)
DIAG_ENTRY(FormatZeroLength /* format-zero-length */, 6391, /* DiagArray310 */ 861, 0)
DIAG_ENTRY(Format2 /* format=2 */, 6410, 0, /* DiagSubGroup311 */ 279)
DIAG_ENTRY(FortifySource /* fortify-source */, 6419, /* DiagArray312 */ 863, 0)
DIAG_ENTRY(FourByteMultiChar /* four-char-constants */, 6434, /* DiagArray313 */ 869, 0)
DIAG_ENTRY(FrameAddress /* frame-address */, 6454, /* DiagArray314 */ 871, 0)
DIAG_ENTRY(BackendFrameLargerThan /* frame-larger-than */, 6468, /* DiagArray315 */ 873, 0)
DIAG_ENTRY(anonymous_67 /* frame-larger-than= */, 6486, 0, /* DiagSubGroup316 */ 283)
DIAG_ENTRY(FrameworkIncludePrivateFromPublic /* framework-include-private-from-public */, 6505, /* DiagArray317 */ 876, 0)
DIAG_ENTRY(FreeNonHeapObject /* free-nonheap-object */, 6543, /* DiagArray318 */ 878, 0)
DIAG_ENTRY(FunctionDefInObjCContainer /* function-def-in-objc-container */, 6563, /* DiagArray319 */ 880, 0)
DIAG_ENTRY(FunctionMultiVersioning /* function-multiversion */, 6594, /* DiagArray320 */ 882, /* DiagSubGroup320 */ 285)
DIAG_ENTRY(FUseLdPath /* fuse-ld-path */, 6616, /* DiagArray321 */ 886, 0)
DIAG_ENTRY(FutureAttrs /* future-attribute-extensions */, 6629, 0, /* DiagSubGroup322 */ 287)
DIAG_ENTRY(FutureCompat /* future-compat */, 6657, 0, 0)
DIAG_ENTRY(GccCompat /* gcc-compat */, 6671, /* DiagArray324 */ 888, 0)
DIAG_ENTRY(GlobalConstructors /* global-constructors */, 6682, /* DiagArray325 */ 899, 0)
DIAG_ENTRY(GlobalISel /* global-isel */, 6702, /* DiagArray326 */ 902, 0)
DIAG_ENTRY(GNU /* gnu */, 6714, 0, /* DiagSubGroup327 */ 291)
DIAG_ENTRY(GNUAlignofExpression /* gnu-alignof-expression */, 6718, /* DiagArray328 */ 905, 0)
DIAG_ENTRY(GNUAnonymousStruct /* gnu-anonymous-struct */, 6741, /* DiagArray329 */ 907, 0)
DIAG_ENTRY(anonymous_222 /* gnu-array-member-paren-init */, 6762, /* DiagArray330 */ 909, 0)
DIAG_ENTRY(GNUAutoType /* gnu-auto-type */, 6790, /* DiagArray331 */ 911, 0)
DIAG_ENTRY(GNUBinaryLiteral /* gnu-binary-literal */, 6804, /* DiagArray332 */ 913, 0)
DIAG_ENTRY(GNUCaseRange /* gnu-case-range */, 6823, /* DiagArray333 */ 915, 0)
DIAG_ENTRY(GNUComplexInteger /* gnu-complex-integer */, 6838, /* DiagArray334 */ 917, 0)
DIAG_ENTRY(GNUCompoundLiteralInitializer /* gnu-compound-literal-initializer */, 6858, /* DiagArray335 */ 919, 0)
DIAG_ENTRY(GNUConditionalOmittedOperand /* gnu-conditional-omitted-operand */, 6891, /* DiagArray336 */ 921, 0)
DIAG_ENTRY(GNUDesignator /* gnu-designator */, 6923, /* DiagArray337 */ 923, 0)
DIAG_ENTRY(GNUEmptyInitializer /* gnu-empty-initializer */, 6938, /* DiagArray338 */ 927, 0)
DIAG_ENTRY(GNUEmptyStruct /* gnu-empty-struct */, 6960, /* DiagArray339 */ 929, 0)
DIAG_ENTRY(GNUFlexibleArrayInitializer /* gnu-flexible-array-initializer */, 6977, /* DiagArray340 */ 933, 0)
DIAG_ENTRY(GNUFlexibleArrayUnionMember /* gnu-flexible-array-union-member */, 7008, /* DiagArray341 */ 935, 0)
DIAG_ENTRY(GNUFoldingConstant /* gnu-folding-constant */, 7040, /* DiagArray342 */ 937, 0)
DIAG_ENTRY(GNUImaginaryConstant /* gnu-imaginary-constant */, 7061, /* DiagArray343 */ 941, 0)
DIAG_ENTRY(GNUIncludeNext /* gnu-include-next */, 7084, /* DiagArray344 */ 943, 0)
DIAG_ENTRY(anonymous_180 /* gnu-inline-cpp-without-extern */, 7101, /* DiagArray345 */ 945, 0)
DIAG_ENTRY(GNULabelsAsValue /* gnu-label-as-value */, 7131, /* DiagArray346 */ 947, 0)
DIAG_ENTRY(GNURedeclaredEnum /* gnu-redeclared-enum */, 7150, /* DiagArray347 */ 950, 0)
DIAG_ENTRY(GNUStatementExpression /* gnu-statement-expression */, 7170, /* DiagArray348 */ 952, 0)
DIAG_ENTRY(GNUStaticFloatInit /* gnu-static-float-init */, 7195, /* DiagArray349 */ 954, 0)
DIAG_ENTRY(GNUStringLiteralOperatorTemplate /* gnu-string-literal-operator-template */, 7217, /* DiagArray350 */ 956, 0)
DIAG_ENTRY(GNUUnionCast /* gnu-union-cast */, 7254, /* DiagArray351 */ 958, 0)
DIAG_ENTRY(GNUVariableSizedTypeNotAtEnd /* gnu-variable-sized-type-not-at-end */, 7269, /* DiagArray352 */ 960, 0)
DIAG_ENTRY(GNUZeroLineDirective /* gnu-zero-line-directive */, 7304, /* DiagArray353 */ 962, 0)
DIAG_ENTRY(GNUZeroVariadicMacroArguments /* gnu-zero-variadic-macro-arguments */, 7328, /* DiagArray354 */ 964, 0)
DIAG_ENTRY(anonymous_238 /* gpu-maybe-wrong-side */, 7362, /* DiagArray355 */ 967, 0)
DIAG_ENTRY(anonymous_114 /* header-guard */, 7383, /* DiagArray356 */ 969, 0)
DIAG_ENTRY(HeaderHygiene /* header-hygiene */, 7396, /* DiagArray357 */ 971, 0)
DIAG_ENTRY(HIPOnly /* hip-only */, 7411, /* DiagArray358 */ 973, 0)
DIAG_ENTRY(anonymous_234 /* idiomatic-parentheses */, 7420, /* DiagArray359 */ 975, 0)
DIAG_ENTRY(IgnoredAttributes /* ignored-attributes */, 7442, /* DiagArray360 */ 977, 0)
DIAG_ENTRY(anonymous_183 /* ignored-availability-without-sdk-settings */, 7461, /* DiagArray361 */ 1057, 0)
DIAG_ENTRY(IgnoredOptimizationArgument /* ignored-optimization-argument */, 7503, /* DiagArray362 */ 1059, 0)
DIAG_ENTRY(IgnoredPragmaIntrinsic /* ignored-pragma-intrinsic */, 7533, /* DiagArray363 */ 1062, 0)
DIAG_ENTRY(IgnoredPragmaOptimize /* ignored-pragma-optimize */, 7558, /* DiagArray364 */ 1064, 0)
DIAG_ENTRY(IgnoredPragmas /* ignored-pragmas */, 7582, /* DiagArray365 */ 1066, /* DiagSubGroup365 */ 320)
DIAG_ENTRY(IgnoredQualifiers /* ignored-qualifiers */, 7598, /* DiagArray366 */ 1112, /* DiagSubGroup366 */ 323)
DIAG_ENTRY(IgnoredReferenceQualifiers /* ignored-reference-qualifiers */, 7617, /* DiagArray367 */ 1117, 0)
DIAG_ENTRY(Implicit /* implicit */, 7646, 0, /* DiagSubGroup368 */ 325)
DIAG_ENTRY(ImplicitAtomic /* implicit-atomic-properties */, 7655, /* DiagArray369 */ 1119, 0)
DIAG_ENTRY(ImplicitConstIntFloatConversion /* implicit-const-int-float-conversion */, 7682, /* DiagArray370 */ 1122, 0)
DIAG_ENTRY(ImplicitConversionFloatingPointToBool /* implicit-conversion-floating-point-to-bool */, 7718, /* DiagArray371 */ 1124, 0)
DIAG_ENTRY(anonymous_249 /* implicit-exception-spec-mismatch */, 7761, /* DiagArray372 */ 1126, 0)
DIAG_ENTRY(ImplicitFallthrough /* implicit-fallthrough */, 7794, /* DiagArray373 */ 1128, /* DiagSubGroup373 */ 328)
DIAG_ENTRY(ImplicitFallthroughPerFunction /* implicit-fallthrough-per-function */, 7815, /* DiagArray374 */ 1130, 0)
DIAG_ENTRY(ImplicitFixedPointConversion /* implicit-fixed-point-conversion */, 7849, /* DiagArray375 */ 1132, 0)
DIAG_ENTRY(ImplicitFloatConversion /* implicit-float-conversion */, 7881, /* DiagArray376 */ 1134, /* DiagSubGroup376 */ 330)
DIAG_ENTRY(ImplicitFunctionDeclare /* implicit-function-declaration */, 7907, /* DiagArray377 */ 1137, 0)
DIAG_ENTRY(ImplicitInt /* implicit-int */, 7937, /* DiagArray378 */ 1142, 0)
DIAG_ENTRY(ImplicitIntConversion /* implicit-int-conversion */, 7950, /* DiagArray379 */ 1144, /* DiagSubGroup379 */ 333)
DIAG_ENTRY(ImplicitIntFloatConversion /* implicit-int-float-conversion */, 7974, /* DiagArray380 */ 1147, /* DiagSubGroup380 */ 335)
DIAG_ENTRY(anonymous_156 /* implicit-retain-self */, 8004, /* DiagArray381 */ 1149, 0)
DIAG_ENTRY(ImplicitlyUnsignedLiteral /* implicitly-unsigned-literal */, 8025, /* DiagArray382 */ 1151, 0)
DIAG_ENTRY(anonymous_22 /* import */, 8053, 0, 0)
DIAG_ENTRY(anonymous_109 /* import-preprocessor-directive-pedantic */, 8060, /* DiagArray384 */ 1153, 0)
DIAG_ENTRY(anonymous_246 /* inaccessible-base */, 8099, /* DiagArray385 */ 1155, 0)
DIAG_ENTRY(anonymous_99 /* include-next-absolute-path */, 8117, /* DiagArray386 */ 1157, 0)
DIAG_ENTRY(anonymous_98 /* include-next-outside-header */, 8144, /* DiagArray387 */ 1159, 0)
DIAG_ENTRY(IncompatibleExceptionSpec /* incompatible-exception-spec */, 8172, /* DiagArray388 */ 1161, 0)
DIAG_ENTRY(IncompatibleFunctionPointerTypes /* incompatible-function-pointer-types */, 8200, /* DiagArray389 */ 1164, 0)
DIAG_ENTRY(anonymous_139 /* incompatible-library-redeclaration */, 8236, /* DiagArray390 */ 1166, 0)
DIAG_ENTRY(IncompatibleMSStruct /* incompatible-ms-struct */, 8271, /* DiagArray391 */ 1168, 0)
DIAG_ENTRY(IncompatiblePointerTypes /* incompatible-pointer-types */, 8294, /* DiagArray392 */ 1171, /* DiagSubGroup392 */ 337)
DIAG_ENTRY(IncompatiblePointerTypesDiscardsQualifiers /* incompatible-pointer-types-discards-qualifiers */, 8321, /* DiagArray393 */ 1173, 0)
DIAG_ENTRY(anonymous_146 /* incompatible-property-type */, 8368, /* DiagArray394 */ 1177, 0)
DIAG_ENTRY(anonymous_79 /* incompatible-sysroot */, 8395, /* DiagArray395 */ 1179, 0)
DIAG_ENTRY(IncompleteFrameworkModuleDeclaration /* incomplete-framework-module-declaration */, 8416, /* DiagArray396 */ 1181, 0)
DIAG_ENTRY(anonymous_148 /* incomplete-implementation */, 8456, /* DiagArray397 */ 1183, 0)
DIAG_ENTRY(IncompleteModule /* incomplete-module */, 8482, 0, /* DiagSubGroup398 */ 340)
DIAG_ENTRY(anonymous_138 /* incomplete-setjmp-declaration */, 8500, /* DiagArray399 */ 1185, 0)
DIAG_ENTRY(IncompleteUmbrella /* incomplete-umbrella */, 8530, /* DiagArray400 */ 1187, 0)
DIAG_ENTRY(MicrosoftInconsistentDllImport /* inconsistent-dllimport */, 8550, /* DiagArray401 */ 1191, 0)
DIAG_ENTRY(CXX11WarnInconsistentOverrideDestructor /* inconsistent-missing-destructor-override */, 8573, /* DiagArray402 */ 1194, 0)
DIAG_ENTRY(CXX11WarnInconsistentOverrideMethod /* inconsistent-missing-override */, 8614, /* DiagArray403 */ 1196, 0)
DIAG_ENTRY(IncrementBool /* increment-bool */, 8644, /* DiagArray404 */ 1198, /* DiagSubGroup404 */ 343)
DIAG_ENTRY(InfiniteRecursion /* infinite-recursion */, 8659, /* DiagArray405 */ 1200, 0)
DIAG_ENTRY(anonymous_23 /* init-self */, 8678, 0, 0)
DIAG_ENTRY(InitializerOverrides /* initializer-overrides */, 8688, /* DiagArray407 */ 1202, 0)
DIAG_ENTRY(anonymous_163 /* injected-class-name */, 8710, /* DiagArray408 */ 1205, 0)
DIAG_ENTRY(anonymous_24 /* inline */, 8730, 0, 0)
DIAG_ENTRY(BackendInlineAsm /* inline-asm */, 8737, /* DiagArray410 */ 1207, 0)
DIAG_ENTRY(InlineNamespaceReopenedNoninline /* inline-namespace-reopened-noninline */, 8748, /* DiagArray411 */ 1209, 0)
DIAG_ENTRY(anonymous_247 /* inline-new-delete */, 8784, /* DiagArray412 */ 1211, 0)
DIAG_ENTRY(anonymous_195 /* instantiation-after-specialization */, 8802, /* DiagArray413 */ 1213, 0)
DIAG_ENTRY(IntConversion /* int-conversion */, 8837, /* DiagArray414 */ 1215, 0)
DIAG_ENTRY(anonymous_59 /* int-conversions */, 8852, 0, /* DiagSubGroup415 */ 345)
DIAG_ENTRY(IntInBoolContext /* int-in-bool-context */, 8868, /* DiagArray416 */ 1218, 0)
DIAG_ENTRY(IntToPointerCast /* int-to-pointer-cast */, 8888, /* DiagArray417 */ 1221, /* DiagSubGroup417 */ 347)
DIAG_ENTRY(IntToVoidPointerCast /* int-to-void-pointer-cast */, 8908, /* DiagArray418 */ 1223, 0)
DIAG_ENTRY(anonymous_69 /* integer-overflow */, 8933, /* DiagArray419 */ 1225, 0)
DIAG_ENTRY(anonymous_134 /* interrupt-service-routine */, 8950, /* DiagArray420 */ 1227, 0)
DIAG_ENTRY(InvalidCommandLineArgument /* invalid-command-line-argument */, 8976, /* DiagArray421 */ 1229, /* DiagSubGroup421 */ 349)
DIAG_ENTRY(anonymous_166 /* invalid-constexpr */, 9006, /* DiagArray422 */ 1238, 0)
DIAG_ENTRY(ObjCInvalidIBOutletProperty /* invalid-iboutlet */, 9024, /* DiagArray423 */ 1240, 0)
DIAG_ENTRY(anonymous_177 /* invalid-initializer-from-system-header */, 9041, /* DiagArray424 */ 1243, 0)
DIAG_ENTRY(InvalidIOSDeploymentTarget /* invalid-ios-deployment-target */, 9080, /* DiagArray425 */ 1245, 0)
DIAG_ENTRY(anonymous_189 /* invalid-no-builtin-names */, 9110, /* DiagArray426 */ 1247, 0)
DIAG_ENTRY(InvalidNoreturn /* invalid-noreturn */, 9135, /* DiagArray427 */ 1249, 0)
DIAG_ENTRY(InvalidOffsetof /* invalid-offsetof */, 9152, /* DiagArray428 */ 1252, 0)
DIAG_ENTRY(InvalidOrNonExistentDirectory /* invalid-or-nonexistent-directory */, 9169, /* DiagArray429 */ 1255, 0)
DIAG_ENTRY(anonymous_193 /* invalid-partial-specialization */, 9202, /* DiagArray430 */ 1258, 0)
DIAG_ENTRY(anonymous_25 /* invalid-pch */, 9233, 0, 0)
DIAG_ENTRY(InvalidPPToken /* invalid-pp-token */, 9245, /* DiagArray432 */ 1260, 0)
DIAG_ENTRY(InvalidSourceEncoding /* invalid-source-encoding */, 9262, /* DiagArray433 */ 1263, 0)
DIAG_ENTRY(anonymous_111 /* invalid-token-paste */, 9286, /* DiagArray434 */ 1266, 0)
DIAG_ENTRY(anonymous_233 /* jump-seh-finally */, 9306, /* DiagArray435 */ 1268, 0)
DIAG_ENTRY(KeywordCompat /* keyword-compat */, 9323, /* DiagArray436 */ 1270, 0)
DIAG_ENTRY(KeywordAsMacro /* keyword-macro */, 9338, /* DiagArray437 */ 1272, 0)
DIAG_ENTRY(KNRPromotedParameter /* knr-promoted-parameter */, 9352, /* DiagArray438 */ 1274, 0)
DIAG_ENTRY(anonymous_92 /* language-extension-token */, 9375, /* DiagArray439 */ 1276, 0)
DIAG_ENTRY(LargeByValueCopy /* large-by-value-copy */, 9400, /* DiagArray440 */ 1278, 0)
DIAG_ENTRY(LibLTO /* liblto */, 9420, 0, 0)
DIAG_ENTRY(LinkerWarnings /* linker-warnings */, 9427, /* DiagArray442 */ 1281, 0)
DIAG_ENTRY(LiteralConversion /* literal-conversion */, 9443, /* DiagArray443 */ 1283, 0)
DIAG_ENTRY(LiteralRange /* literal-range */, 9462, /* DiagArray444 */ 1286, 0)
DIAG_ENTRY(LocalTypeTemplateArgs /* local-type-template-args */, 9476, /* DiagArray445 */ 1289, /* DiagSubGroup445 */ 351)
DIAG_ENTRY(LogicalNotParentheses /* logical-not-parentheses */, 9501, /* DiagArray446 */ 1291, 0)
DIAG_ENTRY(LogicalOpParentheses /* logical-op-parentheses */, 9525, /* DiagArray447 */ 1293, 0)
DIAG_ENTRY(LongLong /* long-long */, 9548, /* DiagArray448 */ 1295, /* DiagSubGroup448 */ 353)
DIAG_ENTRY(LoopAnalysis /* loop-analysis */, 9558, 0, /* DiagSubGroup449 */ 355)
DIAG_ENTRY(MacroRedefined /* macro-redefined */, 9572, /* DiagArray450 */ 1297, 0)
DIAG_ENTRY(Main /* main */, 9588, /* DiagArray451 */ 1299, 0)
DIAG_ENTRY(MainReturnType /* main-return-type */, 9593, /* DiagArray452 */ 1307, 0)
DIAG_ENTRY(MalformedWarningCheck /* malformed-warning-check */, 9610, /* DiagArray453 */ 1309, 0)
DIAG_ENTRY(anonymous_209 /* many-braces-around-scalar-init */, 9634, /* DiagArray454 */ 1311, 0)
DIAG_ENTRY(MaxTokens /* max-tokens */, 9665, /* DiagArray455 */ 1313, 0)
DIAG_ENTRY(MaxUnsignedZero /* max-unsigned-zero */, 9676, /* DiagArray456 */ 1316, 0)
DIAG_ENTRY(MemsetTransposedArgs /* memset-transposed-args */, 9694, /* DiagArray457 */ 1318, 0)
DIAG_ENTRY(anonymous_141 /* memsize-comparison */, 9717, /* DiagArray458 */ 1320, 0)
DIAG_ENTRY(MethodSignatures /* method-signatures */, 9736, /* DiagArray459 */ 1322, 0)
DIAG_ENTRY(Microsoft /* microsoft */, 9754, 0, /* DiagSubGroup460 */ 358)
DIAG_ENTRY(MicrosoftAbstract /* microsoft-abstract */, 9764, /* DiagArray461 */ 1325, 0)
DIAG_ENTRY(MicrosoftAnonTag /* microsoft-anon-tag */, 9783, /* DiagArray462 */ 1327, 0)
DIAG_ENTRY(MicrosoftCast /* microsoft-cast */, 9802, /* DiagArray463 */ 1330, 0)
DIAG_ENTRY(MicrosoftCharize /* microsoft-charize */, 9817, /* DiagArray464 */ 1333, 0)
DIAG_ENTRY(MicrosoftCommentPaste /* microsoft-comment-paste */, 9835, /* DiagArray465 */ 1335, 0)
DIAG_ENTRY(MicrosoftConstInit /* microsoft-const-init */, 9859, /* DiagArray466 */ 1337, 0)
DIAG_ENTRY(MicrosoftCppMacro /* microsoft-cpp-macro */, 9880, /* DiagArray467 */ 1339, 0)
DIAG_ENTRY(MicrosoftDefaultArgRedefinition /* microsoft-default-arg-redefinition */, 9900, /* DiagArray468 */ 1341, 0)
DIAG_ENTRY(MicrosoftDrectveSection /* microsoft-drectve-section */, 9935, /* DiagArray469 */ 1343, 0)
DIAG_ENTRY(MicrosoftEndOfFile /* microsoft-end-of-file */, 9961, /* DiagArray470 */ 1345, 0)
DIAG_ENTRY(MicrosoftEnumForwardReference /* microsoft-enum-forward-reference */, 9983, /* DiagArray471 */ 1347, 0)
DIAG_ENTRY(MicrosoftEnumValue /* microsoft-enum-value */, 10016, /* DiagArray472 */ 1349, 0)
DIAG_ENTRY(MicrosoftExceptionSpec /* microsoft-exception-spec */, 10037, /* DiagArray473 */ 1351, 0)
DIAG_ENTRY(anonymous_120 /* microsoft-exists */, 10062, /* DiagArray474 */ 1357, 0)
DIAG_ENTRY(MicrosoftExplicitConstructorCall /* microsoft-explicit-constructor-call */, 10079, /* DiagArray475 */ 1359, 0)
DIAG_ENTRY(MicrosoftExtraQualification /* microsoft-extra-qualification */, 10115, /* DiagArray476 */ 1361, 0)
DIAG_ENTRY(MicrosoftFixedEnum /* microsoft-fixed-enum */, 10145, /* DiagArray477 */ 1363, 0)
DIAG_ENTRY(MicrosoftFlexibleArray /* microsoft-flexible-array */, 10166, /* DiagArray478 */ 1365, 0)
DIAG_ENTRY(MicrosoftGoto /* microsoft-goto */, 10191, /* DiagArray479 */ 1368, 0)
DIAG_ENTRY(MicrosoftInaccessibleBase /* microsoft-inaccessible-base */, 10206, /* DiagArray480 */ 1370, 0)
DIAG_ENTRY(MicrosoftInclude /* microsoft-include */, 10234, /* DiagArray481 */ 1372, 0)
DIAG_ENTRY(MicrosoftMutableReference /* microsoft-mutable-reference */, 10252, /* DiagArray482 */ 1374, 0)
DIAG_ENTRY(MicrosoftPureDefinition /* microsoft-pure-definition */, 10280, /* DiagArray483 */ 1376, 0)
DIAG_ENTRY(MicrosoftRedeclareStatic /* microsoft-redeclare-static */, 10306, /* DiagArray484 */ 1378, 0)
DIAG_ENTRY(MicrosoftSealed /* microsoft-sealed */, 10333, /* DiagArray485 */ 1380, 0)
DIAG_ENTRY(MicrosoftStaticAssert /* microsoft-static-assert */, 10350, /* DiagArray486 */ 1382, 0)
DIAG_ENTRY(MicrosoftTemplate /* microsoft-template */, 10374, /* DiagArray487 */ 1384, /* DiagSubGroup487 */ 389)
DIAG_ENTRY(MicrosoftTemplateShadow /* microsoft-template-shadow */, 10393, /* DiagArray488 */ 1394, 0)
DIAG_ENTRY(MicrosoftUnionMemberReference /* microsoft-union-member-reference */, 10419, /* DiagArray489 */ 1396, 0)
DIAG_ENTRY(MicrosoftUnqualifiedFriend /* microsoft-unqualified-friend */, 10452, /* DiagArray490 */ 1398, 0)
DIAG_ENTRY(MicrosoftUsingDecl /* microsoft-using-decl */, 10481, /* DiagArray491 */ 1400, 0)
DIAG_ENTRY(MicrosoftVoidPseudoDtor /* microsoft-void-pseudo-dtor */, 10502, /* DiagArray492 */ 1402, 0)
DIAG_ENTRY(MisleadingIndentation /* misleading-indentation */, 10529, /* DiagArray493 */ 1404, 0)
DIAG_ENTRY(anonymous_230 /* mismatched-new-delete */, 10552, /* DiagArray494 */ 1406, 0)
DIAG_ENTRY(MismatchedParameterTypes /* mismatched-parameter-types */, 10574, /* DiagArray495 */ 1408, 0)
DIAG_ENTRY(MismatchedReturnTypes /* mismatched-return-types */, 10601, /* DiagArray496 */ 1410, 0)
DIAG_ENTRY(MismatchedTags /* mismatched-tags */, 10625, /* DiagArray497 */ 1412, 0)
DIAG_ENTRY(MissingBraces /* missing-braces */, 10641, /* DiagArray498 */ 1415, 0)
DIAG_ENTRY(anonymous_243 /* missing-constinit */, 10656, /* DiagArray499 */ 1417, 0)
DIAG_ENTRY(MissingDeclarations /* missing-declarations */, 10674, /* DiagArray500 */ 1419, 0)
DIAG_ENTRY(anonymous_162 /* missing-exception-spec */, 10695, /* DiagArray501 */ 1424, 0)
DIAG_ENTRY(MissingFieldInitializers /* missing-field-initializers */, 10718, /* DiagArray502 */ 1426, 0)
DIAG_ENTRY(anonymous_26 /* missing-format-attribute */, 10745, 0, 0)
DIAG_ENTRY(anonymous_27 /* missing-include-dirs */, 10770, 0, 0)
DIAG_ENTRY(MissingMethodReturnType /* missing-method-return-type */, 10791, /* DiagArray505 */ 1428, 0)
DIAG_ENTRY(MissingNoEscape /* missing-noescape */, 10818, /* DiagArray506 */ 1430, 0)
DIAG_ENTRY(MissingNoreturn /* missing-noreturn */, 10835, /* DiagArray507 */ 1432, 0)
DIAG_ENTRY(anonymous_181 /* missing-prototype-for-cc */, 10852, /* DiagArray508 */ 1435, 0)
DIAG_ENTRY(anonymous_197 /* missing-prototypes */, 10877, /* DiagArray509 */ 1437, 0)
DIAG_ENTRY(anonymous_121 /* missing-selector-name */, 10896, /* DiagArray510 */ 1439, 0)
DIAG_ENTRY(anonymous_78 /* missing-sysroot */, 10918, /* DiagArray511 */ 1441, 0)
DIAG_ENTRY(anonymous_199 /* missing-variable-declarations */, 10934, /* DiagArray512 */ 1443, 0)
DIAG_ENTRY(MisspelledAssumption /* misspelled-assumption */, 10964, /* DiagArray513 */ 1445, 0)
DIAG_ENTRY(ModuleBuild /* module-build */, 10986, /* DiagArray514 */ 1447, 0)
DIAG_ENTRY(ModuleConflict /* module-conflict */, 10999, /* DiagArray515 */ 1452, 0)
DIAG_ENTRY(anonymous_88 /* module-file-config-mismatch */, 11015, /* DiagArray516 */ 1455, 0)
DIAG_ENTRY(ModuleFileExtension /* module-file-extension */, 11043, /* DiagArray517 */ 1457, 0)
DIAG_ENTRY(ModuleImport /* module-import */, 11065, /* DiagArray518 */ 1459, 0)
DIAG_ENTRY(anonymous_258 /* module-import-in-extern-c */, 11079, /* DiagArray519 */ 1461, 0)
DIAG_ENTRY(ModuleLock /* module-lock */, 11105, /* DiagArray520 */ 1463, 0)
DIAG_ENTRY(anonymous_261 /* modules-ambiguous-internal-linkage */, 11117, /* DiagArray521 */ 1465, 0)
DIAG_ENTRY(anonymous_259 /* modules-import-nested-redundant */, 11152, /* DiagArray522 */ 1467, 0)
DIAG_ENTRY(Most /* most */, 11184, 0, /* DiagSubGroup523 */ 391)
DIAG_ENTRY(Move /* move */, 11189, 0, /* DiagSubGroup524 */ 428)
DIAG_ENTRY(anonymous_66 /* msvc-include */, 11194, 0, /* DiagSubGroup525 */ 433)
DIAG_ENTRY(anonymous_82 /* msvc-not-found */, 11207, /* DiagArray526 */ 1469, 0)
DIAG_ENTRY(MultiChar /* multichar */, 11222, /* DiagArray527 */ 1471, 0)
DIAG_ENTRY(anonymous_248 /* multiple-move-vbase */, 11232, /* DiagArray528 */ 1473, 0)
DIAG_ENTRY(anonymous_17 /* narrowing */, 11252, 0, /* DiagSubGroup529 */ 435)
DIAG_ENTRY(anonymous_245 /* nested-anon-types */, 11262, /* DiagArray530 */ 1475, 0)
DIAG_ENTRY(anonymous_28 /* nested-externs */, 11280, 0, 0)
DIAG_ENTRY(OperatorNewReturnsNull /* new-returns-null */, 11295, /* DiagArray532 */ 1477, 0)
DIAG_ENTRY(NewlineEOF /* newline-eof */, 11312, /* DiagArray533 */ 1479, 0)
DIAG_ENTRY(NoDeref /* noderef */, 11324, /* DiagArray534 */ 1482, 0)
DIAG_ENTRY(NoexceptType /* noexcept-type */, 11332, 0, /* DiagSubGroup535 */ 437)
DIAG_ENTRY(anonymous_144 /* non-c-typedef-for-linkage */, 11346, /* DiagArray536 */ 1486, 0)
DIAG_ENTRY(NonGCC /* non-gcc */, 11372, 0, /* DiagSubGroup537 */ 439)
DIAG_ENTRY(NonLiteralNullConversion /* non-literal-null-conversion */, 11380, /* DiagArray538 */ 1488, 0)
DIAG_ENTRY(NonModularIncludeInFrameworkModule /* non-modular-include-in-framework-module */, 11408, /* DiagArray539 */ 1490, 0)
DIAG_ENTRY(NonModularIncludeInModule /* non-modular-include-in-module */, 11448, /* DiagArray540 */ 1492, /* DiagSubGroup540 */ 443)
DIAG_ENTRY(NonPODVarargs /* non-pod-varargs */, 11478, /* DiagArray541 */ 1494, 0)
DIAG_ENTRY(anonymous_172 /* non-power-of-two-alignment */, 11494, /* DiagArray542 */ 1499, 0)
DIAG_ENTRY(NonVirtualDtor /* non-virtual-dtor */, 11521, /* DiagArray543 */ 1501, 0)
DIAG_ENTRY(NonNull /* nonnull */, 11538, /* DiagArray544 */ 1503, 0)
DIAG_ENTRY(anonymous_30 /* nonportable-cfstrings */, 11546, 0, 0)
DIAG_ENTRY(anonymous_100 /* nonportable-include-path */, 11568, /* DiagArray546 */ 1506, 0)
DIAG_ENTRY(anonymous_101 /* nonportable-system-include-path */, 11593, /* DiagArray547 */ 1508, 0)
DIAG_ENTRY(anonymous_254 /* nonportable-vector-initialization */, 11625, /* DiagArray548 */ 1510, 0)
DIAG_ENTRY(NonTrivialMemaccess /* nontrivial-memaccess */, 11659, /* DiagArray549 */ 1512, 0)
DIAG_ENTRY(NSConsumedMismatch /* nsconsumed-mismatch */, 11680, /* DiagArray550 */ 1514, 0)
DIAG_ENTRY(NSReturnsMismatch /* nsreturns-mismatch */, 11700, /* DiagArray551 */ 1516, 0)
DIAG_ENTRY(NullArithmetic /* null-arithmetic */, 11719, /* DiagArray552 */ 1518, 0)
DIAG_ENTRY(NullCharacter /* null-character */, 11735, /* DiagArray553 */ 1521, 0)
DIAG_ENTRY(NullConversion /* null-conversion */, 11750, /* DiagArray554 */ 1524, 0)
DIAG_ENTRY(NullDereference /* null-dereference */, 11766, /* DiagArray555 */ 1526, 0)
DIAG_ENTRY(NullPointerArithmetic /* null-pointer-arithmetic */, 11783, /* DiagArray556 */ 1529, 0)
DIAG_ENTRY(NullPointerSubtraction /* null-pointer-subtraction */, 11807, /* DiagArray557 */ 1532, 0)
DIAG_ENTRY(Nullability /* nullability */, 11832, /* DiagArray558 */ 1534, 0)
DIAG_ENTRY(NullabilityCompleteness /* nullability-completeness */, 11844, /* DiagArray559 */ 1540, /* DiagSubGroup559 */ 445)
DIAG_ENTRY(NullabilityCompletenessOnArrays /* nullability-completeness-on-arrays */, 11869, /* DiagArray560 */ 1542, 0)
DIAG_ENTRY(NullabilityDeclSpec /* nullability-declspec */, 11904, /* DiagArray561 */ 1544, 0)
DIAG_ENTRY(anonymous_116 /* nullability-extension */, 11925, /* DiagArray562 */ 1546, 0)
DIAG_ENTRY(NullabilityInferredOnNestedType /* nullability-inferred-on-nested-type */, 11947, /* DiagArray563 */ 1548, 0)
DIAG_ENTRY(NullableToNonNullConversion /* nullable-to-nonnull-conversion */, 11983, /* DiagArray564 */ 1550, 0)
DIAG_ENTRY(anonymous_153 /* objc-autosynthesis-property-ivar-name-match */, 12014, /* DiagArray565 */ 1552, 0)
DIAG_ENTRY(ObjCBoolConstantConversion /* objc-bool-constant-conversion */, 12058, /* DiagArray566 */ 1554, 0)
DIAG_ENTRY(ObjCBoxing /* objc-boxing */, 12088, /* DiagArray567 */ 1556, 0)
DIAG_ENTRY(anonymous_227 /* objc-circular-container */, 12100, /* DiagArray568 */ 1558, 0)
DIAG_ENTRY(ObjCCocoaAPI /* objc-cocoa-api */, 12124, 0, /* DiagSubGroup569 */ 447)
DIAG_ENTRY(ObjCDesignatedInit /* objc-designated-initializers */, 12139, /* DiagArray570 */ 1560, 0)
DIAG_ENTRY(anonymous_169 /* objc-dictionary-duplicate-keys */, 12168, /* DiagArray571 */ 1567, 0)
DIAG_ENTRY(ObjCFlexibleArray /* objc-flexible-array */, 12199, /* DiagArray572 */ 1569, 0)
DIAG_ENTRY(anonymous_205 /* objc-forward-class-redefinition */, 12219, /* DiagArray573 */ 1572, 0)
DIAG_ENTRY(anonymous_206 /* objc-interface-ivars */, 12251, /* DiagArray574 */ 1574, 0)
DIAG_ENTRY(ObjCLiteralComparison /* objc-literal-compare */, 12272, /* DiagArray575 */ 1576, /* DiagSubGroup575 */ 449)
DIAG_ENTRY(ObjCLiteralConversion /* objc-literal-conversion */, 12293, /* DiagArray576 */ 1578, 0)
DIAG_ENTRY(anonymous_108 /* objc-macro-redefinition */, 12317, /* DiagArray577 */ 1581, 0)
DIAG_ENTRY(anonymous_158 /* objc-messaging-id */, 12341, /* DiagArray578 */ 1583, 0)
DIAG_ENTRY(MethodAccess /* objc-method-access */, 12359, /* DiagArray579 */ 1585, 0)
DIAG_ENTRY(anonymous_154 /* objc-missing-property-synthesis */, 12378, /* DiagArray580 */ 1592, 0)
DIAG_ENTRY(ObjCMissingSuperCalls /* objc-missing-super-calls */, 12410, /* DiagArray581 */ 1594, 0)
DIAG_ENTRY(ObjCMultipleMethodNames /* objc-multiple-method-names */, 12435, /* DiagArray582 */ 1596, 0)
DIAG_ENTRY(ObjCRetainBlockProperty /* objc-noncopy-retain-block-property */, 12462, /* DiagArray583 */ 1598, 0)
DIAG_ENTRY(ObjCNonUnifiedException /* objc-nonunified-exceptions */, 12497, /* DiagArray584 */ 1600, 0)
DIAG_ENTRY(ObjCPropertyAssignOnObjectType /* objc-property-assign-on-object-type */, 12524, /* DiagArray585 */ 1602, 0)
DIAG_ENTRY(ObjCPropertyImpl /* objc-property-implementation */, 12560, /* DiagArray586 */ 1604, 0)
DIAG_ENTRY(anonymous_149 /* objc-property-implicit-mismatch */, 12589, /* DiagArray587 */ 1609, 0)
DIAG_ENTRY(anonymous_151 /* objc-property-matches-cocoa-ownership-rule */, 12621, /* DiagArray588 */ 1611, 0)
DIAG_ENTRY(ObjCPropertyNoAttribute /* objc-property-no-attribute */, 12664, /* DiagArray589 */ 1613, 0)
DIAG_ENTRY(ObjCNoPropertyAutoSynthesis /* objc-property-synthesis */, 12691, /* DiagArray590 */ 1616, 0)
DIAG_ENTRY(ObjCProtocolMethodImpl /* objc-protocol-method-implementation */, 12715, /* DiagArray591 */ 1620, 0)
DIAG_ENTRY(anonymous_152 /* objc-protocol-property-synthesis */, 12751, /* DiagArray592 */ 1622, 0)
DIAG_ENTRY(ObjCProtocolQualifiers /* objc-protocol-qualifiers */, 12784, /* DiagArray593 */ 1624, 0)
DIAG_ENTRY(ObjCReadonlyPropertyHasSetter /* objc-readonly-with-setter-property */, 12809, /* DiagArray594 */ 1626, 0)
DIAG_ENTRY(ObjCRedundantAPIUse /* objc-redundant-api-use */, 12844, 0, /* DiagSubGroup595 */ 451)
DIAG_ENTRY(ObjCRedundantLiteralUse /* objc-redundant-literal-use */, 12867, /* DiagArray596 */ 1628, 0)
DIAG_ENTRY(ObjCRootClass /* objc-root-class */, 12894, /* DiagArray597 */ 1630, 0)
DIAG_ENTRY(ObjCSignedCharBool /* objc-signed-char-bool */, 12910, 0, /* DiagSubGroup598 */ 453)
DIAG_ENTRY(ObjCSignedCharBoolImplicitFloatConversion /* objc-signed-char-bool-implicit-float-conversion */, 12932, /* DiagArray599 */ 1632, 0)
DIAG_ENTRY(ObjCSignedCharBoolImplicitIntConversion /* objc-signed-char-bool-implicit-int-conversion */, 12980, /* DiagArray600 */ 1634, 0)
DIAG_ENTRY(ObjCStringComparison /* objc-string-compare */, 13026, /* DiagArray601 */ 1636, 0)
DIAG_ENTRY(ObjCStringConcatenation /* objc-string-concatenation */, 13046, /* DiagArray602 */ 1638, 0)
DIAG_ENTRY(anonymous_228 /* objc-unsafe-perform-selector */, 13072, /* DiagArray603 */ 1640, 0)
DIAG_ENTRY(ODR /* odr */, 13101, /* DiagArray604 */ 1642, 0)
DIAG_ENTRY(OldStyleCast /* old-style-cast */, 13105, /* DiagArray605 */ 1661, 0)
DIAG_ENTRY(anonymous_32 /* old-style-definition */, 13120, 0, 0)
DIAG_ENTRY(OpenCLUnsupportedRGBA /* opencl-unsupported-rgba */, 13141, /* DiagArray607 */ 1663, 0)
DIAG_ENTRY(OpenMP /* openmp */, 13165, 0, /* DiagSubGroup608 */ 458)
DIAG_ENTRY(OpenMP51Ext /* openmp-51-extensions */, 13172, /* DiagArray609 */ 1665, 0)
DIAG_ENTRY(OpenMPClauses /* openmp-clauses */, 13193, /* DiagArray610 */ 1667, 0)
DIAG_ENTRY(OpenMPLoopForm /* openmp-loop-form */, 13208, /* DiagArray611 */ 1686, 0)
DIAG_ENTRY(OpenMPMapping /* openmp-mapping */, 13225, /* DiagArray612 */ 1689, 0)
DIAG_ENTRY(OpenMPTarget /* openmp-target */, 13240, /* DiagArray613 */ 1691, /* DiagSubGroup613 */ 465)
DIAG_ENTRY(OptionIgnored /* option-ignored */, 13254, /* DiagArray614 */ 1695, 0)
DIAG_ENTRY(OrderedCompareFunctionPointers /* ordered-compare-function-pointers */, 13269, /* DiagArray615 */ 1707, 0)
DIAG_ENTRY(OutOfLineDeclaration /* out-of-line-declaration */, 13303, /* DiagArray616 */ 1710, 0)
DIAG_ENTRY(anonymous_136 /* out-of-scope-function */, 13327, /* DiagArray617 */ 1712, 0)
DIAG_ENTRY(OveralignedType /* over-aligned */, 13349, /* DiagArray618 */ 1714, 0)
DIAG_ENTRY(anonymous_33 /* overflow */, 13362, 0, 0)
DIAG_ENTRY(OverlengthStrings /* overlength-strings */, 13371, /* DiagArray620 */ 1716, 0)
DIAG_ENTRY(OverloadedShiftOpParentheses /* overloaded-shift-op-parentheses */, 13390, /* DiagArray621 */ 1718, 0)
DIAG_ENTRY(OverloadedVirtual /* overloaded-virtual */, 13422, /* DiagArray622 */ 1720, 0)
DIAG_ENTRY(anonymous_29 /* override-init */, 13441, 0, /* DiagSubGroup623 */ 467)
DIAG_ENTRY(anonymous_85 /* override-module */, 13455, /* DiagArray624 */ 1722, 0)
DIAG_ENTRY(OverridingMethodMismatch /* overriding-method-mismatch */, 13471, /* DiagArray625 */ 1724, 0)
DIAG_ENTRY(anonymous_77 /* overriding-t-option */, 13498, /* DiagArray626 */ 1732, 0)
DIAG_ENTRY(Packed /* packed */, 13518, /* DiagArray627 */ 1734, 0)
DIAG_ENTRY(Padded /* padded */, 13525, /* DiagArray628 */ 1736, 0)
DIAG_ENTRY(Parentheses /* parentheses */, 13532, /* DiagArray629 */ 1740, /* DiagSubGroup629 */ 469)
DIAG_ENTRY(ParenthesesOnEquality /* parentheses-equality */, 13544, /* DiagArray630 */ 1744, 0)
DIAG_ENTRY(anonymous_5 /* partial-availability */, 13565, 0, /* DiagSubGroup631 */ 478)
DIAG_ENTRY(BackendOptimizationRemark /* pass */, 13586, /* DiagArray632 */ 1746, 0)
DIAG_ENTRY(BackendOptimizationRemarkAnalysis /* pass-analysis */, 13591, /* DiagArray633 */ 1748, 0)
DIAG_ENTRY(BackendOptimizationFailure /* pass-failed */, 13605, /* DiagArray634 */ 1752, 0)
DIAG_ENTRY(BackendOptimizationRemarkMissed /* pass-missed */, 13617, /* DiagArray635 */ 1754, 0)
DIAG_ENTRY(anonymous_264 /* pch-date-time */, 13629, /* DiagArray636 */ 1756, 0)
DIAG_ENTRY(Pedantic /* pedantic */, 13643, /* DiagArray637 */ 1758, /* DiagSubGroup637 */ 480)
DIAG_ENTRY(OpenCLCoreFeaturesDiagGroup /* pedantic-core-features */, 13652, /* DiagArray638 */ 1834, 0)
DIAG_ENTRY(PedanticMacros /* pedantic-macros */, 13675, 0, /* DiagSubGroup639 */ 536)
DIAG_ENTRY(PessimizingMove /* pessimizing-move */, 13691, /* DiagArray640 */ 1837, 0)
DIAG_ENTRY(PointerArith /* pointer-arith */, 13708, /* DiagArray641 */ 1840, 0)
DIAG_ENTRY(PointerBoolConversion /* pointer-bool-conversion */, 13722, /* DiagArray642 */ 1847, 0)
DIAG_ENTRY(anonymous_184 /* pointer-compare */, 13746, /* DiagArray643 */ 1850, 0)
DIAG_ENTRY(anonymous_226 /* pointer-integer-compare */, 13762, /* DiagArray644 */ 1852, 0)
DIAG_ENTRY(anonymous_235 /* pointer-sign */, 13786, /* DiagArray645 */ 1854, 0)
DIAG_ENTRY(PointerToEnumCast /* pointer-to-enum-cast */, 13799, /* DiagArray646 */ 1856, /* DiagSubGroup646 */ 542)
DIAG_ENTRY(PointerToIntCast /* pointer-to-int-cast */, 13820, /* DiagArray647 */ 1858, /* DiagSubGroup647 */ 544)
DIAG_ENTRY(anonymous_240 /* pointer-type-mismatch */, 13840, /* DiagArray648 */ 1860, 0)
DIAG_ENTRY(anonymous_75 /* poison-system-directories */, 13862, /* DiagArray649 */ 1862, 0)
DIAG_ENTRY(ObjCPotentiallyDirectSelector /* potentially-direct-selector */, 13888, /* DiagArray650 */ 1864, 0)
DIAG_ENTRY(PotentiallyEvaluatedExpression /* potentially-evaluated-expression */, 13916, /* DiagArray651 */ 1866, 0)
DIAG_ENTRY(PragmaClangAttribute /* pragma-clang-attribute */, 13949, /* DiagArray652 */ 1868, 0)
DIAG_ENTRY(anonymous_102 /* pragma-once-outside-header */, 13972, /* DiagArray653 */ 1870, 0)
DIAG_ENTRY(PragmaPack /* pragma-pack */, 13999, /* DiagArray654 */ 1872, /* DiagSubGroup654 */ 547)
DIAG_ENTRY(PragmaPackSuspiciousInclude /* pragma-pack-suspicious-include */, 14011, /* DiagArray655 */ 1875, 0)
DIAG_ENTRY(anonymous_103 /* pragma-system-header-outside-header */, 14042, /* DiagArray656 */ 1877, 0)
DIAG_ENTRY(Pragmas /* pragmas */, 14078, /* DiagArray657 */ 1879, /* DiagSubGroup657 */ 549)
DIAG_ENTRY(CXXPre14Compat /* pre-c++14-compat */, 14086, /* DiagArray658 */ 1881, 0)
DIAG_ENTRY(CXXPre14CompatPedantic /* pre-c++14-compat-pedantic */, 14103, 0, /* DiagSubGroup659 */ 554)
DIAG_ENTRY(CXXPre17Compat /* pre-c++17-compat */, 14129, /* DiagArray660 */ 1893, 0)
DIAG_ENTRY(CXXPre17CompatPedantic /* pre-c++17-compat-pedantic */, 14146, /* DiagArray661 */ 1911, /* DiagSubGroup661 */ 557)
DIAG_ENTRY(CXXPre20Compat /* pre-c++20-compat */, 14172, /* DiagArray662 */ 1914, 0)
DIAG_ENTRY(CXXPre20CompatPedantic /* pre-c++20-compat-pedantic */, 14189, /* DiagArray663 */ 1941, /* DiagSubGroup663 */ 559)
DIAG_ENTRY(CXXPre2bCompat /* pre-c++2b-compat */, 14215, /* DiagArray664 */ 1944, 0)
DIAG_ENTRY(CXXPre2bCompatPedantic /* pre-c++2b-compat-pedantic */, 14232, 0, /* DiagSubGroup665 */ 561)
DIAG_ENTRY(CPre2xCompat /* pre-c2x-compat */, 14258, /* DiagArray666 */ 1950, 0)
DIAG_ENTRY(CPre2xCompatPedantic /* pre-c2x-compat-pedantic */, 14273, 0, /* DiagSubGroup667 */ 563)
DIAG_ENTRY(OpenMPPre51Compat /* pre-openmp-51-compat */, 14297, /* DiagArray668 */ 1954, 0)
DIAG_ENTRY(anonymous_133 /* predefined-identifier-outside-function */, 14318, /* DiagArray669 */ 1956, 0)
DIAG_ENTRY(PrivateExtern /* private-extern */, 14357, /* DiagArray670 */ 1958, 0)
DIAG_ENTRY(anonymous_113 /* private-header */, 14372, /* DiagArray671 */ 1960, 0)
DIAG_ENTRY(PrivateModule /* private-module */, 14387, /* DiagArray672 */ 1962, 0)
DIAG_ENTRY(ProfileInstrMissing /* profile-instr-missing */, 14402, /* DiagArray673 */ 1967, 0)
DIAG_ENTRY(ProfileInstrOutOfDate /* profile-instr-out-of-date */, 14424, /* DiagArray674 */ 1969, 0)
DIAG_ENTRY(ProfileInstrUnprofiled /* profile-instr-unprofiled */, 14450, /* DiagArray675 */ 1971, 0)
DIAG_ENTRY(PropertyAccessDotSyntax /* property-access-dot-syntax */, 14475, /* DiagArray676 */ 1973, 0)
DIAG_ENTRY(PropertyAttr /* property-attribute-mismatch */, 14502, /* DiagArray677 */ 1975, 0)
DIAG_ENTRY(Protocol /* protocol */, 14530, /* DiagArray678 */ 1980, 0)
DIAG_ENTRY(anonymous_147 /* protocol-property-synthesis-ambiguity */, 14539, /* DiagArray679 */ 1982, 0)
DIAG_ENTRY(anonymous_89 /* psabi */, 14577, /* DiagArray680 */ 1984, 0)
DIAG_ENTRY(anonymous_211 /* qualified-void-return-type */, 14583, /* DiagArray681 */ 1986, 0)
DIAG_ENTRY(FrameworkHdrQuotedInclude /* quoted-include-in-framework-header */, 14610, /* DiagArray682 */ 1988, 0)
DIAG_ENTRY(RangeLoopAnalysis /* range-loop-analysis */, 14645, 0, /* DiagSubGroup683 */ 565)
DIAG_ENTRY(RangeLoopBindReference /* range-loop-bind-reference */, 14665, /* DiagArray684 */ 1990, 0)
DIAG_ENTRY(RangeLoopConstruct /* range-loop-construct */, 14691, /* DiagArray685 */ 1992, 0)
DIAG_ENTRY(anonymous_157 /* readonly-iboutlet-property */, 14712, /* DiagArray686 */ 1995, 0)
DIAG_ENTRY(ObjCReceiver /* receiver-expr */, 14739, /* DiagArray687 */ 1997, 0)
DIAG_ENTRY(ForwardClassReceiver /* receiver-forward-class */, 14753, /* DiagArray688 */ 1999, 0)
DIAG_ENTRY(RedeclaredClassMember /* redeclared-class-member */, 14776, /* DiagArray689 */ 2002, 0)
DIAG_ENTRY(anonymous_159 /* redundant-consteval-if */, 14800, /* DiagArray690 */ 2004, 0)
DIAG_ENTRY(anonymous_34 /* redundant-decls */, 14823, 0, 0)
DIAG_ENTRY(RedundantMove /* redundant-move */, 14839, /* DiagArray692 */ 2006, 0)
DIAG_ENTRY(anonymous_135 /* redundant-parens */, 14854, /* DiagArray693 */ 2008, 0)
DIAG_ENTRY(Register /* register */, 14871, /* DiagArray694 */ 2010, /* DiagSubGroup694 */ 568)
DIAG_ENTRY(ReinterpretBaseClass /* reinterpret-base-class */, 14880, /* DiagArray695 */ 2012, 0)
DIAG_ENTRY(RemarkBackendPlugin /* remark-backend-plugin */, 14903, /* DiagArray696 */ 2014, 0)
DIAG_ENTRY(Reorder /* reorder */, 14925, 0, /* DiagSubGroup697 */ 570)
DIAG_ENTRY(ReorderCtor /* reorder-ctor */, 14933, /* DiagArray698 */ 2016, 0)
DIAG_ENTRY(ReorderInitList /* reorder-init-list */, 14946, /* DiagArray699 */ 2019, 0)
DIAG_ENTRY(anonymous_190 /* requires-super-attribute */, 14964, /* DiagArray700 */ 2021, 0)
DIAG_ENTRY(ReservedIdAsMacroAlias /* reserved-id-macro */, 14989, 0, /* DiagSubGroup701 */ 573)
DIAG_ENTRY(ReservedIdentifier /* reserved-identifier */, 15007, /* DiagArray702 */ 2023, /* DiagSubGroup702 */ 575)
DIAG_ENTRY(ReservedIdAsMacro /* reserved-macro-identifier */, 15027, /* DiagArray703 */ 2025, 0)
DIAG_ENTRY(ReservedUserDefinedLiteral /* reserved-user-defined-literal */, 15053, /* DiagArray704 */ 2027, /* DiagSubGroup704 */ 577)
DIAG_ENTRY(RestrictExpansionMacro /* restrict-expansion */, 15083, /* DiagArray705 */ 2030, 0)
DIAG_ENTRY(anonymous_204 /* retained-language-linkage */, 15102, /* DiagArray706 */ 2032, 0)
DIAG_ENTRY(ReturnStackAddress /* return-stack-address */, 15128, /* DiagArray707 */ 2034, 0)
DIAG_ENTRY(ReturnStdMove /* return-std-move */, 15149, 0, 0)
DIAG_ENTRY(ReturnType /* return-type */, 15165, /* DiagArray709 */ 2038, /* DiagSubGroup709 */ 579)
DIAG_ENTRY(ReturnTypeCLinkage /* return-type-c-linkage */, 15177, /* DiagArray710 */ 2048, 0)
DIAG_ENTRY(anonymous_192 /* rewrite-not-bool */, 15199, /* DiagArray711 */ 2051, 0)
DIAG_ENTRY(RoundTripCC1Args /* round-trip-cc1-args */, 15216, /* DiagArray712 */ 2053, 0)
DIAG_ENTRY(RTTI /* rtti */, 15236, /* DiagArray713 */ 2055, 0)
DIAG_ENTRY(SanitizeAddressRemarks /* sanitize-address */, 15241, /* DiagArray714 */ 2058, 0)
DIAG_ENTRY(UsedSearchPath /* search-path-usage */, 15258, /* DiagArray715 */ 2061, 0)
DIAG_ENTRY(Section /* section */, 15276, /* DiagArray716 */ 2063, 0)
DIAG_ENTRY(Selector /* selector */, 15284, /* DiagArray717 */ 2067, /* DiagSubGroup717 */ 581)
DIAG_ENTRY(SelectorTypeMismatch /* selector-type-mismatch */, 15293, /* DiagArray718 */ 2069, 0)
DIAG_ENTRY(SelfAssignment /* self-assign */, 15316, /* DiagArray719 */ 2071, /* DiagSubGroup719 */ 583)
DIAG_ENTRY(SelfAssignmentField /* self-assign-field */, 15328, /* DiagArray720 */ 2073, 0)
DIAG_ENTRY(SelfAssignmentOverloaded /* self-assign-overloaded */, 15346, /* DiagArray721 */ 2075, 0)
DIAG_ENTRY(SelfMove /* self-move */, 15369, /* DiagArray722 */ 2077, 0)
DIAG_ENTRY(SemiBeforeMethodBody /* semicolon-before-method-body */, 15379, /* DiagArray723 */ 2079, 0)
DIAG_ENTRY(Sentinel /* sentinel */, 15408, /* DiagArray724 */ 2081, 0)
DIAG_ENTRY(anonymous_38 /* sequence-point */, 15417, 0, /* DiagSubGroup725 */ 586)
DIAG_ENTRY(SerializedDiagnostics /* serialized-diagnostics */, 15432, /* DiagArray726 */ 2084, 0)
DIAG_ENTRY(Shadow /* shadow */, 15455, /* DiagArray727 */ 2088, /* DiagSubGroup727 */ 588)
DIAG_ENTRY(ShadowAll /* shadow-all */, 15462, 0, /* DiagSubGroup728 */ 591)
DIAG_ENTRY(ShadowField /* shadow-field */, 15473, /* DiagArray729 */ 2090, 0)
DIAG_ENTRY(ShadowFieldInConstructor /* shadow-field-in-constructor */, 15486, /* DiagArray730 */ 2092, /* DiagSubGroup730 */ 596)
DIAG_ENTRY(ShadowFieldInConstructorModified /* shadow-field-in-constructor-modified */, 15514, /* DiagArray731 */ 2094, 0)
DIAG_ENTRY(ShadowIvar /* shadow-ivar */, 15551, /* DiagArray732 */ 2096, 0)
DIAG_ENTRY(ShadowUncapturedLocal /* shadow-uncaptured-local */, 15563, /* DiagArray733 */ 2098, 0)
DIAG_ENTRY(anonymous_215 /* shift-count-negative */, 15587, /* DiagArray734 */ 2100, 0)
DIAG_ENTRY(anonymous_216 /* shift-count-overflow */, 15608, /* DiagArray735 */ 2102, 0)
DIAG_ENTRY(anonymous_214 /* shift-negative-value */, 15629, /* DiagArray736 */ 2104, 0)
DIAG_ENTRY(ShiftOpParentheses /* shift-op-parentheses */, 15650, /* DiagArray737 */ 2106, 0)
DIAG_ENTRY(anonymous_217 /* shift-overflow */, 15671, /* DiagArray738 */ 2108, 0)
DIAG_ENTRY(anonymous_218 /* shift-sign-overflow */, 15686, /* DiagArray739 */ 2110, 0)
DIAG_ENTRY(Shorten64To32 /* shorten-64-to-32 */, 15706, /* DiagArray740 */ 2112, 0)
DIAG_ENTRY(SignCompare /* sign-compare */, 15723, /* DiagArray741 */ 2114, 0)
DIAG_ENTRY(SignConversion /* sign-conversion */, 15736, /* DiagArray742 */ 2116, 0)
DIAG_ENTRY(anonymous_35 /* sign-promo */, 15752, 0, 0)
DIAG_ENTRY(SignedEnumBitfield /* signed-enum-bitfield */, 15763, /* DiagArray744 */ 2120, 0)
DIAG_ENTRY(anonymous_256 /* signed-unsigned-wchar */, 15784, /* DiagArray745 */ 2122, 0)
DIAG_ENTRY(SizeofArrayArgument /* sizeof-array-argument */, 15806, /* DiagArray746 */ 2124, 0)
DIAG_ENTRY(SizeofArrayDecay /* sizeof-array-decay */, 15828, /* DiagArray747 */ 2126, 0)
DIAG_ENTRY(anonymous_186 /* sizeof-array-div */, 15847, /* DiagArray748 */ 2128, 0)
DIAG_ENTRY(anonymous_185 /* sizeof-pointer-div */, 15864, /* DiagArray749 */ 2130, 0)
DIAG_ENTRY(SizeofPointerMemaccess /* sizeof-pointer-memaccess */, 15883, /* DiagArray750 */ 2132, 0)
DIAG_ENTRY(anonymous_81 /* slash-u-filename */, 15908, /* DiagArray751 */ 2135, 0)
DIAG_ENTRY(anonymous_74 /* slh-asm-goto */, 15925, /* DiagArray752 */ 2137, 0)
DIAG_ENTRY(UninitializedSometimes /* sometimes-uninitialized */, 15938, /* DiagArray753 */ 2139, 0)
DIAG_ENTRY(BackendSourceMgr /* source-mgr */, 15962, /* DiagArray754 */ 2141, 0)
DIAG_ENTRY(SourceUsesOpenMP /* source-uses-openmp */, 15973, /* DiagArray755 */ 2143, 0)
DIAG_ENTRY(SpirCompat /* spir-compat */, 15992, /* DiagArray756 */ 2151, 0)
DIAG_ENTRY(anonymous_68 /* spirv-compat */, 16004, 0, /* DiagSubGroup757 */ 598)
DIAG_ENTRY(anonymous_72 /* stack-exhausted */, 16017, /* DiagArray758 */ 2153, 0)
DIAG_ENTRY(anonymous_73 /* stack-protector */, 16033, /* DiagArray759 */ 2155, 0)
DIAG_ENTRY(StaticFloatInit /* static-float-init */, 16049, /* DiagArray760 */ 2157, /* DiagSubGroup760 */ 600)
DIAG_ENTRY(StaticInInline /* static-in-inline */, 16067, /* DiagArray761 */ 2159, 0)
DIAG_ENTRY(anonymous_128 /* static-inline-explicit-instantiation */, 16084, /* DiagArray762 */ 2162, 0)
DIAG_ENTRY(StaticLocalInInline /* static-local-in-inline */, 16121, /* DiagArray763 */ 2164, 0)
DIAG_ENTRY(UninitializedStaticSelfInit /* static-self-init */, 16144, /* DiagArray764 */ 2166, 0)
DIAG_ENTRY(anonymous_84 /* stdlibcxx-not-found */, 16161, /* DiagArray765 */ 2168, 0)
DIAG_ENTRY(anonymous_42 /* strict-aliasing */, 16181, 0, 0)
DIAG_ENTRY(anonymous_39 /* strict-aliasing=0 */, 16197, 0, 0)
DIAG_ENTRY(anonymous_40 /* strict-aliasing=1 */, 16215, 0, 0)
DIAG_ENTRY(anonymous_41 /* strict-aliasing=2 */, 16233, 0, 0)
DIAG_ENTRY(anonymous_49 /* strict-overflow */, 16251, 0, 0)
DIAG_ENTRY(anonymous_43 /* strict-overflow=0 */, 16267, 0, 0)
DIAG_ENTRY(anonymous_44 /* strict-overflow=1 */, 16285, 0, 0)
DIAG_ENTRY(anonymous_45 /* strict-overflow=2 */, 16303, 0, 0)
DIAG_ENTRY(anonymous_46 /* strict-overflow=3 */, 16321, 0, 0)
DIAG_ENTRY(anonymous_47 /* strict-overflow=4 */, 16339, 0, 0)
DIAG_ENTRY(anonymous_48 /* strict-overflow=5 */, 16357, 0, 0)
DIAG_ENTRY(ObjCStrictPotentiallyDirectSelector /* strict-potentially-direct-selector */, 16375, /* DiagArray777 */ 2170, /* DiagSubGroup777 */ 602)
DIAG_ENTRY(anonymous_198 /* strict-prototypes */, 16410, /* DiagArray778 */ 2172, 0)
DIAG_ENTRY(StrictSelector /* strict-selector-match */, 16428, /* DiagArray779 */ 2174, 0)
DIAG_ENTRY(StringCompare /* string-compare */, 16450, /* DiagArray780 */ 2176, 0)
DIAG_ENTRY(StringConcatation /* string-concatenation */, 16465, /* DiagArray781 */ 2178, 0)
DIAG_ENTRY(StringConversion /* string-conversion */, 16486, /* DiagArray782 */ 2180, 0)
DIAG_ENTRY(StringPlusChar /* string-plus-char */, 16504, /* DiagArray783 */ 2182, 0)
DIAG_ENTRY(StringPlusInt /* string-plus-int */, 16521, /* DiagArray784 */ 2184, 0)
DIAG_ENTRY(anonymous_140 /* strlcpy-strlcat-size */, 16537, /* DiagArray785 */ 2186, 0)
DIAG_ENTRY(StrncatSize /* strncat-size */, 16558, /* DiagArray786 */ 2188, 0)
DIAG_ENTRY(CXX11WarnSuggestOverrideDestructor /* suggest-destructor-override */, 16571, /* DiagArray787 */ 2192, 0)
DIAG_ENTRY(CXX11WarnSuggestOverride /* suggest-override */, 16599, /* DiagArray788 */ 2194, 0)
DIAG_ENTRY(SuperSubClassMismatch /* super-class-method-mismatch */, 16616, /* DiagArray789 */ 2196, 0)
DIAG_ENTRY(SuspiciousBzero /* suspicious-bzero */, 16644, /* DiagArray790 */ 2198, 0)
DIAG_ENTRY(SuspiciousMemaccess /* suspicious-memaccess */, 16661, 0, /* DiagSubGroup791 */ 604)
DIAG_ENTRY(SwiftNameAttribute /* swift-name-attribute */, 16682, /* DiagArray792 */ 2200, 0)
DIAG_ENTRY(Switch /* switch */, 16703, /* DiagArray793 */ 2214, 0)
DIAG_ENTRY(SwitchBool /* switch-bool */, 16710, /* DiagArray794 */ 2218, 0)
DIAG_ENTRY(anonymous_36 /* switch-default */, 16722, 0, 0)
DIAG_ENTRY(SwitchEnum /* switch-enum */, 16737, /* DiagArray796 */ 2220, 0)
DIAG_ENTRY(anonymous_255 /* sync-fetch-and-nand-semantics-changed */, 16749, /* DiagArray797 */ 2222, 0)
DIAG_ENTRY(anonymous_37 /* synth */, 16787, 0, 0)
DIAG_ENTRY(TargetClonesMixedSpecifiers /* target-clones-mixed-specifiers */, 16793, /* DiagArray799 */ 2224, 0)
DIAG_ENTRY(TautologicalBitwiseCompare /* tautological-bitwise-compare */, 16824, /* DiagArray800 */ 2226, 0)
DIAG_ENTRY(TautologicalCompare /* tautological-compare */, 16853, /* DiagArray801 */ 2229, /* DiagSubGroup801 */ 610)
DIAG_ENTRY(TautologicalConstantCompare /* tautological-constant-compare */, 16874, /* DiagArray802 */ 2232, /* DiagSubGroup802 */ 617)
DIAG_ENTRY(TautologicalInRangeCompare /* tautological-constant-in-range-compare */, 16904, 0, /* DiagSubGroup803 */ 619)
DIAG_ENTRY(TautologicalOutOfRangeCompare /* tautological-constant-out-of-range-compare */, 16943, /* DiagArray804 */ 2236, 0)
DIAG_ENTRY(TautologicalObjCBoolCompare /* tautological-objc-bool-compare */, 16986, /* DiagArray805 */ 2238, 0)
DIAG_ENTRY(TautologicalOverlapCompare /* tautological-overlap-compare */, 17017, /* DiagArray806 */ 2240, 0)
DIAG_ENTRY(TautologicalPointerCompare /* tautological-pointer-compare */, 17046, /* DiagArray807 */ 2242, 0)
DIAG_ENTRY(TautologicalTypeLimitCompare /* tautological-type-limit-compare */, 17075, /* DiagArray808 */ 2245, 0)
DIAG_ENTRY(TautologicalUndefinedCompare /* tautological-undefined-compare */, 17107, /* DiagArray809 */ 2247, 0)
DIAG_ENTRY(TautologicalUnsignedCharZeroCompare /* tautological-unsigned-char-zero-compare */, 17138, /* DiagArray810 */ 2250, 0)
DIAG_ENTRY(TautologicalUnsignedEnumZeroCompare /* tautological-unsigned-enum-zero-compare */, 17178, /* DiagArray811 */ 2252, 0)
DIAG_ENTRY(TautologicalUnsignedZeroCompare /* tautological-unsigned-zero-compare */, 17218, /* DiagArray812 */ 2254, 0)
DIAG_ENTRY(TautologicalValueRangeCompare /* tautological-value-range-compare */, 17253, /* DiagArray813 */ 2256, 0)
DIAG_ENTRY(anonymous_263 /* tcb-enforcement */, 17286, /* DiagArray814 */ 2258, 0)
DIAG_ENTRY(anonymous_221 /* tentative-definition-incomplete-type */, 17302, /* DiagArray815 */ 2260, 0)
DIAG_ENTRY(ThreadSafety /* thread-safety */, 17339, 0, /* DiagSubGroup816 */ 622)
DIAG_ENTRY(ThreadSafetyAnalysis /* thread-safety-analysis */, 17353, /* DiagArray817 */ 2262, 0)
DIAG_ENTRY(ThreadSafetyAttributes /* thread-safety-attributes */, 17376, /* DiagArray818 */ 2281, 0)
DIAG_ENTRY(ThreadSafetyBeta /* thread-safety-beta */, 17401, /* DiagArray819 */ 2288, 0)
DIAG_ENTRY(ThreadSafetyNegative /* thread-safety-negative */, 17420, /* DiagArray820 */ 2290, 0)
DIAG_ENTRY(ThreadSafetyPrecise /* thread-safety-precise */, 17443, /* DiagArray821 */ 2292, 0)
DIAG_ENTRY(ThreadSafetyReference /* thread-safety-reference */, 17465, /* DiagArray822 */ 2296, 0)
DIAG_ENTRY(ThreadSafetyVerbose /* thread-safety-verbose */, 17489, /* DiagArray823 */ 2299, 0)
DIAG_ENTRY(Trigraphs /* trigraphs */, 17511, /* DiagArray824 */ 2301, 0)
DIAG_ENTRY(TypeLimits /* type-limits */, 17521, 0, /* DiagSubGroup825 */ 627)
DIAG_ENTRY(TypeSafety /* type-safety */, 17533, /* DiagArray826 */ 2306, 0)
DIAG_ENTRY(anonymous_203 /* typedef-redefinition */, 17545, /* DiagArray827 */ 2310, 0)
DIAG_ENTRY(anonymous_196 /* typename-missing */, 17566, /* DiagArray828 */ 2312, 0)
DIAG_ENTRY(anonymous_86 /* unable-to-open-stats-file */, 17583, /* DiagArray829 */ 2314, 0)
DIAG_ENTRY(UnalignedAccess /* unaligned-access */, 17609, /* DiagArray830 */ 2316, 0)
DIAG_ENTRY(UnavailableDeclarations /* unavailable-declarations */, 17626, /* DiagArray831 */ 2318, 0)
DIAG_ENTRY(UndeclaredSelector /* undeclared-selector */, 17651, /* DiagArray832 */ 2320, 0)
DIAG_ENTRY(anonymous_106 /* undef */, 17671, /* DiagArray833 */ 2323, 0)
DIAG_ENTRY(anonymous_107 /* undef-prefix */, 17677, /* DiagArray834 */ 2325, 0)
DIAG_ENTRY(UndefinedBoolConversion /* undefined-bool-conversion */, 17690, /* DiagArray835 */ 2327, 0)
DIAG_ENTRY(UndefinedFuncTemplate /* undefined-func-template */, 17716, /* DiagArray836 */ 2330, 0)
DIAG_ENTRY(anonymous_202 /* undefined-inline */, 17740, /* DiagArray837 */ 2332, 0)
DIAG_ENTRY(anonymous_200 /* undefined-internal */, 17757, /* DiagArray838 */ 2334, 0)
DIAG_ENTRY(anonymous_201 /* undefined-internal-type */, 17776, /* DiagArray839 */ 2336, 0)
DIAG_ENTRY(UndefinedReinterpretCast /* undefined-reinterpret-cast */, 17800, /* DiagArray840 */ 2338, 0)
DIAG_ENTRY(UndefinedVarTemplate /* undefined-var-template */, 17827, /* DiagArray841 */ 2341, 0)
DIAG_ENTRY(UnderalignedExceptionObject /* underaligned-exception-object */, 17850, /* DiagArray842 */ 2343, 0)
DIAG_ENTRY(UnevaluatedExpression /* unevaluated-expression */, 17880, /* DiagArray843 */ 2345, /* DiagSubGroup843 */ 632)
DIAG_ENTRY(UnguardedAvailability /* unguarded-availability */, 17903, /* DiagArray844 */ 2347, /* DiagSubGroup844 */ 634)
DIAG_ENTRY(UnguardedAvailabilityNew /* unguarded-availability-new */, 17926, /* DiagArray845 */ 2349, 0)
DIAG_ENTRY(Unicode /* unicode */, 17953, /* DiagArray846 */ 2351, 0)
DIAG_ENTRY(anonymous_94 /* unicode-homoglyph */, 17961, /* DiagArray847 */ 2359, 0)
DIAG_ENTRY(anonymous_93 /* unicode-whitespace */, 17979, /* DiagArray848 */ 2361, 0)
DIAG_ENTRY(anonymous_95 /* unicode-zero-width */, 17998, /* DiagArray849 */ 2363, 0)
DIAG_ENTRY(Uninitialized /* uninitialized */, 18017, /* DiagArray850 */ 2365, /* DiagSubGroup850 */ 636)
DIAG_ENTRY(UninitializedConstReference /* uninitialized-const-reference */, 18031, /* DiagArray851 */ 2373, 0)
DIAG_ENTRY(UnknownArgument /* unknown-argument */, 18061, /* DiagArray852 */ 2375, 0)
DIAG_ENTRY(UnknownAssumption /* unknown-assumption */, 18078, /* DiagArray853 */ 2378, 0)
DIAG_ENTRY(UnknownAttributes /* unknown-attributes */, 18097, /* DiagArray854 */ 2380, 0)
DIAG_ENTRY(CudaUnknownVersion /* unknown-cuda-version */, 18116, /* DiagArray855 */ 2382, 0)
DIAG_ENTRY(anonymous_97 /* unknown-escape-sequence */, 18137, /* DiagArray856 */ 2385, 0)
DIAG_ENTRY(UnknownPragmas /* unknown-pragmas */, 18161, /* DiagArray857 */ 2387, 0)
DIAG_ENTRY(UnknownSanitizers /* unknown-sanitizers */, 18177, /* DiagArray858 */ 2408, 0)
DIAG_ENTRY(UnknownWarningOption /* unknown-warning-option */, 18196, /* DiagArray859 */ 2410, 0)
DIAG_ENTRY(UnnamedTypeTemplateArgs /* unnamed-type-template-args */, 18219, /* DiagArray860 */ 2414, /* DiagSubGroup860 */ 640)
DIAG_ENTRY(UnneededInternalDecl /* unneeded-internal-declaration */, 18246, /* DiagArray861 */ 2416, 0)
DIAG_ENTRY(UnneededMemberFunction /* unneeded-member-function */, 18276, /* DiagArray862 */ 2419, 0)
DIAG_ENTRY(UnreachableCode /* unreachable-code */, 18301, /* DiagArray863 */ 2421, /* DiagSubGroup863 */ 642)
DIAG_ENTRY(UnreachableCodeAggressive /* unreachable-code-aggressive */, 18318, 0, /* DiagSubGroup864 */ 645)
DIAG_ENTRY(UnreachableCodeBreak /* unreachable-code-break */, 18346, /* DiagArray865 */ 2423, 0)
DIAG_ENTRY(UnreachableCodeFallthrough /* unreachable-code-fallthrough */, 18369, /* DiagArray866 */ 2425, 0)
DIAG_ENTRY(UnreachableCodeLoopIncrement /* unreachable-code-loop-increment */, 18398, /* DiagArray867 */ 2427, 0)
DIAG_ENTRY(UnreachableCodeReturn /* unreachable-code-return */, 18430, /* DiagArray868 */ 2429, 0)
DIAG_ENTRY(Unsequenced /* unsequenced */, 18454, /* DiagArray869 */ 2431, 0)
DIAG_ENTRY(anonymous_76 /* unsupported-abi */, 18466, /* DiagArray870 */ 2434, 0)
DIAG_ENTRY(UnsupportedAbs /* unsupported-abs */, 18482, /* DiagArray871 */ 2436, 0)
DIAG_ENTRY(anonymous_182 /* unsupported-availability-guard */, 18498, /* DiagArray872 */ 2439, 0)
DIAG_ENTRY(UnsupportedCB /* unsupported-cb */, 18529, /* DiagArray873 */ 2441, 0)
DIAG_ENTRY(anonymous_178 /* unsupported-dll-base-class-template */, 18544, /* DiagArray874 */ 2443, 0)
DIAG_ENTRY(UnsupportedFPOpt /* unsupported-floating-point-opt */, 18580, /* DiagArray875 */ 2445, 0)
DIAG_ENTRY(UnsupportedFriend /* unsupported-friend */, 18611, /* DiagArray876 */ 2448, 0)
DIAG_ENTRY(UnsupportedGPOpt /* unsupported-gpopt */, 18630, /* DiagArray877 */ 2451, 0)
DIAG_ENTRY(UnsupportedNan /* unsupported-nan */, 18648, /* DiagArray878 */ 2453, 0)
DIAG_ENTRY(UnsupportedTargetOpt /* unsupported-target-opt */, 18664, /* DiagArray879 */ 2456, 0)
DIAG_ENTRY(anonymous_188 /* unsupported-visibility */, 18687, /* DiagArray880 */ 2459, 0)
DIAG_ENTRY(anonymous_194 /* unusable-partial-specialization */, 18710, /* DiagArray881 */ 2461, 0)
DIAG_ENTRY(Unused /* unused */, 18742, 0, /* DiagSubGroup882 */ 649)
DIAG_ENTRY(UnusedArgument /* unused-argument */, 18749, 0, 0)
DIAG_ENTRY(UnusedButSetParameter /* unused-but-set-parameter */, 18765, /* DiagArray884 */ 2463, 0)
DIAG_ENTRY(UnusedButSetVariable /* unused-but-set-variable */, 18790, /* DiagArray885 */ 2465, 0)
DIAG_ENTRY(UnusedCommandLineArgument /* unused-command-line-argument */, 18814, /* DiagArray886 */ 2467, 0)
DIAG_ENTRY(UnusedComparison /* unused-comparison */, 18843, /* DiagArray887 */ 2478, 0)
DIAG_ENTRY(UnusedConstVariable /* unused-const-variable */, 18861, /* DiagArray888 */ 2480, 0)
DIAG_ENTRY(UnusedExceptionParameter /* unused-exception-parameter */, 18883, /* DiagArray889 */ 2482, 0)
DIAG_ENTRY(UnusedFunction /* unused-function */, 18910, /* DiagArray890 */ 2484, /* DiagSubGroup890 */ 660)
DIAG_ENTRY(UnusedGetterReturnValue /* unused-getter-return-value */, 18926, /* DiagArray891 */ 2486, 0)
DIAG_ENTRY(UnusedLabel /* unused-label */, 18953, /* DiagArray892 */ 2488, 0)
DIAG_ENTRY(UnusedLambdaCapture /* unused-lambda-capture */, 18966, /* DiagArray893 */ 2490, 0)
DIAG_ENTRY(UnusedLocalTypedef /* unused-local-typedef */, 18988, /* DiagArray894 */ 2492, 0)
DIAG_ENTRY(anonymous_61 /* unused-local-typedefs */, 19009, 0, /* DiagSubGroup895 */ 662)
DIAG_ENTRY(anonymous_105 /* unused-macros */, 19031, /* DiagArray896 */ 2494, 0)
DIAG_ENTRY(UnusedMemberFunction /* unused-member-function */, 19045, /* DiagArray897 */ 2496, /* DiagSubGroup897 */ 664)
DIAG_ENTRY(UnusedParameter /* unused-parameter */, 19068, /* DiagArray898 */ 2498, 0)
DIAG_ENTRY(UnusedPrivateField /* unused-private-field */, 19085, /* DiagArray899 */ 2500, 0)
DIAG_ENTRY(UnusedPropertyIvar /* unused-property-ivar */, 19106, /* DiagArray900 */ 2502, 0)
DIAG_ENTRY(UnusedResult /* unused-result */, 19127, /* DiagArray901 */ 2504, 0)
DIAG_ENTRY(UnusedTemplate /* unused-template */, 19141, /* DiagArray902 */ 2507, /* DiagSubGroup902 */ 666)
DIAG_ENTRY(UnusedValue /* unused-value */, 19157, /* DiagArray903 */ 2509, /* DiagSubGroup903 */ 668)
DIAG_ENTRY(UnusedVariable /* unused-variable */, 19170, /* DiagArray904 */ 2517, /* DiagSubGroup904 */ 672)
DIAG_ENTRY(anonymous_242 /* unused-volatile-lvalue */, 19186, /* DiagArray905 */ 2519, 0)
DIAG_ENTRY(UsedButMarkedUnused /* used-but-marked-unused */, 19209, /* DiagArray906 */ 2521, 0)
DIAG_ENTRY(UserDefinedLiterals /* user-defined-literals */, 19232, /* DiagArray907 */ 2523, 0)
DIAG_ENTRY(UserDefinedWarnings /* user-defined-warnings */, 19254, /* DiagArray908 */ 2525, 0)
DIAG_ENTRY(Varargs /* varargs */, 19276, /* DiagArray909 */ 2527, 0)
DIAG_ENTRY(VariadicMacros /* variadic-macros */, 19284, /* DiagArray910 */ 2531, 0)
DIAG_ENTRY(anonymous_168 /* vec-elem-size */, 19300, /* DiagArray911 */ 2535, 0)
DIAG_ENTRY(VectorConversion /* vector-conversion */, 19314, /* DiagArray912 */ 2537, 0)
DIAG_ENTRY(anonymous_60 /* vector-conversions */, 19332, 0, /* DiagSubGroup913 */ 674)
DIAG_ENTRY(VexingParse /* vexing-parse */, 19351, /* DiagArray914 */ 2539, 0)
DIAG_ENTRY(Visibility /* visibility */, 19364, /* DiagArray915 */ 2543, 0)
DIAG_ENTRY(VLA /* vla */, 19375, /* DiagArray916 */ 2546, /* DiagSubGroup916 */ 676)
DIAG_ENTRY(VLAExtension /* vla-extension */, 19379, /* DiagArray917 */ 2548, 0)
DIAG_ENTRY(VoidPointerToEnumCast /* void-pointer-to-enum-cast */, 19393, /* DiagArray918 */ 2550, 0)
DIAG_ENTRY(VoidPointerToIntCast /* void-pointer-to-int-cast */, 19419, /* DiagArray919 */ 2552, /* DiagSubGroup919 */ 678)
DIAG_ENTRY(anonymous_223 /* void-ptr-dereference */, 19444, /* DiagArray920 */ 2554, 0)
DIAG_ENTRY(VolatileRegisterVar /* volatile-register-var */, 19465, 0, 0)
DIAG_ENTRY(WebAssemblyExceptionSpec /* wasm-exception-spec */, 19487, /* DiagArray922 */ 2556, 0)
DIAG_ENTRY(anonymous_161 /* weak-template-vtables */, 19507, /* DiagArray923 */ 2558, 0)
DIAG_ENTRY(anonymous_160 /* weak-vtables */, 19529, /* DiagArray924 */ 2560, 0)
DIAG_ENTRY(WritableStrings /* writable-strings */, 19542, /* DiagArray925 */ 2562, /* DiagSubGroup925 */ 680)
DIAG_ENTRY(GCCWriteStrings /* write-strings */, 19559, 0, /* DiagSubGroup926 */ 682)
DIAG_ENTRY(XorUsedAsPow /* xor-used-as-pow */, 19573, /* DiagArray927 */ 2564, 0)
DIAG_ENTRY(anonymous_262 /* zero-as-null-pointer-constant */, 19589, /* DiagArray928 */ 2568, 0)
DIAG_ENTRY(ZeroLengthArray /* zero-length-array */, 19619, /* DiagArray929 */ 2570, 0)
#endif // DIAG_ENTRY


#ifdef GET_CATEGORY_TABLE
CATEGORY("", DiagCat_None)
CATEGORY("Lexical or Preprocessor Issue", DiagCat_Lexical_or_Preprocessor_Issue)
CATEGORY("Semantic Issue", DiagCat_Semantic_Issue)
CATEGORY("Lambda Issue", DiagCat_Lambda_Issue)
CATEGORY("Parse Issue", DiagCat_Parse_Issue)
CATEGORY("ARC Semantic Issue", DiagCat_ARC_Semantic_Issue)
CATEGORY("ARC and @properties", DiagCat_ARC_and__properties)
CATEGORY("ARC Casting Rules", DiagCat_ARC_Casting_Rules)
CATEGORY("ARC Parse Issue", DiagCat_ARC_Parse_Issue)
CATEGORY("ARC Weak References", DiagCat_ARC_Weak_References)
CATEGORY("ARC Restrictions", DiagCat_ARC_Restrictions)
CATEGORY("OpenMP Issue", DiagCat_OpenMP_Issue)
CATEGORY("Inline Assembly Issue", DiagCat_Inline_Assembly_Issue)
CATEGORY("AST Deserialization Issue", DiagCat_AST_Deserialization_Issue)
CATEGORY("Modules Issue", DiagCat_Modules_Issue)
CATEGORY("Coroutines Issue", DiagCat_Coroutines_Issue)
CATEGORY("Concepts Issue", DiagCat_Concepts_Issue)
CATEGORY("Dependency Directive Source Minimization Issue", DiagCat_Dependency_Directive_Source_Minimization_Issue)
CATEGORY("Backend Issue", DiagCat_Backend_Issue)
CATEGORY("SourceMgr Reported Issue", DiagCat_SourceMgr_Reported_Issue)
CATEGORY("Related Result Type Issue", DiagCat_Related_Result_Type_Issue)
CATEGORY("AST Serialization Issue", DiagCat_AST_Serialization_Issue)
CATEGORY("Nullability Issue", DiagCat_Nullability_Issue)
CATEGORY("Generics Issue", DiagCat_Generics_Issue)
CATEGORY("User-Defined Issue", DiagCat_User_Defined_Issue)
CATEGORY("Refactoring Invocation Issue", DiagCat_Refactoring_Invocation_Issue)
CATEGORY("VTable ABI Issue", DiagCat_VTable_ABI_Issue)
CATEGORY("Value Conversion Issue", DiagCat_Value_Conversion_Issue)
CATEGORY("Documentation Issue", DiagCat_Documentation_Issue)
CATEGORY("ARC Retain Cycle", DiagCat_ARC_Retain_Cycle)
CATEGORY("Deprecations", DiagCat_Deprecations)
CATEGORY("Format String Issue", DiagCat_Format_String_Issue)
CATEGORY("Cocoa API Issue", DiagCat_Cocoa_API_Issue)
CATEGORY("#pragma message Directive", DiagCat__pragma_message_Directive)
CATEGORY("Instrumentation Issue", DiagCat_Instrumentation_Issue)
CATEGORY("Unused Entity Issue", DiagCat_Unused_Entity_Issue)
#endif // GET_CATEGORY_TABLE

