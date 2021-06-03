/* Generated code for Python module 'werkzeug.wrappers.common_descriptors'
 * created by Nuitka version 0.6.15
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_werkzeug$wrappers$common_descriptors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_werkzeug$wrappers$common_descriptors;
PyDictObject *moduledict_werkzeug$wrappers$common_descriptors;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[197];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("werkzeug.wrappers.common_descriptors"));
        constants_created = true;
    }
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_werkzeug$wrappers$common_descriptors(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "werkzeug.wrappers.common_descriptors");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0f2b8147385d057bd4e9676d901583e6;
static PyCodeObject *codeobj_3634c1589f785877805174728351d51d;
static PyCodeObject *codeobj_e04d060a8008e481ce9dfb944449622f;
static PyCodeObject *codeobj_92c90520ab0ebbd07845f6d79e0eed5b;
static PyCodeObject *codeobj_3e6a907afc95bca4ac9e53a6331af358;
static PyCodeObject *codeobj_52360d2584187d2e8eed05f82b4f3b04;
static PyCodeObject *codeobj_78e4f80a398838ec7d8fb1352562894c;
static PyCodeObject *codeobj_e0b9f6bf49a6aa2a72e0ead1a9c40156;
static PyCodeObject *codeobj_ab604ddff33da72fcefc999d70900ce9;
static PyCodeObject *codeobj_b2603f81ea4ac3c200a5d8fd11d967a2;
static PyCodeObject *codeobj_6e7b643b69bd59e9f86c2d1a10977ebc;
static PyCodeObject *codeobj_66408b007d0488a0ea7cb2ef664ebc50;
static PyCodeObject *codeobj_fcca2abc1a16bcebfbe7bffe373042bd;
static PyCodeObject *codeobj_78f0b5d4bd42fac680dba6d3f0e1aff4;
static PyCodeObject *codeobj_17998cf45ce38550d6220da53345a04c;
static PyCodeObject *codeobj_a7580d72877ddf7bc24ae48020621281;
static PyCodeObject *codeobj_bc02314971ff49f4c985b1ce5fe1ebc9;
static PyCodeObject *codeobj_15b0cbd254be4d865266c9e851d49f0b;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[56]; CHECK_OBJECT(module_filename_obj);
    codeobj_0f2b8147385d057bd4e9676d901583e6 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[184], NULL, NULL, 0, 0, 0);
    codeobj_3634c1589f785877805174728351d51d = MAKE_CODEOBJECT(module_filename_obj, 23, CO_NOFREE, mod_consts[97], mod_consts[185], NULL, 0, 0, 0);
    codeobj_e04d060a8008e481ce9dfb944449622f = MAKE_CODEOBJECT(module_filename_obj, 131, CO_NOFREE, mod_consts[135], mod_consts[185], NULL, 0, 0, 0);
    codeobj_92c90520ab0ebbd07845f6d79e0eed5b = MAKE_CODEOBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[186], NULL, 1, 0, 0);
    codeobj_3e6a907afc95bca4ac9e53a6331af358 = MAKE_CODEOBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[173], mod_consts[187], NULL, 2, 0, 0);
    codeobj_52360d2584187d2e8eed05f82b4f3b04 = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[186], NULL, 1, 0, 0);
    codeobj_78e4f80a398838ec7d8fb1352562894c = MAKE_CODEOBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[188], mod_consts[189], 1, 0, 0);
    codeobj_e0b9f6bf49a6aa2a72e0ead1a9c40156 = MAKE_CODEOBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[47], mod_consts[190], mod_consts[189], 2, 0, 0);
    codeobj_ab604ddff33da72fcefc999d70900ce9 = MAKE_CODEOBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[186], NULL, 1, 0, 0);
    codeobj_b2603f81ea4ac3c200a5d8fd11d967a2 = MAKE_CODEOBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[191], NULL, 1, 0, 0);
    codeobj_6e7b643b69bd59e9f86c2d1a10977ebc = MAKE_CODEOBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[192], NULL, 2, 0, 0);
    codeobj_66408b007d0488a0ea7cb2ef664ebc50 = MAKE_CODEOBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[186], NULL, 1, 0, 0);
    codeobj_fcca2abc1a16bcebfbe7bffe373042bd = MAKE_CODEOBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[193], NULL, 1, 0, 0);
    codeobj_78f0b5d4bd42fac680dba6d3f0e1aff4 = MAKE_CODEOBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[26], mod_consts[194], mod_consts[186], 1, 0, 0);
    codeobj_17998cf45ce38550d6220da53345a04c = MAKE_CODEOBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[26], mod_consts[195], mod_consts[196], 1, 0, 0);
    codeobj_a7580d72877ddf7bc24ae48020621281 = MAKE_CODEOBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[186], NULL, 1, 0, 0);
    codeobj_bc02314971ff49f4c985b1ce5fe1ebc9 = MAKE_CODEOBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], mod_consts[192], NULL, 1, 0, 0);
    codeobj_15b0cbd254be4d865266c9e851d49f0b = MAKE_CODEOBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], mod_consts[192], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__10_retry_after();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property(PyObject *defaults);


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget$$$function__1_on_update(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__2_fset(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__1_content_length();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__2__parse_content_type();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__3_mimetype();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__4_mimetype_params();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__5_pragma();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__6_mimetype();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__7_mimetype();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params$$$function__1_on_update(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__9_retry_after();


// The module function definitions.
static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__1_content_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_52360d2584187d2e8eed05f82b4f3b04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_52360d2584187d2e8eed05f82b4f3b04 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_52360d2584187d2e8eed05f82b4f3b04)) {
        Py_XDECREF(cache_frame_52360d2584187d2e8eed05f82b4f3b04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52360d2584187d2e8eed05f82b4f3b04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52360d2584187d2e8eed05f82b4f3b04 = MAKE_FUNCTION_FRAME(codeobj_52360d2584187d2e8eed05f82b4f3b04, module_werkzeug$wrappers$common_descriptors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_52360d2584187d2e8eed05f82b4f3b04->m_type_description == NULL);
    frame_52360d2584187d2e8eed05f82b4f3b04 = cache_frame_52360d2584187d2e8eed05f82b4f3b04;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_52360d2584187d2e8eed05f82b4f3b04);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_52360d2584187d2e8eed05f82b4f3b04) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_52360d2584187d2e8eed05f82b4f3b04->m_frame.f_lineno = 46;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52360d2584187d2e8eed05f82b4f3b04);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_52360d2584187d2e8eed05f82b4f3b04);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52360d2584187d2e8eed05f82b4f3b04);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_52360d2584187d2e8eed05f82b4f3b04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52360d2584187d2e8eed05f82b4f3b04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52360d2584187d2e8eed05f82b4f3b04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52360d2584187d2e8eed05f82b4f3b04,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_52360d2584187d2e8eed05f82b4f3b04 == cache_frame_52360d2584187d2e8eed05f82b4f3b04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_52360d2584187d2e8eed05f82b4f3b04);
        cache_frame_52360d2584187d2e8eed05f82b4f3b04 = NULL;
    }

    assertFrameObject(frame_52360d2584187d2e8eed05f82b4f3b04);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__2__parse_content_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_92c90520ab0ebbd07845f6d79e0eed5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_92c90520ab0ebbd07845f6d79e0eed5b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_92c90520ab0ebbd07845f6d79e0eed5b)) {
        Py_XDECREF(cache_frame_92c90520ab0ebbd07845f6d79e0eed5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_92c90520ab0ebbd07845f6d79e0eed5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_92c90520ab0ebbd07845f6d79e0eed5b = MAKE_FUNCTION_FRAME(codeobj_92c90520ab0ebbd07845f6d79e0eed5b, module_werkzeug$wrappers$common_descriptors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_92c90520ab0ebbd07845f6d79e0eed5b->m_type_description == NULL);
    frame_92c90520ab0ebbd07845f6d79e0eed5b = cache_frame_92c90520ab0ebbd07845f6d79e0eed5b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_92c90520ab0ebbd07845f6d79e0eed5b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_92c90520ab0ebbd07845f6d79e0eed5b) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_attribute_name_1 = mod_consts[3];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_92c90520ab0ebbd07845f6d79e0eed5b->m_frame.f_lineno = 98;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[5],
            &PyTuple_GET_ITEM(mod_consts[6], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_92c90520ab0ebbd07845f6d79e0eed5b->m_frame.f_lineno = 97;
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_92c90520ab0ebbd07845f6d79e0eed5b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_92c90520ab0ebbd07845f6d79e0eed5b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_92c90520ab0ebbd07845f6d79e0eed5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_92c90520ab0ebbd07845f6d79e0eed5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_92c90520ab0ebbd07845f6d79e0eed5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_92c90520ab0ebbd07845f6d79e0eed5b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_92c90520ab0ebbd07845f6d79e0eed5b == cache_frame_92c90520ab0ebbd07845f6d79e0eed5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_92c90520ab0ebbd07845f6d79e0eed5b);
        cache_frame_92c90520ab0ebbd07845f6d79e0eed5b = NULL;
    }

    assertFrameObject(frame_92c90520ab0ebbd07845f6d79e0eed5b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__3_mimetype(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ab604ddff33da72fcefc999d70900ce9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ab604ddff33da72fcefc999d70900ce9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ab604ddff33da72fcefc999d70900ce9)) {
        Py_XDECREF(cache_frame_ab604ddff33da72fcefc999d70900ce9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab604ddff33da72fcefc999d70900ce9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab604ddff33da72fcefc999d70900ce9 = MAKE_FUNCTION_FRAME(codeobj_ab604ddff33da72fcefc999d70900ce9, module_werkzeug$wrappers$common_descriptors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ab604ddff33da72fcefc999d70900ce9->m_type_description == NULL);
    frame_ab604ddff33da72fcefc999d70900ce9 = cache_frame_ab604ddff33da72fcefc999d70900ce9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ab604ddff33da72fcefc999d70900ce9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ab604ddff33da72fcefc999d70900ce9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ab604ddff33da72fcefc999d70900ce9->m_frame.f_lineno = 108;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[8]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[3]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[9];
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ab604ddff33da72fcefc999d70900ce9->m_frame.f_lineno = 109;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[10]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ab604ddff33da72fcefc999d70900ce9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ab604ddff33da72fcefc999d70900ce9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ab604ddff33da72fcefc999d70900ce9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ab604ddff33da72fcefc999d70900ce9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab604ddff33da72fcefc999d70900ce9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab604ddff33da72fcefc999d70900ce9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab604ddff33da72fcefc999d70900ce9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ab604ddff33da72fcefc999d70900ce9 == cache_frame_ab604ddff33da72fcefc999d70900ce9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ab604ddff33da72fcefc999d70900ce9);
        cache_frame_ab604ddff33da72fcefc999d70900ce9 = NULL;
    }

    assertFrameObject(frame_ab604ddff33da72fcefc999d70900ce9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__4_mimetype_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_66408b007d0488a0ea7cb2ef664ebc50;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_66408b007d0488a0ea7cb2ef664ebc50 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_66408b007d0488a0ea7cb2ef664ebc50)) {
        Py_XDECREF(cache_frame_66408b007d0488a0ea7cb2ef664ebc50);

#if _DEBUG_REFCOUNTS
        if (cache_frame_66408b007d0488a0ea7cb2ef664ebc50 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_66408b007d0488a0ea7cb2ef664ebc50 = MAKE_FUNCTION_FRAME(codeobj_66408b007d0488a0ea7cb2ef664ebc50, module_werkzeug$wrappers$common_descriptors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_66408b007d0488a0ea7cb2ef664ebc50->m_type_description == NULL);
    frame_66408b007d0488a0ea7cb2ef664ebc50 = cache_frame_66408b007d0488a0ea7cb2ef664ebc50;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_66408b007d0488a0ea7cb2ef664ebc50);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_66408b007d0488a0ea7cb2ef664ebc50) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_66408b007d0488a0ea7cb2ef664ebc50->m_frame.f_lineno = 117;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[8]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[3]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[12];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 1);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_66408b007d0488a0ea7cb2ef664ebc50);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_66408b007d0488a0ea7cb2ef664ebc50);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_66408b007d0488a0ea7cb2ef664ebc50);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_66408b007d0488a0ea7cb2ef664ebc50, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_66408b007d0488a0ea7cb2ef664ebc50->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_66408b007d0488a0ea7cb2ef664ebc50, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_66408b007d0488a0ea7cb2ef664ebc50,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_66408b007d0488a0ea7cb2ef664ebc50 == cache_frame_66408b007d0488a0ea7cb2ef664ebc50) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_66408b007d0488a0ea7cb2ef664ebc50);
        cache_frame_66408b007d0488a0ea7cb2ef664ebc50 = NULL;
    }

    assertFrameObject(frame_66408b007d0488a0ea7cb2ef664ebc50);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__5_pragma(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a7580d72877ddf7bc24ae48020621281;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7580d72877ddf7bc24ae48020621281 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a7580d72877ddf7bc24ae48020621281)) {
        Py_XDECREF(cache_frame_a7580d72877ddf7bc24ae48020621281);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7580d72877ddf7bc24ae48020621281 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7580d72877ddf7bc24ae48020621281 = MAKE_FUNCTION_FRAME(codeobj_a7580d72877ddf7bc24ae48020621281, module_werkzeug$wrappers$common_descriptors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a7580d72877ddf7bc24ae48020621281->m_type_description == NULL);
    frame_a7580d72877ddf7bc24ae48020621281 = cache_frame_a7580d72877ddf7bc24ae48020621281;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a7580d72877ddf7bc24ae48020621281);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a7580d72877ddf7bc24ae48020621281) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a7580d72877ddf7bc24ae48020621281->m_frame.f_lineno = 128;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[5],
            &PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a7580d72877ddf7bc24ae48020621281->m_frame.f_lineno = 128;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7580d72877ddf7bc24ae48020621281);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7580d72877ddf7bc24ae48020621281);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7580d72877ddf7bc24ae48020621281);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7580d72877ddf7bc24ae48020621281, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7580d72877ddf7bc24ae48020621281->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7580d72877ddf7bc24ae48020621281, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7580d72877ddf7bc24ae48020621281,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a7580d72877ddf7bc24ae48020621281 == cache_frame_a7580d72877ddf7bc24ae48020621281) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a7580d72877ddf7bc24ae48020621281);
        cache_frame_a7580d72877ddf7bc24ae48020621281 = NULL;
    }

    assertFrameObject(frame_a7580d72877ddf7bc24ae48020621281);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__6_mimetype(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_ct = NULL;
    struct Nuitka_FrameObject *frame_b2603f81ea4ac3c200a5d8fd11d967a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b2603f81ea4ac3c200a5d8fd11d967a2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b2603f81ea4ac3c200a5d8fd11d967a2)) {
        Py_XDECREF(cache_frame_b2603f81ea4ac3c200a5d8fd11d967a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2603f81ea4ac3c200a5d8fd11d967a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2603f81ea4ac3c200a5d8fd11d967a2 = MAKE_FUNCTION_FRAME(codeobj_b2603f81ea4ac3c200a5d8fd11d967a2, module_werkzeug$wrappers$common_descriptors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b2603f81ea4ac3c200a5d8fd11d967a2->m_type_description == NULL);
    frame_b2603f81ea4ac3c200a5d8fd11d967a2 = cache_frame_b2603f81ea4ac3c200a5d8fd11d967a2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b2603f81ea4ac3c200a5d8fd11d967a2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b2603f81ea4ac3c200a5d8fd11d967a2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b2603f81ea4ac3c200a5d8fd11d967a2->m_frame.f_lineno = 140;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[5],
            &PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ct == NULL);
        var_ct = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_ct);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_ct);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_ct);
        tmp_called_instance_3 = var_ct;
        frame_b2603f81ea4ac3c200a5d8fd11d967a2->m_frame.f_lineno = 142;
        tmp_expression_name_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[9];
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b2603f81ea4ac3c200a5d8fd11d967a2->m_frame.f_lineno = 142;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[21]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b2603f81ea4ac3c200a5d8fd11d967a2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b2603f81ea4ac3c200a5d8fd11d967a2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b2603f81ea4ac3c200a5d8fd11d967a2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b2603f81ea4ac3c200a5d8fd11d967a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2603f81ea4ac3c200a5d8fd11d967a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2603f81ea4ac3c200a5d8fd11d967a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2603f81ea4ac3c200a5d8fd11d967a2,
        type_description_1,
        par_self,
        var_ct
    );


    // Release cached frame if used for exception.
    if (frame_b2603f81ea4ac3c200a5d8fd11d967a2 == cache_frame_b2603f81ea4ac3c200a5d8fd11d967a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b2603f81ea4ac3c200a5d8fd11d967a2);
        cache_frame_b2603f81ea4ac3c200a5d8fd11d967a2 = NULL;
    }

    assertFrameObject(frame_b2603f81ea4ac3c200a5d8fd11d967a2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_ct);
    var_ct = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_ct);
    var_ct = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__7_mimetype(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6e7b643b69bd59e9f86c2d1a10977ebc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6e7b643b69bd59e9f86c2d1a10977ebc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6e7b643b69bd59e9f86c2d1a10977ebc)) {
        Py_XDECREF(cache_frame_6e7b643b69bd59e9f86c2d1a10977ebc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e7b643b69bd59e9f86c2d1a10977ebc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e7b643b69bd59e9f86c2d1a10977ebc = MAKE_FUNCTION_FRAME(codeobj_6e7b643b69bd59e9f86c2d1a10977ebc, module_werkzeug$wrappers$common_descriptors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6e7b643b69bd59e9f86c2d1a10977ebc->m_type_description == NULL);
    frame_6e7b643b69bd59e9f86c2d1a10977ebc = cache_frame_6e7b643b69bd59e9f86c2d1a10977ebc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6e7b643b69bd59e9f86c2d1a10977ebc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6e7b643b69bd59e9f86c2d1a10977ebc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_ass_subscript_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_name_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[24]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6e7b643b69bd59e9f86c2d1a10977ebc->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[25];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e7b643b69bd59e9f86c2d1a10977ebc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e7b643b69bd59e9f86c2d1a10977ebc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e7b643b69bd59e9f86c2d1a10977ebc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e7b643b69bd59e9f86c2d1a10977ebc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e7b643b69bd59e9f86c2d1a10977ebc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e7b643b69bd59e9f86c2d1a10977ebc,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6e7b643b69bd59e9f86c2d1a10977ebc == cache_frame_6e7b643b69bd59e9f86c2d1a10977ebc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6e7b643b69bd59e9f86c2d1a10977ebc);
        cache_frame_6e7b643b69bd59e9f86c2d1a10977ebc = NULL;
    }

    assertFrameObject(frame_6e7b643b69bd59e9f86c2d1a10977ebc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_on_update = NULL;
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_fcca2abc1a16bcebfbe7bffe373042bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fcca2abc1a16bcebfbe7bffe373042bd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params$$$function__1_on_update(tmp_closure_1);

        assert(var_on_update == NULL);
        var_on_update = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_fcca2abc1a16bcebfbe7bffe373042bd)) {
        Py_XDECREF(cache_frame_fcca2abc1a16bcebfbe7bffe373042bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fcca2abc1a16bcebfbe7bffe373042bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fcca2abc1a16bcebfbe7bffe373042bd = MAKE_FUNCTION_FRAME(codeobj_fcca2abc1a16bcebfbe7bffe373042bd, module_werkzeug$wrappers$common_descriptors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fcca2abc1a16bcebfbe7bffe373042bd->m_type_description == NULL);
    frame_fcca2abc1a16bcebfbe7bffe373042bd = cache_frame_fcca2abc1a16bcebfbe7bffe373042bd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fcca2abc1a16bcebfbe7bffe373042bd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fcca2abc1a16bcebfbe7bffe373042bd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_name_2 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        frame_fcca2abc1a16bcebfbe7bffe373042bd->m_frame.f_lineno = 160;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[5],
            &PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        frame_fcca2abc1a16bcebfbe7bffe373042bd->m_frame.f_lineno = 160;
        tmp_expression_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[12];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 1);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_d);
        tmp_args_element_name_2 = var_d;
        CHECK_OBJECT(var_on_update);
        tmp_args_element_name_3 = var_on_update;
        frame_fcca2abc1a16bcebfbe7bffe373042bd->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fcca2abc1a16bcebfbe7bffe373042bd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fcca2abc1a16bcebfbe7bffe373042bd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fcca2abc1a16bcebfbe7bffe373042bd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fcca2abc1a16bcebfbe7bffe373042bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fcca2abc1a16bcebfbe7bffe373042bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fcca2abc1a16bcebfbe7bffe373042bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fcca2abc1a16bcebfbe7bffe373042bd,
        type_description_1,
        par_self,
        var_on_update,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_fcca2abc1a16bcebfbe7bffe373042bd == cache_frame_fcca2abc1a16bcebfbe7bffe373042bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fcca2abc1a16bcebfbe7bffe373042bd);
        cache_frame_fcca2abc1a16bcebfbe7bffe373042bd = NULL;
    }

    assertFrameObject(frame_fcca2abc1a16bcebfbe7bffe373042bd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_on_update);
    Py_DECREF(var_on_update);
    var_on_update = NULL;
    CHECK_OBJECT(var_d);
    Py_DECREF(var_d);
    var_d = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_on_update);
    Py_DECREF(var_on_update);
    var_on_update = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params$$$function__1_on_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[0];
    struct Nuitka_FrameObject *frame_78f0b5d4bd42fac680dba6d3f0e1aff4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_78f0b5d4bd42fac680dba6d3f0e1aff4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_78f0b5d4bd42fac680dba6d3f0e1aff4)) {
        Py_XDECREF(cache_frame_78f0b5d4bd42fac680dba6d3f0e1aff4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78f0b5d4bd42fac680dba6d3f0e1aff4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78f0b5d4bd42fac680dba6d3f0e1aff4 = MAKE_FUNCTION_FRAME(codeobj_78f0b5d4bd42fac680dba6d3f0e1aff4, module_werkzeug$wrappers$common_descriptors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_78f0b5d4bd42fac680dba6d3f0e1aff4->m_type_description == NULL);
    frame_78f0b5d4bd42fac680dba6d3f0e1aff4 = cache_frame_78f0b5d4bd42fac680dba6d3f0e1aff4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_78f0b5d4bd42fac680dba6d3f0e1aff4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_78f0b5d4bd42fac680dba6d3f0e1aff4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_ass_subscript_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[32]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_d);
        tmp_args_element_name_2 = par_d;
        frame_78f0b5d4bd42fac680dba6d3f0e1aff4->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 158;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[25];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_78f0b5d4bd42fac680dba6d3f0e1aff4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_78f0b5d4bd42fac680dba6d3f0e1aff4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78f0b5d4bd42fac680dba6d3f0e1aff4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78f0b5d4bd42fac680dba6d3f0e1aff4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78f0b5d4bd42fac680dba6d3f0e1aff4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78f0b5d4bd42fac680dba6d3f0e1aff4,
        type_description_1,
        par_d,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_78f0b5d4bd42fac680dba6d3f0e1aff4 == cache_frame_78f0b5d4bd42fac680dba6d3f0e1aff4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_78f0b5d4bd42fac680dba6d3f0e1aff4);
        cache_frame_78f0b5d4bd42fac680dba6d3f0e1aff4 = NULL;
    }

    assertFrameObject(frame_78f0b5d4bd42fac680dba6d3f0e1aff4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    par_d = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    par_d = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__9_retry_after(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_value = NULL;
    struct Nuitka_FrameObject *frame_bc02314971ff49f4c985b1ce5fe1ebc9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bc02314971ff49f4c985b1ce5fe1ebc9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bc02314971ff49f4c985b1ce5fe1ebc9)) {
        Py_XDECREF(cache_frame_bc02314971ff49f4c985b1ce5fe1ebc9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc02314971ff49f4c985b1ce5fe1ebc9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc02314971ff49f4c985b1ce5fe1ebc9 = MAKE_FUNCTION_FRAME(codeobj_bc02314971ff49f4c985b1ce5fe1ebc9, module_werkzeug$wrappers$common_descriptors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bc02314971ff49f4c985b1ce5fe1ebc9->m_type_description == NULL);
    frame_bc02314971ff49f4c985b1ce5fe1ebc9 = cache_frame_bc02314971ff49f4c985b1ce5fe1ebc9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bc02314971ff49f4c985b1ce5fe1ebc9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bc02314971ff49f4c985b1ce5fe1ebc9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bc02314971ff49f4c985b1ce5fe1ebc9->m_frame.f_lineno = 278;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[5],
            &PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_value);
        tmp_compexpr_left_1 = var_value;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_value);
        tmp_called_instance_2 = var_value;
        frame_bc02314971ff49f4c985b1ce5fe1ebc9->m_frame.f_lineno = 281;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[34]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_int_arg_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bc02314971ff49f4c985b1ce5fe1ebc9->m_frame.f_lineno = 282;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[36]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[38];
        if (var_value == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_int_arg_1 = var_value;
        tmp_dict_value_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_bc02314971ff49f4c985b1ce5fe1ebc9->m_frame.f_lineno = 282;
        tmp_right_name_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (var_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = var_value;
        frame_bc02314971ff49f4c985b1ce5fe1ebc9->m_frame.f_lineno = 283;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc02314971ff49f4c985b1ce5fe1ebc9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc02314971ff49f4c985b1ce5fe1ebc9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc02314971ff49f4c985b1ce5fe1ebc9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bc02314971ff49f4c985b1ce5fe1ebc9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc02314971ff49f4c985b1ce5fe1ebc9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc02314971ff49f4c985b1ce5fe1ebc9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc02314971ff49f4c985b1ce5fe1ebc9,
        type_description_1,
        par_self,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_bc02314971ff49f4c985b1ce5fe1ebc9 == cache_frame_bc02314971ff49f4c985b1ce5fe1ebc9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bc02314971ff49f4c985b1ce5fe1ebc9);
        cache_frame_bc02314971ff49f4c985b1ce5fe1ebc9 = NULL;
    }

    assertFrameObject(frame_bc02314971ff49f4c985b1ce5fe1ebc9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__10_retry_after(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_15b0cbd254be4d865266c9e851d49f0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_15b0cbd254be4d865266c9e851d49f0b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_15b0cbd254be4d865266c9e851d49f0b)) {
        Py_XDECREF(cache_frame_15b0cbd254be4d865266c9e851d49f0b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15b0cbd254be4d865266c9e851d49f0b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15b0cbd254be4d865266c9e851d49f0b = MAKE_FUNCTION_FRAME(codeobj_15b0cbd254be4d865266c9e851d49f0b, module_werkzeug$wrappers$common_descriptors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_15b0cbd254be4d865266c9e851d49f0b->m_type_description == NULL);
    frame_15b0cbd254be4d865266c9e851d49f0b = cache_frame_15b0cbd254be4d865266c9e851d49f0b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_15b0cbd254be4d865266c9e851d49f0b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_15b0cbd254be4d865266c9e851d49f0b) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_value);
        tmp_compexpr_left_1 = par_value;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_1;
        tmp_compexpr_left_2 = mod_consts[42];
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_delsubscr_subscript_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_1 = mod_consts[42];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_name_1 = par_value;
        frame_15b0cbd254be4d865266c9e851d49f0b->m_frame.f_lineno = 292;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_assign_source_2 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_end_3:;
    branch_end_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_ass_subscript_1;
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[17]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[44];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_15b0cbd254be4d865266c9e851d49f0b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_15b0cbd254be4d865266c9e851d49f0b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_15b0cbd254be4d865266c9e851d49f0b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_15b0cbd254be4d865266c9e851d49f0b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15b0cbd254be4d865266c9e851d49f0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15b0cbd254be4d865266c9e851d49f0b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15b0cbd254be4d865266c9e851d49f0b,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_15b0cbd254be4d865266c9e851d49f0b == cache_frame_15b0cbd254be4d865266c9e851d49f0b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_15b0cbd254be4d865266c9e851d49f0b);
        cache_frame_15b0cbd254be4d865266c9e851d49f0b = NULL;
    }

    assertFrameObject(frame_15b0cbd254be4d865266c9e851d49f0b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_value);
    par_value = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_value);
    par_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_doc = python_pars[1];
    PyObject *var_fget = NULL;
    PyObject *var_fset = NULL;
    struct Nuitka_FrameObject *frame_3e6a907afc95bca4ac9e53a6331af358;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3e6a907afc95bca4ac9e53a6331af358 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_name;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget(tmp_closure_1);

        assert(var_fget == NULL);
        var_fget = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_2[1];

        tmp_closure_2[0] = par_name;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__2_fset(tmp_closure_2);

        assert(var_fset == NULL);
        var_fset = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_3e6a907afc95bca4ac9e53a6331af358)) {
        Py_XDECREF(cache_frame_3e6a907afc95bca4ac9e53a6331af358);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e6a907afc95bca4ac9e53a6331af358 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e6a907afc95bca4ac9e53a6331af358 = MAKE_FUNCTION_FRAME(codeobj_3e6a907afc95bca4ac9e53a6331af358, module_werkzeug$wrappers$common_descriptors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3e6a907afc95bca4ac9e53a6331af358->m_type_description == NULL);
    frame_3e6a907afc95bca4ac9e53a6331af358 = cache_frame_3e6a907afc95bca4ac9e53a6331af358;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3e6a907afc95bca4ac9e53a6331af358);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3e6a907afc95bca4ac9e53a6331af358) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_1 = (PyObject *)&PyProperty_Type;
        CHECK_OBJECT(var_fget);
        tmp_tuple_element_1 = var_fget;
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_fset);
        tmp_tuple_element_1 = var_fset;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[49];
        CHECK_OBJECT(par_doc);
        tmp_dict_value_1 = par_doc;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_3e6a907afc95bca4ac9e53a6331af358->m_frame.f_lineno = 315;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3e6a907afc95bca4ac9e53a6331af358);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3e6a907afc95bca4ac9e53a6331af358);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3e6a907afc95bca4ac9e53a6331af358);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3e6a907afc95bca4ac9e53a6331af358, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e6a907afc95bca4ac9e53a6331af358->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e6a907afc95bca4ac9e53a6331af358, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e6a907afc95bca4ac9e53a6331af358,
        type_description_1,
        par_name,
        par_doc,
        var_fget,
        var_fset
    );


    // Release cached frame if used for exception.
    if (frame_3e6a907afc95bca4ac9e53a6331af358 == cache_frame_3e6a907afc95bca4ac9e53a6331af358) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3e6a907afc95bca4ac9e53a6331af358);
        cache_frame_3e6a907afc95bca4ac9e53a6331af358 = NULL;
    }

    assertFrameObject(frame_3e6a907afc95bca4ac9e53a6331af358);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    par_doc = NULL;
    CHECK_OBJECT(var_fget);
    Py_DECREF(var_fget);
    var_fget = NULL;
    CHECK_OBJECT(var_fset);
    Py_DECREF(var_fset);
    var_fset = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    par_doc = NULL;
    CHECK_OBJECT(var_fget);
    Py_DECREF(var_fget);
    var_fget = NULL;
    CHECK_OBJECT(var_fset);
    Py_DECREF(var_fset);
    var_fset = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_on_update = NULL;
    struct Nuitka_FrameObject *frame_78e4f80a398838ec7d8fb1352562894c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_78e4f80a398838ec7d8fb1352562894c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget$$$function__1_on_update(tmp_closure_1);

        assert(var_on_update == NULL);
        var_on_update = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_78e4f80a398838ec7d8fb1352562894c)) {
        Py_XDECREF(cache_frame_78e4f80a398838ec7d8fb1352562894c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78e4f80a398838ec7d8fb1352562894c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78e4f80a398838ec7d8fb1352562894c = MAKE_FUNCTION_FRAME(codeobj_78e4f80a398838ec7d8fb1352562894c, module_werkzeug$wrappers$common_descriptors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_78e4f80a398838ec7d8fb1352562894c->m_type_description == NULL);
    frame_78e4f80a398838ec7d8fb1352562894c = cache_frame_78e4f80a398838ec7d8fb1352562894c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_78e4f80a398838ec7d8fb1352562894c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_78e4f80a398838ec7d8fb1352562894c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_name_2 = Nuitka_Cell_GET(par_self);
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 305;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_78e4f80a398838ec7d8fb1352562894c->m_frame.f_lineno = 305;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_on_update);
        tmp_args_element_name_3 = var_on_update;
        frame_78e4f80a398838ec7d8fb1352562894c->m_frame.f_lineno = 305;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "coc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_78e4f80a398838ec7d8fb1352562894c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_78e4f80a398838ec7d8fb1352562894c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_78e4f80a398838ec7d8fb1352562894c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78e4f80a398838ec7d8fb1352562894c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78e4f80a398838ec7d8fb1352562894c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78e4f80a398838ec7d8fb1352562894c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78e4f80a398838ec7d8fb1352562894c,
        type_description_1,
        par_self,
        var_on_update,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_78e4f80a398838ec7d8fb1352562894c == cache_frame_78e4f80a398838ec7d8fb1352562894c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_78e4f80a398838ec7d8fb1352562894c);
        cache_frame_78e4f80a398838ec7d8fb1352562894c = NULL;
    }

    assertFrameObject(frame_78e4f80a398838ec7d8fb1352562894c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_on_update);
    Py_DECREF(var_on_update);
    var_on_update = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_on_update);
    Py_DECREF(var_on_update);
    var_on_update = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget$$$function__1_on_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_header_set = python_pars[0];
    struct Nuitka_FrameObject *frame_17998cf45ce38550d6220da53345a04c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_17998cf45ce38550d6220da53345a04c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_17998cf45ce38550d6220da53345a04c)) {
        Py_XDECREF(cache_frame_17998cf45ce38550d6220da53345a04c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_17998cf45ce38550d6220da53345a04c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_17998cf45ce38550d6220da53345a04c = MAKE_FUNCTION_FRAME(codeobj_17998cf45ce38550d6220da53345a04c, module_werkzeug$wrappers$common_descriptors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_17998cf45ce38550d6220da53345a04c->m_type_description == NULL);
    frame_17998cf45ce38550d6220da53345a04c = cache_frame_17998cf45ce38550d6220da53345a04c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_17998cf45ce38550d6220da53345a04c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_17998cf45ce38550d6220da53345a04c) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_header_set);
        tmp_operand_name_1 = par_header_set;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 300;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 300;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_delsubscr_subscript_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 301;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_delsubscr_target_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 301;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_delsubscr_subscript_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_header_set);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_header_set);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_header_set);
        tmp_called_instance_1 = par_header_set;
        frame_17998cf45ce38550d6220da53345a04c->m_frame.f_lineno = 303;
        tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[52]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 303;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[17]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 303;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 303;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_17998cf45ce38550d6220da53345a04c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_17998cf45ce38550d6220da53345a04c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_17998cf45ce38550d6220da53345a04c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_17998cf45ce38550d6220da53345a04c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17998cf45ce38550d6220da53345a04c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_17998cf45ce38550d6220da53345a04c,
        type_description_1,
        par_header_set,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_17998cf45ce38550d6220da53345a04c == cache_frame_17998cf45ce38550d6220da53345a04c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_17998cf45ce38550d6220da53345a04c);
        cache_frame_17998cf45ce38550d6220da53345a04c = NULL;
    }

    assertFrameObject(frame_17998cf45ce38550d6220da53345a04c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_header_set);
    par_header_set = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_header_set);
    par_header_set = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__2_fset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e0b9f6bf49a6aa2a72e0ead1a9c40156;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e0b9f6bf49a6aa2a72e0ead1a9c40156 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e0b9f6bf49a6aa2a72e0ead1a9c40156)) {
        Py_XDECREF(cache_frame_e0b9f6bf49a6aa2a72e0ead1a9c40156);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0b9f6bf49a6aa2a72e0ead1a9c40156 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0b9f6bf49a6aa2a72e0ead1a9c40156 = MAKE_FUNCTION_FRAME(codeobj_e0b9f6bf49a6aa2a72e0ead1a9c40156, module_werkzeug$wrappers$common_descriptors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e0b9f6bf49a6aa2a72e0ead1a9c40156->m_type_description == NULL);
    frame_e0b9f6bf49a6aa2a72e0ead1a9c40156 = cache_frame_e0b9f6bf49a6aa2a72e0ead1a9c40156;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e0b9f6bf49a6aa2a72e0ead1a9c40156);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e0b9f6bf49a6aa2a72e0ead1a9c40156) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_value);
        tmp_operand_name_1 = par_value;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_delsubscr_target_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 309;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_delsubscr_subscript_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 311;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_ass_subscript_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_name_1 = par_value;
        frame_e0b9f6bf49a6aa2a72e0ead1a9c40156->m_frame.f_lineno = 313;
        tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[17]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 313;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 313;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0b9f6bf49a6aa2a72e0ead1a9c40156);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0b9f6bf49a6aa2a72e0ead1a9c40156);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e0b9f6bf49a6aa2a72e0ead1a9c40156, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0b9f6bf49a6aa2a72e0ead1a9c40156->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0b9f6bf49a6aa2a72e0ead1a9c40156, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0b9f6bf49a6aa2a72e0ead1a9c40156,
        type_description_1,
        par_self,
        par_value,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e0b9f6bf49a6aa2a72e0ead1a9c40156 == cache_frame_e0b9f6bf49a6aa2a72e0ead1a9c40156) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e0b9f6bf49a6aa2a72e0ead1a9c40156);
        cache_frame_e0b9f6bf49a6aa2a72e0ead1a9c40156 = NULL;
    }

    assertFrameObject(frame_e0b9f6bf49a6aa2a72e0ead1a9c40156);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__10_retry_after() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__10_retry_after,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_15b0cbd254be4d865266c9e851d49f0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_3e6a907afc95bca4ac9e53a6331af358,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_78e4f80a398838ec7d8fb1352562894c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget$$$function__1_on_update(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget$$$function__1_on_update,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[50],
#endif
        codeobj_17998cf45ce38550d6220da53345a04c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__2_fset(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__2_fset,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[48],
#endif
        codeobj_e0b9f6bf49a6aa2a72e0ead1a9c40156,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__1_content_length() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__1_content_length,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_52360d2584187d2e8eed05f82b4f3b04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__2__parse_content_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__2__parse_content_type,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_92c90520ab0ebbd07845f6d79e0eed5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__3_mimetype() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__3_mimetype,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_ab604ddff33da72fcefc999d70900ce9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__4_mimetype_params() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__4_mimetype_params,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_66408b007d0488a0ea7cb2ef664ebc50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__5_pragma() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__5_pragma,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_a7580d72877ddf7bc24ae48020621281,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__6_mimetype() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__6_mimetype,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_b2603f81ea4ac3c200a5d8fd11d967a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__7_mimetype() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__7_mimetype,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_6e7b643b69bd59e9f86c2d1a10977ebc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_fcca2abc1a16bcebfbe7bffe373042bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params$$$function__1_on_update(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params$$$function__1_on_update,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[27],
#endif
        codeobj_78f0b5d4bd42fac680dba6d3f0e1aff4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__9_retry_after() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$common_descriptors$$$function__9_retry_after,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_bc02314971ff49f4c985b1ce5fe1ebc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$common_descriptors,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_werkzeug$wrappers$common_descriptors[] = {
    impl_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params$$$function__1_on_update,
    impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget,
    impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__2_fset,
    impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property$$$function__1_fget$$$function__1_on_update,
    impl_werkzeug$wrappers$common_descriptors$$$function__1_content_length,
    impl_werkzeug$wrappers$common_descriptors$$$function__2__parse_content_type,
    impl_werkzeug$wrappers$common_descriptors$$$function__3_mimetype,
    impl_werkzeug$wrappers$common_descriptors$$$function__4_mimetype_params,
    impl_werkzeug$wrappers$common_descriptors$$$function__5_pragma,
    impl_werkzeug$wrappers$common_descriptors$$$function__6_mimetype,
    impl_werkzeug$wrappers$common_descriptors$$$function__7_mimetype,
    impl_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params,
    impl_werkzeug$wrappers$common_descriptors$$$function__9_retry_after,
    impl_werkzeug$wrappers$common_descriptors$$$function__10_retry_after,
    impl_werkzeug$wrappers$common_descriptors$$$function__11__set_property,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_werkzeug$wrappers$common_descriptors;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_werkzeug$wrappers$common_descriptors) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_werkzeug$wrappers$common_descriptors[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_werkzeug$wrappers$common_descriptors,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_werkzeug$wrappers$common_descriptors(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_werkzeug$wrappers$common_descriptors = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("werkzeug.wrappers.common_descriptors: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("werkzeug.wrappers.common_descriptors: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("werkzeug.wrappers.common_descriptors: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initwerkzeug$wrappers$common_descriptors\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_werkzeug$wrappers$common_descriptors = MODULE_DICT(module_werkzeug$wrappers$common_descriptors);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_werkzeug$wrappers$common_descriptors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_werkzeug$wrappers$common_descriptors,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_werkzeug$wrappers$common_descriptors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_werkzeug$wrappers$common_descriptors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_werkzeug$wrappers$common_descriptors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_werkzeug$wrappers$common_descriptors);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_werkzeug$wrappers$common_descriptors);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_0f2b8147385d057bd4e9676d901583e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_3634c1589f785877805174728351d51d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3634c1589f785877805174728351d51d_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131 = NULL;
    struct Nuitka_FrameObject *frame_e04d060a8008e481ce9dfb944449622f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e04d060a8008e481ce9dfb944449622f_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_0f2b8147385d057bd4e9676d901583e6 = MAKE_MODULE_FRAME(codeobj_0f2b8147385d057bd4e9676d901583e6, module_werkzeug$wrappers$common_descriptors);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0f2b8147385d057bd4e9676d901583e6);
    assert(Py_REFCNT(frame_0f2b8147385d057bd4e9676d901583e6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[56];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[59], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[60], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[35];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[62];
        tmp_level_name_1 = mod_consts[9];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[35],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[35]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[35];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[63];
        tmp_level_name_2 = mod_consts[9];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[37],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[64];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[65];
        tmp_level_name_3 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 4;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[53],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[67];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[68];
        tmp_level_name_4 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[29],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[69];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[70];
        tmp_level_name_5 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 6;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[71],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[71]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[69];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[72];
        tmp_level_name_6 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 7;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[73],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[69];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[74];
        tmp_level_name_7 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 8;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[54],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[69];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[75];
        tmp_level_name_8 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 9;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[31],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_arg_name_9;
        PyObject *tmp_locals_arg_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = mod_consts[69];
        tmp_globals_arg_name_9 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[76];
        tmp_level_name_9 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 10;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_arg_name_9, tmp_locals_arg_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[43],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_arg_name_10;
        PyObject *tmp_locals_arg_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = mod_consts[69];
        tmp_globals_arg_name_10 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[77];
        tmp_level_name_10 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 11;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_arg_name_10, tmp_locals_arg_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[78],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[78]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_arg_name_11;
        PyObject *tmp_locals_arg_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = mod_consts[69];
        tmp_globals_arg_name_11 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_11 = Py_None;
        tmp_fromlist_name_11 = mod_consts[79];
        tmp_level_name_11 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 12;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_arg_name_11, tmp_locals_arg_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[80],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[80]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_arg_name_12;
        PyObject *tmp_locals_arg_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = mod_consts[69];
        tmp_globals_arg_name_12 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_12 = Py_None;
        tmp_fromlist_name_12 = mod_consts[81];
        tmp_level_name_12 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 13;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_arg_name_12, tmp_locals_arg_name_12, tmp_fromlist_name_12, tmp_level_name_12);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[40],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_arg_name_13;
        PyObject *tmp_locals_arg_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = mod_consts[69];
        tmp_globals_arg_name_13 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_13 = Py_None;
        tmp_fromlist_name_13 = mod_consts[82];
        tmp_level_name_13 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 14;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_name_13, tmp_globals_arg_name_13, tmp_locals_arg_name_13, tmp_fromlist_name_13, tmp_level_name_13);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[4],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_arg_name_14;
        PyObject *tmp_locals_arg_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = mod_consts[69];
        tmp_globals_arg_name_14 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_14 = Py_None;
        tmp_fromlist_name_14 = mod_consts[83];
        tmp_level_name_14 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 15;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_name_14, tmp_globals_arg_name_14, tmp_locals_arg_name_14, tmp_fromlist_name_14, tmp_level_name_14);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[14],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_arg_name_15;
        PyObject *tmp_locals_arg_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = mod_consts[84];
        tmp_globals_arg_name_15 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_15 = Py_None;
        tmp_fromlist_name_15 = mod_consts[85];
        tmp_level_name_15 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 16;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_name_15, tmp_globals_arg_name_15, tmp_locals_arg_name_15, tmp_fromlist_name_15, tmp_level_name_15);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[86],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[86]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_arg_name_16;
        PyObject *tmp_locals_arg_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = mod_consts[84];
        tmp_globals_arg_name_16 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_16 = Py_None;
        tmp_fromlist_name_16 = mod_consts[87];
        tmp_level_name_16 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 17;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_name_16, tmp_globals_arg_name_16, tmp_locals_arg_name_16, tmp_fromlist_name_16, tmp_level_name_16);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[88],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[88]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_arg_name_17;
        PyObject *tmp_locals_arg_name_17;
        PyObject *tmp_fromlist_name_17;
        PyObject *tmp_level_name_17;
        tmp_name_name_17 = mod_consts[84];
        tmp_globals_arg_name_17 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_17 = Py_None;
        tmp_fromlist_name_17 = mod_consts[89];
        tmp_level_name_17 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 18;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_name_17, tmp_globals_arg_name_17, tmp_locals_arg_name_17, tmp_fromlist_name_17, tmp_level_name_17);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[23],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_18;
        PyObject *tmp_globals_arg_name_18;
        PyObject *tmp_locals_arg_name_18;
        PyObject *tmp_fromlist_name_18;
        PyObject *tmp_level_name_18;
        tmp_name_name_18 = mod_consts[84];
        tmp_globals_arg_name_18 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_18 = Py_None;
        tmp_fromlist_name_18 = mod_consts[90];
        tmp_level_name_18 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 19;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_name_18, tmp_globals_arg_name_18, tmp_locals_arg_name_18, tmp_fromlist_name_18, tmp_level_name_18);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[91],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[91]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_name_19;
        PyObject *tmp_globals_arg_name_19;
        PyObject *tmp_locals_arg_name_19;
        PyObject *tmp_fromlist_name_19;
        PyObject *tmp_level_name_19;
        tmp_name_name_19 = mod_consts[92];
        tmp_globals_arg_name_19 = (PyObject *)moduledict_werkzeug$wrappers$common_descriptors;
        tmp_locals_arg_name_19 = Py_None;
        tmp_fromlist_name_19 = mod_consts[93];
        tmp_level_name_19 = mod_consts[66];
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 20;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_name_19, tmp_globals_arg_name_19, tmp_locals_arg_name_19, tmp_fromlist_name_19, tmp_level_name_19);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_werkzeug$wrappers$common_descriptors,
                mod_consts[0],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_22);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[94];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_23 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[95];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[95];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[9];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[95];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[95];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 23;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[96]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[96]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[97];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 23;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[98]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[99];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[100];
        tmp_getattr_default_1 = mod_consts[101];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[100]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_27;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[102];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[103], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_3634c1589f785877805174728351d51d_2)) {
            Py_XDECREF(cache_frame_3634c1589f785877805174728351d51d_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3634c1589f785877805174728351d51d_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3634c1589f785877805174728351d51d_2 = MAKE_FUNCTION_FRAME(codeobj_3634c1589f785877805174728351d51d, module_werkzeug$wrappers$common_descriptors, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_3634c1589f785877805174728351d51d_2->m_type_description == NULL);
        frame_3634c1589f785877805174728351d51d_2 = cache_frame_3634c1589f785877805174728351d51d_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_3634c1589f785877805174728351d51d_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3634c1589f785877805174728351d51d_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_kwargs_name_2;
            tmp_called_name_2 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[88]);

            if (tmp_called_name_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_2 == NULL)) {
                        tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_2);
                }
            }

            tmp_args_name_2 = mod_consts[106];
            tmp_kwargs_name_2 = PyDict_Copy(mod_consts[107]);
            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 31;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_kwargs_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_3 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[86]);

            if (tmp_called_name_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[86]);

                    if (unlikely(tmp_called_name_3 == NULL)) {
                        tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
                    }

                    if (tmp_called_name_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_3);
                }
            }



            tmp_args_element_name_1 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__1_content_length();

            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 39;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_3;
            PyObject *tmp_kwargs_name_3;
            tmp_called_name_4 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[88]);

            if (tmp_called_name_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_4 == NULL)) {
                        tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_4);
                }
            }

            tmp_args_name_3 = mod_consts[111];
            tmp_kwargs_name_3 = PyDict_Copy(mod_consts[112]);
            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 48;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_3, tmp_kwargs_name_3);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_kwargs_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_name_4;
            PyObject *tmp_kwargs_name_4;
            tmp_called_name_5 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[88]);

            if (tmp_called_name_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_5 == NULL)) {
                        tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_5);
                }
            }

            tmp_args_name_4 = mod_consts[114];
            tmp_kwargs_name_4 = PyDict_Copy(mod_consts[115]);
            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 59;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_kwargs_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_5;
            PyObject *tmp_kwargs_name_5;
            tmp_called_name_6 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[88]);

            if (tmp_called_name_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_6 == NULL)) {
                        tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 70;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_6);
                }
            }

            tmp_args_name_5 = mod_consts[117];
            tmp_kwargs_name_5 = PyDict_Copy(mod_consts[118]);
            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_5, tmp_kwargs_name_5);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_kwargs_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[119], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_name_6;
            tmp_called_name_7 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[88]);

            if (tmp_called_name_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_7 == NULL)) {
                        tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 77;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_7);
                }
            }

            tmp_tuple_element_3 = mod_consts[120];
            tmp_args_name_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_6, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_None;
            PyTuple_SET_ITEM0(tmp_args_name_6, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[40]);

            if (tmp_tuple_element_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[40]);

                    if (unlikely(tmp_tuple_element_3 == NULL)) {
                        tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                    }

                    if (tmp_tuple_element_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 80;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_3);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_6, 2, tmp_tuple_element_3);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_name_6);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_kwargs_name_6 = PyDict_Copy(mod_consts[121]);
            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 77;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_6, tmp_kwargs_name_6);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_name_6);
            Py_DECREF(tmp_kwargs_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_name_7;
            tmp_called_name_8 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[88]);

            if (tmp_called_name_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_8 == NULL)) {
                        tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 85;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_8);
                }
            }

            tmp_tuple_element_4 = mod_consts[123];
            tmp_args_name_7 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_7, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_args_name_7, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[124]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_4 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_tuple_element_4);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_7, 2, tmp_tuple_element_4);
            tmp_kwargs_name_7 = PyDict_Copy(mod_consts[125]);
            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 85;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_7, tmp_kwargs_name_7);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_args_name_7);
            Py_DECREF(tmp_kwargs_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[126], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__2__parse_content_type();

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[8], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_3;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[128]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_9 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[128]);

            if (unlikely(tmp_called_name_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[128]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_name_2 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__3_mimetype();

            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 101;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_2);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_name_10 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_3 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__3_mimetype();

            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 101;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_element_name_5;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[128]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_11 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[128]);

            if (unlikely(tmp_called_name_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[128]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_name_4 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__4_mimetype_params();

            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 111;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_4);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_12 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_5 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__4_mimetype_params();

            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 111;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[130], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_element_name_6;
            tmp_called_name_13 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[86]);

            if (tmp_called_name_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[86]);

                    if (unlikely(tmp_called_name_13 == NULL)) {
                        tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
                    }

                    if (tmp_called_name_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 120;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_13);
                }
            }



            tmp_args_element_name_6 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__5_pragma();

            frame_3634c1589f785877805174728351d51d_2->m_frame.f_lineno = 120;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_6);
            Py_DECREF(tmp_called_name_13);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3634c1589f785877805174728351d51d_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3634c1589f785877805174728351d51d_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3634c1589f785877805174728351d51d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3634c1589f785877805174728351d51d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3634c1589f785877805174728351d51d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3634c1589f785877805174728351d51d_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_3634c1589f785877805174728351d51d_2 == cache_frame_3634c1589f785877805174728351d51d_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_3634c1589f785877805174728351d51d_2);
            cache_frame_3634c1589f785877805174728351d51d_2 = NULL;
        }

        assertFrameObject(frame_3634c1589f785877805174728351d51d_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = mod_consts[94];
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_name_8;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_14 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[97];
            tmp_args_name_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_8, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_8, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23;
            PyTuple_SET_ITEM0(tmp_args_name_8, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_8 = tmp_class_creation_1__class_decl_dict;
            frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 23;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_name_14, tmp_args_name_8, tmp_kwargs_name_8);
            Py_DECREF(tmp_args_name_8);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_28 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23);
        locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23);
        locals_werkzeug$wrappers$common_descriptors$$$class__1_CommonRequestDescriptorsMixin_23 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 23;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_28);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[94];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_30 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[95];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[95];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_4;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_4;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_6 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = mod_consts[9];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_4;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[95];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[95];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 131;

        goto try_except_handler_4;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_7, mod_consts[96]);
        tmp_condition_result_12 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_name_9;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_name_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_8 = tmp_class_creation_2__metaclass;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[96]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_4;
        }
        tmp_tuple_element_6 = mod_consts[135];
        tmp_args_name_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_9, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_name_9, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_9 = tmp_class_creation_2__class_decl_dict;
        frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 131;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_name_15, tmp_args_name_9, tmp_kwargs_name_9);
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_name_9);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_9, mod_consts[98]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_4;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[99];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[100];
        tmp_getattr_default_2 = mod_consts[101];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_4;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_name_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_10 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[100]);
            Py_DECREF(tmp_expression_name_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_name_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 131;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_34;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[102];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[103], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[135];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_e04d060a8008e481ce9dfb944449622f_3)) {
            Py_XDECREF(cache_frame_e04d060a8008e481ce9dfb944449622f_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e04d060a8008e481ce9dfb944449622f_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e04d060a8008e481ce9dfb944449622f_3 = MAKE_FUNCTION_FRAME(codeobj_e04d060a8008e481ce9dfb944449622f, module_werkzeug$wrappers$common_descriptors, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_e04d060a8008e481ce9dfb944449622f_3->m_type_description == NULL);
        frame_e04d060a8008e481ce9dfb944449622f_3 = cache_frame_e04d060a8008e481ce9dfb944449622f_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e04d060a8008e481ce9dfb944449622f_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e04d060a8008e481ce9dfb944449622f_3) == 2); // Frame stack

        // Framed code:
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_17;
            PyObject *tmp_args_element_name_8;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[128]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_name_16 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[128]);

            if (unlikely(tmp_called_name_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[128]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_7 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__6_mimetype();

            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 137;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_7);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_name_17 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_8 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__6_mimetype();

            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 137;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_9;
            tmp_called_instance_1 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[32]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[32]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_9 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__7_mimetype();

            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 144;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[138], tmp_args_element_name_9);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_name_18;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_called_name_19;
            PyObject *tmp_args_element_name_11;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[128]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_name_18 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[128]);

            if (unlikely(tmp_called_name_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[128]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_10 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params();

            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 148;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_10);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_element_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_name_19 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_11 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__8_mimetype_params();

            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 148;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_11);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[130], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_20;
            PyObject *tmp_args_name_10;
            PyObject *tmp_kwargs_name_10;
            tmp_called_name_20 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_20 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_20 == NULL)) {
                        tmp_called_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_20);
                }
            }

            tmp_args_name_10 = mod_consts[140];
            tmp_kwargs_name_10 = PyDict_Copy(mod_consts[141]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 163;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_20, tmp_args_name_10, tmp_kwargs_name_10);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_kwargs_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_21;
            PyObject *tmp_args_name_11;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_name_11;
            tmp_called_name_21 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_21 == NULL)) {
                        tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 170;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_21);
                }
            }

            tmp_tuple_element_8 = mod_consts[143];
            tmp_args_name_11 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_args_name_11, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = Py_None;
            PyTuple_SET_ITEM0(tmp_args_name_11, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[78]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 173;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_11, 2, tmp_tuple_element_8);
            tmp_tuple_element_8 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[71]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 174;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_11, 3, tmp_tuple_element_8);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_name_11);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_kwargs_name_11 = PyDict_Copy(mod_consts[144]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_21, tmp_args_name_11, tmp_kwargs_name_11);
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_name_11);
            Py_DECREF(tmp_kwargs_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[145], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_22;
            PyObject *tmp_args_name_12;
            PyObject *tmp_kwargs_name_12;
            tmp_called_name_22 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_22 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_22 == NULL)) {
                        tmp_called_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_22);
                }
            }

            tmp_args_name_12 = mod_consts[146];
            tmp_kwargs_name_12 = PyDict_Copy(mod_consts[107]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 182;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_22, tmp_args_name_12, tmp_kwargs_name_12);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_kwargs_name_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_23;
            PyObject *tmp_args_name_13;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_name_13;
            tmp_called_name_23 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_23 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_23 == NULL)) {
                        tmp_called_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 189;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_23);
                }
            }

            tmp_tuple_element_9 = mod_consts[147];
            tmp_args_name_13 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_args_name_13, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_None;
            PyTuple_SET_ITEM0(tmp_args_name_13, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[124]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_9 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_tuple_element_9);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_13, 2, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[148]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_9);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_13, 3, tmp_tuple_element_9);
            tmp_kwargs_name_13 = PyDict_Copy(mod_consts[149]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 189;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_23, tmp_args_name_13, tmp_kwargs_name_13);
            Py_DECREF(tmp_called_name_23);
            Py_DECREF(tmp_args_name_13);
            Py_DECREF(tmp_kwargs_name_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_24;
            PyObject *tmp_args_name_14;
            PyObject *tmp_kwargs_name_14;
            tmp_called_name_24 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_24 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_24 == NULL)) {
                        tmp_called_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 200;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_24);
                }
            }

            tmp_args_name_14 = mod_consts[150];
            tmp_kwargs_name_14 = PyDict_Copy(mod_consts[151]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 200;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_24, tmp_args_name_14, tmp_kwargs_name_14);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_kwargs_name_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_25;
            PyObject *tmp_args_name_15;
            PyObject *tmp_kwargs_name_15;
            tmp_called_name_25 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_25 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_25 == NULL)) {
                        tmp_called_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 207;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_25);
                }
            }

            tmp_args_name_15 = mod_consts[153];
            tmp_kwargs_name_15 = PyDict_Copy(mod_consts[154]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 207;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_25, tmp_args_name_15, tmp_kwargs_name_15);
            Py_DECREF(tmp_called_name_25);
            Py_DECREF(tmp_kwargs_name_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_26;
            PyObject *tmp_args_name_16;
            PyObject *tmp_kwargs_name_16;
            tmp_called_name_26 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_26 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_26 == NULL)) {
                        tmp_called_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 216;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_26);
                }
            }

            tmp_args_name_16 = mod_consts[155];
            tmp_kwargs_name_16 = PyDict_Copy(mod_consts[156]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 216;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_26, tmp_args_name_16, tmp_kwargs_name_16);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_kwargs_name_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_27;
            PyObject *tmp_args_name_17;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_name_17;
            tmp_called_name_27 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_27 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_27 == NULL)) {
                        tmp_called_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 225;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_27);
                }
            }

            tmp_tuple_element_10 = mod_consts[157];
            tmp_args_name_17 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_args_name_17, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = Py_None;
            PyTuple_SET_ITEM0(tmp_args_name_17, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[80]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[80]);

                    if (unlikely(tmp_tuple_element_10 == NULL)) {
                        tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                    }

                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 228;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    Py_INCREF(tmp_tuple_element_10);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_17, 2, tmp_tuple_element_10);
            tmp_tuple_element_10 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[73]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_tuple_element_10 == NULL)) {
                        tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                    }

                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 229;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    Py_INCREF(tmp_tuple_element_10);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_17, 3, tmp_tuple_element_10);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_called_name_27);
            Py_DECREF(tmp_args_name_17);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_kwargs_name_17 = PyDict_Copy(mod_consts[158]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 225;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_27, tmp_args_name_17, tmp_kwargs_name_17);
            Py_DECREF(tmp_called_name_27);
            Py_DECREF(tmp_args_name_17);
            Py_DECREF(tmp_kwargs_name_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[159], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_28;
            PyObject *tmp_args_name_18;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_name_18;
            tmp_called_name_28 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_28 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_28 == NULL)) {
                        tmp_called_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 233;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_28);
                }
            }

            tmp_tuple_element_11 = mod_consts[160];
            tmp_args_name_18 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_args_name_18, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = Py_None;
            PyTuple_SET_ITEM0(tmp_args_name_18, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[80]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[80]);

                    if (unlikely(tmp_tuple_element_11 == NULL)) {
                        tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                    }

                    if (tmp_tuple_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 236;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    Py_INCREF(tmp_tuple_element_11);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_18, 2, tmp_tuple_element_11);
            tmp_tuple_element_11 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[73]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_tuple_element_11 == NULL)) {
                        tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                    }

                    if (tmp_tuple_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 237;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    Py_INCREF(tmp_tuple_element_11);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_18, 3, tmp_tuple_element_11);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_args_name_18);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_kwargs_name_18 = PyDict_Copy(mod_consts[161]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 233;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_28, tmp_args_name_18, tmp_kwargs_name_18);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_args_name_18);
            Py_DECREF(tmp_kwargs_name_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[162], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_29;
            PyObject *tmp_args_name_19;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_name_19;
            tmp_called_name_29 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_29 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_29 == NULL)) {
                        tmp_called_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 242;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_29);
                }
            }

            tmp_tuple_element_12 = mod_consts[163];
            tmp_args_name_19 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_args_name_19, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = Py_None;
            PyTuple_SET_ITEM0(tmp_args_name_19, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[40]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[40]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 245;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_19, 2, tmp_tuple_element_12);
            tmp_tuple_element_12 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[43]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[43]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 246;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_19, 3, tmp_tuple_element_12);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_called_name_29);
            Py_DECREF(tmp_args_name_19);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_kwargs_name_19 = PyDict_Copy(mod_consts[121]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 242;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_29, tmp_args_name_19, tmp_kwargs_name_19);
            Py_DECREF(tmp_called_name_29);
            Py_DECREF(tmp_args_name_19);
            Py_DECREF(tmp_kwargs_name_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_30;
            PyObject *tmp_args_name_20;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_name_20;
            tmp_called_name_30 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_30 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_30 == NULL)) {
                        tmp_called_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 251;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_30);
                }
            }

            tmp_tuple_element_13 = mod_consts[164];
            tmp_args_name_20 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_args_name_20, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = Py_None;
            PyTuple_SET_ITEM0(tmp_args_name_20, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[40]);

            if (tmp_tuple_element_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[40]);

                    if (unlikely(tmp_tuple_element_13 == NULL)) {
                        tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                    }

                    if (tmp_tuple_element_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    Py_INCREF(tmp_tuple_element_13);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_20, 2, tmp_tuple_element_13);
            tmp_tuple_element_13 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[43]);

            if (tmp_tuple_element_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[43]);

                    if (unlikely(tmp_tuple_element_13 == NULL)) {
                        tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                    }

                    if (tmp_tuple_element_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 255;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    Py_INCREF(tmp_tuple_element_13);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_20, 3, tmp_tuple_element_13);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_args_name_20);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_kwargs_name_20 = PyDict_Copy(mod_consts[165]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 251;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_30, tmp_args_name_20, tmp_kwargs_name_20);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_args_name_20);
            Py_DECREF(tmp_kwargs_name_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[166], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_31;
            PyObject *tmp_args_name_21;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_name_21;
            tmp_called_name_31 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[91]);

            if (tmp_called_name_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_31 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_called_name_31 == NULL)) {
                        tmp_called_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_called_name_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 260;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_31);
                }
            }

            tmp_tuple_element_14 = mod_consts[167];
            tmp_args_name_21 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_args_name_21, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            PyTuple_SET_ITEM0(tmp_args_name_21, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[40]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[40]);

                    if (unlikely(tmp_tuple_element_14 == NULL)) {
                        tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                    }

                    if (tmp_tuple_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 263;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    Py_INCREF(tmp_tuple_element_14);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_21, 2, tmp_tuple_element_14);
            tmp_tuple_element_14 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[43]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[43]);

                    if (unlikely(tmp_tuple_element_14 == NULL)) {
                        tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                    }

                    if (tmp_tuple_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 264;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    Py_INCREF(tmp_tuple_element_14);
                }
            }

            PyTuple_SET_ITEM(tmp_args_name_21, 3, tmp_tuple_element_14);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_called_name_31);
            Py_DECREF(tmp_args_name_21);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_kwargs_name_21 = PyDict_Copy(mod_consts[168]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 260;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_31, tmp_args_name_21, tmp_kwargs_name_21);
            Py_DECREF(tmp_called_name_31);
            Py_DECREF(tmp_args_name_21);
            Py_DECREF(tmp_kwargs_name_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[169], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_name_32;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_called_name_33;
            PyObject *tmp_args_element_name_13;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[128]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_name_32 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[128]);

            if (unlikely(tmp_called_name_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[128]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_name_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_12 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__9_retry_after();

            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 270;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_12);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_args_element_name_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_name_33 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_13 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__9_retry_after();

            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 270;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_13);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[170], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_14;
            tmp_called_instance_2 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[170]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[170]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_14 = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__10_retry_after();

            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 285;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[138], tmp_args_element_name_14);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_name_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[170], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[172];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$common_descriptors$$$function__11__set_property(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[173], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_34;
            PyObject *tmp_args_name_22;
            PyObject *tmp_kwargs_name_22;
            tmp_called_name_34 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[173]);

            if (unlikely(tmp_called_name_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[173]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_name_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_name_22 = mod_consts[175];
            tmp_kwargs_name_22 = PyDict_Copy(mod_consts[176]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 317;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_34, tmp_args_name_22, tmp_kwargs_name_22);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_kwargs_name_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[177], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_35;
            PyObject *tmp_args_name_23;
            PyObject *tmp_kwargs_name_23;
            tmp_called_name_35 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[173]);

            if (unlikely(tmp_called_name_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[173]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_name_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_name_23 = mod_consts[178];
            tmp_kwargs_name_23 = PyDict_Copy(mod_consts[179]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 324;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_35, tmp_args_name_23, tmp_kwargs_name_23);
            Py_DECREF(tmp_called_name_35);
            Py_DECREF(tmp_kwargs_name_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[180], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_36;
            PyObject *tmp_args_name_24;
            PyObject *tmp_kwargs_name_24;
            tmp_called_name_36 = PyObject_GetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[173]);

            if (unlikely(tmp_called_name_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[173]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_name_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_name_24 = mod_consts[181];
            tmp_kwargs_name_24 = PyDict_Copy(mod_consts[182]);
            frame_e04d060a8008e481ce9dfb944449622f_3->m_frame.f_lineno = 331;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_36, tmp_args_name_24, tmp_kwargs_name_24);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_kwargs_name_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[183], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_res = PyObject_DelItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[173]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e04d060a8008e481ce9dfb944449622f_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e04d060a8008e481ce9dfb944449622f_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e04d060a8008e481ce9dfb944449622f_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e04d060a8008e481ce9dfb944449622f_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e04d060a8008e481ce9dfb944449622f_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e04d060a8008e481ce9dfb944449622f_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_e04d060a8008e481ce9dfb944449622f_3 == cache_frame_e04d060a8008e481ce9dfb944449622f_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_e04d060a8008e481ce9dfb944449622f_3);
            cache_frame_e04d060a8008e481ce9dfb944449622f_3 = NULL;
        }

        assertFrameObject(frame_e04d060a8008e481ce9dfb944449622f_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            tmp_compexpr_right_2 = mod_consts[94];
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_17 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_6;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_name_37;
            PyObject *tmp_args_name_25;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_name_25;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_37 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_15 = mod_consts[135];
            tmp_args_name_25 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_25, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_15 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_name_25, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131;
            PyTuple_SET_ITEM0(tmp_args_name_25, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_25 = tmp_class_creation_2__class_decl_dict;
            frame_0f2b8147385d057bd4e9676d901583e6->m_frame.f_lineno = 131;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_name_37, tmp_args_name_25, tmp_kwargs_name_25);
            Py_DECREF(tmp_args_name_25);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_35 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131);
        locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131);
        locals_werkzeug$wrappers$common_descriptors$$$class__2_CommonResponseDescriptorsMixin_131 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 131;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$common_descriptors, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_35);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f2b8147385d057bd4e9676d901583e6);
#endif
    popFrameStack();

    assertFrameObject(frame_0f2b8147385d057bd4e9676d901583e6);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f2b8147385d057bd4e9676d901583e6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f2b8147385d057bd4e9676d901583e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f2b8147385d057bd4e9676d901583e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f2b8147385d057bd4e9676d901583e6, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    return module_werkzeug$wrappers$common_descriptors;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

