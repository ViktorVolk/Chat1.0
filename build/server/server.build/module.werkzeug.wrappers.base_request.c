/* Generated code for Python module 'werkzeug.wrappers.base_request'
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

/* The "module_werkzeug$wrappers$base_request" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_werkzeug$wrappers$base_request;
PyDictObject *moduledict_werkzeug$wrappers$base_request;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[305];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("werkzeug.wrappers.base_request"));
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
void checkModuleConstants_werkzeug$wrappers$base_request(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "werkzeug.wrappers.base_request");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_41ece8fb0ff0bb9a25f92ba9ac0eb349;
static PyCodeObject *codeobj_ed7b3c1d53b0d44d46545b5b89d616f3;
static PyCodeObject *codeobj_68df28d2f0f96b24b8b7672eae75ae88;
static PyCodeObject *codeobj_5ed24e4067540a11fb8a6fbf87a38108;
static PyCodeObject *codeobj_6efca2aa50a03215be4d43bbf5a6692c;
static PyCodeObject *codeobj_66e25d2f0a7517fca8d806f83cf7b463;
static PyCodeObject *codeobj_acb340707f1e12ac17f7e81c21e0b6b4;
static PyCodeObject *codeobj_9349506d16afe3f549401b1b3de5874d;
static PyCodeObject *codeobj_6e8be7d499c0ad622c79943fe8b61ee7;
static PyCodeObject *codeobj_03c22cb2f0f75dfecbddf381d61c24a7;
static PyCodeObject *codeobj_bbf7747c1c99e6817f5d4b8014c79166;
static PyCodeObject *codeobj_219aacd768ec287d3b4c3dca85a74901;
static PyCodeObject *codeobj_b3434cb46ac3a4750b1651c15723f189;
static PyCodeObject *codeobj_b7fe59926da377ec6d0bac0c030b77e9;
static PyCodeObject *codeobj_6fb26fe79176c2a9ac1079f0f1f7914e;
static PyCodeObject *codeobj_c9042db0b0215ccc8af3bf840ffe217f;
static PyCodeObject *codeobj_e543a57f55cedf700d8453dbd4e708d1;
static PyCodeObject *codeobj_96b055438c5ddc595ba160a75bcf6558;
static PyCodeObject *codeobj_9297bead14d116f143d2897874bb6641;
static PyCodeObject *codeobj_faa15dd9c755b8b968ab25edd0472002;
static PyCodeObject *codeobj_dacc93f99bc0b8f92f364337fca7b729;
static PyCodeObject *codeobj_b21abc332f26df457e6a2389e1b4460e;
static PyCodeObject *codeobj_3d44682e97e32ee481fa5ed01ac87f48;
static PyCodeObject *codeobj_2ffa34d3514fccf9c5de22fc0943e2b4;
static PyCodeObject *codeobj_1dc2d3fa3809911f495f17781ddd50b4;
static PyCodeObject *codeobj_58ff57dc58f6db6214ccc8f599a08e30;
static PyCodeObject *codeobj_3d0605bd7c20f62517cda00d2a9ff209;
static PyCodeObject *codeobj_1650c9df050c3bcb9cab3ed1e2b93fce;
static PyCodeObject *codeobj_76bd3d0d3e1ae3d6c1344598119574ec;
static PyCodeObject *codeobj_5ed9de16426dfa3c643170eed02a712f;
static PyCodeObject *codeobj_5f83aaceb64c3c285467cccb2651be03;
static PyCodeObject *codeobj_a893eadaad47fd91480ec6de4821c427;
static PyCodeObject *codeobj_90109df2896f8d1dd44e7b8e96e4b5a4;
static PyCodeObject *codeobj_6cd26a69e0de87b1d40ba68ea3fbe9d8;
static PyCodeObject *codeobj_81fe6da42b96e0a6bdbedf95edc9cc3f;
static PyCodeObject *codeobj_5a2e5911c4a3108e8c0c77c7e655d541;
static PyCodeObject *codeobj_474f5eab6c32c350d9a76057b5ad0846;
static PyCodeObject *codeobj_108dc2f59460c774962e34b3e812b71b;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[149]; CHECK_OBJECT(module_filename_obj);
    codeobj_41ece8fb0ff0bb9a25f92ba9ac0eb349 = MAKE_CODEOBJECT(module_filename_obj, 646, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[261], mod_consts[286], NULL, 1, 0, 0);
    codeobj_ed7b3c1d53b0d44d46545b5b89d616f3 = MAKE_CODEOBJECT(module_filename_obj, 610, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[261], mod_consts[287], NULL, 1, 0, 0);
    codeobj_68df28d2f0f96b24b8b7672eae75ae88 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[288], NULL, NULL, 0, 0, 0);
    codeobj_5ed24e4067540a11fb8a6fbf87a38108 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_NOFREE, mod_consts[196], mod_consts[289], NULL, 0, 0, 0);
    codeobj_6efca2aa50a03215be4d43bbf5a6692c = MAKE_CODEOBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[286], NULL, 1, 0, 0);
    codeobj_66e25d2f0a7517fca8d806f83cf7b463 = MAKE_CODEOBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[290], NULL, 4, 0, 0);
    codeobj_acb340707f1e12ac17f7e81c21e0b6b4 = MAKE_CODEOBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[207], mod_consts[291], NULL, 4, 0, 0);
    codeobj_9349506d16afe3f549401b1b3de5874d = MAKE_CODEOBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[292], NULL, 1, 0, 0);
    codeobj_6e8be7d499c0ad622c79943fe8b61ee7 = MAKE_CODEOBJECT(module_filename_obj, 668, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[293], NULL, 1, 0, 0);
    codeobj_03c22cb2f0f75dfecbddf381d61c24a7 = MAKE_CODEOBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[294], NULL, 5, 0, 0);
    codeobj_bbf7747c1c99e6817f5d4b8014c79166 = MAKE_CODEOBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[295], NULL, 1, 0, 0);
    codeobj_219aacd768ec287d3b4c3dca85a74901 = MAKE_CODEOBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[296], NULL, 1, 0, 0);
    codeobj_b3434cb46ac3a4750b1651c15723f189 = MAKE_CODEOBJECT(module_filename_obj, 615, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[264], mod_consts[286], NULL, 1, 0, 0);
    codeobj_b7fe59926da377ec6d0bac0c030b77e9 = MAKE_CODEOBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[34], mod_consts[297], mod_consts[298], 0, 0, 0);
    codeobj_6fb26fe79176c2a9ac1079f0f1f7914e = MAKE_CODEOBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[299], NULL, 2, 0, 0);
    codeobj_c9042db0b0215ccc8af3bf840ffe217f = MAKE_CODEOBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[286], NULL, 1, 0, 0);
    codeobj_e543a57f55cedf700d8453dbd4e708d1 = MAKE_CODEOBJECT(module_filename_obj, 567, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[248], mod_consts[286], NULL, 1, 0, 0);
    codeobj_96b055438c5ddc595ba160a75bcf6558 = MAKE_CODEOBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[300], NULL, 1, 0, 0);
    codeobj_9297bead14d116f143d2897874bb6641 = MAKE_CODEOBJECT(module_filename_obj, 518, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[238], mod_consts[286], NULL, 1, 0, 0);
    codeobj_faa15dd9c755b8b968ab25edd0472002 = MAKE_CODEOBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[230], mod_consts[286], NULL, 1, 0, 0);
    codeobj_dacc93f99bc0b8f92f364337fca7b729 = MAKE_CODEOBJECT(module_filename_obj, 495, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[286], NULL, 1, 0, 0);
    codeobj_b21abc332f26df457e6a2389e1b4460e = MAKE_CODEOBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[286], NULL, 1, 0, 0);
    codeobj_3d44682e97e32ee481fa5ed01ac87f48 = MAKE_CODEOBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[214], mod_consts[301], NULL, 1, 0, 0);
    codeobj_2ffa34d3514fccf9c5de22fc0943e2b4 = MAKE_CODEOBJECT(module_filename_obj, 547, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[243], mod_consts[286], NULL, 1, 0, 0);
    codeobj_1dc2d3fa3809911f495f17781ddd50b4 = MAKE_CODEOBJECT(module_filename_obj, 428, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[302], NULL, 4, 0, 0);
    codeobj_58ff57dc58f6db6214ccc8f599a08e30 = MAKE_CODEOBJECT(module_filename_obj, 529, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[240], mod_consts[286], NULL, 1, 0, 0);
    codeobj_3d0605bd7c20f62517cda00d2a9ff209 = MAKE_CODEOBJECT(module_filename_obj, 593, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[254], mod_consts[286], NULL, 1, 0, 0);
    codeobj_1650c9df050c3bcb9cab3ed1e2b93fce = MAKE_CODEOBJECT(module_filename_obj, 584, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[286], NULL, 1, 0, 0);
    codeobj_76bd3d0d3e1ae3d6c1344598119574ec = MAKE_CODEOBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[286], NULL, 1, 0, 0);
    codeobj_5ed9de16426dfa3c643170eed02a712f = MAKE_CODEOBJECT(module_filename_obj, 536, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[303], NULL, 1, 0, 0);
    codeobj_5f83aaceb64c3c285467cccb2651be03 = MAKE_CODEOBJECT(module_filename_obj, 628, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[266], mod_consts[286], NULL, 1, 0, 0);
    codeobj_a893eadaad47fd91480ec6de4821c427 = MAKE_CODEOBJECT(module_filename_obj, 552, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[245], mod_consts[303], NULL, 1, 0, 0);
    codeobj_90109df2896f8d1dd44e7b8e96e4b5a4 = MAKE_CODEOBJECT(module_filename_obj, 363, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[286], NULL, 1, 0, 0);
    codeobj_6cd26a69e0de87b1d40ba68ea3fbe9d8 = MAKE_CODEOBJECT(module_filename_obj, 560, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[286], NULL, 1, 0, 0);
    codeobj_81fe6da42b96e0a6bdbedf95edc9cc3f = MAKE_CODEOBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[286], NULL, 1, 0, 0);
    codeobj_5a2e5911c4a3108e8c0c77c7e655d541 = MAKE_CODEOBJECT(module_filename_obj, 576, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[250], mod_consts[286], NULL, 1, 0, 0);
    codeobj_474f5eab6c32c350d9a76057b5ad0846 = MAKE_CODEOBJECT(module_filename_obj, 484, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[235], mod_consts[304], NULL, 1, 0, 0);
    codeobj_108dc2f59460c774962e34b3e812b71b = MAKE_CODEOBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[286], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__10__get_stream_for_parsing();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__11_close();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__12___enter__();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__13___exit__();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__14_stream();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__15_args();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__16_data();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__17_get_data(PyObject *defaults);


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__18_form();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__19_values();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__20_files();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__21_cookies();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__22_headers();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__23_path();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__24_full_path();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__25_script_root();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__26_url();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__27_base_url();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__28_url_root();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__29_host_url();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__2___repr__();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__30_host();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__31_lambda();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__32_access_route();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__33_remote_addr();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__34_lambda();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__35__assert_not_shallow();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__3_url_charset();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__4_from_values();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__5_application();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__5_application$$$function__1_application(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__6__get_file_stream(PyObject *defaults);


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__7_want_form_data_parsed();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__8_make_form_data_parser();


static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__9__load_form_data();


// The module function definitions.
static PyObject *impl_werkzeug$wrappers$base_request$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_environ = python_pars[1];
    PyObject *par_populate_request = python_pars[2];
    PyObject *par_shallow = python_pars[3];
    struct Nuitka_FrameObject *frame_acb340707f1e12ac17f7e81c21e0b6b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_acb340707f1e12ac17f7e81c21e0b6b4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_acb340707f1e12ac17f7e81c21e0b6b4)) {
        Py_XDECREF(cache_frame_acb340707f1e12ac17f7e81c21e0b6b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_acb340707f1e12ac17f7e81c21e0b6b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_acb340707f1e12ac17f7e81c21e0b6b4 = MAKE_FUNCTION_FRAME(codeobj_acb340707f1e12ac17f7e81c21e0b6b4, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_acb340707f1e12ac17f7e81c21e0b6b4->m_type_description == NULL);
    frame_acb340707f1e12ac17f7e81c21e0b6b4 = cache_frame_acb340707f1e12ac17f7e81c21e0b6b4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_acb340707f1e12ac17f7e81c21e0b6b4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_acb340707f1e12ac17f7e81c21e0b6b4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_environ);
        tmp_assattr_name_1 = par_environ;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_populate_request);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_populate_request);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_shallow);
        tmp_operand_name_1 = par_shallow;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_ass_subvalue_1 = par_self;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[1];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_shallow);
        tmp_assattr_name_2 = par_shallow;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[3], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_acb340707f1e12ac17f7e81c21e0b6b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_acb340707f1e12ac17f7e81c21e0b6b4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_acb340707f1e12ac17f7e81c21e0b6b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_acb340707f1e12ac17f7e81c21e0b6b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_acb340707f1e12ac17f7e81c21e0b6b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_acb340707f1e12ac17f7e81c21e0b6b4,
        type_description_1,
        par_self,
        par_environ,
        par_populate_request,
        par_shallow
    );


    // Release cached frame if used for exception.
    if (frame_acb340707f1e12ac17f7e81c21e0b6b4 == cache_frame_acb340707f1e12ac17f7e81c21e0b6b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_acb340707f1e12ac17f7e81c21e0b6b4);
        cache_frame_acb340707f1e12ac17f7e81c21e0b6b4 = NULL;
    }

    assertFrameObject(frame_acb340707f1e12ac17f7e81c21e0b6b4);

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
    CHECK_OBJECT(par_environ);
    Py_DECREF(par_environ);
    par_environ = NULL;
    CHECK_OBJECT(par_populate_request);
    Py_DECREF(par_populate_request);
    par_populate_request = NULL;
    CHECK_OBJECT(par_shallow);
    Py_DECREF(par_shallow);
    par_shallow = NULL;
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
    CHECK_OBJECT(par_environ);
    Py_DECREF(par_environ);
    par_environ = NULL;
    CHECK_OBJECT(par_populate_request);
    Py_DECREF(par_populate_request);
    par_populate_request = NULL;
    CHECK_OBJECT(par_shallow);
    Py_DECREF(par_shallow);
    par_shallow = NULL;
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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__2___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_args = NULL;
    struct Nuitka_FrameObject *frame_9349506d16afe3f549401b1b3de5874d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9349506d16afe3f549401b1b3de5874d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_args == NULL);
        var_args = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_9349506d16afe3f549401b1b3de5874d)) {
        Py_XDECREF(cache_frame_9349506d16afe3f549401b1b3de5874d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9349506d16afe3f549401b1b3de5874d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9349506d16afe3f549401b1b3de5874d = MAKE_FUNCTION_FRAME(codeobj_9349506d16afe3f549401b1b3de5874d, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9349506d16afe3f549401b1b3de5874d->m_type_description == NULL);
    frame_9349506d16afe3f549401b1b3de5874d = cache_frame_9349506d16afe3f549401b1b3de5874d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9349506d16afe3f549401b1b3de5874d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9349506d16afe3f549401b1b3de5874d) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(var_args);
        tmp_expression_name_1 = var_args;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_left_name_1 = mod_consts[5];
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 163;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 163;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_name_3 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[8]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 163;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_9349506d16afe3f549401b1b3de5874d->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 163;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 163;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_9349506d16afe3f549401b1b3de5874d->m_frame.f_lineno = 163;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_expression_name_5;
        if (var_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_name_4 = var_args;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[4]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_left_name_2 = mod_consts[10];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_name_5 = par_self;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[11]);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 164;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 164;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_9349506d16afe3f549401b1b3de5874d->m_frame.f_lineno = 164;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_9349506d16afe3f549401b1b3de5874d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_9349506d16afe3f549401b1b3de5874d, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        if (var_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_called_instance_1 = var_args;
        frame_9349506d16afe3f549401b1b3de5874d->m_frame.f_lineno = 166;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[4],
            &PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 162;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9349506d16afe3f549401b1b3de5874d->m_frame) frame_9349506d16afe3f549401b1b3de5874d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        tmp_left_name_3 = mod_consts[13];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_7);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[14]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_expression_name_8;
            PyObject *tmp_args_element_name_5;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_1);
            tmp_expression_name_8 = mod_consts[15];
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[16]);
            assert(!(tmp_called_name_4 == NULL));
            if (var_args == NULL) {
                Py_DECREF(tmp_called_name_4);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 168;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }

            tmp_args_element_name_5 = var_args;
            frame_9349506d16afe3f549401b1b3de5874d->m_frame.f_lineno = 168;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9349506d16afe3f549401b1b3de5874d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9349506d16afe3f549401b1b3de5874d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9349506d16afe3f549401b1b3de5874d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9349506d16afe3f549401b1b3de5874d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9349506d16afe3f549401b1b3de5874d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9349506d16afe3f549401b1b3de5874d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9349506d16afe3f549401b1b3de5874d,
        type_description_1,
        par_self,
        var_args
    );


    // Release cached frame if used for exception.
    if (frame_9349506d16afe3f549401b1b3de5874d == cache_frame_9349506d16afe3f549401b1b3de5874d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9349506d16afe3f549401b1b3de5874d);
        cache_frame_9349506d16afe3f549401b1b3de5874d = NULL;
    }

    assertFrameObject(frame_9349506d16afe3f549401b1b3de5874d);

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
    Py_XDECREF(var_args);
    var_args = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__3_url_charset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_81fe6da42b96e0a6bdbedf95edc9cc3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81fe6da42b96e0a6bdbedf95edc9cc3f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_81fe6da42b96e0a6bdbedf95edc9cc3f)) {
        Py_XDECREF(cache_frame_81fe6da42b96e0a6bdbedf95edc9cc3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81fe6da42b96e0a6bdbedf95edc9cc3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81fe6da42b96e0a6bdbedf95edc9cc3f = MAKE_FUNCTION_FRAME(codeobj_81fe6da42b96e0a6bdbedf95edc9cc3f, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_81fe6da42b96e0a6bdbedf95edc9cc3f->m_type_description == NULL);
    frame_81fe6da42b96e0a6bdbedf95edc9cc3f = cache_frame_81fe6da42b96e0a6bdbedf95edc9cc3f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_81fe6da42b96e0a6bdbedf95edc9cc3f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_81fe6da42b96e0a6bdbedf95edc9cc3f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_81fe6da42b96e0a6bdbedf95edc9cc3f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_81fe6da42b96e0a6bdbedf95edc9cc3f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_81fe6da42b96e0a6bdbedf95edc9cc3f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81fe6da42b96e0a6bdbedf95edc9cc3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81fe6da42b96e0a6bdbedf95edc9cc3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81fe6da42b96e0a6bdbedf95edc9cc3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81fe6da42b96e0a6bdbedf95edc9cc3f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_81fe6da42b96e0a6bdbedf95edc9cc3f == cache_frame_81fe6da42b96e0a6bdbedf95edc9cc3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_81fe6da42b96e0a6bdbedf95edc9cc3f);
        cache_frame_81fe6da42b96e0a6bdbedf95edc9cc3f = NULL;
    }

    assertFrameObject(frame_81fe6da42b96e0a6bdbedf95edc9cc3f);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__4_from_values(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_EnvironBuilder = NULL;
    PyObject *var_charset = NULL;
    PyObject *var_builder = NULL;
    struct Nuitka_FrameObject *frame_3d44682e97e32ee481fa5ed01ac87f48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_3d44682e97e32ee481fa5ed01ac87f48 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3d44682e97e32ee481fa5ed01ac87f48)) {
        Py_XDECREF(cache_frame_3d44682e97e32ee481fa5ed01ac87f48);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d44682e97e32ee481fa5ed01ac87f48 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d44682e97e32ee481fa5ed01ac87f48 = MAKE_FUNCTION_FRAME(codeobj_3d44682e97e32ee481fa5ed01ac87f48, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3d44682e97e32ee481fa5ed01ac87f48->m_type_description == NULL);
    frame_3d44682e97e32ee481fa5ed01ac87f48 = cache_frame_3d44682e97e32ee481fa5ed01ac87f48;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3d44682e97e32ee481fa5ed01ac87f48);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3d44682e97e32ee481fa5ed01ac87f48) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[19];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[20];
        tmp_level_name_1 = mod_consts[21];
        frame_3d44682e97e32ee481fa5ed01ac87f48->m_frame.f_lineno = 198;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[22],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_EnvironBuilder == NULL);
        var_EnvironBuilder = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_name_1 = par_kwargs;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[24]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[17];
        CHECK_OBJECT(par_cls);
        tmp_expression_name_2 = par_cls;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_3d44682e97e32ee481fa5ed01ac87f48->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_charset == NULL);
        var_charset = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_charset);
        tmp_ass_subvalue_1 = var_charset;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = par_kwargs;
        tmp_ass_subscript_1 = mod_consts[17];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_EnvironBuilder);
        tmp_dircall_arg1_1 = var_EnvironBuilder;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_3 = impl___main__$$$function__1_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_builder == NULL);
        var_builder = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_builder);
        tmp_expression_name_3 = var_builder;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[26]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_cls == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_3 = par_cls;
        frame_3d44682e97e32ee481fa5ed01ac87f48->m_frame.f_lineno = 204;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (var_builder == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = var_builder;
        frame_3d44682e97e32ee481fa5ed01ac87f48->m_frame.f_lineno = 206;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[29]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_3d44682e97e32ee481fa5ed01ac87f48, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_3d44682e97e32ee481fa5ed01ac87f48, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (var_builder == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_2 = var_builder;
        frame_3d44682e97e32ee481fa5ed01ac87f48->m_frame.f_lineno = 206;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[29]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 203;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3d44682e97e32ee481fa5ed01ac87f48->m_frame) frame_3d44682e97e32ee481fa5ed01ac87f48->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3d44682e97e32ee481fa5ed01ac87f48);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3d44682e97e32ee481fa5ed01ac87f48);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3d44682e97e32ee481fa5ed01ac87f48);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3d44682e97e32ee481fa5ed01ac87f48, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d44682e97e32ee481fa5ed01ac87f48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d44682e97e32ee481fa5ed01ac87f48, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d44682e97e32ee481fa5ed01ac87f48,
        type_description_1,
        par_cls,
        par_args,
        par_kwargs,
        var_EnvironBuilder,
        var_charset,
        var_builder
    );


    // Release cached frame if used for exception.
    if (frame_3d44682e97e32ee481fa5ed01ac87f48 == cache_frame_3d44682e97e32ee481fa5ed01ac87f48) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3d44682e97e32ee481fa5ed01ac87f48);
        cache_frame_3d44682e97e32ee481fa5ed01ac87f48 = NULL;
    }

    assertFrameObject(frame_3d44682e97e32ee481fa5ed01ac87f48);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_cls);
    par_cls = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_EnvironBuilder);
    Py_DECREF(var_EnvironBuilder);
    var_EnvironBuilder = NULL;
    CHECK_OBJECT(var_charset);
    Py_DECREF(var_charset);
    var_charset = NULL;
    Py_XDECREF(var_builder);
    var_builder = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_cls);
    par_cls = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_EnvironBuilder);
    var_EnvironBuilder = NULL;
    Py_XDECREF(var_charset);
    var_charset = NULL;
    Py_XDECREF(var_builder);
    var_builder = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__5_application(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *var_HTTPException = Nuitka_Cell_Empty();
    PyObject *var_application = NULL;
    struct Nuitka_FrameObject *frame_6fb26fe79176c2a9ac1079f0f1f7914e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6fb26fe79176c2a9ac1079f0f1f7914e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6fb26fe79176c2a9ac1079f0f1f7914e)) {
        Py_XDECREF(cache_frame_6fb26fe79176c2a9ac1079f0f1f7914e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fb26fe79176c2a9ac1079f0f1f7914e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fb26fe79176c2a9ac1079f0f1f7914e = MAKE_FUNCTION_FRAME(codeobj_6fb26fe79176c2a9ac1079f0f1f7914e, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6fb26fe79176c2a9ac1079f0f1f7914e->m_type_description == NULL);
    frame_6fb26fe79176c2a9ac1079f0f1f7914e = cache_frame_6fb26fe79176c2a9ac1079f0f1f7914e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6fb26fe79176c2a9ac1079f0f1f7914e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6fb26fe79176c2a9ac1079f0f1f7914e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[31];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[32];
        tmp_level_name_1 = mod_consts[21];
        frame_6fb26fe79176c2a9ac1079f0f1f7914e->m_frame.f_lineno = 232;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[33],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[33]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_HTTPException) == NULL);
        PyCell_SET(var_HTTPException, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = var_HTTPException;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_cls;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_f;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_2 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__5_application$$$function__1_application(tmp_closure_1);

        assert(var_application == NULL);
        var_application = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_application);
        tmp_args_element_name_1 = var_application;
        if (Nuitka_Cell_GET(par_f) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 243;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = Nuitka_Cell_GET(par_f);
        frame_6fb26fe79176c2a9ac1079f0f1f7914e->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fb26fe79176c2a9ac1079f0f1f7914e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fb26fe79176c2a9ac1079f0f1f7914e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fb26fe79176c2a9ac1079f0f1f7914e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6fb26fe79176c2a9ac1079f0f1f7914e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fb26fe79176c2a9ac1079f0f1f7914e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fb26fe79176c2a9ac1079f0f1f7914e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fb26fe79176c2a9ac1079f0f1f7914e,
        type_description_1,
        par_cls,
        par_f,
        var_HTTPException,
        var_application
    );


    // Release cached frame if used for exception.
    if (frame_6fb26fe79176c2a9ac1079f0f1f7914e == cache_frame_6fb26fe79176c2a9ac1079f0f1f7914e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6fb26fe79176c2a9ac1079f0f1f7914e);
        cache_frame_6fb26fe79176c2a9ac1079f0f1f7914e = NULL;
    }

    assertFrameObject(frame_6fb26fe79176c2a9ac1079f0f1f7914e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    par_cls = NULL;
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    par_f = NULL;
    CHECK_OBJECT(var_HTTPException);
    Py_DECREF(var_HTTPException);
    var_HTTPException = NULL;
    CHECK_OBJECT(var_application);
    Py_DECREF(var_application);
    var_application = NULL;
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

    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    par_cls = NULL;
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    par_f = NULL;
    CHECK_OBJECT(var_HTTPException);
    Py_DECREF(var_HTTPException);
    var_HTTPException = NULL;
    Py_XDECREF(var_application);
    var_application = NULL;
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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__5_application$$$function__1_application(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *var_request = NULL;
    PyObject *var_resp = NULL;
    PyObject *var_e = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_b7fe59926da377ec6d0bac0c030b77e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_b7fe59926da377ec6d0bac0c030b77e9 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b7fe59926da377ec6d0bac0c030b77e9)) {
        Py_XDECREF(cache_frame_b7fe59926da377ec6d0bac0c030b77e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b7fe59926da377ec6d0bac0c030b77e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b7fe59926da377ec6d0bac0c030b77e9 = MAKE_FUNCTION_FRAME(codeobj_b7fe59926da377ec6d0bac0c030b77e9, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b7fe59926da377ec6d0bac0c030b77e9->m_type_description == NULL);
    frame_b7fe59926da377ec6d0bac0c030b77e9 = cache_frame_b7fe59926da377ec6d0bac0c030b77e9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b7fe59926da377ec6d0bac0c030b77e9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b7fe59926da377ec6d0bac0c030b77e9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 235;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_args);
        tmp_expression_name_1 = par_args;
        tmp_subscript_name_1 = mod_consts[39];
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, -2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame.f_lineno = 235;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_request == NULL);
        var_request = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(var_request);
        tmp_assign_source_2 = var_request;
        assert(tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_2);
        tmp_with_1__source = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_2 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL(tmp_expression_name_2, mod_consts[40]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooccc";
            goto try_except_handler_2;
        }
        frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame.f_lineno = 236;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        Py_DECREF(tmp_called_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooccc";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_3 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL(tmp_expression_name_3, mod_consts[41]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooccc";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 238;
            type_description_1 = "ooooccc";
            goto try_except_handler_5;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_args);
        tmp_expression_name_4 = par_args;
        tmp_subscript_name_2 = mod_consts[42];
        tmp_left_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooccc";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_request);
        tmp_tuple_element_1 = var_request;
        tmp_right_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_right_name_1, 0, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooccc";
            goto try_except_handler_5;
        }
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_6 = impl___main__$$$function__7_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooccc";
            goto try_except_handler_5;
        }
        assert(var_resp == NULL);
        var_resp = tmp_assign_source_6;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b7fe59926da377ec6d0bac0c030b77e9, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b7fe59926da377ec6d0bac0c030b77e9, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "ooooccc";
            goto try_except_handler_6;
        }

        tmp_compexpr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooccc";
            goto try_except_handler_6;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_e = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_e);
        tmp_expression_name_5 = var_e;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[43]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooccc";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(par_args);
        tmp_expression_name_6 = par_args;
        tmp_subscript_name_3 = mod_consts[39];
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_3, -2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 240;
            type_description_1 = "ooooccc";
            goto try_except_handler_7;
        }
        frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame.f_lineno = 240;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooccc";
            goto try_except_handler_7;
        }
        assert(var_resp == NULL);
        var_resp = tmp_assign_source_8;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_6;
    // End of try:
    try_end_2:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 237;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame) frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooccc";
    goto try_except_handler_6;
    branch_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_4;
        if (var_resp == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 241;
            type_description_1 = "ooooccc";
            goto try_except_handler_4;
        }

        tmp_dircall_arg1_2 = var_resp;
        CHECK_OBJECT(par_args);
        tmp_expression_name_7 = par_args;
        tmp_subscript_name_4 = mod_consts[45];
        tmp_dircall_arg2_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_4);
        if (tmp_dircall_arg2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooccc";
            goto try_except_handler_4;
        }
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooccc";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_b7fe59926da377ec6d0bac0c030b77e9, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_b7fe59926da377ec6d0bac0c030b77e9, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_4, exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_4 = tmp_with_1__exit;
        tmp_args_element_name_3 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_4 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_5 = EXC_TRACEBACK(PyThreadState_GET());
        frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooccc";
            goto try_except_handler_8;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooccc";
            goto try_except_handler_8;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 241;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame) frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooccc";
    goto try_except_handler_8;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 236;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame) frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooccc";
    goto try_except_handler_8;
    branch_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Return handler code:
    try_return_handler_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_5 = tmp_with_1__exit;
        frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame.f_lineno = 241;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, &PyTuple_GET_ITEM(mod_consts[46], 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_6 = tmp_with_1__exit;
        frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame.f_lineno = 241;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_6, &PyTuple_GET_ITEM(mod_consts[46], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_6);
            Py_XDECREF(exception_keeper_value_6);
            Py_XDECREF(exception_keeper_tb_6);

            exception_lineno = 241;
            type_description_1 = "ooooccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_5 = tmp_with_1__indicator;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_7 = tmp_with_1__exit;
        frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame.f_lineno = 241;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, &PyTuple_GET_ITEM(mod_consts[46], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_6:;
    goto try_end_7;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b7fe59926da377ec6d0bac0c030b77e9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b7fe59926da377ec6d0bac0c030b77e9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b7fe59926da377ec6d0bac0c030b77e9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7fe59926da377ec6d0bac0c030b77e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7fe59926da377ec6d0bac0c030b77e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7fe59926da377ec6d0bac0c030b77e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b7fe59926da377ec6d0bac0c030b77e9,
        type_description_1,
        par_args,
        var_request,
        var_resp,
        var_e,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b7fe59926da377ec6d0bac0c030b77e9 == cache_frame_b7fe59926da377ec6d0bac0c030b77e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b7fe59926da377ec6d0bac0c030b77e9);
        cache_frame_b7fe59926da377ec6d0bac0c030b77e9 = NULL;
    }

    assertFrameObject(frame_b7fe59926da377ec6d0bac0c030b77e9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(var_request);
    Py_DECREF(var_request);
    var_request = NULL;
    Py_XDECREF(var_resp);
    var_resp = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    Py_XDECREF(var_request);
    var_request = NULL;
    Py_XDECREF(var_resp);
    var_resp = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__6__get_file_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_total_content_length = python_pars[1];
    PyObject *par_content_type = python_pars[2];
    PyObject *par_filename = python_pars[3];
    PyObject *par_content_length = python_pars[4];
    struct Nuitka_FrameObject *frame_03c22cb2f0f75dfecbddf381d61c24a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_03c22cb2f0f75dfecbddf381d61c24a7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_03c22cb2f0f75dfecbddf381d61c24a7)) {
        Py_XDECREF(cache_frame_03c22cb2f0f75dfecbddf381d61c24a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_03c22cb2f0f75dfecbddf381d61c24a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_03c22cb2f0f75dfecbddf381d61c24a7 = MAKE_FUNCTION_FRAME(codeobj_03c22cb2f0f75dfecbddf381d61c24a7, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_03c22cb2f0f75dfecbddf381d61c24a7->m_type_description == NULL);
    frame_03c22cb2f0f75dfecbddf381d61c24a7 = cache_frame_03c22cb2f0f75dfecbddf381d61c24a7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_03c22cb2f0f75dfecbddf381d61c24a7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_03c22cb2f0f75dfecbddf381d61c24a7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[48];
        CHECK_OBJECT(par_total_content_length);
        tmp_dict_value_1 = par_total_content_length;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[49];
        CHECK_OBJECT(par_filename);
        tmp_dict_value_1 = par_filename;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[50];
        CHECK_OBJECT(par_content_type);
        tmp_dict_value_1 = par_content_type;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[51];
        CHECK_OBJECT(par_content_length);
        tmp_dict_value_1 = par_content_length;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_03c22cb2f0f75dfecbddf381d61c24a7->m_frame.f_lineno = 267;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_03c22cb2f0f75dfecbddf381d61c24a7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_03c22cb2f0f75dfecbddf381d61c24a7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_03c22cb2f0f75dfecbddf381d61c24a7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_03c22cb2f0f75dfecbddf381d61c24a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03c22cb2f0f75dfecbddf381d61c24a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03c22cb2f0f75dfecbddf381d61c24a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_03c22cb2f0f75dfecbddf381d61c24a7,
        type_description_1,
        par_self,
        par_total_content_length,
        par_content_type,
        par_filename,
        par_content_length
    );


    // Release cached frame if used for exception.
    if (frame_03c22cb2f0f75dfecbddf381d61c24a7 == cache_frame_03c22cb2f0f75dfecbddf381d61c24a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_03c22cb2f0f75dfecbddf381d61c24a7);
        cache_frame_03c22cb2f0f75dfecbddf381d61c24a7 = NULL;
    }

    assertFrameObject(frame_03c22cb2f0f75dfecbddf381d61c24a7);

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
    CHECK_OBJECT(par_total_content_length);
    Py_DECREF(par_total_content_length);
    par_total_content_length = NULL;
    CHECK_OBJECT(par_content_type);
    Py_DECREF(par_content_type);
    par_content_type = NULL;
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    par_filename = NULL;
    CHECK_OBJECT(par_content_length);
    Py_DECREF(par_content_length);
    par_content_length = NULL;
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
    CHECK_OBJECT(par_total_content_length);
    Py_DECREF(par_total_content_length);
    par_total_content_length = NULL;
    CHECK_OBJECT(par_content_type);
    Py_DECREF(par_content_type);
    par_content_type = NULL;
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    par_filename = NULL;
    CHECK_OBJECT(par_content_length);
    Py_DECREF(par_content_length);
    par_content_length = NULL;
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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__7_want_form_data_parsed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_108dc2f59460c774962e34b3e812b71b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_108dc2f59460c774962e34b3e812b71b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_108dc2f59460c774962e34b3e812b71b)) {
        Py_XDECREF(cache_frame_108dc2f59460c774962e34b3e812b71b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_108dc2f59460c774962e34b3e812b71b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_108dc2f59460c774962e34b3e812b71b = MAKE_FUNCTION_FRAME(codeobj_108dc2f59460c774962e34b3e812b71b, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_108dc2f59460c774962e34b3e812b71b->m_type_description == NULL);
    frame_108dc2f59460c774962e34b3e812b71b = cache_frame_108dc2f59460c774962e34b3e812b71b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_108dc2f59460c774962e34b3e812b71b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_108dc2f59460c774962e34b3e812b71b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_108dc2f59460c774962e34b3e812b71b->m_frame.f_lineno = 281;
        tmp_value_name_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[53],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_108dc2f59460c774962e34b3e812b71b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_108dc2f59460c774962e34b3e812b71b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_108dc2f59460c774962e34b3e812b71b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_108dc2f59460c774962e34b3e812b71b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_108dc2f59460c774962e34b3e812b71b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_108dc2f59460c774962e34b3e812b71b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_108dc2f59460c774962e34b3e812b71b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_108dc2f59460c774962e34b3e812b71b == cache_frame_108dc2f59460c774962e34b3e812b71b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_108dc2f59460c774962e34b3e812b71b);
        cache_frame_108dc2f59460c774962e34b3e812b71b = NULL;
    }

    assertFrameObject(frame_108dc2f59460c774962e34b3e812b71b);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__8_make_form_data_parser(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_76bd3d0d3e1ae3d6c1344598119574ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_76bd3d0d3e1ae3d6c1344598119574ec = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_76bd3d0d3e1ae3d6c1344598119574ec)) {
        Py_XDECREF(cache_frame_76bd3d0d3e1ae3d6c1344598119574ec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76bd3d0d3e1ae3d6c1344598119574ec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76bd3d0d3e1ae3d6c1344598119574ec = MAKE_FUNCTION_FRAME(codeobj_76bd3d0d3e1ae3d6c1344598119574ec, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_76bd3d0d3e1ae3d6c1344598119574ec->m_type_description == NULL);
    frame_76bd3d0d3e1ae3d6c1344598119574ec = cache_frame_76bd3d0d3e1ae3d6c1344598119574ec;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_76bd3d0d3e1ae3d6c1344598119574ec);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_76bd3d0d3e1ae3d6c1344598119574ec) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[56]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[57]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 290;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[17]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 292;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[58]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 292;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[59]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[60]);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 294;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[61]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_5);

            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_76bd3d0d3e1ae3d6c1344598119574ec->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76bd3d0d3e1ae3d6c1344598119574ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_76bd3d0d3e1ae3d6c1344598119574ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76bd3d0d3e1ae3d6c1344598119574ec);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_76bd3d0d3e1ae3d6c1344598119574ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76bd3d0d3e1ae3d6c1344598119574ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76bd3d0d3e1ae3d6c1344598119574ec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76bd3d0d3e1ae3d6c1344598119574ec,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_76bd3d0d3e1ae3d6c1344598119574ec == cache_frame_76bd3d0d3e1ae3d6c1344598119574ec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_76bd3d0d3e1ae3d6c1344598119574ec);
        cache_frame_76bd3d0d3e1ae3d6c1344598119574ec = NULL;
    }

    assertFrameObject(frame_76bd3d0d3e1ae3d6c1344598119574ec);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__9__load_form_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_content_type = NULL;
    PyObject *var_content_length = NULL;
    PyObject *var_mimetype = NULL;
    PyObject *var_options = NULL;
    PyObject *var_parser = NULL;
    PyObject *var_data = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_219aacd768ec287d3b4c3dca85a74901;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
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
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_219aacd768ec287d3b4c3dca85a74901 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_219aacd768ec287d3b4c3dca85a74901)) {
        Py_XDECREF(cache_frame_219aacd768ec287d3b4c3dca85a74901);

#if _DEBUG_REFCOUNTS
        if (cache_frame_219aacd768ec287d3b4c3dca85a74901 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_219aacd768ec287d3b4c3dca85a74901 = MAKE_FUNCTION_FRAME(codeobj_219aacd768ec287d3b4c3dca85a74901, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_219aacd768ec287d3b4c3dca85a74901->m_type_description == NULL);
    frame_219aacd768ec287d3b4c3dca85a74901 = cache_frame_219aacd768ec287d3b4c3dca85a74901;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_219aacd768ec287d3b4c3dca85a74901);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_219aacd768ec287d3b4c3dca85a74901) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        tmp_compexpr_left_1 = mod_consts[63];
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_name_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
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
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 311;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_self;
        frame_219aacd768ec287d3b4c3dca85a74901->m_frame.f_lineno = 311;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 313;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[65]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 313;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_219aacd768ec287d3b4c3dca85a74901->m_frame.f_lineno = 314;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[53],
            &PyTuple_GET_ITEM(mod_consts[66], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_content_type == NULL);
        var_content_type = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[0]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_219aacd768ec287d3b4c3dca85a74901->m_frame.f_lineno = 315;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_content_length == NULL);
        var_content_length = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_content_type);
        tmp_args_element_name_3 = var_content_type;
        frame_219aacd768ec287d3b4c3dca85a74901->m_frame.f_lineno = 316;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 316;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 316;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 316;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[69];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 316;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_mimetype == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_mimetype = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_options == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_options = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 317;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_self;
        frame_219aacd768ec287d3b4c3dca85a74901->m_frame.f_lineno = 317;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[70]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parser == NULL);
        var_parser = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(var_parser);
        tmp_expression_name_5 = var_parser;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[71]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 319;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_self;
        frame_219aacd768ec287d3b4c3dca85a74901->m_frame.f_lineno = 319;
        tmp_args_element_name_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[72]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 319;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mimetype);
        tmp_args_element_name_5 = var_mimetype;
        CHECK_OBJECT(var_content_length);
        tmp_args_element_name_6 = var_content_length;
        CHECK_OBJECT(var_options);
        tmp_args_element_name_7 = var_options;
        frame_219aacd768ec287d3b4c3dca85a74901->m_frame.f_lineno = 318;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_9;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 323;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[73]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = PyTuple_New(3);
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_called_instance_5;
            PyTuple_SET_ITEM(tmp_assign_source_10, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 324;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_4 = par_self;
            frame_219aacd768ec287d3b4c3dca85a74901->m_frame.f_lineno = 324;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[61]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 1, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 325;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_5 = par_self;
            frame_219aacd768ec287d3b4c3dca85a74901->m_frame.f_lineno = 325;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[61]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_data == NULL);
        var_data = tmp_assign_source_10;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_name_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 330;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_name_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_data);
        tmp_iter_arg_2 = var_data;
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_3, 0, 3);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 331;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_4, 1, 3);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 331;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_5, 2, 3);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 331;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 331;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[74];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 331;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_ass_subvalue_1 = tmp_tuple_unpack_2__element_1;
        CHECK_OBJECT(var_d);
        tmp_ass_subscribed_1 = var_d;
        tmp_ass_subscript_1 = mod_consts[73];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_ass_subvalue_2 = tmp_tuple_unpack_2__element_2;
        if (var_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 331;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_2 = var_d;
        tmp_ass_subscript_2 = mod_consts[63];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_ass_subvalue_3 = tmp_tuple_unpack_2__element_3;
        if (var_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 331;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_3 = var_d;
        tmp_ass_subscript_3 = mod_consts[76];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_219aacd768ec287d3b4c3dca85a74901);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_219aacd768ec287d3b4c3dca85a74901);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_219aacd768ec287d3b4c3dca85a74901);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_219aacd768ec287d3b4c3dca85a74901, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_219aacd768ec287d3b4c3dca85a74901->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_219aacd768ec287d3b4c3dca85a74901, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_219aacd768ec287d3b4c3dca85a74901,
        type_description_1,
        par_self,
        var_content_type,
        var_content_length,
        var_mimetype,
        var_options,
        var_parser,
        var_data,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_219aacd768ec287d3b4c3dca85a74901 == cache_frame_219aacd768ec287d3b4c3dca85a74901) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_219aacd768ec287d3b4c3dca85a74901);
        cache_frame_219aacd768ec287d3b4c3dca85a74901 = NULL;
    }

    assertFrameObject(frame_219aacd768ec287d3b4c3dca85a74901);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_content_type);
    var_content_type = NULL;
    Py_XDECREF(var_content_length);
    var_content_length = NULL;
    Py_XDECREF(var_mimetype);
    var_mimetype = NULL;
    Py_XDECREF(var_options);
    var_options = NULL;
    Py_XDECREF(var_parser);
    var_parser = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_content_type);
    var_content_type = NULL;
    Py_XDECREF(var_content_length);
    var_content_length = NULL;
    Py_XDECREF(var_mimetype);
    var_mimetype = NULL;
    Py_XDECREF(var_options);
    var_options = NULL;
    Py_XDECREF(var_parser);
    var_parser = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__10__get_stream_for_parsing(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_cached_data = NULL;
    struct Nuitka_FrameObject *frame_bbf7747c1c99e6817f5d4b8014c79166;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bbf7747c1c99e6817f5d4b8014c79166 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bbf7747c1c99e6817f5d4b8014c79166)) {
        Py_XDECREF(cache_frame_bbf7747c1c99e6817f5d4b8014c79166);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bbf7747c1c99e6817f5d4b8014c79166 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bbf7747c1c99e6817f5d4b8014c79166 = MAKE_FUNCTION_FRAME(codeobj_bbf7747c1c99e6817f5d4b8014c79166, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bbf7747c1c99e6817f5d4b8014c79166->m_type_description == NULL);
    frame_bbf7747c1c99e6817f5d4b8014c79166 = cache_frame_bbf7747c1c99e6817f5d4b8014c79166;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bbf7747c1c99e6817f5d4b8014c79166);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bbf7747c1c99e6817f5d4b8014c79166) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_getattr_target_1 = par_self;
        tmp_getattr_attr_1 = mod_consts[78];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_cached_data == NULL);
        var_cached_data = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_cached_data);
        tmp_compexpr_left_1 = var_cached_data;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cached_data);
        tmp_args_element_name_1 = var_cached_data;
        frame_bbf7747c1c99e6817f5d4b8014c79166->m_frame.f_lineno = 342;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[73]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbf7747c1c99e6817f5d4b8014c79166);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbf7747c1c99e6817f5d4b8014c79166);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbf7747c1c99e6817f5d4b8014c79166);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bbf7747c1c99e6817f5d4b8014c79166, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbf7747c1c99e6817f5d4b8014c79166->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbf7747c1c99e6817f5d4b8014c79166, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bbf7747c1c99e6817f5d4b8014c79166,
        type_description_1,
        par_self,
        var_cached_data
    );


    // Release cached frame if used for exception.
    if (frame_bbf7747c1c99e6817f5d4b8014c79166 == cache_frame_bbf7747c1c99e6817f5d4b8014c79166) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bbf7747c1c99e6817f5d4b8014c79166);
        cache_frame_bbf7747c1c99e6817f5d4b8014c79166 = NULL;
    }

    assertFrameObject(frame_bbf7747c1c99e6817f5d4b8014c79166);

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
    CHECK_OBJECT(var_cached_data);
    Py_DECREF(var_cached_data);
    var_cached_data = NULL;
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
    Py_XDECREF(var_cached_data);
    var_cached_data = NULL;
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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__11_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_files = NULL;
    PyObject *var__key = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_96b055438c5ddc595ba160a75bcf6558;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_96b055438c5ddc595ba160a75bcf6558 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_96b055438c5ddc595ba160a75bcf6558)) {
        Py_XDECREF(cache_frame_96b055438c5ddc595ba160a75bcf6558);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96b055438c5ddc595ba160a75bcf6558 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96b055438c5ddc595ba160a75bcf6558 = MAKE_FUNCTION_FRAME(codeobj_96b055438c5ddc595ba160a75bcf6558, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_96b055438c5ddc595ba160a75bcf6558->m_type_description == NULL);
    frame_96b055438c5ddc595ba160a75bcf6558 = cache_frame_96b055438c5ddc595ba160a75bcf6558;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_96b055438c5ddc595ba160a75bcf6558);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_96b055438c5ddc595ba160a75bcf6558) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_96b055438c5ddc595ba160a75bcf6558->m_frame.f_lineno = 352;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[53],
            &PyTuple_GET_ITEM(mod_consts[81], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_files == NULL);
        var_files = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_files);
        tmp_or_left_value_1 = var_files;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[83];
        tmp_args_element_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_1 = tmp_or_left_value_1;
        or_end_1:;
        frame_96b055438c5ddc595ba160a75bcf6558->m_frame.f_lineno = 353;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 353;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 353;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 353;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooo";
                    exception_lineno = 353;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[69];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 353;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var__key;
            var__key = tmp_assign_source_7;
            Py_INCREF(var__key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_8;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_value);
        tmp_called_instance_2 = var_value;
        frame_96b055438c5ddc595ba160a75bcf6558->m_frame.f_lineno = 354;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[29]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 353;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96b055438c5ddc595ba160a75bcf6558);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96b055438c5ddc595ba160a75bcf6558);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96b055438c5ddc595ba160a75bcf6558, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96b055438c5ddc595ba160a75bcf6558->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96b055438c5ddc595ba160a75bcf6558, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96b055438c5ddc595ba160a75bcf6558,
        type_description_1,
        par_self,
        var_files,
        var__key,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_96b055438c5ddc595ba160a75bcf6558 == cache_frame_96b055438c5ddc595ba160a75bcf6558) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_96b055438c5ddc595ba160a75bcf6558);
        cache_frame_96b055438c5ddc595ba160a75bcf6558 = NULL;
    }

    assertFrameObject(frame_96b055438c5ddc595ba160a75bcf6558);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_files);
    Py_DECREF(var_files);
    var_files = NULL;
    Py_XDECREF(var__key);
    var__key = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_files);
    var_files = NULL;
    Py_XDECREF(var__key);
    var__key = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__12___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_werkzeug$wrappers$base_request$$$function__13___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_value = python_pars[2];
    PyObject *par_tb = python_pars[3];
    struct Nuitka_FrameObject *frame_66e25d2f0a7517fca8d806f83cf7b463;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_66e25d2f0a7517fca8d806f83cf7b463 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_66e25d2f0a7517fca8d806f83cf7b463)) {
        Py_XDECREF(cache_frame_66e25d2f0a7517fca8d806f83cf7b463);

#if _DEBUG_REFCOUNTS
        if (cache_frame_66e25d2f0a7517fca8d806f83cf7b463 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_66e25d2f0a7517fca8d806f83cf7b463 = MAKE_FUNCTION_FRAME(codeobj_66e25d2f0a7517fca8d806f83cf7b463, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_66e25d2f0a7517fca8d806f83cf7b463->m_type_description == NULL);
    frame_66e25d2f0a7517fca8d806f83cf7b463 = cache_frame_66e25d2f0a7517fca8d806f83cf7b463;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_66e25d2f0a7517fca8d806f83cf7b463);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_66e25d2f0a7517fca8d806f83cf7b463) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_66e25d2f0a7517fca8d806f83cf7b463->m_frame.f_lineno = 360;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[29]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_66e25d2f0a7517fca8d806f83cf7b463);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_66e25d2f0a7517fca8d806f83cf7b463);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_66e25d2f0a7517fca8d806f83cf7b463, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_66e25d2f0a7517fca8d806f83cf7b463->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_66e25d2f0a7517fca8d806f83cf7b463, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_66e25d2f0a7517fca8d806f83cf7b463,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_value,
        par_tb
    );


    // Release cached frame if used for exception.
    if (frame_66e25d2f0a7517fca8d806f83cf7b463 == cache_frame_66e25d2f0a7517fca8d806f83cf7b463) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_66e25d2f0a7517fca8d806f83cf7b463);
        cache_frame_66e25d2f0a7517fca8d806f83cf7b463 = NULL;
    }

    assertFrameObject(frame_66e25d2f0a7517fca8d806f83cf7b463);

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
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    par_exc_type = NULL;
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    par_exc_value = NULL;
    CHECK_OBJECT(par_tb);
    Py_DECREF(par_tb);
    par_tb = NULL;
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
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    par_exc_type = NULL;
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    par_exc_value = NULL;
    CHECK_OBJECT(par_tb);
    Py_DECREF(par_tb);
    par_tb = NULL;
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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__14_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_90109df2896f8d1dd44e7b8e96e4b5a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_90109df2896f8d1dd44e7b8e96e4b5a4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_90109df2896f8d1dd44e7b8e96e4b5a4)) {
        Py_XDECREF(cache_frame_90109df2896f8d1dd44e7b8e96e4b5a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90109df2896f8d1dd44e7b8e96e4b5a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90109df2896f8d1dd44e7b8e96e4b5a4 = MAKE_FUNCTION_FRAME(codeobj_90109df2896f8d1dd44e7b8e96e4b5a4, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_90109df2896f8d1dd44e7b8e96e4b5a4->m_type_description == NULL);
    frame_90109df2896f8d1dd44e7b8e96e4b5a4 = cache_frame_90109df2896f8d1dd44e7b8e96e4b5a4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_90109df2896f8d1dd44e7b8e96e4b5a4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_90109df2896f8d1dd44e7b8e96e4b5a4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        frame_90109df2896f8d1dd44e7b8e96e4b5a4->m_frame.f_lineno = 380;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_90109df2896f8d1dd44e7b8e96e4b5a4->m_frame.f_lineno = 381;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_90109df2896f8d1dd44e7b8e96e4b5a4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_90109df2896f8d1dd44e7b8e96e4b5a4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_90109df2896f8d1dd44e7b8e96e4b5a4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_90109df2896f8d1dd44e7b8e96e4b5a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90109df2896f8d1dd44e7b8e96e4b5a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90109df2896f8d1dd44e7b8e96e4b5a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90109df2896f8d1dd44e7b8e96e4b5a4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_90109df2896f8d1dd44e7b8e96e4b5a4 == cache_frame_90109df2896f8d1dd44e7b8e96e4b5a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_90109df2896f8d1dd44e7b8e96e4b5a4);
        cache_frame_90109df2896f8d1dd44e7b8e96e4b5a4 = NULL;
    }

    assertFrameObject(frame_90109df2896f8d1dd44e7b8e96e4b5a4);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__15_args(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c9042db0b0215ccc8af3bf840ffe217f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c9042db0b0215ccc8af3bf840ffe217f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c9042db0b0215ccc8af3bf840ffe217f)) {
        Py_XDECREF(cache_frame_c9042db0b0215ccc8af3bf840ffe217f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c9042db0b0215ccc8af3bf840ffe217f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c9042db0b0215ccc8af3bf840ffe217f = MAKE_FUNCTION_FRAME(codeobj_c9042db0b0215ccc8af3bf840ffe217f, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c9042db0b0215ccc8af3bf840ffe217f->m_type_description == NULL);
    frame_c9042db0b0215ccc8af3bf840ffe217f = cache_frame_c9042db0b0215ccc8af3bf840ffe217f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c9042db0b0215ccc8af3bf840ffe217f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c9042db0b0215ccc8af3bf840ffe217f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_3;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c9042db0b0215ccc8af3bf840ffe217f->m_frame.f_lineno = 404;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[53],
            &PyTuple_GET_ITEM(mod_consts[89], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c9042db0b0215ccc8af3bf840ffe217f->m_frame.f_lineno = 404;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_2;
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 405;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[8]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[90];
        if (par_self == NULL) {
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 406;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[58]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 406;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_name_4;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[27];
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 407;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }

            tmp_expression_name_4 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[61]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_c9042db0b0215ccc8af3bf840ffe217f->m_frame.f_lineno = 403;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9042db0b0215ccc8af3bf840ffe217f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9042db0b0215ccc8af3bf840ffe217f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9042db0b0215ccc8af3bf840ffe217f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c9042db0b0215ccc8af3bf840ffe217f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9042db0b0215ccc8af3bf840ffe217f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9042db0b0215ccc8af3bf840ffe217f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c9042db0b0215ccc8af3bf840ffe217f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c9042db0b0215ccc8af3bf840ffe217f == cache_frame_c9042db0b0215ccc8af3bf840ffe217f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c9042db0b0215ccc8af3bf840ffe217f);
        cache_frame_c9042db0b0215ccc8af3bf840ffe217f = NULL;
    }

    assertFrameObject(frame_c9042db0b0215ccc8af3bf840ffe217f);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__16_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_faa15dd9c755b8b968ab25edd0472002;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_faa15dd9c755b8b968ab25edd0472002 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_faa15dd9c755b8b968ab25edd0472002)) {
        Py_XDECREF(cache_frame_faa15dd9c755b8b968ab25edd0472002);

#if _DEBUG_REFCOUNTS
        if (cache_frame_faa15dd9c755b8b968ab25edd0472002 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_faa15dd9c755b8b968ab25edd0472002 = MAKE_FUNCTION_FRAME(codeobj_faa15dd9c755b8b968ab25edd0472002, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_faa15dd9c755b8b968ab25edd0472002->m_type_description == NULL);
    frame_faa15dd9c755b8b968ab25edd0472002 = cache_frame_faa15dd9c755b8b968ab25edd0472002;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_faa15dd9c755b8b968ab25edd0472002);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_faa15dd9c755b8b968ab25edd0472002) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[92]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 417;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[93];
        frame_faa15dd9c755b8b968ab25edd0472002->m_frame.f_lineno = 418;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AttributeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 418;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kwargs_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[94]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[95]);
        frame_faa15dd9c755b8b968ab25edd0472002->m_frame.f_lineno = 426;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_faa15dd9c755b8b968ab25edd0472002);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_faa15dd9c755b8b968ab25edd0472002);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_faa15dd9c755b8b968ab25edd0472002);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_faa15dd9c755b8b968ab25edd0472002, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_faa15dd9c755b8b968ab25edd0472002->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_faa15dd9c755b8b968ab25edd0472002, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_faa15dd9c755b8b968ab25edd0472002,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_faa15dd9c755b8b968ab25edd0472002 == cache_frame_faa15dd9c755b8b968ab25edd0472002) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_faa15dd9c755b8b968ab25edd0472002);
        cache_frame_faa15dd9c755b8b968ab25edd0472002 = NULL;
    }

    assertFrameObject(frame_faa15dd9c755b8b968ab25edd0472002);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__17_get_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cache = python_pars[1];
    PyObject *par_as_text = python_pars[2];
    PyObject *par_parse_form_data = python_pars[3];
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_1dc2d3fa3809911f495f17781ddd50b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1dc2d3fa3809911f495f17781ddd50b4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1dc2d3fa3809911f495f17781ddd50b4)) {
        Py_XDECREF(cache_frame_1dc2d3fa3809911f495f17781ddd50b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1dc2d3fa3809911f495f17781ddd50b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1dc2d3fa3809911f495f17781ddd50b4 = MAKE_FUNCTION_FRAME(codeobj_1dc2d3fa3809911f495f17781ddd50b4, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1dc2d3fa3809911f495f17781ddd50b4->m_type_description == NULL);
    frame_1dc2d3fa3809911f495f17781ddd50b4 = cache_frame_1dc2d3fa3809911f495f17781ddd50b4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1dc2d3fa3809911f495f17781ddd50b4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1dc2d3fa3809911f495f17781ddd50b4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_getattr_target_1 = par_self;
        tmp_getattr_attr_1 = mod_consts[78];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_rv);
        tmp_compexpr_left_1 = var_rv;
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
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_parse_form_data);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_parse_form_data);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_1dc2d3fa3809911f495f17781ddd50b4->m_frame.f_lineno = 456;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[97]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[73]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_1dc2d3fa3809911f495f17781ddd50b4->m_frame.f_lineno = 457;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[98]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rv;
            assert(old != NULL);
            var_rv = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_cache);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_cache);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_rv);
        tmp_assattr_name_1 = var_rv;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 459;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[78], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_as_text);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_as_text);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(var_rv);
        tmp_expression_name_2 = var_rv;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[99]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[17]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[58]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_1dc2d3fa3809911f495f17781ddd50b4->m_frame.f_lineno = 461;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rv;
            var_rv = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    if (var_rv == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 462;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1dc2d3fa3809911f495f17781ddd50b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1dc2d3fa3809911f495f17781ddd50b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1dc2d3fa3809911f495f17781ddd50b4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1dc2d3fa3809911f495f17781ddd50b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1dc2d3fa3809911f495f17781ddd50b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1dc2d3fa3809911f495f17781ddd50b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1dc2d3fa3809911f495f17781ddd50b4,
        type_description_1,
        par_self,
        par_cache,
        par_as_text,
        par_parse_form_data,
        var_rv
    );


    // Release cached frame if used for exception.
    if (frame_1dc2d3fa3809911f495f17781ddd50b4 == cache_frame_1dc2d3fa3809911f495f17781ddd50b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1dc2d3fa3809911f495f17781ddd50b4);
        cache_frame_1dc2d3fa3809911f495f17781ddd50b4 = NULL;
    }

    assertFrameObject(frame_1dc2d3fa3809911f495f17781ddd50b4);

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
    CHECK_OBJECT(par_cache);
    Py_DECREF(par_cache);
    par_cache = NULL;
    CHECK_OBJECT(par_as_text);
    Py_DECREF(par_as_text);
    par_as_text = NULL;
    CHECK_OBJECT(par_parse_form_data);
    Py_DECREF(par_parse_form_data);
    par_parse_form_data = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
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
    CHECK_OBJECT(par_cache);
    Py_DECREF(par_cache);
    par_cache = NULL;
    CHECK_OBJECT(par_as_text);
    Py_DECREF(par_as_text);
    par_as_text = NULL;
    CHECK_OBJECT(par_parse_form_data);
    Py_DECREF(par_parse_form_data);
    par_parse_form_data = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__18_form(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b21abc332f26df457e6a2389e1b4460e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b21abc332f26df457e6a2389e1b4460e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b21abc332f26df457e6a2389e1b4460e)) {
        Py_XDECREF(cache_frame_b21abc332f26df457e6a2389e1b4460e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b21abc332f26df457e6a2389e1b4460e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b21abc332f26df457e6a2389e1b4460e = MAKE_FUNCTION_FRAME(codeobj_b21abc332f26df457e6a2389e1b4460e, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b21abc332f26df457e6a2389e1b4460e->m_type_description == NULL);
    frame_b21abc332f26df457e6a2389e1b4460e = cache_frame_b21abc332f26df457e6a2389e1b4460e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b21abc332f26df457e6a2389e1b4460e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b21abc332f26df457e6a2389e1b4460e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_b21abc332f26df457e6a2389e1b4460e->m_frame.f_lineno = 480;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[97]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 481;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[63]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b21abc332f26df457e6a2389e1b4460e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b21abc332f26df457e6a2389e1b4460e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b21abc332f26df457e6a2389e1b4460e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b21abc332f26df457e6a2389e1b4460e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b21abc332f26df457e6a2389e1b4460e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b21abc332f26df457e6a2389e1b4460e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b21abc332f26df457e6a2389e1b4460e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b21abc332f26df457e6a2389e1b4460e == cache_frame_b21abc332f26df457e6a2389e1b4460e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b21abc332f26df457e6a2389e1b4460e);
        cache_frame_b21abc332f26df457e6a2389e1b4460e = NULL;
    }

    assertFrameObject(frame_b21abc332f26df457e6a2389e1b4460e);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__19_values(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_args = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_474f5eab6c32c350d9a76057b5ad0846;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_474f5eab6c32c350d9a76057b5ad0846 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_args == NULL);
        var_args = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_474f5eab6c32c350d9a76057b5ad0846)) {
        Py_XDECREF(cache_frame_474f5eab6c32c350d9a76057b5ad0846);

#if _DEBUG_REFCOUNTS
        if (cache_frame_474f5eab6c32c350d9a76057b5ad0846 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_474f5eab6c32c350d9a76057b5ad0846 = MAKE_FUNCTION_FRAME(codeobj_474f5eab6c32c350d9a76057b5ad0846, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_474f5eab6c32c350d9a76057b5ad0846->m_type_description == NULL);
    frame_474f5eab6c32c350d9a76057b5ad0846 = cache_frame_474f5eab6c32c350d9a76057b5ad0846;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_474f5eab6c32c350d9a76057b5ad0846);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_474f5eab6c32c350d9a76057b5ad0846) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_2;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 488;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[63]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 488;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_4;
            Py_INCREF(var_d);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_d);
        tmp_isinstance_inst_1 = var_d;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_d);
        tmp_args_element_name_1 = var_d;
        frame_474f5eab6c32c350d9a76057b5ad0846->m_frame.f_lineno = 490;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_d;
            assert(old != NULL);
            var_d = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        if (var_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = var_args;
        CHECK_OBJECT(var_d);
        tmp_args_element_name_2 = var_d;
        frame_474f5eab6c32c350d9a76057b5ad0846->m_frame.f_lineno = 491;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[4], tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 488;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (var_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 492;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = var_args;
        frame_474f5eab6c32c350d9a76057b5ad0846->m_frame.f_lineno = 492;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_474f5eab6c32c350d9a76057b5ad0846);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_474f5eab6c32c350d9a76057b5ad0846);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_474f5eab6c32c350d9a76057b5ad0846);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_474f5eab6c32c350d9a76057b5ad0846, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_474f5eab6c32c350d9a76057b5ad0846->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_474f5eab6c32c350d9a76057b5ad0846, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_474f5eab6c32c350d9a76057b5ad0846,
        type_description_1,
        par_self,
        var_args,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_474f5eab6c32c350d9a76057b5ad0846 == cache_frame_474f5eab6c32c350d9a76057b5ad0846) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_474f5eab6c32c350d9a76057b5ad0846);
        cache_frame_474f5eab6c32c350d9a76057b5ad0846 = NULL;
    }

    assertFrameObject(frame_474f5eab6c32c350d9a76057b5ad0846);

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
    Py_XDECREF(var_args);
    var_args = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__20_files(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_dacc93f99bc0b8f92f364337fca7b729;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dacc93f99bc0b8f92f364337fca7b729 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dacc93f99bc0b8f92f364337fca7b729)) {
        Py_XDECREF(cache_frame_dacc93f99bc0b8f92f364337fca7b729);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dacc93f99bc0b8f92f364337fca7b729 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dacc93f99bc0b8f92f364337fca7b729 = MAKE_FUNCTION_FRAME(codeobj_dacc93f99bc0b8f92f364337fca7b729, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dacc93f99bc0b8f92f364337fca7b729->m_type_description == NULL);
    frame_dacc93f99bc0b8f92f364337fca7b729 = cache_frame_dacc93f99bc0b8f92f364337fca7b729;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dacc93f99bc0b8f92f364337fca7b729);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dacc93f99bc0b8f92f364337fca7b729) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_dacc93f99bc0b8f92f364337fca7b729->m_frame.f_lineno = 514;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[97]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 515;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[76]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dacc93f99bc0b8f92f364337fca7b729);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dacc93f99bc0b8f92f364337fca7b729);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dacc93f99bc0b8f92f364337fca7b729);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dacc93f99bc0b8f92f364337fca7b729, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dacc93f99bc0b8f92f364337fca7b729->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dacc93f99bc0b8f92f364337fca7b729, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dacc93f99bc0b8f92f364337fca7b729,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_dacc93f99bc0b8f92f364337fca7b729 == cache_frame_dacc93f99bc0b8f92f364337fca7b729) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dacc93f99bc0b8f92f364337fca7b729);
        cache_frame_dacc93f99bc0b8f92f364337fca7b729 = NULL;
    }

    assertFrameObject(frame_dacc93f99bc0b8f92f364337fca7b729);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__21_cookies(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9297bead14d116f143d2897874bb6641;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9297bead14d116f143d2897874bb6641 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9297bead14d116f143d2897874bb6641)) {
        Py_XDECREF(cache_frame_9297bead14d116f143d2897874bb6641);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9297bead14d116f143d2897874bb6641 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9297bead14d116f143d2897874bb6641 = MAKE_FUNCTION_FRAME(codeobj_9297bead14d116f143d2897874bb6641, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9297bead14d116f143d2897874bb6641->m_type_description == NULL);
    frame_9297bead14d116f143d2897874bb6641 = cache_frame_9297bead14d116f143d2897874bb6641;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9297bead14d116f143d2897874bb6641);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9297bead14d116f143d2897874bb6641) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_4;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(3);
        {
            PyObject *tmp_expression_name_2;
            PyObject *tmp_expression_name_3;
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 523;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 524;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[58]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 524;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[27];
        if (par_self == NULL) {
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 525;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[108]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 525;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_9297bead14d116f143d2897874bb6641->m_frame.f_lineno = 521;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9297bead14d116f143d2897874bb6641);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9297bead14d116f143d2897874bb6641);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9297bead14d116f143d2897874bb6641);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9297bead14d116f143d2897874bb6641, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9297bead14d116f143d2897874bb6641->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9297bead14d116f143d2897874bb6641, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9297bead14d116f143d2897874bb6641,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9297bead14d116f143d2897874bb6641 == cache_frame_9297bead14d116f143d2897874bb6641) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9297bead14d116f143d2897874bb6641);
        cache_frame_9297bead14d116f143d2897874bb6641 = NULL;
    }

    assertFrameObject(frame_9297bead14d116f143d2897874bb6641);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__22_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_58ff57dc58f6db6214ccc8f599a08e30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_58ff57dc58f6db6214ccc8f599a08e30 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_58ff57dc58f6db6214ccc8f599a08e30)) {
        Py_XDECREF(cache_frame_58ff57dc58f6db6214ccc8f599a08e30);

#if _DEBUG_REFCOUNTS
        if (cache_frame_58ff57dc58f6db6214ccc8f599a08e30 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_58ff57dc58f6db6214ccc8f599a08e30 = MAKE_FUNCTION_FRAME(codeobj_58ff57dc58f6db6214ccc8f599a08e30, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_58ff57dc58f6db6214ccc8f599a08e30->m_type_description == NULL);
    frame_58ff57dc58f6db6214ccc8f599a08e30 = cache_frame_58ff57dc58f6db6214ccc8f599a08e30;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_58ff57dc58f6db6214ccc8f599a08e30);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_58ff57dc58f6db6214ccc8f599a08e30) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_58ff57dc58f6db6214ccc8f599a08e30->m_frame.f_lineno = 533;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_58ff57dc58f6db6214ccc8f599a08e30);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_58ff57dc58f6db6214ccc8f599a08e30);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_58ff57dc58f6db6214ccc8f599a08e30);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_58ff57dc58f6db6214ccc8f599a08e30, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_58ff57dc58f6db6214ccc8f599a08e30->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_58ff57dc58f6db6214ccc8f599a08e30, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_58ff57dc58f6db6214ccc8f599a08e30,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_58ff57dc58f6db6214ccc8f599a08e30 == cache_frame_58ff57dc58f6db6214ccc8f599a08e30) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_58ff57dc58f6db6214ccc8f599a08e30);
        cache_frame_58ff57dc58f6db6214ccc8f599a08e30 = NULL;
    }

    assertFrameObject(frame_58ff57dc58f6db6214ccc8f599a08e30);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__23_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_raw_path = NULL;
    struct Nuitka_FrameObject *frame_5ed9de16426dfa3c643170eed02a712f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5ed9de16426dfa3c643170eed02a712f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5ed9de16426dfa3c643170eed02a712f)) {
        Py_XDECREF(cache_frame_5ed9de16426dfa3c643170eed02a712f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ed9de16426dfa3c643170eed02a712f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ed9de16426dfa3c643170eed02a712f = MAKE_FUNCTION_FRAME(codeobj_5ed9de16426dfa3c643170eed02a712f, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5ed9de16426dfa3c643170eed02a712f->m_type_description == NULL);
    frame_5ed9de16426dfa3c643170eed02a712f = cache_frame_5ed9de16426dfa3c643170eed02a712f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5ed9de16426dfa3c643170eed02a712f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5ed9de16426dfa3c643170eed02a712f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_3;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5ed9de16426dfa3c643170eed02a712f->m_frame.f_lineno = 542;
        tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[53],
            &PyTuple_GET_ITEM(mod_consts[113], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 542;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[114];
        Py_INCREF(tmp_or_right_value_1);
        tmp_args_element_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_1 = tmp_or_left_value_1;
        or_end_1:;
        if (par_self == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 542;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 542;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 542;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[58]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 542;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5ed9de16426dfa3c643170eed02a712f->m_frame.f_lineno = 541;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_raw_path == NULL);
        var_raw_path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_2;
        tmp_left_name_1 = mod_consts[115];
        CHECK_OBJECT(var_raw_path);
        tmp_called_instance_2 = var_raw_path;
        frame_5ed9de16426dfa3c643170eed02a712f->m_frame.f_lineno = 544;
        tmp_right_name_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[116],
            &PyTuple_GET_ITEM(mod_consts[117], 0)
        );

        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ed9de16426dfa3c643170eed02a712f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ed9de16426dfa3c643170eed02a712f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ed9de16426dfa3c643170eed02a712f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5ed9de16426dfa3c643170eed02a712f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ed9de16426dfa3c643170eed02a712f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ed9de16426dfa3c643170eed02a712f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ed9de16426dfa3c643170eed02a712f,
        type_description_1,
        par_self,
        var_raw_path
    );


    // Release cached frame if used for exception.
    if (frame_5ed9de16426dfa3c643170eed02a712f == cache_frame_5ed9de16426dfa3c643170eed02a712f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5ed9de16426dfa3c643170eed02a712f);
        cache_frame_5ed9de16426dfa3c643170eed02a712f = NULL;
    }

    assertFrameObject(frame_5ed9de16426dfa3c643170eed02a712f);

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
    Py_XDECREF(var_raw_path);
    var_raw_path = NULL;
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
    Py_XDECREF(var_raw_path);
    var_raw_path = NULL;
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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__24_full_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2ffa34d3514fccf9c5de22fc0943e2b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2ffa34d3514fccf9c5de22fc0943e2b4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2ffa34d3514fccf9c5de22fc0943e2b4)) {
        Py_XDECREF(cache_frame_2ffa34d3514fccf9c5de22fc0943e2b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2ffa34d3514fccf9c5de22fc0943e2b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2ffa34d3514fccf9c5de22fc0943e2b4 = MAKE_FUNCTION_FRAME(codeobj_2ffa34d3514fccf9c5de22fc0943e2b4, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2ffa34d3514fccf9c5de22fc0943e2b4->m_type_description == NULL);
    frame_2ffa34d3514fccf9c5de22fc0943e2b4 = cache_frame_2ffa34d3514fccf9c5de22fc0943e2b4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2ffa34d3514fccf9c5de22fc0943e2b4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2ffa34d3514fccf9c5de22fc0943e2b4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[119]);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[120];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[122]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_left_name_1);
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[8]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2ffa34d3514fccf9c5de22fc0943e2b4->m_frame.f_lineno = 549;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2ffa34d3514fccf9c5de22fc0943e2b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2ffa34d3514fccf9c5de22fc0943e2b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2ffa34d3514fccf9c5de22fc0943e2b4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2ffa34d3514fccf9c5de22fc0943e2b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ffa34d3514fccf9c5de22fc0943e2b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ffa34d3514fccf9c5de22fc0943e2b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2ffa34d3514fccf9c5de22fc0943e2b4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2ffa34d3514fccf9c5de22fc0943e2b4 == cache_frame_2ffa34d3514fccf9c5de22fc0943e2b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2ffa34d3514fccf9c5de22fc0943e2b4);
        cache_frame_2ffa34d3514fccf9c5de22fc0943e2b4 = NULL;
    }

    assertFrameObject(frame_2ffa34d3514fccf9c5de22fc0943e2b4);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__25_script_root(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_raw_path = NULL;
    struct Nuitka_FrameObject *frame_a893eadaad47fd91480ec6de4821c427;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a893eadaad47fd91480ec6de4821c427 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a893eadaad47fd91480ec6de4821c427)) {
        Py_XDECREF(cache_frame_a893eadaad47fd91480ec6de4821c427);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a893eadaad47fd91480ec6de4821c427 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a893eadaad47fd91480ec6de4821c427 = MAKE_FUNCTION_FRAME(codeobj_a893eadaad47fd91480ec6de4821c427, module_werkzeug$wrappers$base_request, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a893eadaad47fd91480ec6de4821c427->m_type_description == NULL);
    frame_a893eadaad47fd91480ec6de4821c427 = cache_frame_a893eadaad47fd91480ec6de4821c427;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a893eadaad47fd91480ec6de4821c427);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a893eadaad47fd91480ec6de4821c427) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_3;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a893eadaad47fd91480ec6de4821c427->m_frame.f_lineno = 555;
        tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[53],
            &PyTuple_GET_ITEM(mod_consts[124], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 555;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[114];
        Py_INCREF(tmp_or_right_value_1);
        tmp_args_element_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_1 = tmp_or_left_value_1;
        or_end_1:;
        if (par_self == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 555;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 555;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 555;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[58]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 555;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a893eadaad47fd91480ec6de4821c427->m_frame.f_lineno = 554;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_raw_path == NULL);
        var_raw_path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_raw_path);
        tmp_called_instance_2 = var_raw_path;
        frame_a893eadaad47fd91480ec6de4821c427->m_frame.f_lineno = 557;
        tmp_return_value = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[125],
            &PyTuple_GET_ITEM(mod_consts[117], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a893eadaad47fd91480ec6de4821c427);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a893eadaad47fd91480ec6de4821c427);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a893eadaad47fd91480ec6de4821c427);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a893eadaad47fd91480ec6de4821c427, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a893eadaad47fd91480ec6de4821c427->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a893eadaad47fd91480ec6de4821c427, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a893eadaad47fd91480ec6de4821c427,
        type_description_1,
        par_self,
        var_raw_path
    );


    // Release cached frame if used for exception.
    if (frame_a893eadaad47fd91480ec6de4821c427 == cache_frame_a893eadaad47fd91480ec6de4821c427) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a893eadaad47fd91480ec6de4821c427);
        cache_frame_a893eadaad47fd91480ec6de4821c427 = NULL;
    }

    assertFrameObject(frame_a893eadaad47fd91480ec6de4821c427);

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
    Py_XDECREF(var_raw_path);
    var_raw_path = NULL;
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
    Py_XDECREF(var_raw_path);
    var_raw_path = NULL;
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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__26_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6cd26a69e0de87b1d40ba68ea3fbe9d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6cd26a69e0de87b1d40ba68ea3fbe9d8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6cd26a69e0de87b1d40ba68ea3fbe9d8)) {
        Py_XDECREF(cache_frame_6cd26a69e0de87b1d40ba68ea3fbe9d8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6cd26a69e0de87b1d40ba68ea3fbe9d8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6cd26a69e0de87b1d40ba68ea3fbe9d8 = MAKE_FUNCTION_FRAME(codeobj_6cd26a69e0de87b1d40ba68ea3fbe9d8, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6cd26a69e0de87b1d40ba68ea3fbe9d8->m_type_description == NULL);
    frame_6cd26a69e0de87b1d40ba68ea3fbe9d8 = cache_frame_6cd26a69e0de87b1d40ba68ea3fbe9d8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6cd26a69e0de87b1d40ba68ea3fbe9d8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6cd26a69e0de87b1d40ba68ea3fbe9d8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[128];
        if (par_self == NULL) {
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 564;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[128]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 564;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_6cd26a69e0de87b1d40ba68ea3fbe9d8->m_frame.f_lineno = 564;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6cd26a69e0de87b1d40ba68ea3fbe9d8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6cd26a69e0de87b1d40ba68ea3fbe9d8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6cd26a69e0de87b1d40ba68ea3fbe9d8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6cd26a69e0de87b1d40ba68ea3fbe9d8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6cd26a69e0de87b1d40ba68ea3fbe9d8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6cd26a69e0de87b1d40ba68ea3fbe9d8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6cd26a69e0de87b1d40ba68ea3fbe9d8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6cd26a69e0de87b1d40ba68ea3fbe9d8 == cache_frame_6cd26a69e0de87b1d40ba68ea3fbe9d8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6cd26a69e0de87b1d40ba68ea3fbe9d8);
        cache_frame_6cd26a69e0de87b1d40ba68ea3fbe9d8 = NULL;
    }

    assertFrameObject(frame_6cd26a69e0de87b1d40ba68ea3fbe9d8);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__27_base_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e543a57f55cedf700d8453dbd4e708d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e543a57f55cedf700d8453dbd4e708d1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e543a57f55cedf700d8453dbd4e708d1)) {
        Py_XDECREF(cache_frame_e543a57f55cedf700d8453dbd4e708d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e543a57f55cedf700d8453dbd4e708d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e543a57f55cedf700d8453dbd4e708d1 = MAKE_FUNCTION_FRAME(codeobj_e543a57f55cedf700d8453dbd4e708d1, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e543a57f55cedf700d8453dbd4e708d1->m_type_description == NULL);
    frame_e543a57f55cedf700d8453dbd4e708d1 = cache_frame_e543a57f55cedf700d8453dbd4e708d1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e543a57f55cedf700d8453dbd4e708d1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e543a57f55cedf700d8453dbd4e708d1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[130];
        tmp_dict_value_1 = Py_True;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_name_2;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[128];
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 572;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[128]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_e543a57f55cedf700d8453dbd4e708d1->m_frame.f_lineno = 571;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e543a57f55cedf700d8453dbd4e708d1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e543a57f55cedf700d8453dbd4e708d1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e543a57f55cedf700d8453dbd4e708d1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e543a57f55cedf700d8453dbd4e708d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e543a57f55cedf700d8453dbd4e708d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e543a57f55cedf700d8453dbd4e708d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e543a57f55cedf700d8453dbd4e708d1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e543a57f55cedf700d8453dbd4e708d1 == cache_frame_e543a57f55cedf700d8453dbd4e708d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e543a57f55cedf700d8453dbd4e708d1);
        cache_frame_e543a57f55cedf700d8453dbd4e708d1 = NULL;
    }

    assertFrameObject(frame_e543a57f55cedf700d8453dbd4e708d1);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__28_url_root(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5a2e5911c4a3108e8c0c77c7e655d541;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5a2e5911c4a3108e8c0c77c7e655d541 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5a2e5911c4a3108e8c0c77c7e655d541)) {
        Py_XDECREF(cache_frame_5a2e5911c4a3108e8c0c77c7e655d541);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5a2e5911c4a3108e8c0c77c7e655d541 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5a2e5911c4a3108e8c0c77c7e655d541 = MAKE_FUNCTION_FRAME(codeobj_5a2e5911c4a3108e8c0c77c7e655d541, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5a2e5911c4a3108e8c0c77c7e655d541->m_type_description == NULL);
    frame_5a2e5911c4a3108e8c0c77c7e655d541 = cache_frame_5a2e5911c4a3108e8c0c77c7e655d541;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5a2e5911c4a3108e8c0c77c7e655d541);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5a2e5911c4a3108e8c0c77c7e655d541) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_True;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[128];
        if (par_self == NULL) {
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 581;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[128]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 581;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_5a2e5911c4a3108e8c0c77c7e655d541->m_frame.f_lineno = 581;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5a2e5911c4a3108e8c0c77c7e655d541);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5a2e5911c4a3108e8c0c77c7e655d541);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5a2e5911c4a3108e8c0c77c7e655d541);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5a2e5911c4a3108e8c0c77c7e655d541, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5a2e5911c4a3108e8c0c77c7e655d541->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5a2e5911c4a3108e8c0c77c7e655d541, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5a2e5911c4a3108e8c0c77c7e655d541,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5a2e5911c4a3108e8c0c77c7e655d541 == cache_frame_5a2e5911c4a3108e8c0c77c7e655d541) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5a2e5911c4a3108e8c0c77c7e655d541);
        cache_frame_5a2e5911c4a3108e8c0c77c7e655d541 = NULL;
    }

    assertFrameObject(frame_5a2e5911c4a3108e8c0c77c7e655d541);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__29_host_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1650c9df050c3bcb9cab3ed1e2b93fce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1650c9df050c3bcb9cab3ed1e2b93fce = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1650c9df050c3bcb9cab3ed1e2b93fce)) {
        Py_XDECREF(cache_frame_1650c9df050c3bcb9cab3ed1e2b93fce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1650c9df050c3bcb9cab3ed1e2b93fce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1650c9df050c3bcb9cab3ed1e2b93fce = MAKE_FUNCTION_FRAME(codeobj_1650c9df050c3bcb9cab3ed1e2b93fce, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1650c9df050c3bcb9cab3ed1e2b93fce->m_type_description == NULL);
    frame_1650c9df050c3bcb9cab3ed1e2b93fce = cache_frame_1650c9df050c3bcb9cab3ed1e2b93fce;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1650c9df050c3bcb9cab3ed1e2b93fce);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1650c9df050c3bcb9cab3ed1e2b93fce) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[133];
        tmp_dict_value_1 = Py_True;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_name_2;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[128];
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 589;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[128]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 589;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_1650c9df050c3bcb9cab3ed1e2b93fce->m_frame.f_lineno = 588;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1650c9df050c3bcb9cab3ed1e2b93fce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1650c9df050c3bcb9cab3ed1e2b93fce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1650c9df050c3bcb9cab3ed1e2b93fce);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1650c9df050c3bcb9cab3ed1e2b93fce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1650c9df050c3bcb9cab3ed1e2b93fce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1650c9df050c3bcb9cab3ed1e2b93fce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1650c9df050c3bcb9cab3ed1e2b93fce,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1650c9df050c3bcb9cab3ed1e2b93fce == cache_frame_1650c9df050c3bcb9cab3ed1e2b93fce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1650c9df050c3bcb9cab3ed1e2b93fce);
        cache_frame_1650c9df050c3bcb9cab3ed1e2b93fce = NULL;
    }

    assertFrameObject(frame_1650c9df050c3bcb9cab3ed1e2b93fce);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__30_host(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3d0605bd7c20f62517cda00d2a9ff209;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3d0605bd7c20f62517cda00d2a9ff209 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3d0605bd7c20f62517cda00d2a9ff209)) {
        Py_XDECREF(cache_frame_3d0605bd7c20f62517cda00d2a9ff209);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d0605bd7c20f62517cda00d2a9ff209 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d0605bd7c20f62517cda00d2a9ff209 = MAKE_FUNCTION_FRAME(codeobj_3d0605bd7c20f62517cda00d2a9ff209, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3d0605bd7c20f62517cda00d2a9ff209->m_type_description == NULL);
    frame_3d0605bd7c20f62517cda00d2a9ff209 = cache_frame_3d0605bd7c20f62517cda00d2a9ff209;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3d0605bd7c20f62517cda00d2a9ff209);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3d0605bd7c20f62517cda00d2a9ff209) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[128];
        if (par_self == NULL) {
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 597;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[128]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 597;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_3d0605bd7c20f62517cda00d2a9ff209->m_frame.f_lineno = 597;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3d0605bd7c20f62517cda00d2a9ff209);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3d0605bd7c20f62517cda00d2a9ff209);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3d0605bd7c20f62517cda00d2a9ff209);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3d0605bd7c20f62517cda00d2a9ff209, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d0605bd7c20f62517cda00d2a9ff209->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d0605bd7c20f62517cda00d2a9ff209, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d0605bd7c20f62517cda00d2a9ff209,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3d0605bd7c20f62517cda00d2a9ff209 == cache_frame_3d0605bd7c20f62517cda00d2a9ff209) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3d0605bd7c20f62517cda00d2a9ff209);
        cache_frame_3d0605bd7c20f62517cda00d2a9ff209 = NULL;
    }

    assertFrameObject(frame_3d0605bd7c20f62517cda00d2a9ff209);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__31_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_ed7b3c1d53b0d44d46545b5b89d616f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ed7b3c1d53b0d44d46545b5b89d616f3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ed7b3c1d53b0d44d46545b5b89d616f3)) {
        Py_XDECREF(cache_frame_ed7b3c1d53b0d44d46545b5b89d616f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed7b3c1d53b0d44d46545b5b89d616f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed7b3c1d53b0d44d46545b5b89d616f3 = MAKE_FUNCTION_FRAME(codeobj_ed7b3c1d53b0d44d46545b5b89d616f3, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ed7b3c1d53b0d44d46545b5b89d616f3->m_type_description == NULL);
    frame_ed7b3c1d53b0d44d46545b5b89d616f3 = cache_frame_ed7b3c1d53b0d44d46545b5b89d616f3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ed7b3c1d53b0d44d46545b5b89d616f3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ed7b3c1d53b0d44d46545b5b89d616f3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_x);
        tmp_called_instance_1 = par_x;
        frame_ed7b3c1d53b0d44d46545b5b89d616f3->m_frame.f_lineno = 610;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[137]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed7b3c1d53b0d44d46545b5b89d616f3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed7b3c1d53b0d44d46545b5b89d616f3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed7b3c1d53b0d44d46545b5b89d616f3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ed7b3c1d53b0d44d46545b5b89d616f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed7b3c1d53b0d44d46545b5b89d616f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed7b3c1d53b0d44d46545b5b89d616f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed7b3c1d53b0d44d46545b5b89d616f3,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_ed7b3c1d53b0d44d46545b5b89d616f3 == cache_frame_ed7b3c1d53b0d44d46545b5b89d616f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ed7b3c1d53b0d44d46545b5b89d616f3);
        cache_frame_ed7b3c1d53b0d44d46545b5b89d616f3 = NULL;
    }

    assertFrameObject(frame_ed7b3c1d53b0d44d46545b5b89d616f3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x);
    par_x = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__32_access_route(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b3434cb46ac3a4750b1651c15723f189;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b3434cb46ac3a4750b1651c15723f189 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b3434cb46ac3a4750b1651c15723f189)) {
        Py_XDECREF(cache_frame_b3434cb46ac3a4750b1651c15723f189);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3434cb46ac3a4750b1651c15723f189 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3434cb46ac3a4750b1651c15723f189 = MAKE_FUNCTION_FRAME(codeobj_b3434cb46ac3a4750b1651c15723f189, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b3434cb46ac3a4750b1651c15723f189->m_type_description == NULL);
    frame_b3434cb46ac3a4750b1651c15723f189 = cache_frame_b3434cb46ac3a4750b1651c15723f189;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b3434cb46ac3a4750b1651c15723f189);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b3434cb46ac3a4750b1651c15723f189) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        tmp_compexpr_left_1 = mod_consts[138];
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 619;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 619;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 620;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[139]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 621;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 621;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[0]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 621;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[138];
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 621;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b3434cb46ac3a4750b1651c15723f189->m_frame.f_lineno = 621;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 621;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b3434cb46ac3a4750b1651c15723f189->m_frame.f_lineno = 620;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_5;
        tmp_compexpr_left_2 = mod_consts[141];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 623;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[0]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "o";
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
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 624;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[139]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 624;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[0]);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 624;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[141];
        tmp_list_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 624;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = PyList_New(1);
        PyList_SET_ITEM(tmp_args_element_name_3, 0, tmp_list_element_1);
        frame_b3434cb46ac3a4750b1651c15723f189->m_frame.f_lineno = 624;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_called_instance_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 625;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_b3434cb46ac3a4750b1651c15723f189->m_frame.f_lineno = 625;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[139]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3434cb46ac3a4750b1651c15723f189);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3434cb46ac3a4750b1651c15723f189);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3434cb46ac3a4750b1651c15723f189);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3434cb46ac3a4750b1651c15723f189, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3434cb46ac3a4750b1651c15723f189->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3434cb46ac3a4750b1651c15723f189, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3434cb46ac3a4750b1651c15723f189,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b3434cb46ac3a4750b1651c15723f189 == cache_frame_b3434cb46ac3a4750b1651c15723f189) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b3434cb46ac3a4750b1651c15723f189);
        cache_frame_b3434cb46ac3a4750b1651c15723f189 = NULL;
    }

    assertFrameObject(frame_b3434cb46ac3a4750b1651c15723f189);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__33_remote_addr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5f83aaceb64c3c285467cccb2651be03;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5f83aaceb64c3c285467cccb2651be03 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5f83aaceb64c3c285467cccb2651be03)) {
        Py_XDECREF(cache_frame_5f83aaceb64c3c285467cccb2651be03);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f83aaceb64c3c285467cccb2651be03 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f83aaceb64c3c285467cccb2651be03 = MAKE_FUNCTION_FRAME(codeobj_5f83aaceb64c3c285467cccb2651be03, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5f83aaceb64c3c285467cccb2651be03->m_type_description == NULL);
    frame_5f83aaceb64c3c285467cccb2651be03 = cache_frame_5f83aaceb64c3c285467cccb2651be03;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5f83aaceb64c3c285467cccb2651be03);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5f83aaceb64c3c285467cccb2651be03) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5f83aaceb64c3c285467cccb2651be03->m_frame.f_lineno = 630;
        tmp_return_value = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[53],
            &PyTuple_GET_ITEM(mod_consts[143], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f83aaceb64c3c285467cccb2651be03);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f83aaceb64c3c285467cccb2651be03);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f83aaceb64c3c285467cccb2651be03);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f83aaceb64c3c285467cccb2651be03, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f83aaceb64c3c285467cccb2651be03->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f83aaceb64c3c285467cccb2651be03, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f83aaceb64c3c285467cccb2651be03,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5f83aaceb64c3c285467cccb2651be03 == cache_frame_5f83aaceb64c3c285467cccb2651be03) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5f83aaceb64c3c285467cccb2651be03);
        cache_frame_5f83aaceb64c3c285467cccb2651be03 = NULL;
    }

    assertFrameObject(frame_5f83aaceb64c3c285467cccb2651be03);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__34_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_41ece8fb0ff0bb9a25f92ba9ac0eb349;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_41ece8fb0ff0bb9a25f92ba9ac0eb349 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_41ece8fb0ff0bb9a25f92ba9ac0eb349)) {
        Py_XDECREF(cache_frame_41ece8fb0ff0bb9a25f92ba9ac0eb349);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41ece8fb0ff0bb9a25f92ba9ac0eb349 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41ece8fb0ff0bb9a25f92ba9ac0eb349 = MAKE_FUNCTION_FRAME(codeobj_41ece8fb0ff0bb9a25f92ba9ac0eb349, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_41ece8fb0ff0bb9a25f92ba9ac0eb349->m_type_description == NULL);
    frame_41ece8fb0ff0bb9a25f92ba9ac0eb349 = cache_frame_41ece8fb0ff0bb9a25f92ba9ac0eb349;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_41ece8fb0ff0bb9a25f92ba9ac0eb349);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_41ece8fb0ff0bb9a25f92ba9ac0eb349) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[0]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[145];
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[146];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_41ece8fb0ff0bb9a25f92ba9ac0eb349);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_41ece8fb0ff0bb9a25f92ba9ac0eb349);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_41ece8fb0ff0bb9a25f92ba9ac0eb349);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41ece8fb0ff0bb9a25f92ba9ac0eb349, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41ece8fb0ff0bb9a25f92ba9ac0eb349->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41ece8fb0ff0bb9a25f92ba9ac0eb349, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41ece8fb0ff0bb9a25f92ba9ac0eb349,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_41ece8fb0ff0bb9a25f92ba9ac0eb349 == cache_frame_41ece8fb0ff0bb9a25f92ba9ac0eb349) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_41ece8fb0ff0bb9a25f92ba9ac0eb349);
        cache_frame_41ece8fb0ff0bb9a25f92ba9ac0eb349 = NULL;
    }

    assertFrameObject(frame_41ece8fb0ff0bb9a25f92ba9ac0eb349);

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


static PyObject *impl_werkzeug$wrappers$base_request$$$function__35__assert_not_shallow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request = python_pars[0];
    struct Nuitka_FrameObject *frame_6e8be7d499c0ad622c79943fe8b61ee7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e8be7d499c0ad622c79943fe8b61ee7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6e8be7d499c0ad622c79943fe8b61ee7)) {
        Py_XDECREF(cache_frame_6e8be7d499c0ad622c79943fe8b61ee7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e8be7d499c0ad622c79943fe8b61ee7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e8be7d499c0ad622c79943fe8b61ee7 = MAKE_FUNCTION_FRAME(codeobj_6e8be7d499c0ad622c79943fe8b61ee7, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6e8be7d499c0ad622c79943fe8b61ee7->m_type_description == NULL);
    frame_6e8be7d499c0ad622c79943fe8b61ee7 = cache_frame_6e8be7d499c0ad622c79943fe8b61ee7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6e8be7d499c0ad622c79943fe8b61ee7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6e8be7d499c0ad622c79943fe8b61ee7) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_request);
        tmp_expression_name_1 = par_request;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[3]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 669;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[147];
        frame_6e8be7d499c0ad622c79943fe8b61ee7->m_frame.f_lineno = 670;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 670;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e8be7d499c0ad622c79943fe8b61ee7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e8be7d499c0ad622c79943fe8b61ee7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e8be7d499c0ad622c79943fe8b61ee7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e8be7d499c0ad622c79943fe8b61ee7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e8be7d499c0ad622c79943fe8b61ee7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e8be7d499c0ad622c79943fe8b61ee7,
        type_description_1,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_6e8be7d499c0ad622c79943fe8b61ee7 == cache_frame_6e8be7d499c0ad622c79943fe8b61ee7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6e8be7d499c0ad622c79943fe8b61ee7);
        cache_frame_6e8be7d499c0ad622c79943fe8b61ee7 = NULL;
    }

    assertFrameObject(frame_6e8be7d499c0ad622c79943fe8b61ee7);

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
    Py_XDECREF(par_request);
    par_request = NULL;
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

    Py_XDECREF(par_request);
    par_request = NULL;
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



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__10__get_stream_for_parsing() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__10__get_stream_for_parsing,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_bbf7747c1c99e6817f5d4b8014c79166,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[80],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__11_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__11_close,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[223],
#endif
        codeobj_96b055438c5ddc595ba160a75bcf6558,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[84],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__12___enter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__12___enter__,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[224],
#endif
        codeobj_6efca2aa50a03215be4d43bbf5a6692c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__13___exit__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__13___exit__,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[225],
#endif
        codeobj_66e25d2f0a7517fca8d806f83cf7b463,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__14_stream() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__14_stream,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[226],
#endif
        codeobj_90109df2896f8d1dd44e7b8e96e4b5a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[86],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__15_args() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__15_args,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[229],
#endif
        codeobj_c9042db0b0215ccc8af3bf840ffe217f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[91],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__16_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__16_data,
        mod_consts[230],
#if PYTHON_VERSION >= 0x300
        mod_consts[231],
#endif
        codeobj_faa15dd9c755b8b968ab25edd0472002,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[96],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__17_get_data(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__17_get_data,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[233],
#endif
        codeobj_1dc2d3fa3809911f495f17781ddd50b4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[101],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__18_form() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__18_form,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[234],
#endif
        codeobj_b21abc332f26df457e6a2389e1b4460e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[102],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__19_values() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__19_values,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        codeobj_474f5eab6c32c350d9a76057b5ad0846,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[105],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__1___init__,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_acb340707f1e12ac17f7e81c21e0b6b4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__20_files() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__20_files,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[237],
#endif
        codeobj_dacc93f99bc0b8f92f364337fca7b729,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[106],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__21_cookies() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__21_cookies,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_9297bead14d116f143d2897874bb6641,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[109],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__22_headers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__22_headers,
        mod_consts[240],
#if PYTHON_VERSION >= 0x300
        mod_consts[241],
#endif
        codeobj_58ff57dc58f6db6214ccc8f599a08e30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[111],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__23_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__23_path,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[242],
#endif
        codeobj_5ed9de16426dfa3c643170eed02a712f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[118],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__24_full_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__24_full_path,
        mod_consts[243],
#if PYTHON_VERSION >= 0x300
        mod_consts[244],
#endif
        codeobj_2ffa34d3514fccf9c5de22fc0943e2b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__25_script_root() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__25_script_root,
        mod_consts[245],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_a893eadaad47fd91480ec6de4821c427,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[126],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__26_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__26_url,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[247],
#endif
        codeobj_6cd26a69e0de87b1d40ba68ea3fbe9d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[129],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__27_base_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__27_base_url,
        mod_consts[248],
#if PYTHON_VERSION >= 0x300
        mod_consts[249],
#endif
        codeobj_e543a57f55cedf700d8453dbd4e708d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[131],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__28_url_root() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__28_url_root,
        mod_consts[250],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_5a2e5911c4a3108e8c0c77c7e655d541,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[132],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__29_host_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__29_host_url,
        mod_consts[252],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_1650c9df050c3bcb9cab3ed1e2b93fce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[134],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__2___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__2___repr__,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_9349506d16afe3f549401b1b3de5874d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__30_host() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__30_host,
        mod_consts[254],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_3d0605bd7c20f62517cda00d2a9ff209,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[136],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__31_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__31_lambda,
        mod_consts[261],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_ed7b3c1d53b0d44d46545b5b89d616f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__32_access_route() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__32_access_route,
        mod_consts[264],
#if PYTHON_VERSION >= 0x300
        mod_consts[265],
#endif
        codeobj_b3434cb46ac3a4750b1651c15723f189,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[142],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__33_remote_addr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__33_remote_addr,
        mod_consts[266],
#if PYTHON_VERSION >= 0x300
        mod_consts[267],
#endif
        codeobj_5f83aaceb64c3c285467cccb2651be03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[144],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__34_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__34_lambda,
        mod_consts[261],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_41ece8fb0ff0bb9a25f92ba9ac0eb349,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__35__assert_not_shallow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__35__assert_not_shallow,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6e8be7d499c0ad622c79943fe8b61ee7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__3_url_charset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__3_url_charset,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_81fe6da42b96e0a6bdbedf95edc9cc3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__4_from_values() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__4_from_values,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_3d44682e97e32ee481fa5ed01ac87f48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__5_application() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__5_application,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[216],
#endif
        codeobj_6fb26fe79176c2a9ac1079f0f1f7914e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__5_application$$$function__1_application(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__5_application$$$function__1_application,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[35],
#endif
        codeobj_b7fe59926da377ec6d0bac0c030b77e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__6__get_file_stream(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__6__get_file_stream,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        codeobj_03c22cb2f0f75dfecbddf381d61c24a7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[52],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__7_want_form_data_parsed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__7_want_form_data_parsed,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[219],
#endif
        codeobj_108dc2f59460c774962e34b3e812b71b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__8_make_form_data_parser() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__8_make_form_data_parser,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[220],
#endif
        codeobj_76bd3d0d3e1ae3d6c1344598119574ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__9__load_form_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_werkzeug$wrappers$base_request$$$function__9__load_form_data,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[221],
#endif
        codeobj_219aacd768ec287d3b4c3dca85a74901,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_werkzeug$wrappers$base_request,
        mod_consts[77],
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

function_impl_code functable_werkzeug$wrappers$base_request[] = {
    impl_werkzeug$wrappers$base_request$$$function__5_application$$$function__1_application,
    impl_werkzeug$wrappers$base_request$$$function__1___init__,
    impl_werkzeug$wrappers$base_request$$$function__2___repr__,
    impl_werkzeug$wrappers$base_request$$$function__3_url_charset,
    impl_werkzeug$wrappers$base_request$$$function__4_from_values,
    impl_werkzeug$wrappers$base_request$$$function__5_application,
    impl_werkzeug$wrappers$base_request$$$function__6__get_file_stream,
    impl_werkzeug$wrappers$base_request$$$function__7_want_form_data_parsed,
    impl_werkzeug$wrappers$base_request$$$function__8_make_form_data_parser,
    impl_werkzeug$wrappers$base_request$$$function__9__load_form_data,
    impl_werkzeug$wrappers$base_request$$$function__10__get_stream_for_parsing,
    impl_werkzeug$wrappers$base_request$$$function__11_close,
    impl_werkzeug$wrappers$base_request$$$function__12___enter__,
    impl_werkzeug$wrappers$base_request$$$function__13___exit__,
    impl_werkzeug$wrappers$base_request$$$function__14_stream,
    impl_werkzeug$wrappers$base_request$$$function__15_args,
    impl_werkzeug$wrappers$base_request$$$function__16_data,
    impl_werkzeug$wrappers$base_request$$$function__17_get_data,
    impl_werkzeug$wrappers$base_request$$$function__18_form,
    impl_werkzeug$wrappers$base_request$$$function__19_values,
    impl_werkzeug$wrappers$base_request$$$function__20_files,
    impl_werkzeug$wrappers$base_request$$$function__21_cookies,
    impl_werkzeug$wrappers$base_request$$$function__22_headers,
    impl_werkzeug$wrappers$base_request$$$function__23_path,
    impl_werkzeug$wrappers$base_request$$$function__24_full_path,
    impl_werkzeug$wrappers$base_request$$$function__25_script_root,
    impl_werkzeug$wrappers$base_request$$$function__26_url,
    impl_werkzeug$wrappers$base_request$$$function__27_base_url,
    impl_werkzeug$wrappers$base_request$$$function__28_url_root,
    impl_werkzeug$wrappers$base_request$$$function__29_host_url,
    impl_werkzeug$wrappers$base_request$$$function__30_host,
    impl_werkzeug$wrappers$base_request$$$function__31_lambda,
    impl_werkzeug$wrappers$base_request$$$function__32_access_route,
    impl_werkzeug$wrappers$base_request$$$function__33_remote_addr,
    impl_werkzeug$wrappers$base_request$$$function__34_lambda,
    impl_werkzeug$wrappers$base_request$$$function__35__assert_not_shallow,
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

    function_impl_code *current = functable_werkzeug$wrappers$base_request;
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

    if (offset > sizeof(functable_werkzeug$wrappers$base_request) || offset < 0) {
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
        functable_werkzeug$wrappers$base_request[offset],
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
        module_werkzeug$wrappers$base_request,
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
PyObject *modulecode_werkzeug$wrappers$base_request(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_werkzeug$wrappers$base_request = module;

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
    PRINT_STRING("werkzeug.wrappers.base_request: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("werkzeug.wrappers.base_request: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("werkzeug.wrappers.base_request: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initwerkzeug$wrappers$base_request\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_werkzeug$wrappers$base_request = MODULE_DICT(module_werkzeug$wrappers$base_request);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_werkzeug$wrappers$base_request,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_werkzeug$wrappers$base_request,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_werkzeug$wrappers$base_request,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_werkzeug$wrappers$base_request,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_werkzeug$wrappers$base_request,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_werkzeug$wrappers$base_request);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_werkzeug$wrappers$base_request);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_68df28d2f0f96b24b8b7672eae75ae88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5ed24e4067540a11fb8a6fbf87a38108_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5ed24e4067540a11fb8a6fbf87a38108_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_68df28d2f0f96b24b8b7672eae75ae88 = MAKE_MODULE_FRAME(codeobj_68df28d2f0f96b24b8b7672eae75ae88, module_werkzeug$wrappers$base_request);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_68df28d2f0f96b24b8b7672eae75ae88);
    assert(Py_REFCNT(frame_68df28d2f0f96b24b8b7672eae75ae88) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[149];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[152], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[153], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[155];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[156];
        tmp_level_name_1 = mod_consts[23];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 1;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[36],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[157];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[158];
        tmp_level_name_2 = mod_consts[23];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[79],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[159];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[160];
        tmp_level_name_3 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[6],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[159];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[161];
        tmp_level_name_4 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 5;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[121],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[121]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[159];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[162];
        tmp_level_name_5 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 6;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[112],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[112]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[159];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[163];
        tmp_level_name_6 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[88],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[88]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[164];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[165];
        tmp_level_name_7 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 8;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[104],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[104]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[164];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[166];
        tmp_level_name_8 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 9;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[110],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[110]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_arg_name_9;
        PyObject *tmp_locals_arg_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = mod_consts[164];
        tmp_globals_arg_name_9 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[167];
        tmp_level_name_9 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 10;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[168],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[168]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_arg_name_10;
        PyObject *tmp_locals_arg_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = mod_consts[164];
        tmp_globals_arg_name_10 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[169];
        tmp_level_name_10 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 11;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[170],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[170]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_arg_name_11;
        PyObject *tmp_locals_arg_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = mod_consts[164];
        tmp_globals_arg_name_11 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_11 = Py_None;
        tmp_fromlist_name_11 = mod_consts[171];
        tmp_level_name_11 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 12;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[82],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_arg_name_12;
        PyObject *tmp_locals_arg_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = mod_consts[164];
        tmp_globals_arg_name_12 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_12 = Py_None;
        tmp_fromlist_name_12 = mod_consts[172];
        tmp_level_name_12 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 13;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[103],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[103]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_arg_name_13;
        PyObject *tmp_locals_arg_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = mod_consts[173];
        tmp_globals_arg_name_13 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_13 = Py_None;
        tmp_fromlist_name_13 = mod_consts[174];
        tmp_level_name_13 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 14;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[47],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_arg_name_14;
        PyObject *tmp_locals_arg_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = mod_consts[173];
        tmp_globals_arg_name_14 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_14 = Py_None;
        tmp_fromlist_name_14 = mod_consts[175];
        tmp_level_name_14 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 15;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[176],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[176]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_arg_name_15;
        PyObject *tmp_locals_arg_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = mod_consts[177];
        tmp_globals_arg_name_15 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_15 = Py_None;
        tmp_fromlist_name_15 = mod_consts[178];
        tmp_level_name_15 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 16;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[107],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[107]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_arg_name_16;
        PyObject *tmp_locals_arg_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = mod_consts[177];
        tmp_globals_arg_name_16 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_16 = Py_None;
        tmp_fromlist_name_16 = mod_consts[179];
        tmp_level_name_16 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 17;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[140],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[140]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_arg_name_17;
        PyObject *tmp_locals_arg_name_17;
        PyObject *tmp_fromlist_name_17;
        PyObject *tmp_level_name_17;
        tmp_name_name_17 = mod_consts[177];
        tmp_globals_arg_name_17 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_17 = Py_None;
        tmp_fromlist_name_17 = mod_consts[180];
        tmp_level_name_17 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 18;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[68],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_18;
        PyObject *tmp_globals_arg_name_18;
        PyObject *tmp_locals_arg_name_18;
        PyObject *tmp_fromlist_name_18;
        PyObject *tmp_level_name_18;
        tmp_name_name_18 = mod_consts[181];
        tmp_globals_arg_name_18 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_18 = Py_None;
        tmp_fromlist_name_18 = mod_consts[182];
        tmp_level_name_18 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 19;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[87],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_name_19;
        PyObject *tmp_globals_arg_name_19;
        PyObject *tmp_locals_arg_name_19;
        PyObject *tmp_fromlist_name_19;
        PyObject *tmp_level_name_19;
        tmp_name_name_19 = mod_consts[183];
        tmp_globals_arg_name_19 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_19 = Py_None;
        tmp_fromlist_name_19 = mod_consts[184];
        tmp_level_name_19 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 20;
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
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[185],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[185]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_name_20;
        PyObject *tmp_globals_arg_name_20;
        PyObject *tmp_locals_arg_name_20;
        PyObject *tmp_fromlist_name_20;
        PyObject *tmp_level_name_20;
        tmp_name_name_20 = mod_consts[183];
        tmp_globals_arg_name_20 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_20 = Py_None;
        tmp_fromlist_name_20 = mod_consts[186];
        tmp_level_name_20 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 21;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_name_20, tmp_globals_arg_name_20, tmp_locals_arg_name_20, tmp_fromlist_name_20, tmp_level_name_20);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[187],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[187]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_name_21;
        PyObject *tmp_globals_arg_name_21;
        PyObject *tmp_locals_arg_name_21;
        PyObject *tmp_fromlist_name_21;
        PyObject *tmp_level_name_21;
        tmp_name_name_21 = mod_consts[188];
        tmp_globals_arg_name_21 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_21 = Py_None;
        tmp_fromlist_name_21 = mod_consts[189];
        tmp_level_name_21 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 22;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_name_21, tmp_globals_arg_name_21, tmp_locals_arg_name_21, tmp_fromlist_name_21, tmp_level_name_21);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[67],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_name_22;
        PyObject *tmp_globals_arg_name_22;
        PyObject *tmp_locals_arg_name_22;
        PyObject *tmp_fromlist_name_22;
        PyObject *tmp_level_name_22;
        tmp_name_name_22 = mod_consts[188];
        tmp_globals_arg_name_22 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_22 = Py_None;
        tmp_fromlist_name_22 = mod_consts[190];
        tmp_level_name_22 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 23;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_name_22, tmp_globals_arg_name_22, tmp_locals_arg_name_22, tmp_fromlist_name_22, tmp_level_name_22);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[127],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[127]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_name_23;
        PyObject *tmp_globals_arg_name_23;
        PyObject *tmp_locals_arg_name_23;
        PyObject *tmp_fromlist_name_23;
        PyObject *tmp_level_name_23;
        tmp_name_name_23 = mod_consts[188];
        tmp_globals_arg_name_23 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_23 = Py_None;
        tmp_fromlist_name_23 = mod_consts[191];
        tmp_level_name_23 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 24;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_name_23, tmp_globals_arg_name_23, tmp_locals_arg_name_23, tmp_fromlist_name_23, tmp_level_name_23);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[135],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_name_24;
        PyObject *tmp_globals_arg_name_24;
        PyObject *tmp_locals_arg_name_24;
        PyObject *tmp_fromlist_name_24;
        PyObject *tmp_level_name_24;
        tmp_name_name_24 = mod_consts[188];
        tmp_globals_arg_name_24 = (PyObject *)moduledict_werkzeug$wrappers$base_request;
        tmp_locals_arg_name_24 = Py_None;
        tmp_fromlist_name_24 = mod_consts[192];
        tmp_level_name_24 = mod_consts[21];
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 25;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_name_24, tmp_globals_arg_name_24, tmp_locals_arg_name_24, tmp_fromlist_name_24, tmp_level_name_24);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_werkzeug$wrappers$base_request,
                mod_consts[85],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[85]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_27);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[193];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_28 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
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
        tmp_key_name_1 = mod_consts[194];
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
        tmp_key_name_2 = mod_consts[194];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

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
        tmp_subscript_name_1 = mod_consts[23];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

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
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[194];
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
    tmp_dictdel_key = mod_consts[194];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 28;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[195]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[195]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[196];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 28;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[197]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

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
        tmp_left_name_1 = mod_consts[198];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[14];
        tmp_getattr_default_1 = mod_consts[199];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

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
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[14]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

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


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 28;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_32;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[200];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[201], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[202];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[148], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[196];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_5ed24e4067540a11fb8a6fbf87a38108_2)) {
            Py_XDECREF(cache_frame_5ed24e4067540a11fb8a6fbf87a38108_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5ed24e4067540a11fb8a6fbf87a38108_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5ed24e4067540a11fb8a6fbf87a38108_2 = MAKE_FUNCTION_FRAME(codeobj_5ed24e4067540a11fb8a6fbf87a38108, module_werkzeug$wrappers$base_request, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_type_description == NULL);
        frame_5ed24e4067540a11fb8a6fbf87a38108_2 = cache_frame_5ed24e4067540a11fb8a6fbf87a38108_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5ed24e4067540a11fb8a6fbf87a38108_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5ed24e4067540a11fb8a6fbf87a38108_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[204];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[17], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[205];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[170]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[170]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }
                Py_INCREF(tmp_dictset_value);
            }
        }

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[168]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[168]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }
                Py_INCREF(tmp_dictset_value);
            }
        }

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[139], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[170]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[170]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }
                Py_INCREF(tmp_dictset_value);
            }
        }

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[108], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[176]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[176]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 131;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }
                Py_INCREF(tmp_dictset_value);
            }
        }

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[56], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[128], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[92], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[206];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[207], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__2___repr__();

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[209], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[211]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
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
            tmp_called_name_2 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[211]);

            if (unlikely(tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[211]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_name_1 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__3_url_charset();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_name_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_2 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__3_url_charset();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[213]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
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
            tmp_called_name_4 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[213]);

            if (unlikely(tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[213]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_name_3 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__4_from_values();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 179;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__4_from_values();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[214], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_classmethod_arg_2;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[213]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_name_5 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[213]);

            if (unlikely(tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[213]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_name_4 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__5_application();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 208;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_4);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__5_application();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[217];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__6__get_file_stream(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_6;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[211]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_name_6 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[211]);

            if (unlikely(tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[211]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_name_5 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__7_want_form_data_parsed();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 274;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_name_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_6 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__7_want_form_data_parsed();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 274;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__8_make_form_data_parser();

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[70], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__9__load_form_data();

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[97], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__10__get_stream_for_parsing();

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__11_close();

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[29], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__12___enter__();

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__13___exit__();

        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_7;
            tmp_called_name_8 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_8 == NULL)) {
                        tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 362;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_8);
                }
            }



            tmp_args_element_name_7 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__14_stream();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 362;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_7);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[73], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_9;
            tmp_called_name_9 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[187]);

            if (tmp_called_name_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_name_9 == NULL)) {
                        tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_name_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 383;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_9);
                }
            }

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 383;
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_9, &PyTuple_GET_ITEM(mod_consts[227], 0));

            Py_DECREF(tmp_called_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[228], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_8;
            tmp_called_name_10 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_10 == NULL)) {
                        tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 392;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_10);
                }
            }



            tmp_args_element_name_8 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__15_args();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 392;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_9;
            tmp_called_name_11 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_11 == NULL)) {
                        tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 410;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_11);
                }
            }



            tmp_args_element_name_9 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__16_data();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 410;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_9);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[230], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[232];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__17_get_data(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_element_name_10;
            tmp_called_name_12 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_12 == NULL)) {
                        tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 464;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_12);
                }
            }



            tmp_args_element_name_10 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__18_form();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 464;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_element_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_element_name_11;
            tmp_called_name_13 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_13 == NULL)) {
                        tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 483;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_13);
                }
            }



            tmp_args_element_name_11 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__19_values();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 483;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_11);
            Py_DECREF(tmp_called_name_13);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[235], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_element_name_12;
            tmp_called_name_14 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_14 == NULL)) {
                        tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 494;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_14);
                }
            }



            tmp_args_element_name_12 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__20_files();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 494;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_15;
            PyObject *tmp_args_element_name_13;
            tmp_called_name_15 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_15 == NULL)) {
                        tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 517;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_15);
                }
            }



            tmp_args_element_name_13 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__21_cookies();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 517;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_13);
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 517;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[238], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 518;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_element_name_14;
            tmp_called_name_16 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_16 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_16 == NULL)) {
                        tmp_called_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 528;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_16);
                }
            }



            tmp_args_element_name_14 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__22_headers();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 528;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_args_element_name_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 528;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[240], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_17;
            PyObject *tmp_args_element_name_15;
            tmp_called_name_17 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_17 == NULL)) {
                        tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 535;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_17);
                }
            }



            tmp_args_element_name_15 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__23_path();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 535;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_15);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_args_element_name_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 535;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[119], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 536;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_18;
            PyObject *tmp_args_element_name_16;
            tmp_called_name_18 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_18 == NULL)) {
                        tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 546;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_18);
                }
            }



            tmp_args_element_name_16 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__24_full_path();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 546;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_element_name_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[243], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_19;
            PyObject *tmp_args_element_name_17;
            tmp_called_name_19 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_19 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_19 == NULL)) {
                        tmp_called_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 551;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_19);
                }
            }



            tmp_args_element_name_17 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__25_script_root();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 551;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_17);
            Py_DECREF(tmp_called_name_19);
            Py_DECREF(tmp_args_element_name_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[245], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_20;
            PyObject *tmp_args_element_name_18;
            tmp_called_name_20 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_20 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_20 == NULL)) {
                        tmp_called_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 559;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_20);
                }
            }



            tmp_args_element_name_18 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__26_url();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 559;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_21;
            PyObject *tmp_args_element_name_19;
            tmp_called_name_21 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_21 == NULL)) {
                        tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 566;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_21);
                }
            }



            tmp_args_element_name_19 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__27_base_url();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 566;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_19);
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[248], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_22;
            PyObject *tmp_args_element_name_20;
            tmp_called_name_22 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_22 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_22 == NULL)) {
                        tmp_called_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 575;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_22);
                }
            }



            tmp_args_element_name_20 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__28_url_root();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 575;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_args_element_name_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 575;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[250], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 576;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_23;
            PyObject *tmp_args_element_name_21;
            tmp_called_name_23 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_23 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_23 == NULL)) {
                        tmp_called_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 583;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_23);
                }
            }



            tmp_args_element_name_21 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__29_host_url();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 583;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_21);
            Py_DECREF(tmp_called_name_23);
            Py_DECREF(tmp_args_element_name_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 583;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[252], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 584;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_24;
            PyObject *tmp_args_element_name_22;
            tmp_called_name_24 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_24 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_24 == NULL)) {
                        tmp_called_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 592;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_24);
                }
            }



            tmp_args_element_name_22 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__30_host();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 592;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_args_element_name_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 592;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[254], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 593;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_25;
            PyObject *tmp_args_name_2;
            PyObject *tmp_kwargs_name_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_called_name_25 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[187]);

            if (tmp_called_name_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_25 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_name_25 == NULL)) {
                        tmp_called_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_name_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 599;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_25);
                }
            }

            tmp_args_name_2 = mod_consts[89];
            tmp_dict_key_1 = mod_consts[256];
            tmp_dict_value_1 = Py_True;
            tmp_kwargs_name_2 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[257];
            tmp_dict_value_1 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[88]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_dict_value_1 == NULL)) {
                        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_dict_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 603;
                        type_description_2 = "o";
                        goto dict_build_exception_1;
                    }
                    Py_INCREF(tmp_dict_value_1);
                }
            }

            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[258];
            tmp_dict_value_1 = mod_consts[259];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_called_name_25);
            Py_DECREF(tmp_kwargs_name_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 599;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_25, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_called_name_25);
            Py_DECREF(tmp_kwargs_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 599;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 599;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_26;
            PyObject *tmp_args_name_3;
            PyObject *tmp_kwargs_name_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_called_name_26 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[187]);

            if (tmp_called_name_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_26 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_name_26 == NULL)) {
                        tmp_called_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_name_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 606;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_26);
                }
            }

            tmp_args_name_3 = mod_consts[260];
            tmp_dict_key_2 = mod_consts[256];
            tmp_dict_value_2 = Py_True;
            tmp_kwargs_name_3 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[257];


            tmp_dict_value_2 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__31_lambda();

            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[258];
            tmp_dict_value_2 = mod_consts[263];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 606;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_26, tmp_args_name_3, tmp_kwargs_name_3);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_kwargs_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 606;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 606;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_27;
            PyObject *tmp_args_element_name_23;
            tmp_called_name_27 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[185]);

            if (tmp_called_name_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_27 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_27 == NULL)) {
                        tmp_called_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 614;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_27);
                }
            }



            tmp_args_element_name_23 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__32_access_route();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 614;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_23);
            Py_DECREF(tmp_called_name_27);
            Py_DECREF(tmp_args_element_name_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[264], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_name_28;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_called_name_29;
            PyObject *tmp_args_element_name_25;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[211]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_name_28 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[211]);

            if (unlikely(tmp_called_name_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[211]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_name_24 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__33_remote_addr();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 627;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, tmp_args_element_name_24);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_args_element_name_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_name_29 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_25 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__33_remote_addr();

            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 627;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_25);
            Py_DECREF(tmp_args_element_name_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[266], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_30;
            PyObject *tmp_args_name_4;
            PyObject *tmp_kwargs_name_4;
            tmp_called_name_30 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[187]);

            if (tmp_called_name_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_30 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_name_30 == NULL)) {
                        tmp_called_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_name_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 632;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_30);
                }
            }

            tmp_args_name_4 = mod_consts[268];
            tmp_kwargs_name_4 = PyDict_Copy(mod_consts[269]);
            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 632;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_30, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_kwargs_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[270], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_31;
            PyObject *tmp_args_name_5;
            PyObject *tmp_kwargs_name_5;
            tmp_called_name_31 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[187]);

            if (tmp_called_name_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_31 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_name_31 == NULL)) {
                        tmp_called_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_name_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 638;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_31);
                }
            }

            tmp_args_name_5 = mod_consts[271];
            tmp_kwargs_name_5 = PyDict_Copy(mod_consts[272]);
            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 638;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_31, tmp_args_name_5, tmp_kwargs_name_5);
            Py_DECREF(tmp_called_name_31);
            Py_DECREF(tmp_kwargs_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 638;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[273], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 638;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_name_32;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_name_6;
            PyObject *tmp_called_name_33;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_name_7;
            tmp_res = MAPPING_HAS_ITEM(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[211]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_name_32 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[211]);

            if (unlikely(tmp_called_name_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[211]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_tuple_element_3 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__34_lambda();

            tmp_args_name_6 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_args_name_6, 0, tmp_tuple_element_3);
            tmp_kwargs_name_6 = PyDict_Copy(mod_consts[274]);
            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 645;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_32, tmp_args_name_6, tmp_kwargs_name_6);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_args_name_6);
            Py_DECREF(tmp_kwargs_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_name_33 = (PyObject *)&PyProperty_Type;


            tmp_tuple_element_4 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__34_lambda();

            tmp_args_name_7 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_args_name_7, 0, tmp_tuple_element_4);
            tmp_kwargs_name_7 = PyDict_Copy(mod_consts[274]);
            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 645;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_33, tmp_args_name_7, tmp_kwargs_name_7);
            Py_DECREF(tmp_args_name_7);
            Py_DECREF(tmp_kwargs_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[275], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_34;
            PyObject *tmp_args_name_8;
            PyObject *tmp_kwargs_name_8;
            tmp_called_name_34 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[187]);

            if (tmp_called_name_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_34 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_name_34 == NULL)) {
                        tmp_called_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_name_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 649;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_34);
                }
            }

            tmp_args_name_8 = mod_consts[276];
            tmp_kwargs_name_8 = PyDict_Copy(mod_consts[277]);
            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 649;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_34, tmp_args_name_8, tmp_kwargs_name_8);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_kwargs_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[278], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_35;
            PyObject *tmp_args_name_9;
            PyObject *tmp_kwargs_name_9;
            tmp_called_name_35 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[187]);

            if (tmp_called_name_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_35 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_name_35 == NULL)) {
                        tmp_called_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_name_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 654;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_35);
                }
            }

            tmp_args_name_9 = mod_consts[279];
            tmp_kwargs_name_9 = PyDict_Copy(mod_consts[280]);
            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 654;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_35, tmp_args_name_9, tmp_kwargs_name_9);
            Py_DECREF(tmp_called_name_35);
            Py_DECREF(tmp_kwargs_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[281], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_36;
            PyObject *tmp_args_name_10;
            PyObject *tmp_kwargs_name_10;
            tmp_called_name_36 = PyObject_GetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[187]);

            if (tmp_called_name_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_36 = GET_STRING_DICT_VALUE(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[187]);

                    if (unlikely(tmp_called_name_36 == NULL)) {
                        tmp_called_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
                    }

                    if (tmp_called_name_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 659;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_36);
                }
            }

            tmp_args_name_10 = mod_consts[282];
            tmp_kwargs_name_10 = PyDict_Copy(mod_consts[283]);
            frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame.f_lineno = 659;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_36, tmp_args_name_10, tmp_kwargs_name_10);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_kwargs_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 659;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[284], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 659;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5ed24e4067540a11fb8a6fbf87a38108_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5ed24e4067540a11fb8a6fbf87a38108_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5ed24e4067540a11fb8a6fbf87a38108_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5ed24e4067540a11fb8a6fbf87a38108_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5ed24e4067540a11fb8a6fbf87a38108_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5ed24e4067540a11fb8a6fbf87a38108_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_5ed24e4067540a11fb8a6fbf87a38108_2 == cache_frame_5ed24e4067540a11fb8a6fbf87a38108_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_5ed24e4067540a11fb8a6fbf87a38108_2);
            cache_frame_5ed24e4067540a11fb8a6fbf87a38108_2 = NULL;
        }

        assertFrameObject(frame_5ed24e4067540a11fb8a6fbf87a38108_2);

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
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = mod_consts[193];
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[193];
        tmp_res = PyObject_SetItem(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28, mod_consts[285], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_name_37;
            PyObject *tmp_args_name_11;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_name_11;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_37 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[196];
            tmp_args_name_11 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_11, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_11, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28;
            PyTuple_SET_ITEM0(tmp_args_name_11, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_11 = tmp_class_creation_1__class_decl_dict;
            frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame.f_lineno = 28;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_name_37, tmp_args_name_11, tmp_kwargs_name_11);
            Py_DECREF(tmp_args_name_11);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_33 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28);
        locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28 = NULL;
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

        Py_DECREF(locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28);
        locals_werkzeug$wrappers$base_request$$$class__1_BaseRequest_28 = NULL;
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
        exception_lineno = 28;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_33);
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_68df28d2f0f96b24b8b7672eae75ae88);
#endif
    popFrameStack();

    assertFrameObject(frame_68df28d2f0f96b24b8b7672eae75ae88);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_68df28d2f0f96b24b8b7672eae75ae88);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_68df28d2f0f96b24b8b7672eae75ae88, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_68df28d2f0f96b24b8b7672eae75ae88->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_68df28d2f0f96b24b8b7672eae75ae88, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_werkzeug$wrappers$base_request$$$function__35__assert_not_shallow();

        UPDATE_STRING_DICT1(moduledict_werkzeug$wrappers$base_request, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_35);
    }

    return module_werkzeug$wrappers$base_request;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

