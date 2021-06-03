/* Generated code for Python module 'flask.helpers'
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

/* The "module_flask$helpers" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flask$helpers;
PyDictObject *moduledict_flask$helpers;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[419];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flask.helpers"));
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
void checkModuleConstants_flask$helpers(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "flask.helpers");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7f7b4f1119fc783cb7b6fce73b6cd5d3;
static PyCodeObject *codeobj_316e1bda1eea7e9136b528610d922a59;
static PyCodeObject *codeobj_e7f2e2d85f08f648f546b393b9569ae2;
static PyCodeObject *codeobj_2dffc27add4b44bf6080e5a65b3ea7c3;
static PyCodeObject *codeobj_f98abe36b95ca69a88ff346a3d6d9263;
static PyCodeObject *codeobj_341ef58bc638ee8c14bbf71578303b07;
static PyCodeObject *codeobj_d601e5f322f2787b517fc0b0d9cb0891;
static PyCodeObject *codeobj_d30182c5f74644996e50516ff61f6e4e;
static PyCodeObject *codeobj_bcc10711005b98b6fb942439eb571ea6;
static PyCodeObject *codeobj_ba22fd2decd55f0025c5d8dedb95ce06;
static PyCodeObject *codeobj_c630bc58128448747ae9b2a2288ee685;
static PyCodeObject *codeobj_e68c0de3aec52671f3d7fe4eb6d6ad1a;
static PyCodeObject *codeobj_6422d8614f3b1b5c9af26f7a006e1a36;
static PyCodeObject *codeobj_074ca5ebeaa9be2b3be6f26c50e35b6e;
static PyCodeObject *codeobj_6b82acf1e57146a2e1b71fa9fcb02073;
static PyCodeObject *codeobj_c7f89a174bf16aa5fa89f06c4041cb25;
static PyCodeObject *codeobj_3f0ccd43d03b9a381428fc59fd4e5c1c;
static PyCodeObject *codeobj_0850c06412117e59ae126b9c2f3bde8b;
static PyCodeObject *codeobj_c37b36e78f71b0ff36576a51dc5942ea;
static PyCodeObject *codeobj_b002ee83705153213faefa68e4c6f131;
static PyCodeObject *codeobj_62f37a10df8a6c98d6a64b68a5aab824;
static PyCodeObject *codeobj_1614de05419aa8a9f22cfcc7fe2c84ad;
static PyCodeObject *codeobj_1c91fe8a03917afa6e2ec0d7d4a84257;
static PyCodeObject *codeobj_0323d8c88f0657e46ac33fb5a9378771;
static PyCodeObject *codeobj_c369f40142862624d49378876919f416;
static PyCodeObject *codeobj_92f4f396578c383df2ed6e26f6b65c2a;
static PyCodeObject *codeobj_2eacff08968172f2a8f1316944b1e3ec;
static PyCodeObject *codeobj_8f5dfb8821cccc3aeb55a51c04449cc6;
static PyCodeObject *codeobj_e6cbd24610299eb01a24b19160ec1c44;
static PyCodeObject *codeobj_6d3050c8d7150d6afef05d96ce58a420;
static PyCodeObject *codeobj_84ee2a8322e4ab0fb49e39cb92f5c126;
static PyCodeObject *codeobj_29d2cb530bbf5aa548fc3142510ad3da;
static PyCodeObject *codeobj_317c8759b51bff47ef35e31211cdfc30;
static PyCodeObject *codeobj_0708275b2928dd571b3d744fbf39f350;
static PyCodeObject *codeobj_7548788f731beffc8dfd8635a01ac57e;
static PyCodeObject *codeobj_90790b613dbcbf4f9d28b1281620394b;
static PyCodeObject *codeobj_b63fad2c2f8711f94dd324d895722756;
static PyCodeObject *codeobj_dea858f73efed4994f1f5668c0210a8e;
static PyCodeObject *codeobj_bfea9c8f94946c8b96e8ce9eda220482;
static PyCodeObject *codeobj_c63e8ed2b45ae814e4f2fd1c7c9367ff;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[294]; CHECK_OBJECT(module_filename_obj);
    codeobj_7f7b4f1119fc783cb7b6fce73b6cd5d3 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[380], NULL, 1, 0, 0);
    codeobj_316e1bda1eea7e9136b528610d922a59 = MAKE_CODEOBJECT(module_filename_obj, 721, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[381], NULL, 1, 0, 0);
    codeobj_e7f2e2d85f08f648f546b393b9569ae2 = MAKE_CODEOBJECT(module_filename_obj, 463, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[94], mod_consts[382], mod_consts[383], 1, 0, 0);
    codeobj_2dffc27add4b44bf6080e5a65b3ea7c3 = MAKE_CODEOBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[384], mod_consts[385], NULL, 1, 0, 0);
    codeobj_f98abe36b95ca69a88ff346a3d6d9263 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[386], NULL, NULL, 0, 0, 0);
    codeobj_341ef58bc638ee8c14bbf71578303b07 = MAKE_CODEOBJECT(module_filename_obj, 962, CO_NOFREE, mod_consts[363], mod_consts[387], NULL, 0, 0, 0);
    codeobj_d601e5f322f2787b517fc0b0d9cb0891 = MAKE_CODEOBJECT(module_filename_obj, 951, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[360], mod_consts[388], NULL, 3, 0, 0);
    codeobj_d30182c5f74644996e50516ff61f6e4e = MAKE_CODEOBJECT(module_filename_obj, 944, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[357], mod_consts[389], NULL, 4, 0, 0);
    codeobj_bcc10711005b98b6fb942439eb571ea6 = MAKE_CODEOBJECT(module_filename_obj, 975, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[357], mod_consts[390], NULL, 4, 0, 0);
    codeobj_ba22fd2decd55f0025c5d8dedb95ce06 = MAKE_CODEOBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[337], mod_consts[391], NULL, 1, 0, 0);
    codeobj_c630bc58128448747ae9b2a2288ee685 = MAKE_CODEOBJECT(module_filename_obj, 850, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[230], mod_consts[392], NULL, 1, 0, 0);
    codeobj_e68c0de3aec52671f3d7fe4eb6d6ad1a = MAKE_CODEOBJECT(module_filename_obj, 822, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[224], mod_consts[393], NULL, 2, 0, 0);
    codeobj_6422d8614f3b1b5c9af26f7a006e1a36 = MAKE_CODEOBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[19], mod_consts[394], mod_consts[395], 0, 0, 0);
    codeobj_074ca5ebeaa9be2b3be6f26c50e35b6e = MAKE_CODEOBJECT(module_filename_obj, 908, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[345], mod_consts[396], NULL, 1, 0, 0);
    codeobj_6b82acf1e57146a2e1b71fa9fcb02073 = MAKE_CODEOBJECT(module_filename_obj, 399, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[341], mod_consts[397], NULL, 2, 0, 0);
    codeobj_c7f89a174bf16aa5fa89f06c4041cb25 = MAKE_CODEOBJECT(module_filename_obj, 145, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[23], mod_consts[398], mod_consts[399], 0, 0, 0);
    codeobj_3f0ccd43d03b9a381428fc59fd4e5c1c = MAKE_CODEOBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[334], mod_consts[400], NULL, 0, 0, 0);
    codeobj_0850c06412117e59ae126b9c2f3bde8b = MAKE_CODEOBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], NULL, NULL, 0, 0, 0);
    codeobj_c37b36e78f71b0ff36576a51dc5942ea = MAKE_CODEOBJECT(module_filename_obj, 429, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[343], mod_consts[401], NULL, 2, 0, 0);
    codeobj_b002ee83705153213faefa68e4c6f131 = MAKE_CODEOBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[336], mod_consts[402], NULL, 1, 0, 0);
    codeobj_62f37a10df8a6c98d6a64b68a5aab824 = MAKE_CODEOBJECT(module_filename_obj, 774, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[249], mod_consts[403], NULL, 1, 0, 0);
    codeobj_1614de05419aa8a9f22cfcc7fe2c84ad = MAKE_CODEOBJECT(module_filename_obj, 1046, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[404], NULL, 2, 0, 0);
    codeobj_1c91fe8a03917afa6e2ec0d7d4a84257 = MAKE_CODEOBJECT(module_filename_obj, 377, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[339], mod_consts[405], NULL, 2, 0, 0);
    codeobj_0323d8c88f0657e46ac33fb5a9378771 = MAKE_CODEOBJECT(module_filename_obj, 1029, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[268], mod_consts[406], NULL, 1, 0, 0);
    codeobj_c369f40142862624d49378876919f416 = MAKE_CODEOBJECT(module_filename_obj, 1128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[379], mod_consts[407], NULL, 1, 0, 0);
    codeobj_92f4f396578c383df2ed6e26f6b65c2a = MAKE_CODEOBJECT(module_filename_obj, 1038, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[371], mod_consts[406], NULL, 1, 0, 0);
    codeobj_2eacff08968172f2a8f1316944b1e3ec = MAKE_CODEOBJECT(module_filename_obj, 936, CO_NOFREE, mod_consts[349], mod_consts[387], NULL, 0, 0, 0);
    codeobj_8f5dfb8821cccc3aeb55a51c04449cc6 = MAKE_CODEOBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[41], mod_consts[408], NULL, 0, 0, 0);
    codeobj_e6cbd24610299eb01a24b19160ec1c44 = MAKE_CODEOBJECT(module_filename_obj, 1087, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[377], mod_consts[409], NULL, 3, 0, 0);
    codeobj_6d3050c8d7150d6afef05d96ce58a420 = MAKE_CODEOBJECT(module_filename_obj, 696, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[182], mod_consts[410], NULL, 1, 0, 0);
    codeobj_84ee2a8322e4ab0fb49e39cb92f5c126 = MAKE_CODEOBJECT(module_filename_obj, 469, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[188], mod_consts[411], NULL, 8, 0, 0);
    codeobj_29d2cb530bbf5aa548fc3142510ad3da = MAKE_CODEOBJECT(module_filename_obj, 733, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[270], mod_consts[412], NULL, 2, 0, 0);
    codeobj_317c8759b51bff47ef35e31211cdfc30 = MAKE_CODEOBJECT(module_filename_obj, 1072, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[374], mod_consts[413], NULL, 2, 0, 0);
    codeobj_0708275b2928dd571b3d744fbf39f350 = MAKE_CODEOBJECT(module_filename_obj, 996, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[258], mod_consts[406], NULL, 1, 0, 0);
    codeobj_7548788f731beffc8dfd8635a01ac57e = MAKE_CODEOBJECT(module_filename_obj, 1002, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[258], mod_consts[414], NULL, 2, 0, 0);
    codeobj_90790b613dbcbf4f9d28b1281620394b = MAKE_CODEOBJECT(module_filename_obj, 1008, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[368], mod_consts[415], NULL, 1, 0, 0);
    codeobj_b63fad2c2f8711f94dd324d895722756 = MAKE_CODEOBJECT(module_filename_obj, 1022, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[368], mod_consts[414], NULL, 2, 0, 0);
    codeobj_dea858f73efed4994f1f5668c0210a8e = MAKE_CODEOBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[416], NULL, 1, 0, 0);
    codeobj_bfea9c8f94946c8b96e8ce9eda220482 = MAKE_CODEOBJECT(module_filename_obj, 1117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[265], mod_consts[417], NULL, 1, 0, 0);
    codeobj_c63e8ed2b45ae814e4f2fd1c7c9367ff = MAKE_CODEOBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[338], mod_consts[418], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_flask$helpers$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_flask$helpers$$$function__5_stream_with_context$$$function__2_generator$$$genobj__1_generator(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_flask$helpers$$$function__12_safe_join$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__10_get_flashed_messages(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__10_get_flashed_messages$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__11_send_file(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__12_safe_join();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__13_send_from_directory();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__14_get_root_path();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__15__matching_loader_thinks_module_is_package();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__16__find_package_path();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__17_find_package();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__18___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__19___get__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__1_get_env();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__20___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__21_static_folder();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__22_static_folder();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__23_static_url_path();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__24_static_url_path();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__25_has_static_folder();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__26_jinja_loader();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__27_get_send_file_max_age();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__28_send_static_file();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__29_open_resource(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__2_get_debug_flag();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__30_total_seconds();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__31_is_ip();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__3_get_load_dotenv(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__4__endpoint_from_view_func();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__5_stream_with_context();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__5_stream_with_context$$$function__1_decorator(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__5_stream_with_context$$$function__2_generator(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__6_make_response();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__7_url_for();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__8_get_template_attribute();


static PyObject *MAKE_FUNCTION_flask$helpers$$$function__9_flash(PyObject *defaults);


// The module function definitions.

struct flask$helpers$$$genexpr__1_genexpr_locals {
    PyObject *var_sep;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *flask$helpers$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct flask$helpers$$$genexpr__1_genexpr_locals *generator_heap = (struct flask$helpers$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_sep = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_7f7b4f1119fc783cb7b6fce73b6cd5d3, module_flask$helpers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 51;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_sep;
            generator_heap->var_sep = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_sep);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(generator_heap->var_sep);
        tmp_compexpr_left_1 = generator_heap->var_sep;
        tmp_compexpr_right_1 = mod_consts[0];
        generator_heap->tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 52;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_sep);
        tmp_expression_name_1 = generator_heap->var_sep;
        Py_INCREF(tmp_expression_name_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 51;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 51;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_sep
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_sep);
    generator_heap->var_sep = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_sep);
    generator_heap->var_sep = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_flask$helpers$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        flask$helpers$$$genexpr__1_genexpr_context,
        module_flask$helpers,
        mod_consts[1],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_7f7b4f1119fc783cb7b6fce73b6cd5d3,
        closure,
        1,
        sizeof(struct flask$helpers$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_flask$helpers$$$function__1_get_env(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0850c06412117e59ae126b9c2f3bde8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0850c06412117e59ae126b9c2f3bde8b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0850c06412117e59ae126b9c2f3bde8b)) {
        Py_XDECREF(cache_frame_0850c06412117e59ae126b9c2f3bde8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0850c06412117e59ae126b9c2f3bde8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0850c06412117e59ae126b9c2f3bde8b = MAKE_FUNCTION_FRAME(codeobj_0850c06412117e59ae126b9c2f3bde8b, module_flask$helpers, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0850c06412117e59ae126b9c2f3bde8b->m_type_description == NULL);
    frame_0850c06412117e59ae126b9c2f3bde8b = cache_frame_0850c06412117e59ae126b9c2f3bde8b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0850c06412117e59ae126b9c2f3bde8b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0850c06412117e59ae126b9c2f3bde8b) == 2); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        frame_0850c06412117e59ae126b9c2f3bde8b->m_frame.f_lineno = 61;
        tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[4],
            &PyTuple_GET_ITEM(mod_consts[5], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[6];
        Py_INCREF(tmp_or_right_value_1);
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0850c06412117e59ae126b9c2f3bde8b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0850c06412117e59ae126b9c2f3bde8b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0850c06412117e59ae126b9c2f3bde8b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0850c06412117e59ae126b9c2f3bde8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0850c06412117e59ae126b9c2f3bde8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0850c06412117e59ae126b9c2f3bde8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0850c06412117e59ae126b9c2f3bde8b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_0850c06412117e59ae126b9c2f3bde8b == cache_frame_0850c06412117e59ae126b9c2f3bde8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0850c06412117e59ae126b9c2f3bde8b);
        cache_frame_0850c06412117e59ae126b9c2f3bde8b = NULL;
    }

    assertFrameObject(frame_0850c06412117e59ae126b9c2f3bde8b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

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


static PyObject *impl_flask$helpers$$$function__2_get_debug_flag(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_val = NULL;
    struct Nuitka_FrameObject *frame_3f0ccd43d03b9a381428fc59fd4e5c1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3f0ccd43d03b9a381428fc59fd4e5c1c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3f0ccd43d03b9a381428fc59fd4e5c1c)) {
        Py_XDECREF(cache_frame_3f0ccd43d03b9a381428fc59fd4e5c1c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f0ccd43d03b9a381428fc59fd4e5c1c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f0ccd43d03b9a381428fc59fd4e5c1c = MAKE_FUNCTION_FRAME(codeobj_3f0ccd43d03b9a381428fc59fd4e5c1c, module_flask$helpers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3f0ccd43d03b9a381428fc59fd4e5c1c->m_type_description == NULL);
    frame_3f0ccd43d03b9a381428fc59fd4e5c1c = cache_frame_3f0ccd43d03b9a381428fc59fd4e5c1c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3f0ccd43d03b9a381428fc59fd4e5c1c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3f0ccd43d03b9a381428fc59fd4e5c1c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3f0ccd43d03b9a381428fc59fd4e5c1c->m_frame.f_lineno = 70;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[4],
            &PyTuple_GET_ITEM(mod_consts[8], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_val);
        tmp_operand_name_1 = var_val;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
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
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3f0ccd43d03b9a381428fc59fd4e5c1c->m_frame.f_lineno = 73;
        tmp_compexpr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[10];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_val);
        tmp_called_instance_2 = var_val;
        frame_3f0ccd43d03b9a381428fc59fd4e5c1c->m_frame.f_lineno = 75;
        tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[11]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[12];
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f0ccd43d03b9a381428fc59fd4e5c1c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f0ccd43d03b9a381428fc59fd4e5c1c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f0ccd43d03b9a381428fc59fd4e5c1c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3f0ccd43d03b9a381428fc59fd4e5c1c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f0ccd43d03b9a381428fc59fd4e5c1c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f0ccd43d03b9a381428fc59fd4e5c1c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f0ccd43d03b9a381428fc59fd4e5c1c,
        type_description_1,
        var_val
    );


    // Release cached frame if used for exception.
    if (frame_3f0ccd43d03b9a381428fc59fd4e5c1c == cache_frame_3f0ccd43d03b9a381428fc59fd4e5c1c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3f0ccd43d03b9a381428fc59fd4e5c1c);
        cache_frame_3f0ccd43d03b9a381428fc59fd4e5c1c = NULL;
    }

    assertFrameObject(frame_3f0ccd43d03b9a381428fc59fd4e5c1c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_val);
    var_val = NULL;
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

    Py_XDECREF(var_val);
    var_val = NULL;
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


static PyObject *impl_flask$helpers$$$function__3_get_load_dotenv(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_default = python_pars[0];
    PyObject *var_val = NULL;
    struct Nuitka_FrameObject *frame_b002ee83705153213faefa68e4c6f131;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b002ee83705153213faefa68e4c6f131 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b002ee83705153213faefa68e4c6f131)) {
        Py_XDECREF(cache_frame_b002ee83705153213faefa68e4c6f131);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b002ee83705153213faefa68e4c6f131 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b002ee83705153213faefa68e4c6f131 = MAKE_FUNCTION_FRAME(codeobj_b002ee83705153213faefa68e4c6f131, module_flask$helpers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b002ee83705153213faefa68e4c6f131->m_type_description == NULL);
    frame_b002ee83705153213faefa68e4c6f131 = cache_frame_b002ee83705153213faefa68e4c6f131;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b002ee83705153213faefa68e4c6f131);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b002ee83705153213faefa68e4c6f131) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b002ee83705153213faefa68e4c6f131->m_frame.f_lineno = 85;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[4],
            &PyTuple_GET_ITEM(mod_consts[14], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_val);
        tmp_operand_name_1 = var_val;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
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
    CHECK_OBJECT(par_default);
    tmp_return_value = par_default;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_val);
        tmp_called_instance_2 = var_val;
        frame_b002ee83705153213faefa68e4c6f131->m_frame.f_lineno = 90;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[11]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[12];
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b002ee83705153213faefa68e4c6f131);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b002ee83705153213faefa68e4c6f131);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b002ee83705153213faefa68e4c6f131);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b002ee83705153213faefa68e4c6f131, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b002ee83705153213faefa68e4c6f131->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b002ee83705153213faefa68e4c6f131, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b002ee83705153213faefa68e4c6f131,
        type_description_1,
        par_default,
        var_val
    );


    // Release cached frame if used for exception.
    if (frame_b002ee83705153213faefa68e4c6f131 == cache_frame_b002ee83705153213faefa68e4c6f131) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b002ee83705153213faefa68e4c6f131);
        cache_frame_b002ee83705153213faefa68e4c6f131 = NULL;
    }

    assertFrameObject(frame_b002ee83705153213faefa68e4c6f131);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    par_default = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
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

    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    par_default = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
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


static PyObject *impl_flask$helpers$$$function__4__endpoint_from_view_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_view_func = python_pars[0];
    struct Nuitka_FrameObject *frame_ba22fd2decd55f0025c5d8dedb95ce06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ba22fd2decd55f0025c5d8dedb95ce06 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ba22fd2decd55f0025c5d8dedb95ce06)) {
        Py_XDECREF(cache_frame_ba22fd2decd55f0025c5d8dedb95ce06);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba22fd2decd55f0025c5d8dedb95ce06 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba22fd2decd55f0025c5d8dedb95ce06 = MAKE_FUNCTION_FRAME(codeobj_ba22fd2decd55f0025c5d8dedb95ce06, module_flask$helpers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ba22fd2decd55f0025c5d8dedb95ce06->m_type_description == NULL);
    frame_ba22fd2decd55f0025c5d8dedb95ce06 = cache_frame_ba22fd2decd55f0025c5d8dedb95ce06;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ba22fd2decd55f0025c5d8dedb95ce06);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ba22fd2decd55f0025c5d8dedb95ce06) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_view_func);
        tmp_compexpr_left_1 = par_view_func;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[16];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 97;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_view_func);
        tmp_expression_name_1 = par_view_func;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba22fd2decd55f0025c5d8dedb95ce06);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba22fd2decd55f0025c5d8dedb95ce06);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba22fd2decd55f0025c5d8dedb95ce06);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba22fd2decd55f0025c5d8dedb95ce06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba22fd2decd55f0025c5d8dedb95ce06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba22fd2decd55f0025c5d8dedb95ce06, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba22fd2decd55f0025c5d8dedb95ce06,
        type_description_1,
        par_view_func
    );


    // Release cached frame if used for exception.
    if (frame_ba22fd2decd55f0025c5d8dedb95ce06 == cache_frame_ba22fd2decd55f0025c5d8dedb95ce06) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ba22fd2decd55f0025c5d8dedb95ce06);
        cache_frame_ba22fd2decd55f0025c5d8dedb95ce06 = NULL;
    }

    assertFrameObject(frame_ba22fd2decd55f0025c5d8dedb95ce06);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_view_func);
    par_view_func = NULL;
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

    Py_XDECREF(par_view_func);
    par_view_func = NULL;
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


static PyObject *impl_flask$helpers$$$function__5_stream_with_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_generator_or_function = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *var_gen = Nuitka_Cell_Empty();
    PyObject *var_decorator = NULL;
    PyObject *var_generator = NULL;
    PyObject *var_wrapped_g = NULL;
    struct Nuitka_FrameObject *frame_dea858f73efed4994f1f5668c0210a8e;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_dea858f73efed4994f1f5668c0210a8e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dea858f73efed4994f1f5668c0210a8e)) {
        Py_XDECREF(cache_frame_dea858f73efed4994f1f5668c0210a8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dea858f73efed4994f1f5668c0210a8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dea858f73efed4994f1f5668c0210a8e = MAKE_FUNCTION_FRAME(codeobj_dea858f73efed4994f1f5668c0210a8e, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dea858f73efed4994f1f5668c0210a8e->m_type_description == NULL);
    frame_dea858f73efed4994f1f5668c0210a8e = cache_frame_dea858f73efed4994f1f5668c0210a8e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dea858f73efed4994f1f5668c0210a8e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dea858f73efed4994f1f5668c0210a8e) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_generator_or_function));
        tmp_iter_arg_1 = Nuitka_Cell_GET(par_generator_or_function);
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        assert(Nuitka_Cell_GET(var_gen) == NULL);
        PyCell_SET(var_gen, tmp_assign_source_1);

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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_dea858f73efed4994f1f5668c0210a8e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_dea858f73efed4994f1f5668c0210a8e, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = PyExc_TypeError;
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
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_generator_or_function;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_flask$helpers$$$function__5_stream_with_context$$$function__1_decorator(tmp_closure_1);

        assert(var_decorator == NULL);
        var_decorator = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ccooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_decorator);
        tmp_args_element_name_1 = var_decorator;
        if (Nuitka_Cell_GET(par_generator_or_function) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "ccooo";
            goto try_except_handler_3;
        }

        tmp_args_element_name_2 = Nuitka_Cell_GET(par_generator_or_function);
        frame_dea858f73efed4994f1f5668c0210a8e->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ccooo";
            goto try_except_handler_3;
        }
        goto try_return_handler_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 135;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_dea858f73efed4994f1f5668c0210a8e->m_frame) frame_dea858f73efed4994f1f5668c0210a8e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
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
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_2[1];

        tmp_closure_2[0] = var_gen;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_3 = MAKE_FUNCTION_flask$helpers$$$function__5_stream_with_context$$$function__2_generator(tmp_closure_2);

        assert(var_generator == NULL);
        var_generator = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        CHECK_OBJECT(var_generator);
        tmp_called_name_2 = var_generator;
        frame_dea858f73efed4994f1f5668c0210a8e->m_frame.f_lineno = 172;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        assert(var_wrapped_g == NULL);
        var_wrapped_g = tmp_assign_source_4;
    }
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_next_value_1;
        CHECK_OBJECT(var_wrapped_g);
        tmp_value_name_1 = var_wrapped_g;
        tmp_next_value_1 = ITERATOR_NEXT(tmp_value_name_1);
        if (tmp_next_value_1 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccooo";
            exception_lineno = 173;
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_next_value_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dea858f73efed4994f1f5668c0210a8e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dea858f73efed4994f1f5668c0210a8e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dea858f73efed4994f1f5668c0210a8e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dea858f73efed4994f1f5668c0210a8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dea858f73efed4994f1f5668c0210a8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dea858f73efed4994f1f5668c0210a8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dea858f73efed4994f1f5668c0210a8e,
        type_description_1,
        par_generator_or_function,
        var_gen,
        var_decorator,
        var_generator,
        var_wrapped_g
    );


    // Release cached frame if used for exception.
    if (frame_dea858f73efed4994f1f5668c0210a8e == cache_frame_dea858f73efed4994f1f5668c0210a8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dea858f73efed4994f1f5668c0210a8e);
        cache_frame_dea858f73efed4994f1f5668c0210a8e = NULL;
    }

    assertFrameObject(frame_dea858f73efed4994f1f5668c0210a8e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    if (var_wrapped_g == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);



        goto try_except_handler_1;
    }

    tmp_return_value = var_wrapped_g;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_generator_or_function);
    Py_DECREF(par_generator_or_function);
    par_generator_or_function = NULL;
    CHECK_OBJECT(var_gen);
    Py_DECREF(var_gen);
    var_gen = NULL;
    Py_XDECREF(var_decorator);
    var_decorator = NULL;
    Py_XDECREF(var_generator);
    var_generator = NULL;
    Py_XDECREF(var_wrapped_g);
    var_wrapped_g = NULL;
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

    CHECK_OBJECT(par_generator_or_function);
    Py_DECREF(par_generator_or_function);
    par_generator_or_function = NULL;
    CHECK_OBJECT(var_gen);
    Py_DECREF(var_gen);
    var_gen = NULL;
    Py_XDECREF(var_decorator);
    var_decorator = NULL;
    Py_XDECREF(var_generator);
    var_generator = NULL;
    Py_XDECREF(var_wrapped_g);
    var_wrapped_g = NULL;
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


static PyObject *impl_flask$helpers$$$function__5_stream_with_context$$$function__1_decorator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_gen = NULL;
    struct Nuitka_FrameObject *frame_6422d8614f3b1b5c9af26f7a006e1a36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6422d8614f3b1b5c9af26f7a006e1a36 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6422d8614f3b1b5c9af26f7a006e1a36)) {
        Py_XDECREF(cache_frame_6422d8614f3b1b5c9af26f7a006e1a36);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6422d8614f3b1b5c9af26f7a006e1a36 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6422d8614f3b1b5c9af26f7a006e1a36 = MAKE_FUNCTION_FRAME(codeobj_6422d8614f3b1b5c9af26f7a006e1a36, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6422d8614f3b1b5c9af26f7a006e1a36->m_type_description == NULL);
    frame_6422d8614f3b1b5c9af26f7a006e1a36 = cache_frame_6422d8614f3b1b5c9af26f7a006e1a36;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6422d8614f3b1b5c9af26f7a006e1a36);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6422d8614f3b1b5c9af26f7a006e1a36) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__1_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_gen == NULL);
        var_gen = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gen);
        tmp_args_element_name_1 = var_gen;
        frame_6422d8614f3b1b5c9af26f7a006e1a36->m_frame.f_lineno = 141;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6422d8614f3b1b5c9af26f7a006e1a36);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6422d8614f3b1b5c9af26f7a006e1a36);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6422d8614f3b1b5c9af26f7a006e1a36);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6422d8614f3b1b5c9af26f7a006e1a36, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6422d8614f3b1b5c9af26f7a006e1a36->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6422d8614f3b1b5c9af26f7a006e1a36, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6422d8614f3b1b5c9af26f7a006e1a36,
        type_description_1,
        par_args,
        par_kwargs,
        var_gen,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6422d8614f3b1b5c9af26f7a006e1a36 == cache_frame_6422d8614f3b1b5c9af26f7a006e1a36) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6422d8614f3b1b5c9af26f7a006e1a36);
        cache_frame_6422d8614f3b1b5c9af26f7a006e1a36 = NULL;
    }

    assertFrameObject(frame_6422d8614f3b1b5c9af26f7a006e1a36);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_gen);
    Py_DECREF(var_gen);
    var_gen = NULL;
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

    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_gen);
    var_gen = NULL;
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


static PyObject *impl_flask$helpers$$$function__5_stream_with_context$$$function__2_generator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_flask$helpers$$$function__5_stream_with_context$$$function__2_generator$$$genobj__1_generator(tmp_closure_1);

        goto function_return_exit;
    }

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



struct flask$helpers$$$function__5_stream_with_context$$$function__2_generator$$$genobj__1_generator_locals {
    PyObject *var_ctx;
    PyObject *var_item;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
};

static PyObject *flask$helpers$$$function__5_stream_with_context$$$function__2_generator$$$genobj__1_generator_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct flask$helpers$$$function__5_stream_with_context$$$function__2_generator$$$genobj__1_generator_locals *generator_heap = (struct flask$helpers$$$function__5_stream_with_context$$$function__2_generator$$$genobj__1_generator_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_ctx = NULL;
    generator_heap->var_item = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_with_1__enter = NULL;
    generator_heap->tmp_with_1__exit = NULL;
    generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    generator_heap->tmp_with_1__source = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_c7f89a174bf16aa5fa89f06c4041cb25, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 146;
            generator_heap->type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[29]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 146;
            generator_heap->type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_ctx == NULL);
        generator_heap->var_ctx = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(generator_heap->var_ctx);
        tmp_compexpr_left_1 = generator_heap->var_ctx;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[30];
        generator->m_frame->m_frame.f_lineno = 148;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        generator_heap->exception_type = tmp_raise_type_1;
        generator_heap->exception_lineno = 148;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->var_ctx);
        tmp_assign_source_2 = generator_heap->var_ctx;
        assert(generator_heap->tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_2);
        generator_heap->tmp_with_1__source = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_name_2 = generator_heap->tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL(tmp_expression_name_2, mod_consts[31]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 152;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__enter == NULL);
        generator_heap->tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_name_3 = generator_heap->tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL(tmp_expression_name_3, mod_consts[32]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__exit == NULL);
        generator_heap->tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_expression_name_4;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_name_4 = Py_None;
        Py_INCREF(tmp_expression_name_4);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_4;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_4;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_5;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ooc";
                generator_heap->exception_lineno = 162;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_8 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_item;
            generator_heap->var_item = tmp_assign_source_8;
            Py_INCREF(generator_heap->var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_5;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(generator_heap->var_item);
        tmp_expression_name_5 = generator_heap->var_item;
        Py_INCREF(tmp_expression_name_5);
        generator->m_yield_return_index = 2;
        return tmp_expression_name_5;
        yield_return_2:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 163;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_6;
        }
        tmp_yield_result_2 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 162;
        generator_heap->type_description_1 = "ooc";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_type_1, &generator_heap->exception_preserved_value_1, &generator_heap->exception_preserved_tb_1);

    if (generator_heap->exception_keeper_tb_2 == NULL) {
        generator_heap->exception_keeper_tb_2 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_2);
    } else if (generator_heap->exception_keeper_lineno_2 != 0) {
        generator_heap->exception_keeper_tb_2 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_2, generator->m_frame, generator_heap->exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&generator_heap->exception_keeper_type_2, &generator_heap->exception_keeper_value_2, &generator_heap->exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(generator_heap->exception_keeper_value_2, generator_heap->exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&generator_heap->exception_keeper_type_2, &generator_heap->exception_keeper_value_2, &generator_heap->exception_keeper_tb_2);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_attribute_name_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 165;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_7;
        }

        tmp_expression_name_6 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_attribute_name_1 = mod_consts[34];
        generator_heap->tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_6, tmp_attribute_name_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 165;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_7;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 166;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_7;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 166;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[34]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 166;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 161;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ooc";
    goto try_except_handler_7;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(generator_heap->exception_preserved_type_1, generator_heap->exception_preserved_value_1, generator_heap->exception_preserved_tb_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_attribute_name_2;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 165;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_4;
        }

        tmp_expression_name_7 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_attribute_name_2 = mod_consts[34];
        generator_heap->tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_7, tmp_attribute_name_2);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 165;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 166;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_4;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 166;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[34]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 166;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_type_2, &generator_heap->exception_preserved_value_2, &generator_heap->exception_preserved_tb_2);

    if (generator_heap->exception_keeper_tb_4 == NULL) {
        generator_heap->exception_keeper_tb_4 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_4);
    } else if (generator_heap->exception_keeper_lineno_4 != 0) {
        generator_heap->exception_keeper_tb_4 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_4, generator->m_frame, generator_heap->exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&generator_heap->exception_keeper_type_4, &generator_heap->exception_keeper_value_4, &generator_heap->exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(generator_heap->exception_keeper_value_4, generator_heap->exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&generator_heap->exception_keeper_type_4, &generator_heap->exception_keeper_value_4, &generator_heap->exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_4 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_FALSE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_name_2 = generator_heap->tmp_with_1__exit;
        tmp_args_element_name_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_3 = EXC_TRACEBACK(PyThreadState_GET());
        generator->m_frame->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 166;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_8;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 166;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_8;
        }
        tmp_condition_result_5 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 166;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ooc";
    goto try_except_handler_8;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 152;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ooc";
    goto try_except_handler_8;
    branch_end_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(generator_heap->exception_preserved_type_2, generator_heap->exception_preserved_value_2, generator_heap->exception_preserved_tb_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(generator_heap->exception_preserved_type_2, generator_heap->exception_preserved_value_2, generator_heap->exception_preserved_tb_2);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = generator_heap->tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_name_3 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 166;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, &PyTuple_GET_ITEM(mod_consts[35], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

            Py_DECREF(generator_heap->exception_keeper_type_6);
            Py_XDECREF(generator_heap->exception_keeper_value_6);
            Py_XDECREF(generator_heap->exception_keeper_tb_6);

            generator_heap->exception_lineno = 166;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_6:;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = generator_heap->tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_name_4 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 166;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, &PyTuple_GET_ITEM(mod_consts[35], 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 166;
            generator_heap->type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_7:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_with_1__source);
    Py_DECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator_heap->var_ctx,
            generator_heap->var_item,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_ctx);
    generator_heap->var_ctx = NULL;
    Py_XDECREF(generator_heap->var_item);
    generator_heap->var_item = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_8;
    generator_heap->exception_value = generator_heap->exception_keeper_value_8;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(generator_heap->tmp_with_1__source);
    Py_DECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(generator_heap->tmp_with_1__enter);
    Py_DECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    CHECK_OBJECT(generator_heap->var_ctx);
    Py_DECREF(generator_heap->var_ctx);
    generator_heap->var_ctx = NULL;
    Py_XDECREF(generator_heap->var_item);
    generator_heap->var_item = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_flask$helpers$$$function__5_stream_with_context$$$function__2_generator$$$genobj__1_generator(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        flask$helpers$$$function__5_stream_with_context$$$function__2_generator$$$genobj__1_generator_context,
        module_flask$helpers,
        mod_consts[23],
#if PYTHON_VERSION >= 0x350
        mod_consts[24],
#endif
        codeobj_c7f89a174bf16aa5fa89f06c4041cb25,
        closure,
        1,
        sizeof(struct flask$helpers$$$function__5_stream_with_context$$$function__2_generator$$$genobj__1_generator_locals)
    );
}


static PyObject *impl_flask$helpers$$$function__6_make_response(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_8f5dfb8821cccc3aeb55a51c04449cc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8f5dfb8821cccc3aeb55a51c04449cc6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8f5dfb8821cccc3aeb55a51c04449cc6)) {
        Py_XDECREF(cache_frame_8f5dfb8821cccc3aeb55a51c04449cc6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f5dfb8821cccc3aeb55a51c04449cc6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f5dfb8821cccc3aeb55a51c04449cc6 = MAKE_FUNCTION_FRAME(codeobj_8f5dfb8821cccc3aeb55a51c04449cc6, module_flask$helpers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8f5dfb8821cccc3aeb55a51c04449cc6->m_type_description == NULL);
    frame_8f5dfb8821cccc3aeb55a51c04449cc6 = cache_frame_8f5dfb8821cccc3aeb55a51c04449cc6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8f5dfb8821cccc3aeb55a51c04449cc6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8f5dfb8821cccc3aeb55a51c04449cc6) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_args);
        tmp_operand_name_1 = par_args;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
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
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8f5dfb8821cccc3aeb55a51c04449cc6->m_frame.f_lineno = 220;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[37]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_2_object_1;
        CHECK_OBJECT(par_args);
        tmp_len_arg_1 = par_args;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[38];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_condition_result_2_object_1 == NULL));
        tmp_condition_result_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_args;
        tmp_subscript_name_1 = mod_consts[40];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_args;
            par_args = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[41]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_args == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_args;
        frame_8f5dfb8821cccc3aeb55a51c04449cc6->m_frame.f_lineno = 223;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f5dfb8821cccc3aeb55a51c04449cc6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f5dfb8821cccc3aeb55a51c04449cc6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f5dfb8821cccc3aeb55a51c04449cc6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f5dfb8821cccc3aeb55a51c04449cc6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f5dfb8821cccc3aeb55a51c04449cc6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f5dfb8821cccc3aeb55a51c04449cc6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f5dfb8821cccc3aeb55a51c04449cc6,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_8f5dfb8821cccc3aeb55a51c04449cc6 == cache_frame_8f5dfb8821cccc3aeb55a51c04449cc6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8f5dfb8821cccc3aeb55a51c04449cc6);
        cache_frame_8f5dfb8821cccc3aeb55a51c04449cc6 = NULL;
    }

    assertFrameObject(frame_8f5dfb8821cccc3aeb55a51c04449cc6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_args);
    par_args = NULL;
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

    Py_XDECREF(par_args);
    par_args = NULL;
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


static PyObject *impl_flask$helpers$$$function__7_url_for(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_endpoint = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *var_appctx = NULL;
    PyObject *var_reqctx = NULL;
    PyObject *var_url_adapter = NULL;
    PyObject *var_blueprint_name = NULL;
    PyObject *var_external = NULL;
    PyObject *var_anchor = NULL;
    PyObject *var_method = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_old_scheme = NULL;
    PyObject *var_rv = NULL;
    PyObject *var_error = NULL;
    struct Nuitka_FrameObject *frame_c63e8ed2b45ae814e4f2fd1c7c9367ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    bool tmp_result;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_c63e8ed2b45ae814e4f2fd1c7c9367ff = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c63e8ed2b45ae814e4f2fd1c7c9367ff)) {
        Py_XDECREF(cache_frame_c63e8ed2b45ae814e4f2fd1c7c9367ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c63e8ed2b45ae814e4f2fd1c7c9367ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c63e8ed2b45ae814e4f2fd1c7c9367ff = MAKE_FUNCTION_FRAME(codeobj_c63e8ed2b45ae814e4f2fd1c7c9367ff, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_type_description == NULL);
    frame_c63e8ed2b45ae814e4f2fd1c7c9367ff = cache_frame_c63e8ed2b45ae814e4f2fd1c7c9367ff;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c63e8ed2b45ae814e4f2fd1c7c9367ff);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c63e8ed2b45ae814e4f2fd1c7c9367ff) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[29]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_appctx == NULL);
        var_appctx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[29]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reqctx == NULL);
        var_reqctx = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_appctx);
        tmp_compexpr_left_1 = var_appctx;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[44];
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 306;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 306;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_reqctx);
        tmp_compexpr_left_2 = var_reqctx;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(var_reqctx);
        tmp_expression_name_3 = var_reqctx;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[45]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_url_adapter == NULL);
        var_url_adapter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_4;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[47]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blueprint_name == NULL);
        var_blueprint_name = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_endpoint);
        tmp_expression_name_5 = par_endpoint;
        tmp_subscript_name_1 = mod_consts[48];
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_1);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = mod_consts[49];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 318;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_blueprint_name);
        tmp_compexpr_left_4 = var_blueprint_name;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_blueprint_name);
        tmp_left_name_1 = var_blueprint_name;
        CHECK_OBJECT(par_endpoint);
        tmp_right_name_1 = par_endpoint;
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_endpoint;
            par_endpoint = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_endpoint);
        tmp_expression_name_6 = par_endpoint;
        tmp_subscript_name_2 = mod_consts[50];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_endpoint;
            assert(old != NULL);
            par_endpoint = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_end_4:;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_values);
        tmp_called_instance_1 = par_values;
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 324;
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[51],
            &PyTuple_GET_ITEM(mod_consts[52], 0)
        );

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_external == NULL);
        var_external = tmp_assign_source_7;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(var_appctx);
        tmp_expression_name_7 = var_appctx;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[45]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_url_adapter == NULL);
        var_url_adapter = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(var_url_adapter);
        tmp_compexpr_left_5 = var_url_adapter;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[53];
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 332;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 332;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_values);
        tmp_called_instance_2 = par_values;
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 338;
        tmp_assign_source_9 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[51],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_external == NULL);
        var_external = tmp_assign_source_9;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_3;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_values;
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 340;
        tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[51],
            &PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_anchor == NULL);
        var_anchor = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_4;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_values;
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 341;
        tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_4,
            mod_consts[51],
            &PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_method == NULL);
        var_method = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_5;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 342;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = par_values;
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 342;
        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_5,
            mod_consts[51],
            &PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scheme == NULL);
        var_scheme = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        if (var_appctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = var_appctx;
        tmp_expression_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[60]);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[61]);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_endpoint == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_endpoint;
        if (par_values == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = par_values;
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        assert(var_old_scheme == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_old_scheme = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(var_scheme);
        tmp_compexpr_left_6 = var_scheme;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_external);
        tmp_operand_name_1 = var_external;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[63];
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 351;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 351;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_10;
        CHECK_OBJECT(var_url_adapter);
        tmp_expression_name_10 = var_url_adapter;
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[64]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_old_scheme;
            assert(old != NULL);
            var_old_scheme = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_scheme);
        tmp_assattr_name_1 = var_scheme;
        if (var_url_adapter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 353;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = var_url_adapter;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[64], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (var_url_adapter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 357;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_11 = var_url_adapter;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[65]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        if (par_endpoint == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = par_endpoint;
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "ooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = par_values;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(var_method);
        tmp_dict_value_1 = var_method;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[67];
        CHECK_OBJECT(var_external);
        tmp_dict_value_1 = var_external;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 357;
        tmp_assign_source_15 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_15;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c63e8ed2b45ae814e4f2fd1c7c9367ff, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c63e8ed2b45ae814e4f2fd1c7c9367ff, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT(var_old_scheme);
        tmp_compexpr_left_7 = var_old_scheme;
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_8 = (tmp_compexpr_left_7 != tmp_compexpr_right_7) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_old_scheme);
        tmp_assattr_name_2 = var_old_scheme;
        if (var_url_adapter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 362;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_assattr_target_2 = var_url_adapter;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[64], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
    }
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 356;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame) frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT(var_old_scheme);
        tmp_compexpr_left_8 = var_old_scheme;
        tmp_compexpr_right_8 = Py_None;
        tmp_condition_result_9 = (tmp_compexpr_left_8 != tmp_compexpr_right_8) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_old_scheme);
        tmp_assattr_name_3 = var_old_scheme;
        if (var_url_adapter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 362;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_3 = var_url_adapter;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[64], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_9:;
    goto try_end_2;
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

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_c63e8ed2b45ae814e4f2fd1c7c9367ff, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_c63e8ed2b45ae814e4f2fd1c7c9367ff, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        tmp_compexpr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_9 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_compexpr_right_9 == NULL)) {
            tmp_compexpr_right_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_compexpr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_9, tmp_compexpr_right_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = EXC_VALUE(PyThreadState_GET());
        assert(var_error == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_error = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_external == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subvalue_1 = var_external;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_1 = par_values;
        tmp_ass_subscript_1 = mod_consts[70];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_anchor);
        tmp_ass_subvalue_2 = var_anchor;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_2 = par_values;
        tmp_ass_subscript_2 = mod_consts[71];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        if (var_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subvalue_3 = var_method;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_3 = par_values;
        tmp_ass_subscript_3 = mod_consts[72];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(var_scheme);
        tmp_ass_subvalue_4 = var_scheme;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 369;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_4 = par_values;
        tmp_ass_subscript_4 = mod_consts[73];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        if (var_appctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_name_13 = var_appctx;
        tmp_expression_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[60]);
        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[74]);
        Py_DECREF(tmp_expression_name_12);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_error);
        tmp_args_element_name_3 = var_error;
        if (par_endpoint == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_name_4 = par_endpoint;
        if (par_values == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_name_5 = par_values;
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        goto try_return_handler_6;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF(var_error);
    var_error = NULL;

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

    Py_XDECREF(var_error);
    var_error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 355;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame) frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
    branch_end_10:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto frame_return_exit_1;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT(var_anchor);
        tmp_compexpr_left_10 = var_anchor;
        tmp_compexpr_right_10 = Py_None;
        tmp_condition_result_11 = (tmp_compexpr_left_10 != tmp_compexpr_right_10) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(var_rv);
        tmp_left_name_2 = var_rv;
        tmp_left_name_3 = mod_consts[75];
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_anchor);
        tmp_args_element_name_6 = var_anchor;
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame.f_lineno = 373;
        tmp_right_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_6);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = tmp_left_name_2;
        var_rv = tmp_assign_source_17;

    }
    branch_no_11:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c63e8ed2b45ae814e4f2fd1c7c9367ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c63e8ed2b45ae814e4f2fd1c7c9367ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c63e8ed2b45ae814e4f2fd1c7c9367ff);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c63e8ed2b45ae814e4f2fd1c7c9367ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c63e8ed2b45ae814e4f2fd1c7c9367ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c63e8ed2b45ae814e4f2fd1c7c9367ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c63e8ed2b45ae814e4f2fd1c7c9367ff,
        type_description_1,
        par_endpoint,
        par_values,
        var_appctx,
        var_reqctx,
        var_url_adapter,
        var_blueprint_name,
        var_external,
        var_anchor,
        var_method,
        var_scheme,
        var_old_scheme,
        var_rv,
        var_error
    );


    // Release cached frame if used for exception.
    if (frame_c63e8ed2b45ae814e4f2fd1c7c9367ff == cache_frame_c63e8ed2b45ae814e4f2fd1c7c9367ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c63e8ed2b45ae814e4f2fd1c7c9367ff);
        cache_frame_c63e8ed2b45ae814e4f2fd1c7c9367ff = NULL;
    }

    assertFrameObject(frame_c63e8ed2b45ae814e4f2fd1c7c9367ff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_rv);
    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_endpoint);
    par_endpoint = NULL;
    Py_XDECREF(par_values);
    par_values = NULL;
    Py_XDECREF(var_appctx);
    var_appctx = NULL;
    Py_XDECREF(var_reqctx);
    var_reqctx = NULL;
    Py_XDECREF(var_url_adapter);
    var_url_adapter = NULL;
    Py_XDECREF(var_blueprint_name);
    var_blueprint_name = NULL;
    Py_XDECREF(var_external);
    var_external = NULL;
    CHECK_OBJECT(var_anchor);
    Py_DECREF(var_anchor);
    var_anchor = NULL;
    Py_XDECREF(var_method);
    var_method = NULL;
    CHECK_OBJECT(var_scheme);
    Py_DECREF(var_scheme);
    var_scheme = NULL;
    CHECK_OBJECT(var_old_scheme);
    Py_DECREF(var_old_scheme);
    var_old_scheme = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
    Py_XDECREF(var_error);
    var_error = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_endpoint);
    par_endpoint = NULL;
    Py_XDECREF(par_values);
    par_values = NULL;
    Py_XDECREF(var_appctx);
    var_appctx = NULL;
    Py_XDECREF(var_reqctx);
    var_reqctx = NULL;
    Py_XDECREF(var_url_adapter);
    var_url_adapter = NULL;
    Py_XDECREF(var_blueprint_name);
    var_blueprint_name = NULL;
    Py_XDECREF(var_external);
    var_external = NULL;
    Py_XDECREF(var_anchor);
    var_anchor = NULL;
    Py_XDECREF(var_method);
    var_method = NULL;
    Py_XDECREF(var_scheme);
    var_scheme = NULL;
    Py_XDECREF(var_old_scheme);
    var_old_scheme = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
    Py_XDECREF(var_error);
    var_error = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

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


static PyObject *impl_flask$helpers$$$function__8_get_template_attribute(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_template_name = python_pars[0];
    PyObject *par_attribute = python_pars[1];
    struct Nuitka_FrameObject *frame_1c91fe8a03917afa6e2ec0d7d4a84257;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c91fe8a03917afa6e2ec0d7d4a84257 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1c91fe8a03917afa6e2ec0d7d4a84257)) {
        Py_XDECREF(cache_frame_1c91fe8a03917afa6e2ec0d7d4a84257);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c91fe8a03917afa6e2ec0d7d4a84257 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c91fe8a03917afa6e2ec0d7d4a84257 = MAKE_FUNCTION_FRAME(codeobj_1c91fe8a03917afa6e2ec0d7d4a84257, module_flask$helpers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1c91fe8a03917afa6e2ec0d7d4a84257->m_type_description == NULL);
    frame_1c91fe8a03917afa6e2ec0d7d4a84257 = cache_frame_1c91fe8a03917afa6e2ec0d7d4a84257;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1c91fe8a03917afa6e2ec0d7d4a84257);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1c91fe8a03917afa6e2ec0d7d4a84257) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_getattr_attr_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[78]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_template_name);
        tmp_args_element_name_1 = par_template_name;
        frame_1c91fe8a03917afa6e2ec0d7d4a84257->m_frame.f_lineno = 396;
        tmp_expression_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[79], tmp_args_element_name_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[80]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attribute);
        tmp_getattr_attr_1 = par_attribute;
        tmp_return_value = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c91fe8a03917afa6e2ec0d7d4a84257);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c91fe8a03917afa6e2ec0d7d4a84257);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c91fe8a03917afa6e2ec0d7d4a84257);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c91fe8a03917afa6e2ec0d7d4a84257, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c91fe8a03917afa6e2ec0d7d4a84257->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c91fe8a03917afa6e2ec0d7d4a84257, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c91fe8a03917afa6e2ec0d7d4a84257,
        type_description_1,
        par_template_name,
        par_attribute
    );


    // Release cached frame if used for exception.
    if (frame_1c91fe8a03917afa6e2ec0d7d4a84257 == cache_frame_1c91fe8a03917afa6e2ec0d7d4a84257) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1c91fe8a03917afa6e2ec0d7d4a84257);
        cache_frame_1c91fe8a03917afa6e2ec0d7d4a84257 = NULL;
    }

    assertFrameObject(frame_1c91fe8a03917afa6e2ec0d7d4a84257);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_template_name);
    par_template_name = NULL;
    CHECK_OBJECT(par_attribute);
    Py_DECREF(par_attribute);
    par_attribute = NULL;
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

    Py_XDECREF(par_template_name);
    par_template_name = NULL;
    CHECK_OBJECT(par_attribute);
    Py_DECREF(par_attribute);
    par_attribute = NULL;
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


static PyObject *impl_flask$helpers$$$function__9_flash(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[0];
    PyObject *par_category = python_pars[1];
    PyObject *var_flashes = NULL;
    struct Nuitka_FrameObject *frame_6b82acf1e57146a2e1b71fa9fcb02073;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6b82acf1e57146a2e1b71fa9fcb02073 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6b82acf1e57146a2e1b71fa9fcb02073)) {
        Py_XDECREF(cache_frame_6b82acf1e57146a2e1b71fa9fcb02073);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b82acf1e57146a2e1b71fa9fcb02073 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b82acf1e57146a2e1b71fa9fcb02073 = MAKE_FUNCTION_FRAME(codeobj_6b82acf1e57146a2e1b71fa9fcb02073, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6b82acf1e57146a2e1b71fa9fcb02073->m_type_description == NULL);
    frame_6b82acf1e57146a2e1b71fa9fcb02073 = cache_frame_6b82acf1e57146a2e1b71fa9fcb02073;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6b82acf1e57146a2e1b71fa9fcb02073);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6b82acf1e57146a2e1b71fa9fcb02073) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[83];
        tmp_call_arg_element_2 = PyList_New(0);
        frame_6b82acf1e57146a2e1b71fa9fcb02073->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_flashes == NULL);
        var_flashes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_flashes);
        tmp_called_instance_2 = var_flashes;
        CHECK_OBJECT(par_category);
        tmp_tuple_element_1 = par_category;
        tmp_args_element_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_message);
        tmp_tuple_element_1 = par_message;
        PyTuple_SET_ITEM0(tmp_args_element_name_1, 1, tmp_tuple_element_1);
        frame_6b82acf1e57146a2e1b71fa9fcb02073->m_frame.f_lineno = 422;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[84], tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_flashes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = var_flashes;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[83];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[87]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 425;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6b82acf1e57146a2e1b71fa9fcb02073->m_frame.f_lineno = 425;
        tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[88]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 425;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        tmp_dict_key_1 = mod_consts[89];
        if (par_message == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = par_message;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[90];
        if (par_category == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "ooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = par_category;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_6b82acf1e57146a2e1b71fa9fcb02073->m_frame.f_lineno = 424;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b82acf1e57146a2e1b71fa9fcb02073);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b82acf1e57146a2e1b71fa9fcb02073);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b82acf1e57146a2e1b71fa9fcb02073, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b82acf1e57146a2e1b71fa9fcb02073->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b82acf1e57146a2e1b71fa9fcb02073, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b82acf1e57146a2e1b71fa9fcb02073,
        type_description_1,
        par_message,
        par_category,
        var_flashes
    );


    // Release cached frame if used for exception.
    if (frame_6b82acf1e57146a2e1b71fa9fcb02073 == cache_frame_6b82acf1e57146a2e1b71fa9fcb02073) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6b82acf1e57146a2e1b71fa9fcb02073);
        cache_frame_6b82acf1e57146a2e1b71fa9fcb02073 = NULL;
    }

    assertFrameObject(frame_6b82acf1e57146a2e1b71fa9fcb02073);

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
    Py_XDECREF(par_message);
    par_message = NULL;
    Py_XDECREF(par_category);
    par_category = NULL;
    Py_XDECREF(var_flashes);
    var_flashes = NULL;
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

    Py_XDECREF(par_message);
    par_message = NULL;
    Py_XDECREF(par_category);
    par_category = NULL;
    Py_XDECREF(var_flashes);
    var_flashes = NULL;
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


static PyObject *impl_flask$helpers$$$function__10_get_flashed_messages(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_with_categories = python_pars[0];
    struct Nuitka_CellObject *par_category_filter = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_flashes = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_c37b36e78f71b0ff36576a51dc5942ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_2dffc27add4b44bf6080e5a65b3ea7c3_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_2dffc27add4b44bf6080e5a65b3ea7c3_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_c37b36e78f71b0ff36576a51dc5942ea = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c37b36e78f71b0ff36576a51dc5942ea)) {
        Py_XDECREF(cache_frame_c37b36e78f71b0ff36576a51dc5942ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c37b36e78f71b0ff36576a51dc5942ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c37b36e78f71b0ff36576a51dc5942ea = MAKE_FUNCTION_FRAME(codeobj_c37b36e78f71b0ff36576a51dc5942ea, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c37b36e78f71b0ff36576a51dc5942ea->m_type_description == NULL);
    frame_c37b36e78f71b0ff36576a51dc5942ea = cache_frame_c37b36e78f71b0ff36576a51dc5942ea;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c37b36e78f71b0ff36576a51dc5942ea);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c37b36e78f71b0ff36576a51dc5942ea) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[29]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[85]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        assert(var_flashes == NULL);
        var_flashes = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_flashes);
        tmp_compexpr_left_1 = var_flashes;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_1;
        tmp_compexpr_left_2 = mod_consts[83];
        tmp_compexpr_right_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_compexpr_right_2 == NULL)) {
            tmp_compexpr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oco";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oco";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oco";
            goto try_except_handler_2;
        }
        frame_c37b36e78f71b0ff36576a51dc5942ea->m_frame.f_lineno = 460;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[51],
            &PyTuple_GET_ITEM(mod_consts[92], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oco";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_2 = PyList_New(0);
        condexpr_end_1:;
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_name_1 = tmp_assign_unpack_1__assign_source;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oco";
            goto try_except_handler_2;
        }
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[29]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oco";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[85], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oco";
            goto try_except_handler_2;
        }
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

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_3 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_flashes;
            assert(old != NULL);
            var_flashes = tmp_assign_source_3;
            Py_INCREF(var_flashes);
            Py_DECREF(old);
        }

    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(par_category_filter) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 462;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(par_category_filter));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = (PyObject *)&PyFilter_Type;

        tmp_closure_1[0] = par_category_filter;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_name_1 = MAKE_FUNCTION_flask$helpers$$$function__10_get_flashed_messages$$$function__1_lambda(tmp_closure_1);

        CHECK_OBJECT(var_flashes);
        tmp_args_element_name_2 = var_flashes;
        frame_c37b36e78f71b0ff36576a51dc5942ea->m_frame.f_lineno = 463;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_flashes;
            assert(old != NULL);
            var_flashes = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_with_categories);
        tmp_operand_name_1 = par_with_categories;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        if (var_flashes == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "oco";
            goto try_except_handler_3;
        }

        tmp_iter_arg_1 = var_flashes;
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oco";
            goto try_except_handler_3;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = PyList_New(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_6;
    }
    if (isFrameUnusable(cache_frame_2dffc27add4b44bf6080e5a65b3ea7c3_2)) {
        Py_XDECREF(cache_frame_2dffc27add4b44bf6080e5a65b3ea7c3_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2dffc27add4b44bf6080e5a65b3ea7c3_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2dffc27add4b44bf6080e5a65b3ea7c3_2 = MAKE_FUNCTION_FRAME(codeobj_2dffc27add4b44bf6080e5a65b3ea7c3, module_flask$helpers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2dffc27add4b44bf6080e5a65b3ea7c3_2->m_type_description == NULL);
    frame_2dffc27add4b44bf6080e5a65b3ea7c3_2 = cache_frame_2dffc27add4b44bf6080e5a65b3ea7c3_2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2dffc27add4b44bf6080e5a65b3ea7c3_2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2dffc27add4b44bf6080e5a65b3ea7c3_2) == 2); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 465;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_x;
            outline_0_var_x = tmp_assign_source_8;
            Py_INCREF(outline_0_var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_x);
        tmp_expression_name_4 = outline_0_var_x;
        tmp_subscript_name_1 = mod_consts[38];
        tmp_append_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_1, 1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        assert(PyList_Check(tmp_append_list_1));
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 465;
        type_description_2 = "o";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2dffc27add4b44bf6080e5a65b3ea7c3_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2dffc27add4b44bf6080e5a65b3ea7c3_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_3;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2dffc27add4b44bf6080e5a65b3ea7c3_2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2dffc27add4b44bf6080e5a65b3ea7c3_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2dffc27add4b44bf6080e5a65b3ea7c3_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2dffc27add4b44bf6080e5a65b3ea7c3_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2dffc27add4b44bf6080e5a65b3ea7c3_2,
        type_description_2,
        outline_0_var_x
    );


    // Release cached frame if used for exception.
    if (frame_2dffc27add4b44bf6080e5a65b3ea7c3_2 == cache_frame_2dffc27add4b44bf6080e5a65b3ea7c3_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2dffc27add4b44bf6080e5a65b3ea7c3_2);
        cache_frame_2dffc27add4b44bf6080e5a65b3ea7c3_2 = NULL;
    }

    assertFrameObject(frame_2dffc27add4b44bf6080e5a65b3ea7c3_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oco";
    goto try_except_handler_3;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF(outline_0_var_x);
    outline_0_var_x = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_x);
    outline_0_var_x = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 465;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;
    branch_no_3:;
    if (var_flashes == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 466;
        type_description_1 = "oco";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_flashes;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c37b36e78f71b0ff36576a51dc5942ea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c37b36e78f71b0ff36576a51dc5942ea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c37b36e78f71b0ff36576a51dc5942ea);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c37b36e78f71b0ff36576a51dc5942ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c37b36e78f71b0ff36576a51dc5942ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c37b36e78f71b0ff36576a51dc5942ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c37b36e78f71b0ff36576a51dc5942ea,
        type_description_1,
        par_with_categories,
        par_category_filter,
        var_flashes
    );


    // Release cached frame if used for exception.
    if (frame_c37b36e78f71b0ff36576a51dc5942ea == cache_frame_c37b36e78f71b0ff36576a51dc5942ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c37b36e78f71b0ff36576a51dc5942ea);
        cache_frame_c37b36e78f71b0ff36576a51dc5942ea = NULL;
    }

    assertFrameObject(frame_c37b36e78f71b0ff36576a51dc5942ea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_with_categories);
    Py_DECREF(par_with_categories);
    par_with_categories = NULL;
    CHECK_OBJECT(par_category_filter);
    Py_DECREF(par_category_filter);
    par_category_filter = NULL;
    Py_XDECREF(var_flashes);
    var_flashes = NULL;
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

    CHECK_OBJECT(par_with_categories);
    Py_DECREF(par_with_categories);
    par_with_categories = NULL;
    CHECK_OBJECT(par_category_filter);
    Py_DECREF(par_category_filter);
    par_category_filter = NULL;
    Py_XDECREF(var_flashes);
    var_flashes = NULL;
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


static PyObject *impl_flask$helpers$$$function__10_get_flashed_messages$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    struct Nuitka_FrameObject *frame_e7f2e2d85f08f648f546b393b9569ae2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e7f2e2d85f08f648f546b393b9569ae2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e7f2e2d85f08f648f546b393b9569ae2)) {
        Py_XDECREF(cache_frame_e7f2e2d85f08f648f546b393b9569ae2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7f2e2d85f08f648f546b393b9569ae2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7f2e2d85f08f648f546b393b9569ae2 = MAKE_FUNCTION_FRAME(codeobj_e7f2e2d85f08f648f546b393b9569ae2, module_flask$helpers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e7f2e2d85f08f648f546b393b9569ae2->m_type_description == NULL);
    frame_e7f2e2d85f08f648f546b393b9569ae2 = cache_frame_e7f2e2d85f08f648f546b393b9569ae2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e7f2e2d85f08f648f546b393b9569ae2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e7f2e2d85f08f648f546b393b9569ae2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_f);
        tmp_expression_name_1 = par_f;
        tmp_subscript_name_1 = mod_consts[40];
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 463;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e7f2e2d85f08f648f546b393b9569ae2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e7f2e2d85f08f648f546b393b9569ae2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e7f2e2d85f08f648f546b393b9569ae2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e7f2e2d85f08f648f546b393b9569ae2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7f2e2d85f08f648f546b393b9569ae2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7f2e2d85f08f648f546b393b9569ae2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7f2e2d85f08f648f546b393b9569ae2,
        type_description_1,
        par_f,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e7f2e2d85f08f648f546b393b9569ae2 == cache_frame_e7f2e2d85f08f648f546b393b9569ae2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e7f2e2d85f08f648f546b393b9569ae2);
        cache_frame_e7f2e2d85f08f648f546b393b9569ae2 = NULL;
    }

    assertFrameObject(frame_e7f2e2d85f08f648f546b393b9569ae2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    par_f = NULL;
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

    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    par_f = NULL;
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


static PyObject *impl_flask$helpers$$$function__11_send_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename_or_fp = python_pars[0];
    PyObject *par_mimetype = python_pars[1];
    PyObject *par_as_attachment = python_pars[2];
    PyObject *par_attachment_filename = python_pars[3];
    PyObject *par_add_etags = python_pars[4];
    PyObject *par_cache_timeout = python_pars[5];
    PyObject *par_conditional = python_pars[6];
    PyObject *par_last_modified = python_pars[7];
    PyObject *var_mtime = NULL;
    PyObject *var_fsize = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_file = NULL;
    PyObject *var_headers = NULL;
    PyObject *var_filenames = NULL;
    PyObject *var_data = NULL;
    PyObject *var_rv = NULL;
    PyObject *var_warn = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_84ee2a8322e4ab0fb49e39cb92f5c126;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_84ee2a8322e4ab0fb49e39cb92f5c126 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_mtime == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_mtime = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_fsize == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_fsize = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_84ee2a8322e4ab0fb49e39cb92f5c126)) {
        Py_XDECREF(cache_frame_84ee2a8322e4ab0fb49e39cb92f5c126);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84ee2a8322e4ab0fb49e39cb92f5c126 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84ee2a8322e4ab0fb49e39cb92f5c126 = MAKE_FUNCTION_FRAME(codeobj_84ee2a8322e4ab0fb49e39cb92f5c126, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_type_description == NULL);
    frame_84ee2a8322e4ab0fb49e39cb92f5c126 = cache_frame_84ee2a8322e4ab0fb49e39cb92f5c126;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_84ee2a8322e4ab0fb49e39cb92f5c126);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_84ee2a8322e4ab0fb49e39cb92f5c126) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_filename_or_fp);
        tmp_expression_name_1 = par_filename_or_fp;
        tmp_attribute_name_1 = mod_consts[97];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename_or_fp);
        tmp_args_element_name_1 = par_filename_or_fp;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 571;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_filename_or_fp;
            assert(old != NULL);
            par_filename_or_fp = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_filename_or_fp);
        tmp_isinstance_inst_1 = par_filename_or_fp;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooo";
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(par_filename_or_fp);
        tmp_assign_source_4 = par_filename_or_fp;
        assert(var_filename == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_filename = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[100]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_filename);
        tmp_args_element_name_2 = var_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 575;
        tmp_operand_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[101], tmp_args_element_name_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_4;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[100]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[102]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[103]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = var_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 576;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_filename;
            var_filename = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        assert(var_file == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_file = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_attachment_filename);
        tmp_compexpr_left_1 = par_attachment_filename;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_5;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[100]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[105]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 579;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = var_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 579;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_attachment_filename;
            assert(old != NULL);
            par_attachment_filename = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(par_filename_or_fp);
        tmp_assign_source_8 = par_filename_or_fp;
        assert(var_file == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_file = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        assert(var_filename == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_filename = tmp_assign_source_9;
    }
    branch_end_2:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_mimetype);
        tmp_compexpr_left_2 = par_mimetype;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if (par_attachment_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 585;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = par_attachment_filename;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_10;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[108]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_attachment_filename == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 587;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = par_attachment_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 587;
        tmp_expression_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_4);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[40];
        tmp_or_left_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_8, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 588;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[109];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_10 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_10 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = par_mimetype;
            assert(old != NULL);
            par_mimetype = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(par_mimetype);
        tmp_compexpr_left_4 = par_mimetype;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_7 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[110];
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 592;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 592;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_5;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 598;
        tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tmp_called_name_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_headers == NULL);
        var_headers = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_as_attachment);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_as_attachment);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        if (par_attachment_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 600;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_5 = par_attachment_filename;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_9 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[112];
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 601;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 601;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        if (par_attachment_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 603;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_2 = par_attachment_filename;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_2;
        if (par_attachment_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 604;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_attachment_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 604;
        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[114],
            &PyTuple_GET_ITEM(mod_consts[115], 0)
        );

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_attachment_filename;
            par_attachment_filename = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    branch_no_10:;
    {
        nuitka_bool tmp_assign_source_13;
        tmp_assign_source_13 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_3;
        if (par_attachment_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 607;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = par_attachment_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 607;
        tmp_assign_source_14 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[116],
            &PyTuple_GET_ITEM(mod_consts[117], 0)
        );

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_attachment_filename;
            par_attachment_filename = tmp_assign_source_14;
            Py_XDECREF(old);
        }

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

    {
        nuitka_bool tmp_assign_source_15;
        tmp_assign_source_15 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_15;
    }
    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_84ee2a8322e4ab0fb49e39cb92f5c126, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_84ee2a8322e4ab0fb49e39cb92f5c126, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = PyExc_UnicodeEncodeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_dict_key_1 = mod_consts[104];
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[119]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_name_7 = mod_consts[120];
        if (par_attachment_filename == NULL) {
            Py_DECREF(tmp_called_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 610;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_name_8 = par_attachment_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 610;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_called_instance_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 610;
        tmp_dict_value_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_4,
            mod_consts[116],
            &PyTuple_GET_ITEM(mod_consts[121], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_16 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_name_1;
            tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[122];
            tmp_left_name_1 = mod_consts[123];
            tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_7 == NULL)) {
                tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 613;
                type_description_1 = "ooooooooooooooooo";
                goto dict_build_exception_1;
            }
            if (par_attachment_filename == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 613;
                type_description_1 = "ooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_tuple_element_1 = par_attachment_filename;
            tmp_args_name_1 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
            tmp_kwargs_name_1 = PyDict_Copy(mod_consts[124]);
            frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 613;
            tmp_right_name_1 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_1, tmp_kwargs_name_1);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kwargs_name_1);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 613;
                type_description_1 = "ooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 613;
                type_description_1 = "ooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_16);
        goto try_except_handler_3;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_filenames == NULL);
        var_filenames = tmp_assign_source_16;
    }
    goto branch_end_11;
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 606;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame) frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_3;
    branch_end_11:;
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
        bool tmp_condition_result_12;
        nuitka_bool tmp_compexpr_left_7;
        nuitka_bool tmp_compexpr_right_7;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_7 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = (tmp_compexpr_left_7 == tmp_compexpr_right_7) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[104];
        if (par_attachment_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 616;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = par_attachment_filename;
        tmp_assign_source_17 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        {
            PyObject *old = var_filenames;
            var_filenames = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    branch_no_12:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_headers);
        tmp_expression_name_11 = var_headers;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[125]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = mod_consts[126];
        if (var_filenames == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[127]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = var_filenames;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__5_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        int tmp_truth_name_3;
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[128]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 620;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 620;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE(var_filename);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_13 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_13 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT(var_file);
        tmp_compexpr_left_8 = var_file;
        tmp_compexpr_right_8 = Py_None;
        tmp_condition_result_14 = (tmp_compexpr_left_8 != tmp_compexpr_right_8) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_file);
        tmp_called_instance_5 = var_file;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 622;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[34]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 622;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_14:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = var_filename;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_headers;
        tmp_ass_subscript_1 = mod_consts[130];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_9;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[100]);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[131]);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_called_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 624;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = var_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 624;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_8);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fsize;
            assert(old != NULL);
            var_fsize = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_fsize);
        tmp_ass_subvalue_2 = var_fsize;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 625;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_headers;
        tmp_ass_subscript_2 = mod_consts[132];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_None;
        assert(var_data == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_data = tmp_assign_source_19;
    }
    goto branch_end_13;
    branch_no_13:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT(var_file);
        tmp_compexpr_left_9 = var_file;
        tmp_compexpr_right_9 = Py_None;
        tmp_condition_result_15 = (tmp_compexpr_left_9 == tmp_compexpr_right_9) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        if (var_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 629;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_open_filename_1 = var_filename;
        tmp_open_mode_1 = mod_consts[133];
        tmp_assign_source_20 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_file;
            assert(old != NULL);
            var_file = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_10;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[100]);
        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[134]);
        Py_DECREF(tmp_expression_name_15);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_called_name_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 630;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = var_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 630;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_9);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mtime;
            assert(old != NULL);
            var_mtime = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_args_element_name_11;
        tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_18 == NULL)) {
            tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[100]);
        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[131]);
        Py_DECREF(tmp_expression_name_17);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_called_name_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 631;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = var_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 631;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_10);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fsize;
            assert(old != NULL);
            var_fsize = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_fsize);
        tmp_ass_subvalue_3 = var_fsize;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 632;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_headers;
        tmp_ass_subscript_3 = mod_consts[132];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_15;
    branch_no_15:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_expression_name_19;
        CHECK_OBJECT(var_file);
        tmp_isinstance_inst_3 = var_file;
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 633;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[136]);
        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 633;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        Py_DECREF(tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 633;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_file);
        tmp_called_instance_6 = var_file;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 635;
        tmp_expression_name_20 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[137]);
        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[138]);
        Py_DECREF(tmp_expression_name_20);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_fsize;
            assert(old != NULL);
            var_fsize = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_84ee2a8322e4ab0fb49e39cb92f5c126, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_84ee2a8322e4ab0fb49e39cb92f5c126, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        tmp_compexpr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_10 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_10, tmp_compexpr_right_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_instance_7;
        if (var_file == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 638;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_7 = var_file;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 638;
        tmp_len_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[140]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 638;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_24 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 638;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_fsize;
            assert(old != NULL);
            var_fsize = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    goto branch_end_17;
    branch_no_17:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 634;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame) frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
    branch_end_17:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        if (var_fsize == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 639;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_4 = var_fsize;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 639;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_4 = var_headers;
        tmp_ass_subscript_4 = mod_consts[132];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_16:;
    branch_end_15:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_element_name_13;
        tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_name_11 == NULL)) {
            tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[3]);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_file == NULL) {
            Py_DECREF(tmp_args_element_name_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 640;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_13 = var_file;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 640;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_11, call_args);
        }

        Py_DECREF(tmp_args_element_name_12);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_25;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[37]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_tuple_element_2 = var_data;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_3 = mod_consts[143];
        if (par_mimetype == NULL) {
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 643;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = par_mimetype;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[129];
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 643;
            type_description_1 = "ooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_3 = var_headers;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[144];
        tmp_dict_value_3 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 642;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT(par_last_modified);
        tmp_compexpr_left_11 = par_last_modified;
        tmp_compexpr_right_11 = Py_None;
        tmp_condition_result_18 = (tmp_compexpr_left_11 != tmp_compexpr_right_11) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_last_modified);
        tmp_assattr_name_1 = par_last_modified;
        CHECK_OBJECT(var_rv);
        tmp_assattr_target_1 = var_rv;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[145], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_18;
    branch_no_18:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        if (var_mtime == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 648;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_12 = var_mtime;
        tmp_compexpr_right_12 = Py_None;
        tmp_condition_result_19 = (tmp_compexpr_left_12 != tmp_compexpr_right_12) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        if (var_mtime == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 649;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_2 = var_mtime;
        CHECK_OBJECT(var_rv);
        tmp_assattr_target_2 = var_rv;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[145], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_19:;
    branch_end_18:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_name_23;
        tmp_assattr_name_3 = Py_True;
        CHECK_OBJECT(var_rv);
        tmp_expression_name_23 = var_rv;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[147]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 651;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[148], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 651;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        CHECK_OBJECT(par_cache_timeout);
        tmp_compexpr_left_13 = par_cache_timeout;
        tmp_compexpr_right_13 = Py_None;
        tmp_condition_result_20 = (tmp_compexpr_left_13 == tmp_compexpr_right_13) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_args_element_name_14;
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 653;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[149]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 653;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_called_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 653;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_14 = var_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 653;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_13);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 653;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_cache_timeout;
            assert(old != NULL);
            par_cache_timeout = tmp_assign_source_27;
            Py_DECREF(old);
        }

    }
    branch_no_20:;
    {
        bool tmp_condition_result_21;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        CHECK_OBJECT(par_cache_timeout);
        tmp_compexpr_left_14 = par_cache_timeout;
        tmp_compexpr_right_14 = Py_None;
        tmp_condition_result_21 = (tmp_compexpr_left_14 != tmp_compexpr_right_14) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_name_25;
        CHECK_OBJECT(par_cache_timeout);
        tmp_assattr_name_4 = par_cache_timeout;
        if (var_rv == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 655;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_25 = var_rv;
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[147]);
        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[151], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_14;
        PyObject *tmp_right_name_2;
        PyObject *tmp_assattr_target_5;
        tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_name_14 == NULL)) {
            tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 656;
        tmp_left_name_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_14);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cache_timeout);
        tmp_right_name_2 = par_cache_timeout;
        tmp_int_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_5 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_rv == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = var_rv;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[153], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_22;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_4;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        CHECK_OBJECT(par_add_etags);
        tmp_truth_name_4 = CHECK_IF_TRUE(par_add_etags);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (var_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 658;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_15 = var_filename;
        tmp_compexpr_right_15 = Py_None;
        tmp_and_right_value_2 = (tmp_compexpr_left_15 != tmp_compexpr_right_15) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_22 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_22 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[154];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[155];
        tmp_level_name_1 = mod_consts[40];
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 659;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[156],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[156]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_warn == NULL);
        var_warn = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_args_element_name_16;
        if (var_rv == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 662;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_name_26 = var_rv;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[157]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_left_name_3 = mod_consts[158];
        tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_28 == NULL)) {
            tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 665;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[100]);
        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 665;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[134]);
        Py_DECREF(tmp_expression_name_27);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 665;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_called_name_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 665;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_name_16 = var_filename;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 665;
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_16);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 665;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_name_3 = PyTuple_New(3);
        {
            PyObject *tmp_called_name_17;
            PyObject *tmp_expression_name_29;
            PyObject *tmp_expression_name_30;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_name_18;
            PyObject *tmp_args_element_name_18;
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_isinstance_inst_4;
            PyObject *tmp_isinstance_cls_4;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_right_name_4;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_3);
            tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_name_30 == NULL)) {
                tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_name_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 666;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_expression_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[100]);
            if (tmp_expression_name_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 666;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[131]);
            Py_DECREF(tmp_expression_name_29);
            if (tmp_called_name_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 666;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            if (var_filename == NULL) {
                Py_DECREF(tmp_called_name_17);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 666;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_args_element_name_17 = var_filename;
            frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 666;
            tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_17);
            Py_DECREF(tmp_called_name_17);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 666;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_3);
            tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[159]);

            if (unlikely(tmp_called_name_18 == NULL)) {
                tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
            }

            if (tmp_called_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 667;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            if (var_filename == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 669;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_isinstance_inst_4 = var_filename;
            tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_isinstance_cls_4 == NULL)) {
                tmp_isinstance_cls_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
            }

            if (tmp_isinstance_cls_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 669;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 669;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_condition_result_23 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            if (var_filename == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 668;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_8 = var_filename;
            frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 668;
            tmp_args_element_name_18 = CALL_METHOD_WITH_ARGS1(
                tmp_called_instance_8,
                mod_consts[116],
                &PyTuple_GET_ITEM(mod_consts[115], 0)
            );

            if (tmp_args_element_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 668;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            if (var_filename == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 670;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_args_element_name_18 = var_filename;
            Py_INCREF(tmp_args_element_name_18);
            condexpr_end_1:;
            frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 667;
            tmp_left_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_18);
            Py_DECREF(tmp_args_element_name_18);
            if (tmp_left_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 667;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_right_name_4 = mod_consts[160];
            tmp_tuple_element_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_4, tmp_right_name_4);
            Py_DECREF(tmp_left_name_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 667;
                type_description_1 = "ooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_right_name_3);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_name_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 663;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 662;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_3, &exception_preserved_value_3, &exception_preserved_tb_3);

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_84ee2a8322e4ab0fb49e39cb92f5c126, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_84ee2a8322e4ab0fb49e39cb92f5c126, exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_5, exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_24;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        tmp_compexpr_left_16 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_16 = PyExc_OSError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_16, tmp_compexpr_right_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_24 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(var_warn);
        tmp_called_name_19 = var_warn;
        tmp_left_name_5 = mod_consts[161];
        if (var_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 678;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_right_name_5 = var_filename;
        tmp_tuple_element_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_5, tmp_right_name_5);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_args_name_3 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_4);
        tmp_kwargs_name_3 = PyDict_Copy(mod_consts[162]);
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 676;
        tmp_call_result_4 = CALL_FUNCTION(tmp_called_name_19, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_23;
    branch_no_23:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 661;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame) frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
    branch_end_23:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_conditional);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_conditional);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 682;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_25 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_20;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_name_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        if (var_rv == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 684;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_name_31 = var_rv;
        tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[163]);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 684;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_name_4 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_5);
        tmp_dict_key_4 = mod_consts[164];
        tmp_dict_value_4 = Py_True;
        tmp_kwargs_name_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[165];
        if (var_fsize == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 684;
            type_description_1 = "ooooooooooooooooo";
            goto dict_build_exception_3;
        }

        tmp_dict_value_4 = var_fsize;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kwargs_name_4);
        goto try_except_handler_8;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 684;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_name_20, tmp_args_name_4, tmp_kwargs_name_4);
        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kwargs_name_4);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_rv;
            var_rv = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_4, &exception_preserved_value_4, &exception_preserved_tb_4);

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_84ee2a8322e4ab0fb49e39cb92f5c126, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_84ee2a8322e4ab0fb49e39cb92f5c126, exception_keeper_lineno_7);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_7, exception_keeper_tb_7);
    PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_26;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        tmp_compexpr_left_17 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_17 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_compexpr_right_17 == NULL)) {
            tmp_compexpr_right_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_compexpr_right_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_17, tmp_compexpr_right_17);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        bool tmp_condition_result_27;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        if (var_file == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 686;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_compexpr_left_18 = var_file;
        tmp_compexpr_right_18 = Py_None;
        tmp_condition_result_27 = (tmp_compexpr_left_18 != tmp_compexpr_right_18) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_5;
        if (var_file == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 687;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_9 = var_file;
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 687;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[34]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 687;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_26:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 688;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame) frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_9;
    goto branch_end_25;
    branch_no_25:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 683;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame) frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_9;
    branch_end_25:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_7:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_tmp_condition_result_28_object_1;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_rv);
        tmp_expression_name_32 = var_rv;
        tmp_compexpr_left_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[167]);
        if (tmp_compexpr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_19 = mod_consts[168];
        tmp_tmp_condition_result_28_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_19, tmp_compexpr_right_19);
        Py_DECREF(tmp_compexpr_left_19);
        if (tmp_tmp_condition_result_28_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_28_object_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_28_object_1);

            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_28 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_28_object_1);
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_call_result_6;
        if (var_rv == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_33 = var_rv;
        tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[129]);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame.f_lineno = 692;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_10,
            mod_consts[51],
            &PyTuple_GET_ITEM(mod_consts[169], 0)
        );

        Py_DECREF(tmp_called_instance_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_27:;
    branch_no_24:;
    if (var_rv == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 693;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_84ee2a8322e4ab0fb49e39cb92f5c126);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_84ee2a8322e4ab0fb49e39cb92f5c126);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_84ee2a8322e4ab0fb49e39cb92f5c126);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84ee2a8322e4ab0fb49e39cb92f5c126, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84ee2a8322e4ab0fb49e39cb92f5c126->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84ee2a8322e4ab0fb49e39cb92f5c126, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84ee2a8322e4ab0fb49e39cb92f5c126,
        type_description_1,
        par_filename_or_fp,
        par_mimetype,
        par_as_attachment,
        par_attachment_filename,
        par_add_etags,
        par_cache_timeout,
        par_conditional,
        par_last_modified,
        var_mtime,
        var_fsize,
        var_filename,
        var_file,
        var_headers,
        var_filenames,
        var_data,
        var_rv,
        var_warn
    );


    // Release cached frame if used for exception.
    if (frame_84ee2a8322e4ab0fb49e39cb92f5c126 == cache_frame_84ee2a8322e4ab0fb49e39cb92f5c126) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_84ee2a8322e4ab0fb49e39cb92f5c126);
        cache_frame_84ee2a8322e4ab0fb49e39cb92f5c126 = NULL;
    }

    assertFrameObject(frame_84ee2a8322e4ab0fb49e39cb92f5c126);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_filename_or_fp);
    Py_DECREF(par_filename_or_fp);
    par_filename_or_fp = NULL;
    Py_XDECREF(par_mimetype);
    par_mimetype = NULL;
    CHECK_OBJECT(par_as_attachment);
    Py_DECREF(par_as_attachment);
    par_as_attachment = NULL;
    Py_XDECREF(par_attachment_filename);
    par_attachment_filename = NULL;
    CHECK_OBJECT(par_add_etags);
    Py_DECREF(par_add_etags);
    par_add_etags = NULL;
    Py_XDECREF(par_cache_timeout);
    par_cache_timeout = NULL;
    CHECK_OBJECT(par_conditional);
    Py_DECREF(par_conditional);
    par_conditional = NULL;
    CHECK_OBJECT(par_last_modified);
    Py_DECREF(par_last_modified);
    par_last_modified = NULL;
    Py_XDECREF(var_mtime);
    var_mtime = NULL;
    Py_XDECREF(var_fsize);
    var_fsize = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    Py_XDECREF(var_filenames);
    var_filenames = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
    Py_XDECREF(var_warn);
    var_warn = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_filename_or_fp);
    par_filename_or_fp = NULL;
    Py_XDECREF(par_mimetype);
    par_mimetype = NULL;
    CHECK_OBJECT(par_as_attachment);
    Py_DECREF(par_as_attachment);
    par_as_attachment = NULL;
    Py_XDECREF(par_attachment_filename);
    par_attachment_filename = NULL;
    CHECK_OBJECT(par_add_etags);
    Py_DECREF(par_add_etags);
    par_add_etags = NULL;
    Py_XDECREF(par_cache_timeout);
    par_cache_timeout = NULL;
    CHECK_OBJECT(par_conditional);
    Py_DECREF(par_conditional);
    par_conditional = NULL;
    CHECK_OBJECT(par_last_modified);
    Py_DECREF(par_last_modified);
    par_last_modified = NULL;
    Py_XDECREF(var_mtime);
    var_mtime = NULL;
    Py_XDECREF(var_fsize);
    var_fsize = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    Py_XDECREF(var_filenames);
    var_filenames = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
    Py_XDECREF(var_warn);
    var_warn = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

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


static PyObject *impl_flask$helpers$$$function__12_safe_join(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_directory = python_pars[0];
    PyObject *par_pathnames = python_pars[1];
    PyObject *var_parts = NULL;
    struct Nuitka_CellObject *var_filename = Nuitka_Cell_Empty();
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_6d3050c8d7150d6afef05d96ce58a420;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6d3050c8d7150d6afef05d96ce58a420 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_directory);
        tmp_list_element_1 = par_directory;
        tmp_assign_source_1 = PyList_New(1);
        PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
        assert(var_parts == NULL);
        var_parts = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_6d3050c8d7150d6afef05d96ce58a420)) {
        Py_XDECREF(cache_frame_6d3050c8d7150d6afef05d96ce58a420);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d3050c8d7150d6afef05d96ce58a420 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d3050c8d7150d6afef05d96ce58a420 = MAKE_FUNCTION_FRAME(codeobj_6d3050c8d7150d6afef05d96ce58a420, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6d3050c8d7150d6afef05d96ce58a420->m_type_description == NULL);
    frame_6d3050c8d7150d6afef05d96ce58a420 = cache_frame_6d3050c8d7150d6afef05d96ce58a420;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6d3050c8d7150d6afef05d96ce58a420);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6d3050c8d7150d6afef05d96ce58a420) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_pathnames);
        tmp_iter_arg_1 = par_pathnames;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "oooc";
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
                type_description_1 = "oooc";
                exception_lineno = 716;
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
            PyObject *old = Nuitka_Cell_GET(var_filename);
            PyCell_SET(var_filename, tmp_assign_source_4);
            Py_INCREF(tmp_assign_source_4);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_filename));
        tmp_compexpr_left_1 = Nuitka_Cell_GET(var_filename);
        tmp_compexpr_right_1 = mod_consts[171];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 717;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 717;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
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
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[173]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(var_filename) == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 718;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(var_filename);
        frame_6d3050c8d7150d6afef05d96ce58a420->m_frame.f_lineno = 718;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_filename);
            PyCell_SET(var_filename, tmp_assign_source_5);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_2;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_3;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_or_left_value_3_object_1;
        int tmp_truth_name_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_5;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[174]);

            if (unlikely(tmp_iter_arg_2 == NULL)) {
                tmp_iter_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
            }

            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 721;
                type_description_1 = "oooc";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 721;
                type_description_1 = "oooc";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_genexpr_1__$0;
                tmp_genexpr_1__$0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = var_filename;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_flask$helpers$$$function__12_safe_join$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 721;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 721;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[100]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[101]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(var_filename) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 722;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_args_element_name_2 = Nuitka_Cell_GET(var_filename);
        frame_6d3050c8d7150d6afef05d96ce58a420->m_frame.f_lineno = 722;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 722;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_or_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (Nuitka_Cell_GET(var_filename) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 723;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_compexpr_left_2 = Nuitka_Cell_GET(var_filename);
        tmp_compexpr_right_2 = mod_consts[175];
        tmp_tmp_or_left_value_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_or_left_value_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 723;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_or_left_value_3_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_3_object_1);

            exception_lineno = 723;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_or_left_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_left_value_3_object_1);
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        if (Nuitka_Cell_GET(var_filename) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 724;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(var_filename);
        frame_6d3050c8d7150d6afef05d96ce58a420->m_frame.f_lineno = 724;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[176],
            &PyTuple_GET_ITEM(mod_consts[177], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 724;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_or_right_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_3;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        frame_6d3050c8d7150d6afef05d96ce58a420->m_frame.f_lineno = 726;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_3);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 726;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooc";
        goto try_except_handler_2;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        if (var_parts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[179]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 728;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_expression_name_4 = var_parts;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[84]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(var_filename) == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 728;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_args_element_name_3 = Nuitka_Cell_GET(var_filename);
        frame_6d3050c8d7150d6afef05d96ce58a420->m_frame.f_lineno = 728;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 716;
        type_description_1 = "oooc";
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_dircall_arg2_1;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 730;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[102]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 730;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (var_parts == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[179]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 730;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = var_parts;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 730;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d3050c8d7150d6afef05d96ce58a420);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d3050c8d7150d6afef05d96ce58a420);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d3050c8d7150d6afef05d96ce58a420);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d3050c8d7150d6afef05d96ce58a420, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d3050c8d7150d6afef05d96ce58a420->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d3050c8d7150d6afef05d96ce58a420, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d3050c8d7150d6afef05d96ce58a420,
        type_description_1,
        par_directory,
        par_pathnames,
        var_parts,
        var_filename
    );


    // Release cached frame if used for exception.
    if (frame_6d3050c8d7150d6afef05d96ce58a420 == cache_frame_6d3050c8d7150d6afef05d96ce58a420) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6d3050c8d7150d6afef05d96ce58a420);
        cache_frame_6d3050c8d7150d6afef05d96ce58a420 = NULL;
    }

    assertFrameObject(frame_6d3050c8d7150d6afef05d96ce58a420);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_directory);
    Py_DECREF(par_directory);
    par_directory = NULL;
    Py_XDECREF(par_pathnames);
    par_pathnames = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    CHECK_OBJECT(var_filename);
    Py_DECREF(var_filename);
    var_filename = NULL;
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

    CHECK_OBJECT(par_directory);
    Py_DECREF(par_directory);
    par_directory = NULL;
    Py_XDECREF(par_pathnames);
    par_pathnames = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    CHECK_OBJECT(var_filename);
    Py_DECREF(var_filename);
    var_filename = NULL;
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



struct flask$helpers$$$function__12_safe_join$$$genexpr__1_genexpr_locals {
    PyObject *var_sep;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *flask$helpers$$$function__12_safe_join$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct flask$helpers$$$function__12_safe_join$$$genexpr__1_genexpr_locals *generator_heap = (struct flask$helpers$$$function__12_safe_join$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_sep = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_316e1bda1eea7e9136b528610d922a59, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 721;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_sep;
            generator_heap->var_sep = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_sep);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_sep);
        tmp_compexpr_left_1 = generator_heap->var_sep;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[104]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 721;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator_heap->tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 721;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_name_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 721;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 721;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_sep,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_sep);
    generator_heap->var_sep = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_sep);
    generator_heap->var_sep = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_flask$helpers$$$function__12_safe_join$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        flask$helpers$$$function__12_safe_join$$$genexpr__1_genexpr_context,
        module_flask$helpers,
        mod_consts[1],
#if PYTHON_VERSION >= 0x350
        mod_consts[181],
#endif
        codeobj_316e1bda1eea7e9136b528610d922a59,
        closure,
        2,
        sizeof(struct flask$helpers$$$function__12_safe_join$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_flask$helpers$$$function__13_send_from_directory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_directory = python_pars[0];
    PyObject *par_filename = python_pars[1];
    PyObject *par_options = python_pars[2];
    struct Nuitka_FrameObject *frame_29d2cb530bbf5aa548fc3142510ad3da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_29d2cb530bbf5aa548fc3142510ad3da = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_29d2cb530bbf5aa548fc3142510ad3da)) {
        Py_XDECREF(cache_frame_29d2cb530bbf5aa548fc3142510ad3da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29d2cb530bbf5aa548fc3142510ad3da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29d2cb530bbf5aa548fc3142510ad3da = MAKE_FUNCTION_FRAME(codeobj_29d2cb530bbf5aa548fc3142510ad3da, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_29d2cb530bbf5aa548fc3142510ad3da->m_type_description == NULL);
    frame_29d2cb530bbf5aa548fc3142510ad3da = cache_frame_29d2cb530bbf5aa548fc3142510ad3da;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_29d2cb530bbf5aa548fc3142510ad3da);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_29d2cb530bbf5aa548fc3142510ad3da) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_name_1 = par_filename;
        frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame.f_lineno = 760;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_filename;
            assert(old != NULL);
            par_filename = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 761;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_directory);
        tmp_args_element_name_2 = par_directory;
        frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame.f_lineno = 761;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 761;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_directory;
            assert(old != NULL);
            par_directory = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 762;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_directory);
        tmp_args_element_name_3 = par_directory;
        CHECK_OBJECT(par_filename);
        tmp_args_element_name_4 = par_filename;
        frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame.f_lineno = 762;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 762;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_filename;
            assert(old != NULL);
            par_filename = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_5;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[100]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_name_5 = par_filename;
        frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame.f_lineno = 763;
        tmp_operand_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[101], tmp_args_element_name_5);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_7;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 764;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[100]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 764;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[102]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 764;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 764;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[103]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 764;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_filename == NULL) {
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 764;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = par_filename;
        frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame.f_lineno = 764;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 764;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_filename;
            par_filename = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_8;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[100]);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[183]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (par_filename == NULL) {
            Py_DECREF(tmp_called_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 766;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_8 = par_filename;
        frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame.f_lineno = 766;
        tmp_operand_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_5);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_6;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 767;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame.f_lineno = 767;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_6);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 767;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 767;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_29d2cb530bbf5aa548fc3142510ad3da, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_29d2cb530bbf5aa548fc3142510ad3da, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = mod_consts[184];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 768;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_name_7;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 769;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame.f_lineno = 769;
        tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_7);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 769;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 769;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 765;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame) frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_3:;
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
    try_end_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_options);
        tmp_called_instance_2 = par_options;
        frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame.f_lineno = 770;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[186],
            &PyTuple_GET_ITEM(mod_consts[187], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 770;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 771;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_filename;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[189]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 771;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = par_options;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__5_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29d2cb530bbf5aa548fc3142510ad3da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_29d2cb530bbf5aa548fc3142510ad3da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29d2cb530bbf5aa548fc3142510ad3da);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_29d2cb530bbf5aa548fc3142510ad3da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29d2cb530bbf5aa548fc3142510ad3da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29d2cb530bbf5aa548fc3142510ad3da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29d2cb530bbf5aa548fc3142510ad3da,
        type_description_1,
        par_directory,
        par_filename,
        par_options
    );


    // Release cached frame if used for exception.
    if (frame_29d2cb530bbf5aa548fc3142510ad3da == cache_frame_29d2cb530bbf5aa548fc3142510ad3da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_29d2cb530bbf5aa548fc3142510ad3da);
        cache_frame_29d2cb530bbf5aa548fc3142510ad3da = NULL;
    }

    assertFrameObject(frame_29d2cb530bbf5aa548fc3142510ad3da);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_directory);
    Py_DECREF(par_directory);
    par_directory = NULL;
    Py_XDECREF(par_filename);
    par_filename = NULL;
    Py_XDECREF(par_options);
    par_options = NULL;
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

    CHECK_OBJECT(par_directory);
    Py_DECREF(par_directory);
    par_directory = NULL;
    Py_XDECREF(par_filename);
    par_filename = NULL;
    Py_XDECREF(par_options);
    par_options = NULL;
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


static PyObject *impl_flask$helpers$$$function__14_get_root_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_import_name = python_pars[0];
    PyObject *var_mod = NULL;
    PyObject *var_loader = NULL;
    PyObject *var_filepath = NULL;
    struct Nuitka_FrameObject *frame_62f37a10df8a6c98d6a64b68a5aab824;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_62f37a10df8a6c98d6a64b68a5aab824 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_62f37a10df8a6c98d6a64b68a5aab824)) {
        Py_XDECREF(cache_frame_62f37a10df8a6c98d6a64b68a5aab824);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62f37a10df8a6c98d6a64b68a5aab824 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62f37a10df8a6c98d6a64b68a5aab824 = MAKE_FUNCTION_FRAME(codeobj_62f37a10df8a6c98d6a64b68a5aab824, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_62f37a10df8a6c98d6a64b68a5aab824->m_type_description == NULL);
    frame_62f37a10df8a6c98d6a64b68a5aab824 = cache_frame_62f37a10df8a6c98d6a64b68a5aab824;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_62f37a10df8a6c98d6a64b68a5aab824);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_62f37a10df8a6c98d6a64b68a5aab824) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[192]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_import_name);
        tmp_args_element_name_1 = par_import_name;
        frame_62f37a10df8a6c98d6a64b68a5aab824->m_frame.f_lineno = 781;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[4], tmp_args_element_name_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_mod == NULL);
        var_mod = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(var_mod);
        tmp_compexpr_left_1 = var_mod;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_mod);
        tmp_expression_name_2 = var_mod;
        tmp_attribute_name_1 = mod_consts[193];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_2, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_7;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[100]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[194]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 783;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[100]);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 783;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[195]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 783;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mod);
        tmp_expression_name_7 = var_mod;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[193]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 783;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_62f37a10df8a6c98d6a64b68a5aab824->m_frame.f_lineno = 783;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 783;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_62f37a10df8a6c98d6a64b68a5aab824->m_frame.f_lineno = 783;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_4;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[197]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_import_name == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[198]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 786;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = par_import_name;
        frame_62f37a10df8a6c98d6a64b68a5aab824->m_frame.f_lineno = 786;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_loader == NULL);
        var_loader = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_loader);
        tmp_compexpr_left_2 = var_loader;
        tmp_compexpr_right_2 = Py_None;
        tmp_or_left_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (par_import_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[198]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 791;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = par_import_name;
        tmp_compexpr_right_3 = mod_consts[199];
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_or_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 791;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_1_object_1);

            exception_lineno = 791;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 792;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_62f37a10df8a6c98d6a64b68a5aab824->m_frame.f_lineno = 792;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[200]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 792;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_attribute_name_2;
        CHECK_OBJECT(var_loader);
        tmp_expression_name_9 = var_loader;
        tmp_attribute_name_2 = mod_consts[201];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_9, tmp_attribute_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(var_loader);
        tmp_expression_name_10 = var_loader;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[201]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_import_name == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[198]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 797;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_import_name;
        frame_62f37a10df8a6c98d6a64b68a5aab824->m_frame.f_lineno = 797;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_filepath == NULL);
        var_filepath = tmp_assign_source_3;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_name_name_1;
        PyObject *tmp_imported_value_1;
        if (par_import_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[198]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 800;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_name_name_1 = par_import_name;
        frame_62f37a10df8a6c98d6a64b68a5aab824->m_frame.f_lineno = 800;
        tmp_imported_value_1 = IMPORT_MODULE1(tmp_name_name_1);
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 800;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_imported_value_1);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 801;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[192]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 801;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_import_name == NULL) {
            Py_DECREF(tmp_expression_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[198]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 801;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = par_import_name;
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_11, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 801;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mod;
            assert(old != NULL);
            var_mod = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(var_mod);
        tmp_getattr_target_1 = var_mod;
        tmp_getattr_attr_1 = mod_consts[193];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_5 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 802;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_filepath == NULL);
        var_filepath = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_filepath);
        tmp_compexpr_left_4 = var_filepath;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = mod_consts[202];
        if (par_import_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[198]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 815;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = par_import_name;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 809;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_62f37a10df8a6c98d6a64b68a5aab824->m_frame.f_lineno = 808;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 808;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    branch_end_3:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_7;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[100]);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[194]);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[100]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_filepath);
        tmp_args_element_name_7 = var_filepath;
        frame_62f37a10df8a6c98d6a64b68a5aab824->m_frame.f_lineno = 819;
        tmp_args_element_name_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[195], tmp_args_element_name_7);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_62f37a10df8a6c98d6a64b68a5aab824->m_frame.f_lineno = 819;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_62f37a10df8a6c98d6a64b68a5aab824);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_62f37a10df8a6c98d6a64b68a5aab824);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_62f37a10df8a6c98d6a64b68a5aab824);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_62f37a10df8a6c98d6a64b68a5aab824, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62f37a10df8a6c98d6a64b68a5aab824->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62f37a10df8a6c98d6a64b68a5aab824, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62f37a10df8a6c98d6a64b68a5aab824,
        type_description_1,
        par_import_name,
        var_mod,
        var_loader,
        var_filepath
    );


    // Release cached frame if used for exception.
    if (frame_62f37a10df8a6c98d6a64b68a5aab824 == cache_frame_62f37a10df8a6c98d6a64b68a5aab824) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_62f37a10df8a6c98d6a64b68a5aab824);
        cache_frame_62f37a10df8a6c98d6a64b68a5aab824 = NULL;
    }

    assertFrameObject(frame_62f37a10df8a6c98d6a64b68a5aab824);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_import_name);
    par_import_name = NULL;
    Py_XDECREF(var_mod);
    var_mod = NULL;
    Py_XDECREF(var_loader);
    var_loader = NULL;
    Py_XDECREF(var_filepath);
    var_filepath = NULL;
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

    Py_XDECREF(par_import_name);
    par_import_name = NULL;
    Py_XDECREF(var_mod);
    var_mod = NULL;
    Py_XDECREF(var_loader);
    var_loader = NULL;
    Py_XDECREF(var_filepath);
    var_filepath = NULL;
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


static PyObject *impl_flask$helpers$$$function__15__matching_loader_thinks_module_is_package(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_loader = python_pars[0];
    PyObject *par_mod_name = python_pars[1];
    struct Nuitka_FrameObject *frame_e68c0de3aec52671f3d7fe4eb6d6ad1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e68c0de3aec52671f3d7fe4eb6d6ad1a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e68c0de3aec52671f3d7fe4eb6d6ad1a)) {
        Py_XDECREF(cache_frame_e68c0de3aec52671f3d7fe4eb6d6ad1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e68c0de3aec52671f3d7fe4eb6d6ad1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e68c0de3aec52671f3d7fe4eb6d6ad1a = MAKE_FUNCTION_FRAME(codeobj_e68c0de3aec52671f3d7fe4eb6d6ad1a, module_flask$helpers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e68c0de3aec52671f3d7fe4eb6d6ad1a->m_type_description == NULL);
    frame_e68c0de3aec52671f3d7fe4eb6d6ad1a = cache_frame_e68c0de3aec52671f3d7fe4eb6d6ad1a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e68c0de3aec52671f3d7fe4eb6d6ad1a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e68c0de3aec52671f3d7fe4eb6d6ad1a) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_loader);
        tmp_expression_name_1 = par_loader;
        tmp_attribute_name_1 = mod_consts[204];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 828;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_loader);
        tmp_called_instance_1 = par_loader;
        CHECK_OBJECT(par_mod_name);
        tmp_args_element_name_1 = par_mod_name;
        frame_e68c0de3aec52671f3d7fe4eb6d6ad1a->m_frame.f_lineno = 829;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[204], tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 829;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_tmp_and_left_value_1_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_tmp_and_right_value_1_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_loader);
        tmp_expression_name_3 = par_loader;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_3);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[205]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[206];
        tmp_tmp_and_left_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_and_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_and_left_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_left_value_1_object_1);

            exception_lineno = 834;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_1_object_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_loader == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[207]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 835;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_loader;
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_5);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[17]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[208];
        tmp_tmp_and_right_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_and_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_and_right_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_1_object_1);

            exception_lineno = 835;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_1_object_1);
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        tmp_left_name_1 = mod_consts[209];
        if (par_loader == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[207]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 846;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_loader;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_7);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 846;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[17]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 846;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 841;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e68c0de3aec52671f3d7fe4eb6d6ad1a->m_frame.f_lineno = 840;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AttributeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 840;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e68c0de3aec52671f3d7fe4eb6d6ad1a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e68c0de3aec52671f3d7fe4eb6d6ad1a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e68c0de3aec52671f3d7fe4eb6d6ad1a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e68c0de3aec52671f3d7fe4eb6d6ad1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e68c0de3aec52671f3d7fe4eb6d6ad1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e68c0de3aec52671f3d7fe4eb6d6ad1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e68c0de3aec52671f3d7fe4eb6d6ad1a,
        type_description_1,
        par_loader,
        par_mod_name
    );


    // Release cached frame if used for exception.
    if (frame_e68c0de3aec52671f3d7fe4eb6d6ad1a == cache_frame_e68c0de3aec52671f3d7fe4eb6d6ad1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e68c0de3aec52671f3d7fe4eb6d6ad1a);
        cache_frame_e68c0de3aec52671f3d7fe4eb6d6ad1a = NULL;
    }

    assertFrameObject(frame_e68c0de3aec52671f3d7fe4eb6d6ad1a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_loader);
    par_loader = NULL;
    Py_XDECREF(par_mod_name);
    par_mod_name = NULL;
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

    Py_XDECREF(par_loader);
    par_loader = NULL;
    Py_XDECREF(par_mod_name);
    par_mod_name = NULL;
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


static PyObject *impl_flask$helpers$$$function__16__find_package_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_root_mod_name = python_pars[0];
    PyObject *var_importlib = NULL;
    PyObject *var_spec = NULL;
    PyObject *var_loader = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_package_path = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_c630bc58128448747ae9b2a2288ee685;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c630bc58128448747ae9b2a2288ee685 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c630bc58128448747ae9b2a2288ee685)) {
        Py_XDECREF(cache_frame_c630bc58128448747ae9b2a2288ee685);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c630bc58128448747ae9b2a2288ee685 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c630bc58128448747ae9b2a2288ee685 = MAKE_FUNCTION_FRAME(codeobj_c630bc58128448747ae9b2a2288ee685, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c630bc58128448747ae9b2a2288ee685->m_type_description == NULL);
    frame_c630bc58128448747ae9b2a2288ee685 = cache_frame_c630bc58128448747ae9b2a2288ee685;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c630bc58128448747ae9b2a2288ee685);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c630bc58128448747ae9b2a2288ee685) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 852;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[211]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 852;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[212];
        tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 852;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[213];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[40];
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 853;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_importlib == NULL);
        var_importlib = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_importlib);
        tmp_expression_name_2 = var_importlib;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[214]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 856;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_root_mod_name);
        tmp_args_element_name_1 = par_root_mod_name;
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 856;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[215], tmp_args_element_name_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 856;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(var_spec == NULL);
        var_spec = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_spec);
        tmp_compexpr_left_2 = var_spec;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[216];
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 858;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 858;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
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

    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
    }
    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c630bc58128448747ae9b2a2288ee685, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c630bc58128448747ae9b2a2288ee685, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = mod_consts[217];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 864;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 855;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c630bc58128448747ae9b2a2288ee685->m_frame) frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_no_3:;
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
        bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_name_3;
        if (var_spec == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[218]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 868;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = var_spec;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[219]);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 868;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = PySet_New(mod_consts[220]);
        tmp_res = PySequence_Contains(tmp_compexpr_right_5, tmp_compexpr_left_5);
        Py_DECREF(tmp_compexpr_left_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 868;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_value_name_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_name_6;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[100]);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[194]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_spec == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[218]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 869;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = var_spec;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[221]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 869;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_value_name_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 869;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = ITERATOR_NEXT(tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_args_element_name_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }
            Py_DECREF(tmp_called_name_1);

            type_description_1 = "oooooo";
            exception_lineno = 869;
            goto frame_exception_exit_1;
        }
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 869;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (var_spec == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[218]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 871;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = var_spec;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[221]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 871;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 871;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_12;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[100]);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[194]);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 872;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[100]);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 872;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[194]);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 872;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_spec == NULL) {
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[218]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 872;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = var_spec;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[219]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 872;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 872;
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 872;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 872;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_15;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 875;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[100]);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 875;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[194]);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 875;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_spec == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[218]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 875;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = var_spec;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[219]);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 875;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 875;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 875;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_6:;
    branch_end_5:;
    branch_no_4:;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_6;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 878;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[197]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 878;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_root_mod_name == NULL) {
            Py_DECREF(tmp_called_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[222]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 878;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = par_root_mod_name;
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 878;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 878;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loader == NULL);
        var_loader = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_loader);
        tmp_compexpr_left_6 = var_loader;
        tmp_compexpr_right_6 = Py_None;
        tmp_or_left_value_1 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (par_root_mod_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[222]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 879;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_7 = par_root_mod_name;
        tmp_compexpr_right_7 = mod_consts[199];
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        if (tmp_tmp_or_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 879;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_1_object_1);

            exception_lineno = 879;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_7 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_7 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 881;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 881;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[200]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 881;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(var_loader);
        tmp_expression_name_17 = var_loader;
        tmp_attribute_name_1 = mod_consts[201];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_17, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(var_loader);
        tmp_expression_name_18 = var_loader;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[201]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_root_mod_name == NULL) {
            Py_DECREF(tmp_called_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[222]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 885;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = par_root_mod_name;
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 885;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_filename == NULL);
        var_filename = tmp_assign_source_6;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_attribute_name_2;
        CHECK_OBJECT(var_loader);
        tmp_expression_name_19 = var_loader;
        tmp_attribute_name_2 = mod_consts[223];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_19, tmp_attribute_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 886;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_name_20;
        CHECK_OBJECT(var_loader);
        tmp_expression_name_20 = var_loader;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[223]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 889;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_filename == NULL);
        var_filename = tmp_assign_source_7;
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_name_name_2;
        PyObject *tmp_imported_value_1;
        if (par_root_mod_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[222]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 895;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_name_name_2 = par_root_mod_name;
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 895;
        tmp_imported_value_1 = IMPORT_MODULE1(tmp_name_name_2);
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 895;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_imported_value_1);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 896;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[192]);
        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 896;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_root_mod_name == NULL) {
            Py_DECREF(tmp_expression_name_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[222]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 896;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = par_root_mod_name;
        tmp_expression_name_21 = LOOKUP_SUBSCRIPT(tmp_expression_name_22, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_22);
        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 896;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[193]);
        Py_DECREF(tmp_expression_name_21);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 896;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_filename == NULL);
        var_filename = tmp_assign_source_8;
    }
    branch_end_9:;
    branch_end_8:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_args_element_name_9;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 897;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[100]);
        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 897;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[195]);
        Py_DECREF(tmp_expression_name_24);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 897;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 897;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[100]);
        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 897;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[194]);
        Py_DECREF(tmp_expression_name_26);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 897;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_called_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 897;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = var_filename;
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 897;
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_8);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 897;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 897;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 897;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_package_path == NULL);
        var_package_path = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        int tmp_truth_name_3;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 902;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_loader == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[207]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 902;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = var_loader;
        if (par_root_mod_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[222]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 902;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = par_root_mod_name;
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 902;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_9, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 902;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 902;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_args_element_name_12;
        tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_28 == NULL)) {
            tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 903;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[100]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 903;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_package_path);
        tmp_args_element_name_12 = var_package_path;
        frame_c630bc58128448747ae9b2a2288ee685->m_frame.f_lineno = 903;
        tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[194], tmp_args_element_name_12);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 903;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_package_path;
            var_package_path = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    branch_no_10:;
    branch_end_7:;
    if (var_package_path == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[225]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 905;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_package_path;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c630bc58128448747ae9b2a2288ee685);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c630bc58128448747ae9b2a2288ee685);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c630bc58128448747ae9b2a2288ee685);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c630bc58128448747ae9b2a2288ee685, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c630bc58128448747ae9b2a2288ee685->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c630bc58128448747ae9b2a2288ee685, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c630bc58128448747ae9b2a2288ee685,
        type_description_1,
        par_root_mod_name,
        var_importlib,
        var_spec,
        var_loader,
        var_filename,
        var_package_path
    );


    // Release cached frame if used for exception.
    if (frame_c630bc58128448747ae9b2a2288ee685 == cache_frame_c630bc58128448747ae9b2a2288ee685) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c630bc58128448747ae9b2a2288ee685);
        cache_frame_c630bc58128448747ae9b2a2288ee685 = NULL;
    }

    assertFrameObject(frame_c630bc58128448747ae9b2a2288ee685);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_root_mod_name);
    par_root_mod_name = NULL;
    Py_XDECREF(var_importlib);
    var_importlib = NULL;
    Py_XDECREF(var_spec);
    var_spec = NULL;
    Py_XDECREF(var_loader);
    var_loader = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_package_path);
    var_package_path = NULL;
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

    Py_XDECREF(par_root_mod_name);
    par_root_mod_name = NULL;
    Py_XDECREF(var_importlib);
    var_importlib = NULL;
    Py_XDECREF(var_spec);
    var_spec = NULL;
    Py_XDECREF(var_loader);
    var_loader = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_package_path);
    var_package_path = NULL;
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


static PyObject *impl_flask$helpers$$$function__17_find_package(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_import_name = python_pars[0];
    PyObject *var_root_mod_name = NULL;
    PyObject *var__ = NULL;
    PyObject *var_package_path = NULL;
    PyObject *var_site_parent = NULL;
    PyObject *var_site_folder = NULL;
    PyObject *var_py_prefix = NULL;
    PyObject *var_parent = NULL;
    PyObject *var_folder = NULL;
    PyObject *var_base_dir = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_074ca5ebeaa9be2b3be6f26c50e35b6e;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_074ca5ebeaa9be2b3be6f26c50e35b6e = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_074ca5ebeaa9be2b3be6f26c50e35b6e)) {
        Py_XDECREF(cache_frame_074ca5ebeaa9be2b3be6f26c50e35b6e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_074ca5ebeaa9be2b3be6f26c50e35b6e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_074ca5ebeaa9be2b3be6f26c50e35b6e = MAKE_FUNCTION_FRAME(codeobj_074ca5ebeaa9be2b3be6f26c50e35b6e, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_type_description == NULL);
    frame_074ca5ebeaa9be2b3be6f26c50e35b6e = cache_frame_074ca5ebeaa9be2b3be6f26c50e35b6e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_074ca5ebeaa9be2b3be6f26c50e35b6e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_074ca5ebeaa9be2b3be6f26c50e35b6e) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_import_name);
        tmp_called_instance_1 = par_import_name;
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame.f_lineno = 916;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[227],
            &PyTuple_GET_ITEM(mod_consts[228], 0)
        );

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 916;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 916;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 916;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 916;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 916;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 916;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[229];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 916;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_root_mod_name == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_root_mod_name = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_6);
        var__ = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var__;
            assert(old != NULL);
            var__ = tmp_assign_source_7;
            Py_INCREF(var__);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[230]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[230]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_root_mod_name);
        tmp_args_element_name_1 = var_root_mod_name;
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame.f_lineno = 917;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_package_path == NULL);
        var_package_path = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[100]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_package_path);
        tmp_args_element_name_2 = var_package_path;
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame.f_lineno = 918;
        tmp_iter_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[231], tmp_args_element_name_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_4, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 918;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_5, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 918;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 918;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[232];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 918;
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
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        assert(var_site_parent == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_site_parent = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        assert(var_site_folder == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_site_folder = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_4;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 919;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[100]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 919;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[195]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 919;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 919;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[233]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 919;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame.f_lineno = 919;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 919;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_py_prefix == NULL);
        var_py_prefix = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_1;
        if (var_package_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[225]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 920;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_package_path;
        CHECK_OBJECT(var_py_prefix);
        tmp_args_element_name_4 = var_py_prefix;
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame.f_lineno = 920;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[176], tmp_args_element_name_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 920;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 920;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_tuple_element_1;
        if (var_py_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[234]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 921;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_py_prefix;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_package_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[225]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 921;
            type_description_1 = "oooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_package_path;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_site_folder);
        tmp_called_instance_4 = var_site_folder;
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame.f_lineno = 922;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[11]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 922;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[235];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 922;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 922;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_5;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 923;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[100]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 923;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_site_parent);
        tmp_args_element_name_5 = var_site_parent;
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame.f_lineno = 923;
        tmp_iter_arg_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[231], tmp_args_element_name_5);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 923;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 923;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_6, 0, 2);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 923;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_7, 1, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 923;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 923;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[232];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 923;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_18 = tmp_tuple_unpack_3__element_1;
        assert(var_parent == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_parent = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_19 = tmp_tuple_unpack_3__element_2;
        assert(var_folder == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_folder = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_folder);
        tmp_called_instance_6 = var_folder;
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame.f_lineno = 925;
        tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[11]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[236];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 925;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(var_parent);
        tmp_assign_source_20 = var_parent;
        assert(var_base_dir == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_base_dir = tmp_assign_source_20;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_4;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 928;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[100]);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 928;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parent);
        tmp_args_element_name_6 = var_parent;
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame.f_lineno = 928;
        tmp_called_instance_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[105], tmp_args_element_name_6);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 928;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame.f_lineno = 928;
        tmp_compexpr_left_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[11]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 928;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = mod_consts[236];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 928;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 928;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_7;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 929;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[100]);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 929;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[194]);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 929;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_parent == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[237]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 929;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = var_parent;
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame.f_lineno = 929;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 929;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_base_dir == NULL);
        var_base_dir = tmp_assign_source_21;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_22;
        if (var_site_parent == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[238]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 931;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_22 = var_site_parent;
        assert(var_base_dir == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_base_dir = tmp_assign_source_22;
    }
    branch_end_4:;
    branch_end_3:;
    {
        PyObject *tmp_tuple_element_2;
        if (var_base_dir == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[239]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 932;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_base_dir;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        if (var_package_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[225]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 932;
            type_description_1 = "oooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_package_path;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = Py_None;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
        if (var_package_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[225]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 933;
            type_description_1 = "oooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_3 = var_package_path;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_074ca5ebeaa9be2b3be6f26c50e35b6e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_074ca5ebeaa9be2b3be6f26c50e35b6e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_074ca5ebeaa9be2b3be6f26c50e35b6e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_074ca5ebeaa9be2b3be6f26c50e35b6e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_074ca5ebeaa9be2b3be6f26c50e35b6e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_074ca5ebeaa9be2b3be6f26c50e35b6e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_074ca5ebeaa9be2b3be6f26c50e35b6e,
        type_description_1,
        par_import_name,
        var_root_mod_name,
        var__,
        var_package_path,
        var_site_parent,
        var_site_folder,
        var_py_prefix,
        var_parent,
        var_folder,
        var_base_dir
    );


    // Release cached frame if used for exception.
    if (frame_074ca5ebeaa9be2b3be6f26c50e35b6e == cache_frame_074ca5ebeaa9be2b3be6f26c50e35b6e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_074ca5ebeaa9be2b3be6f26c50e35b6e);
        cache_frame_074ca5ebeaa9be2b3be6f26c50e35b6e = NULL;
    }

    assertFrameObject(frame_074ca5ebeaa9be2b3be6f26c50e35b6e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_import_name);
    par_import_name = NULL;
    CHECK_OBJECT(var_root_mod_name);
    Py_DECREF(var_root_mod_name);
    var_root_mod_name = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_package_path);
    var_package_path = NULL;
    Py_XDECREF(var_site_parent);
    var_site_parent = NULL;
    Py_XDECREF(var_site_folder);
    var_site_folder = NULL;
    Py_XDECREF(var_py_prefix);
    var_py_prefix = NULL;
    Py_XDECREF(var_parent);
    var_parent = NULL;
    Py_XDECREF(var_folder);
    var_folder = NULL;
    Py_XDECREF(var_base_dir);
    var_base_dir = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_import_name);
    par_import_name = NULL;
    Py_XDECREF(var_root_mod_name);
    var_root_mod_name = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_package_path);
    var_package_path = NULL;
    Py_XDECREF(var_site_parent);
    var_site_parent = NULL;
    Py_XDECREF(var_site_folder);
    var_site_folder = NULL;
    Py_XDECREF(var_py_prefix);
    var_py_prefix = NULL;
    Py_XDECREF(var_parent);
    var_parent = NULL;
    Py_XDECREF(var_folder);
    var_folder = NULL;
    Py_XDECREF(var_base_dir);
    var_base_dir = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

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


static PyObject *impl_flask$helpers$$$function__18___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_doc = python_pars[3];
    struct Nuitka_FrameObject *frame_d30182c5f74644996e50516ff61f6e4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d30182c5f74644996e50516ff61f6e4e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d30182c5f74644996e50516ff61f6e4e)) {
        Py_XDECREF(cache_frame_d30182c5f74644996e50516ff61f6e4e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d30182c5f74644996e50516ff61f6e4e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d30182c5f74644996e50516ff61f6e4e = MAKE_FUNCTION_FRAME(codeobj_d30182c5f74644996e50516ff61f6e4e, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d30182c5f74644996e50516ff61f6e4e->m_type_description == NULL);
    frame_d30182c5f74644996e50516ff61f6e4e = cache_frame_d30182c5f74644996e50516ff61f6e4e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d30182c5f74644996e50516ff61f6e4e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d30182c5f74644996e50516ff61f6e4e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_or_left_value_1 = par_name;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_func);
        tmp_expression_name_1 = par_func;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assattr_name_1 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[17], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_assattr_target_2;
        if (par_func == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[241]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 946;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_func;
        tmp_assattr_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[205]);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 946;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[205], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 946;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_doc);
        tmp_or_left_value_2 = par_doc;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (par_func == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[241]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 947;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_func;
        tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[242]);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_assattr_name_3 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[242], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        if (par_func == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[241]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 948;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_4 = par_func;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[241], tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 948;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_assattr_target_5;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[243]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[243]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 949;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d30182c5f74644996e50516ff61f6e4e->m_frame.f_lineno = 949;
        tmp_assattr_name_5 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 949;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[244], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 949;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d30182c5f74644996e50516ff61f6e4e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d30182c5f74644996e50516ff61f6e4e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d30182c5f74644996e50516ff61f6e4e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d30182c5f74644996e50516ff61f6e4e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d30182c5f74644996e50516ff61f6e4e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d30182c5f74644996e50516ff61f6e4e,
        type_description_1,
        par_self,
        par_func,
        par_name,
        par_doc
    );


    // Release cached frame if used for exception.
    if (frame_d30182c5f74644996e50516ff61f6e4e == cache_frame_d30182c5f74644996e50516ff61f6e4e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d30182c5f74644996e50516ff61f6e4e);
        cache_frame_d30182c5f74644996e50516ff61f6e4e = NULL;
    }

    assertFrameObject(frame_d30182c5f74644996e50516ff61f6e4e);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    par_doc = NULL;
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
    Py_XDECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    par_doc = NULL;
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


static PyObject *impl_flask$helpers$$$function__19___get__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_type = python_pars[2];
    PyObject *var_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_d601e5f322f2787b517fc0b0d9cb0891;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_d601e5f322f2787b517fc0b0d9cb0891 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_obj);
        tmp_compexpr_left_1 = par_obj;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    branch_no_1:;
    if (isFrameUnusable(cache_frame_d601e5f322f2787b517fc0b0d9cb0891)) {
        Py_XDECREF(cache_frame_d601e5f322f2787b517fc0b0d9cb0891);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d601e5f322f2787b517fc0b0d9cb0891 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d601e5f322f2787b517fc0b0d9cb0891 = MAKE_FUNCTION_FRAME(codeobj_d601e5f322f2787b517fc0b0d9cb0891, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d601e5f322f2787b517fc0b0d9cb0891->m_type_description == NULL);
    frame_d601e5f322f2787b517fc0b0d9cb0891 = cache_frame_d601e5f322f2787b517fc0b0d9cb0891;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d601e5f322f2787b517fc0b0d9cb0891);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d601e5f322f2787b517fc0b0d9cb0891) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[244]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 954;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_2 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL(tmp_expression_name_2, mod_consts[31]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 954;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame.f_lineno = 954;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 954;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_3 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_name_3, mod_consts[32]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 954;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_obj);
        tmp_expression_name_5 = par_obj;
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_name_5);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 955;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[4]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 955;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 955;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_6 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[17]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 955;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_args_element_name_2 == NULL)) {
            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[246]);
        }

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 955;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame.f_lineno = 955;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 955;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_value);
        tmp_compexpr_left_2 = var_value;
        tmp_compexpr_right_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_compexpr_right_2 == NULL)) {
            tmp_compexpr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[246]);
        }

        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 957;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_7 = par_self;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[241]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 957;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        if (par_obj == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[247]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 957;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_args_element_name_3 = par_obj;
        frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame.f_lineno = 957;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 957;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(var_value);
        tmp_ass_subvalue_1 = var_value;
        if (par_obj == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[247]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 958;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_8 = par_obj;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_name_8);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 958;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 958;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_9 = par_self;
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[17]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 958;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 958;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
    }
    branch_no_2:;
    CHECK_OBJECT(var_value);
    tmp_return_value = var_value;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d601e5f322f2787b517fc0b0d9cb0891, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d601e5f322f2787b517fc0b0d9cb0891, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_4 = tmp_with_1__exit;
        tmp_args_element_name_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_6 = EXC_TRACEBACK(PyThreadState_GET());
        frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame.f_lineno = 959;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 959;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame) frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_5;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 954;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame) frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_5;
    branch_end_3:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
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
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_5 = tmp_with_1__exit;
        frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame.f_lineno = 959;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, &PyTuple_GET_ITEM(mod_consts[35], 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_5:;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

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
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_6 = tmp_with_1__exit;
        frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame.f_lineno = 959;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_6, &PyTuple_GET_ITEM(mod_consts[35], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 959;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_1__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_7 = tmp_with_1__exit;
        frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame.f_lineno = 959;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, &PyTuple_GET_ITEM(mod_consts[35], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_7:;
    goto try_end_4;
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
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d601e5f322f2787b517fc0b0d9cb0891);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d601e5f322f2787b517fc0b0d9cb0891);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d601e5f322f2787b517fc0b0d9cb0891);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d601e5f322f2787b517fc0b0d9cb0891, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d601e5f322f2787b517fc0b0d9cb0891->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d601e5f322f2787b517fc0b0d9cb0891, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d601e5f322f2787b517fc0b0d9cb0891,
        type_description_1,
        par_self,
        par_obj,
        par_type,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_d601e5f322f2787b517fc0b0d9cb0891 == cache_frame_d601e5f322f2787b517fc0b0d9cb0891) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d601e5f322f2787b517fc0b0d9cb0891);
        cache_frame_d601e5f322f2787b517fc0b0d9cb0891 = NULL;
    }

    assertFrameObject(frame_d601e5f322f2787b517fc0b0d9cb0891);

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
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_obj);
    par_obj = NULL;
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    par_type = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
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
    Py_XDECREF(par_obj);
    par_obj = NULL;
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    par_type = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
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


static PyObject *impl_flask$helpers$$$function__20___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_import_name = python_pars[1];
    PyObject *par_template_folder = python_pars[2];
    PyObject *par_root_path = python_pars[3];
    PyObject *var_AppGroup = NULL;
    struct Nuitka_FrameObject *frame_bcc10711005b98b6fb942439eb571ea6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bcc10711005b98b6fb942439eb571ea6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bcc10711005b98b6fb942439eb571ea6)) {
        Py_XDECREF(cache_frame_bcc10711005b98b6fb942439eb571ea6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bcc10711005b98b6fb942439eb571ea6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bcc10711005b98b6fb942439eb571ea6 = MAKE_FUNCTION_FRAME(codeobj_bcc10711005b98b6fb942439eb571ea6, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bcc10711005b98b6fb942439eb571ea6->m_type_description == NULL);
    frame_bcc10711005b98b6fb942439eb571ea6 = cache_frame_bcc10711005b98b6fb942439eb571ea6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bcc10711005b98b6fb942439eb571ea6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bcc10711005b98b6fb942439eb571ea6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_import_name);
        tmp_assattr_name_1 = par_import_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[198], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 976;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_template_folder);
        tmp_assattr_name_2 = par_template_folder;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[248], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 977;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_root_path);
        tmp_compexpr_left_1 = par_root_path;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[249]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[249]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 980;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[198]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 980;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bcc10711005b98b6fb942439eb571ea6->m_frame.f_lineno = 980;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 980;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_root_path;
            assert(old != NULL);
            par_root_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_root_path);
        tmp_assattr_name_3 = par_root_path;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 982;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[103], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 982;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 983;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[250], tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 983;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_None;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 984;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[251], tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 984;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[252];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[253];
        tmp_level_name_1 = mod_consts[38];
        frame_bcc10711005b98b6fb942439eb571ea6->m_frame.f_lineno = 987;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 987;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[254],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[254]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 987;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_AppGroup == NULL);
        var_AppGroup = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(var_AppGroup);
        tmp_called_name_2 = var_AppGroup;
        frame_bcc10711005b98b6fb942439eb571ea6->m_frame.f_lineno = 993;
        tmp_assattr_name_6 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 993;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 993;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[252], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 993;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bcc10711005b98b6fb942439eb571ea6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bcc10711005b98b6fb942439eb571ea6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bcc10711005b98b6fb942439eb571ea6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bcc10711005b98b6fb942439eb571ea6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bcc10711005b98b6fb942439eb571ea6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bcc10711005b98b6fb942439eb571ea6,
        type_description_1,
        par_self,
        par_import_name,
        par_template_folder,
        par_root_path,
        var_AppGroup
    );


    // Release cached frame if used for exception.
    if (frame_bcc10711005b98b6fb942439eb571ea6 == cache_frame_bcc10711005b98b6fb942439eb571ea6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bcc10711005b98b6fb942439eb571ea6);
        cache_frame_bcc10711005b98b6fb942439eb571ea6 = NULL;
    }

    assertFrameObject(frame_bcc10711005b98b6fb942439eb571ea6);

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
    CHECK_OBJECT(par_import_name);
    Py_DECREF(par_import_name);
    par_import_name = NULL;
    CHECK_OBJECT(par_template_folder);
    Py_DECREF(par_template_folder);
    par_template_folder = NULL;
    CHECK_OBJECT(par_root_path);
    Py_DECREF(par_root_path);
    par_root_path = NULL;
    CHECK_OBJECT(var_AppGroup);
    Py_DECREF(var_AppGroup);
    var_AppGroup = NULL;
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
    CHECK_OBJECT(par_import_name);
    Py_DECREF(par_import_name);
    par_import_name = NULL;
    CHECK_OBJECT(par_template_folder);
    Py_DECREF(par_template_folder);
    par_template_folder = NULL;
    Py_XDECREF(par_root_path);
    par_root_path = NULL;
    Py_XDECREF(var_AppGroup);
    var_AppGroup = NULL;
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


static PyObject *impl_flask$helpers$$$function__21_static_folder(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0708275b2928dd571b3d744fbf39f350;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0708275b2928dd571b3d744fbf39f350 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0708275b2928dd571b3d744fbf39f350)) {
        Py_XDECREF(cache_frame_0708275b2928dd571b3d744fbf39f350);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0708275b2928dd571b3d744fbf39f350 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0708275b2928dd571b3d744fbf39f350 = MAKE_FUNCTION_FRAME(codeobj_0708275b2928dd571b3d744fbf39f350, module_flask$helpers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0708275b2928dd571b3d744fbf39f350->m_type_description == NULL);
    frame_0708275b2928dd571b3d744fbf39f350 = cache_frame_0708275b2928dd571b3d744fbf39f350;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0708275b2928dd571b3d744fbf39f350);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0708275b2928dd571b3d744fbf39f350) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[250]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 998;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
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
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_5;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 999;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[100]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 999;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[102]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 999;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 999;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[103]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 999;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 999;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[250]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 999;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0708275b2928dd571b3d744fbf39f350->m_frame.f_lineno = 999;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 999;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0708275b2928dd571b3d744fbf39f350);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0708275b2928dd571b3d744fbf39f350);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0708275b2928dd571b3d744fbf39f350);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0708275b2928dd571b3d744fbf39f350, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0708275b2928dd571b3d744fbf39f350->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0708275b2928dd571b3d744fbf39f350, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0708275b2928dd571b3d744fbf39f350,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0708275b2928dd571b3d744fbf39f350 == cache_frame_0708275b2928dd571b3d744fbf39f350) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0708275b2928dd571b3d744fbf39f350);
        cache_frame_0708275b2928dd571b3d744fbf39f350 = NULL;
    }

    assertFrameObject(frame_0708275b2928dd571b3d744fbf39f350);

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


static PyObject *impl_flask$helpers$$$function__22_static_folder(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_7548788f731beffc8dfd8635a01ac57e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7548788f731beffc8dfd8635a01ac57e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7548788f731beffc8dfd8635a01ac57e)) {
        Py_XDECREF(cache_frame_7548788f731beffc8dfd8635a01ac57e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7548788f731beffc8dfd8635a01ac57e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7548788f731beffc8dfd8635a01ac57e = MAKE_FUNCTION_FRAME(codeobj_7548788f731beffc8dfd8635a01ac57e, module_flask$helpers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7548788f731beffc8dfd8635a01ac57e->m_type_description == NULL);
    frame_7548788f731beffc8dfd8635a01ac57e = cache_frame_7548788f731beffc8dfd8635a01ac57e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7548788f731beffc8dfd8635a01ac57e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7548788f731beffc8dfd8635a01ac57e) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_value);
        tmp_compexpr_left_1 = par_value;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_value);
        tmp_called_instance_1 = par_value;
        frame_7548788f731beffc8dfd8635a01ac57e->m_frame.f_lineno = 1004;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[256],
            &PyTuple_GET_ITEM(mod_consts[257], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1004;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            par_value = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_name_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[250], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1005;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7548788f731beffc8dfd8635a01ac57e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7548788f731beffc8dfd8635a01ac57e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7548788f731beffc8dfd8635a01ac57e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7548788f731beffc8dfd8635a01ac57e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7548788f731beffc8dfd8635a01ac57e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7548788f731beffc8dfd8635a01ac57e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7548788f731beffc8dfd8635a01ac57e == cache_frame_7548788f731beffc8dfd8635a01ac57e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7548788f731beffc8dfd8635a01ac57e);
        cache_frame_7548788f731beffc8dfd8635a01ac57e = NULL;
    }

    assertFrameObject(frame_7548788f731beffc8dfd8635a01ac57e);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
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

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
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


static PyObject *impl_flask$helpers$$$function__23_static_url_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_basename = NULL;
    struct Nuitka_FrameObject *frame_90790b613dbcbf4f9d28b1281620394b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_90790b613dbcbf4f9d28b1281620394b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_90790b613dbcbf4f9d28b1281620394b)) {
        Py_XDECREF(cache_frame_90790b613dbcbf4f9d28b1281620394b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90790b613dbcbf4f9d28b1281620394b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90790b613dbcbf4f9d28b1281620394b = MAKE_FUNCTION_FRAME(codeobj_90790b613dbcbf4f9d28b1281620394b, module_flask$helpers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_90790b613dbcbf4f9d28b1281620394b->m_type_description == NULL);
    frame_90790b613dbcbf4f9d28b1281620394b = cache_frame_90790b613dbcbf4f9d28b1281620394b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_90790b613dbcbf4f9d28b1281620394b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_90790b613dbcbf4f9d28b1281620394b) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[251]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1014;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1015;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[251]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1015;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1017;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[258]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1017;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_6;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1018;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[100]);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1018;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[105]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1018;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1018;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[258]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 1018;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_90790b613dbcbf4f9d28b1281620394b->m_frame.f_lineno = 1018;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1018;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_basename == NULL);
        var_basename = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = mod_consts[259];
        CHECK_OBJECT(var_basename);
        tmp_right_name_1 = var_basename;
        tmp_called_instance_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1019;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_90790b613dbcbf4f9d28b1281620394b->m_frame.f_lineno = 1019;
        tmp_return_value = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[256],
            &PyTuple_GET_ITEM(mod_consts[260], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1019;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_90790b613dbcbf4f9d28b1281620394b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_90790b613dbcbf4f9d28b1281620394b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_90790b613dbcbf4f9d28b1281620394b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_90790b613dbcbf4f9d28b1281620394b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90790b613dbcbf4f9d28b1281620394b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90790b613dbcbf4f9d28b1281620394b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90790b613dbcbf4f9d28b1281620394b,
        type_description_1,
        par_self,
        var_basename
    );


    // Release cached frame if used for exception.
    if (frame_90790b613dbcbf4f9d28b1281620394b == cache_frame_90790b613dbcbf4f9d28b1281620394b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_90790b613dbcbf4f9d28b1281620394b);
        cache_frame_90790b613dbcbf4f9d28b1281620394b = NULL;
    }

    assertFrameObject(frame_90790b613dbcbf4f9d28b1281620394b);

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
    Py_XDECREF(var_basename);
    var_basename = NULL;
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
    Py_XDECREF(var_basename);
    var_basename = NULL;
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


static PyObject *impl_flask$helpers$$$function__24_static_url_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b63fad2c2f8711f94dd324d895722756;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b63fad2c2f8711f94dd324d895722756 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b63fad2c2f8711f94dd324d895722756)) {
        Py_XDECREF(cache_frame_b63fad2c2f8711f94dd324d895722756);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b63fad2c2f8711f94dd324d895722756 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b63fad2c2f8711f94dd324d895722756 = MAKE_FUNCTION_FRAME(codeobj_b63fad2c2f8711f94dd324d895722756, module_flask$helpers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b63fad2c2f8711f94dd324d895722756->m_type_description == NULL);
    frame_b63fad2c2f8711f94dd324d895722756 = cache_frame_b63fad2c2f8711f94dd324d895722756;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b63fad2c2f8711f94dd324d895722756);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b63fad2c2f8711f94dd324d895722756) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_value);
        tmp_compexpr_left_1 = par_value;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_value);
        tmp_called_instance_1 = par_value;
        frame_b63fad2c2f8711f94dd324d895722756->m_frame.f_lineno = 1024;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[256],
            &PyTuple_GET_ITEM(mod_consts[260], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1024;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            par_value = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_name_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[251], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1026;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b63fad2c2f8711f94dd324d895722756);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b63fad2c2f8711f94dd324d895722756);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b63fad2c2f8711f94dd324d895722756, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b63fad2c2f8711f94dd324d895722756->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b63fad2c2f8711f94dd324d895722756, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b63fad2c2f8711f94dd324d895722756,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b63fad2c2f8711f94dd324d895722756 == cache_frame_b63fad2c2f8711f94dd324d895722756) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b63fad2c2f8711f94dd324d895722756);
        cache_frame_b63fad2c2f8711f94dd324d895722756 = NULL;
    }

    assertFrameObject(frame_b63fad2c2f8711f94dd324d895722756);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
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

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
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


static PyObject *impl_flask$helpers$$$function__25_has_static_folder(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0323d8c88f0657e46ac33fb5a9378771;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0323d8c88f0657e46ac33fb5a9378771 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0323d8c88f0657e46ac33fb5a9378771)) {
        Py_XDECREF(cache_frame_0323d8c88f0657e46ac33fb5a9378771);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0323d8c88f0657e46ac33fb5a9378771 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0323d8c88f0657e46ac33fb5a9378771 = MAKE_FUNCTION_FRAME(codeobj_0323d8c88f0657e46ac33fb5a9378771, module_flask$helpers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0323d8c88f0657e46ac33fb5a9378771->m_type_description == NULL);
    frame_0323d8c88f0657e46ac33fb5a9378771 = cache_frame_0323d8c88f0657e46ac33fb5a9378771;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0323d8c88f0657e46ac33fb5a9378771);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0323d8c88f0657e46ac33fb5a9378771) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[258]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1035;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_return_value = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_compexpr_left_1);
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0323d8c88f0657e46ac33fb5a9378771);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0323d8c88f0657e46ac33fb5a9378771);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0323d8c88f0657e46ac33fb5a9378771);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0323d8c88f0657e46ac33fb5a9378771, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0323d8c88f0657e46ac33fb5a9378771->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0323d8c88f0657e46ac33fb5a9378771, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0323d8c88f0657e46ac33fb5a9378771,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0323d8c88f0657e46ac33fb5a9378771 == cache_frame_0323d8c88f0657e46ac33fb5a9378771) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0323d8c88f0657e46ac33fb5a9378771);
        cache_frame_0323d8c88f0657e46ac33fb5a9378771 = NULL;
    }

    assertFrameObject(frame_0323d8c88f0657e46ac33fb5a9378771);

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


static PyObject *impl_flask$helpers$$$function__26_jinja_loader(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_92f4f396578c383df2ed6e26f6b65c2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_92f4f396578c383df2ed6e26f6b65c2a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_92f4f396578c383df2ed6e26f6b65c2a)) {
        Py_XDECREF(cache_frame_92f4f396578c383df2ed6e26f6b65c2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_92f4f396578c383df2ed6e26f6b65c2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_92f4f396578c383df2ed6e26f6b65c2a = MAKE_FUNCTION_FRAME(codeobj_92f4f396578c383df2ed6e26f6b65c2a, module_flask$helpers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_92f4f396578c383df2ed6e26f6b65c2a->m_type_description == NULL);
    frame_92f4f396578c383df2ed6e26f6b65c2a = cache_frame_92f4f396578c383df2ed6e26f6b65c2a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_92f4f396578c383df2ed6e26f6b65c2a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_92f4f396578c383df2ed6e26f6b65c2a) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[248]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1043;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
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
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_5;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[263]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1044;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1044;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[100]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1044;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[102]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1044;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1044;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[103]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 1044;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1044;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[248]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 1044;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_92f4f396578c383df2ed6e26f6b65c2a->m_frame.f_lineno = 1044;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1044;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_92f4f396578c383df2ed6e26f6b65c2a->m_frame.f_lineno = 1044;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1044;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_92f4f396578c383df2ed6e26f6b65c2a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_92f4f396578c383df2ed6e26f6b65c2a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_92f4f396578c383df2ed6e26f6b65c2a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_92f4f396578c383df2ed6e26f6b65c2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_92f4f396578c383df2ed6e26f6b65c2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_92f4f396578c383df2ed6e26f6b65c2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_92f4f396578c383df2ed6e26f6b65c2a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_92f4f396578c383df2ed6e26f6b65c2a == cache_frame_92f4f396578c383df2ed6e26f6b65c2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_92f4f396578c383df2ed6e26f6b65c2a);
        cache_frame_92f4f396578c383df2ed6e26f6b65c2a = NULL;
    }

    assertFrameObject(frame_92f4f396578c383df2ed6e26f6b65c2a);

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


static PyObject *impl_flask$helpers$$$function__27_get_send_file_max_age(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_filename = python_pars[1];
    struct Nuitka_FrameObject *frame_1614de05419aa8a9f22cfcc7fe2c84ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1614de05419aa8a9f22cfcc7fe2c84ad = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1614de05419aa8a9f22cfcc7fe2c84ad)) {
        Py_XDECREF(cache_frame_1614de05419aa8a9f22cfcc7fe2c84ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1614de05419aa8a9f22cfcc7fe2c84ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1614de05419aa8a9f22cfcc7fe2c84ad = MAKE_FUNCTION_FRAME(codeobj_1614de05419aa8a9f22cfcc7fe2c84ad, module_flask$helpers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1614de05419aa8a9f22cfcc7fe2c84ad->m_type_description == NULL);
    frame_1614de05419aa8a9f22cfcc7fe2c84ad = cache_frame_1614de05419aa8a9f22cfcc7fe2c84ad;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1614de05419aa8a9f22cfcc7fe2c84ad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1614de05419aa8a9f22cfcc7fe2c84ad) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[265]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[265]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1070;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1070;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[266]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1070;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1614de05419aa8a9f22cfcc7fe2c84ad->m_frame.f_lineno = 1070;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1070;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1614de05419aa8a9f22cfcc7fe2c84ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1614de05419aa8a9f22cfcc7fe2c84ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1614de05419aa8a9f22cfcc7fe2c84ad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1614de05419aa8a9f22cfcc7fe2c84ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1614de05419aa8a9f22cfcc7fe2c84ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1614de05419aa8a9f22cfcc7fe2c84ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1614de05419aa8a9f22cfcc7fe2c84ad,
        type_description_1,
        par_self,
        par_filename
    );


    // Release cached frame if used for exception.
    if (frame_1614de05419aa8a9f22cfcc7fe2c84ad == cache_frame_1614de05419aa8a9f22cfcc7fe2c84ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1614de05419aa8a9f22cfcc7fe2c84ad);
        cache_frame_1614de05419aa8a9f22cfcc7fe2c84ad = NULL;
    }

    assertFrameObject(frame_1614de05419aa8a9f22cfcc7fe2c84ad);

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
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    par_filename = NULL;
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
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    par_filename = NULL;
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


static PyObject *impl_flask$helpers$$$function__28_send_static_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_filename = python_pars[1];
    PyObject *var_cache_timeout = NULL;
    struct Nuitka_FrameObject *frame_317c8759b51bff47ef35e31211cdfc30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_317c8759b51bff47ef35e31211cdfc30 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_317c8759b51bff47ef35e31211cdfc30)) {
        Py_XDECREF(cache_frame_317c8759b51bff47ef35e31211cdfc30);

#if _DEBUG_REFCOUNTS
        if (cache_frame_317c8759b51bff47ef35e31211cdfc30 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_317c8759b51bff47ef35e31211cdfc30 = MAKE_FUNCTION_FRAME(codeobj_317c8759b51bff47ef35e31211cdfc30, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_317c8759b51bff47ef35e31211cdfc30->m_type_description == NULL);
    frame_317c8759b51bff47ef35e31211cdfc30 = cache_frame_317c8759b51bff47ef35e31211cdfc30;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_317c8759b51bff47ef35e31211cdfc30);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_317c8759b51bff47ef35e31211cdfc30) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[268]);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1078;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1078;
            type_description_1 = "ooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[269];
        frame_317c8759b51bff47ef35e31211cdfc30->m_frame.f_lineno = 1079;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1079;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1082;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_filename);
        tmp_args_element_name_1 = par_filename;
        frame_317c8759b51bff47ef35e31211cdfc30->m_frame.f_lineno = 1082;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[149], tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1082;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_cache_timeout == NULL);
        var_cache_timeout = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[270]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[245]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1084;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[258]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1084;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        if (par_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1084;
            type_description_1 = "ooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = par_filename;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[271];
        CHECK_OBJECT(var_cache_timeout);
        tmp_dict_value_1 = var_cache_timeout;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_317c8759b51bff47ef35e31211cdfc30->m_frame.f_lineno = 1083;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_317c8759b51bff47ef35e31211cdfc30);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_317c8759b51bff47ef35e31211cdfc30);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_317c8759b51bff47ef35e31211cdfc30);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_317c8759b51bff47ef35e31211cdfc30, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_317c8759b51bff47ef35e31211cdfc30->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_317c8759b51bff47ef35e31211cdfc30, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_317c8759b51bff47ef35e31211cdfc30,
        type_description_1,
        par_self,
        par_filename,
        var_cache_timeout
    );


    // Release cached frame if used for exception.
    if (frame_317c8759b51bff47ef35e31211cdfc30 == cache_frame_317c8759b51bff47ef35e31211cdfc30) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_317c8759b51bff47ef35e31211cdfc30);
        cache_frame_317c8759b51bff47ef35e31211cdfc30 = NULL;
    }

    assertFrameObject(frame_317c8759b51bff47ef35e31211cdfc30);

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
    Py_XDECREF(par_filename);
    par_filename = NULL;
    CHECK_OBJECT(var_cache_timeout);
    Py_DECREF(var_cache_timeout);
    var_cache_timeout = NULL;
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
    Py_XDECREF(par_filename);
    par_filename = NULL;
    Py_XDECREF(var_cache_timeout);
    var_cache_timeout = NULL;
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


static PyObject *impl_flask$helpers$$$function__29_open_resource(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_resource = python_pars[1];
    PyObject *par_mode = python_pars[2];
    struct Nuitka_FrameObject *frame_e6cbd24610299eb01a24b19160ec1c44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e6cbd24610299eb01a24b19160ec1c44 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e6cbd24610299eb01a24b19160ec1c44)) {
        Py_XDECREF(cache_frame_e6cbd24610299eb01a24b19160ec1c44);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6cbd24610299eb01a24b19160ec1c44 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6cbd24610299eb01a24b19160ec1c44 = MAKE_FUNCTION_FRAME(codeobj_e6cbd24610299eb01a24b19160ec1c44, module_flask$helpers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e6cbd24610299eb01a24b19160ec1c44->m_type_description == NULL);
    frame_e6cbd24610299eb01a24b19160ec1c44 = cache_frame_e6cbd24610299eb01a24b19160ec1c44;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e6cbd24610299eb01a24b19160ec1c44);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e6cbd24610299eb01a24b19160ec1c44) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_mode);
        tmp_compexpr_left_1 = par_mode;
        tmp_compexpr_right_1 = PySet_New(mod_consts[273]);
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[274];
        frame_e6cbd24610299eb01a24b19160ec1c44->m_frame.f_lineno = 1112;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1112;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_open_filename_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_open_mode_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[100]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[102]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[103]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 1114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_resource);
        tmp_args_element_name_2 = par_resource;
        frame_e6cbd24610299eb01a24b19160ec1c44->m_frame.f_lineno = 1114;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_open_filename_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_open_filename_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mode);
        tmp_open_mode_1 = par_mode;
        tmp_return_value = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6cbd24610299eb01a24b19160ec1c44);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6cbd24610299eb01a24b19160ec1c44);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6cbd24610299eb01a24b19160ec1c44);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6cbd24610299eb01a24b19160ec1c44, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6cbd24610299eb01a24b19160ec1c44->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6cbd24610299eb01a24b19160ec1c44, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6cbd24610299eb01a24b19160ec1c44,
        type_description_1,
        par_self,
        par_resource,
        par_mode
    );


    // Release cached frame if used for exception.
    if (frame_e6cbd24610299eb01a24b19160ec1c44 == cache_frame_e6cbd24610299eb01a24b19160ec1c44) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e6cbd24610299eb01a24b19160ec1c44);
        cache_frame_e6cbd24610299eb01a24b19160ec1c44 = NULL;
    }

    assertFrameObject(frame_e6cbd24610299eb01a24b19160ec1c44);

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
    Py_XDECREF(par_resource);
    par_resource = NULL;
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    par_mode = NULL;
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
    Py_XDECREF(par_resource);
    par_resource = NULL;
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    par_mode = NULL;
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


static PyObject *impl_flask$helpers$$$function__30_total_seconds(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_td = python_pars[0];
    struct Nuitka_FrameObject *frame_bfea9c8f94946c8b96e8ce9eda220482;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bfea9c8f94946c8b96e8ce9eda220482 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bfea9c8f94946c8b96e8ce9eda220482)) {
        Py_XDECREF(cache_frame_bfea9c8f94946c8b96e8ce9eda220482);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bfea9c8f94946c8b96e8ce9eda220482 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bfea9c8f94946c8b96e8ce9eda220482 = MAKE_FUNCTION_FRAME(codeobj_bfea9c8f94946c8b96e8ce9eda220482, module_flask$helpers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bfea9c8f94946c8b96e8ce9eda220482->m_type_description == NULL);
    frame_bfea9c8f94946c8b96e8ce9eda220482 = cache_frame_bfea9c8f94946c8b96e8ce9eda220482;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bfea9c8f94946c8b96e8ce9eda220482);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bfea9c8f94946c8b96e8ce9eda220482) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_td);
        tmp_expression_name_1 = par_td;
        tmp_left_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[276]);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[277];
        tmp_left_name_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_4, tmp_right_name_1);
        Py_DECREF(tmp_left_name_4);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[277];
        tmp_left_name_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_left_name_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = mod_consts[278];
        tmp_left_name_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_td == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[279]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_td;
        tmp_right_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[280]);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 1125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_4);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bfea9c8f94946c8b96e8ce9eda220482);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bfea9c8f94946c8b96e8ce9eda220482);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bfea9c8f94946c8b96e8ce9eda220482);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bfea9c8f94946c8b96e8ce9eda220482, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bfea9c8f94946c8b96e8ce9eda220482->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bfea9c8f94946c8b96e8ce9eda220482, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bfea9c8f94946c8b96e8ce9eda220482,
        type_description_1,
        par_td
    );


    // Release cached frame if used for exception.
    if (frame_bfea9c8f94946c8b96e8ce9eda220482 == cache_frame_bfea9c8f94946c8b96e8ce9eda220482) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bfea9c8f94946c8b96e8ce9eda220482);
        cache_frame_bfea9c8f94946c8b96e8ce9eda220482 = NULL;
    }

    assertFrameObject(frame_bfea9c8f94946c8b96e8ce9eda220482);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_td);
    par_td = NULL;
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

    Py_XDECREF(par_td);
    par_td = NULL;
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


static PyObject *impl_flask$helpers$$$function__31_is_ip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *var_family = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_c369f40142862624d49378876919f416;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_c369f40142862624d49378876919f416 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c369f40142862624d49378876919f416)) {
        Py_XDECREF(cache_frame_c369f40142862624d49378876919f416);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c369f40142862624d49378876919f416 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c369f40142862624d49378876919f416 = MAKE_FUNCTION_FRAME(codeobj_c369f40142862624d49378876919f416, module_flask$helpers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c369f40142862624d49378876919f416->m_type_description == NULL);
    frame_c369f40142862624d49378876919f416 = cache_frame_c369f40142862624d49378876919f416;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c369f40142862624d49378876919f416);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c369f40142862624d49378876919f416) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tmp_and_right_value_1_object_1;
        int tmp_truth_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[282]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[282]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[283]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[284];
        tmp_tmp_and_right_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_and_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_and_right_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_1_object_1);

            exception_lineno = 1140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_1_object_1);
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
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1142;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_name_1 = par_value;
        frame_c369f40142862624d49378876919f416->m_frame.f_lineno = 1142;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[286], tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1142;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c369f40142862624d49378876919f416, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c369f40142862624d49378876919f416, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[287]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 1141;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c369f40142862624d49378876919f416->m_frame) frame_c369f40142862624d49378876919f416->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
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
    try_end_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[288]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_4;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[285]);

            if (unlikely(tmp_expression_name_4 == NULL)) {
                tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
            }

            if (tmp_expression_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1147;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[289]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1147;
                type_description_1 = "oo";
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
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oo";
                exception_lineno = 1147;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_family;
            var_family = tmp_assign_source_3;
            Py_INCREF(var_family);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;
            type_description_1 = "oo";
            goto try_except_handler_5;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[290]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;
            type_description_1 = "oo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_family);
        tmp_args_element_name_2 = var_family;
        if (par_value == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[291]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1149;
            type_description_1 = "oo";
            goto try_except_handler_5;
        }

        tmp_args_element_name_3 = par_value;
        frame_c369f40142862624d49378876919f416->m_frame.f_lineno = 1149;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;
            type_description_1 = "oo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_2;
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

    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_5;
    }
    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_c369f40142862624d49378876919f416, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_c369f40142862624d49378876919f416, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_6;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1150;
            type_description_1 = "oo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[287]);
        if (tmp_compexpr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1150;
            type_description_1 = "oo";
            goto try_except_handler_6;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1150;
            type_description_1 = "oo";
            goto try_except_handler_6;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 1148;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c369f40142862624d49378876919f416->m_frame) frame_c369f40142862624d49378876919f416->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_6;
    branch_no_3:;
    goto try_end_3;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_4;
    branch_no_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 1147;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c369f40142862624d49378876919f416);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c369f40142862624d49378876919f416);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c369f40142862624d49378876919f416);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c369f40142862624d49378876919f416, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c369f40142862624d49378876919f416->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c369f40142862624d49378876919f416, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c369f40142862624d49378876919f416,
        type_description_1,
        par_value,
        var_family
    );


    // Release cached frame if used for exception.
    if (frame_c369f40142862624d49378876919f416 == cache_frame_c369f40142862624d49378876919f416) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c369f40142862624d49378876919f416);
        cache_frame_c369f40142862624d49378876919f416 = NULL;
    }

    assertFrameObject(frame_c369f40142862624d49378876919f416);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_family);
    var_family = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_family);
    var_family = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

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



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__10_get_flashed_messages(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__10_get_flashed_messages,
        mod_consts[343],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c37b36e78f71b0ff36576a51dc5942ea,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[96],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__10_get_flashed_messages$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__10_get_flashed_messages$$$function__1_lambda,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_e7f2e2d85f08f648f546b393b9569ae2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__11_send_file(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__11_send_file,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_84ee2a8322e4ab0fb49e39cb92f5c126,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[170],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__12_safe_join() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__12_safe_join,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6d3050c8d7150d6afef05d96ce58a420,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[180],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__13_send_from_directory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__13_send_from_directory,
        mod_consts[270],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_29d2cb530bbf5aa548fc3142510ad3da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[190],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__14_get_root_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__14_get_root_path,
        mod_consts[249],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_62f37a10df8a6c98d6a64b68a5aab824,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[203],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__15__matching_loader_thinks_module_is_package() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__15__matching_loader_thinks_module_is_package,
        mod_consts[224],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e68c0de3aec52671f3d7fe4eb6d6ad1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[210],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__16__find_package_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__16__find_package_path,
        mod_consts[230],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c630bc58128448747ae9b2a2288ee685,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[226],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__17_find_package() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__17_find_package,
        mod_consts[345],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_074ca5ebeaa9be2b3be6f26c50e35b6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[240],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__18___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__18___init__,
        mod_consts[357],
#if PYTHON_VERSION >= 0x300
        mod_consts[358],
#endif
        codeobj_d30182c5f74644996e50516ff61f6e4e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__19___get__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__19___get__,
        mod_consts[360],
#if PYTHON_VERSION >= 0x300
        mod_consts[361],
#endif
        codeobj_d601e5f322f2787b517fc0b0d9cb0891,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__1_get_env() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__1_get_env,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0850c06412117e59ae126b9c2f3bde8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__20___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__20___init__,
        mod_consts[357],
#if PYTHON_VERSION >= 0x300
        mod_consts[364],
#endif
        codeobj_bcc10711005b98b6fb942439eb571ea6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__21_static_folder() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__21_static_folder,
        mod_consts[258],
#if PYTHON_VERSION >= 0x300
        mod_consts[366],
#endif
        codeobj_0708275b2928dd571b3d744fbf39f350,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[255],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__22_static_folder() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__22_static_folder,
        mod_consts[258],
#if PYTHON_VERSION >= 0x300
        mod_consts[366],
#endif
        codeobj_7548788f731beffc8dfd8635a01ac57e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__23_static_url_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__23_static_url_path,
        mod_consts[368],
#if PYTHON_VERSION >= 0x300
        mod_consts[369],
#endif
        codeobj_90790b613dbcbf4f9d28b1281620394b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[261],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__24_static_url_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__24_static_url_path,
        mod_consts[368],
#if PYTHON_VERSION >= 0x300
        mod_consts[369],
#endif
        codeobj_b63fad2c2f8711f94dd324d895722756,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__25_has_static_folder() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__25_has_static_folder,
        mod_consts[268],
#if PYTHON_VERSION >= 0x300
        mod_consts[370],
#endif
        codeobj_0323d8c88f0657e46ac33fb5a9378771,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[262],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__26_jinja_loader() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__26_jinja_loader,
        mod_consts[371],
#if PYTHON_VERSION >= 0x300
        mod_consts[372],
#endif
        codeobj_92f4f396578c383df2ed6e26f6b65c2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[264],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__27_get_send_file_max_age() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__27_get_send_file_max_age,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[373],
#endif
        codeobj_1614de05419aa8a9f22cfcc7fe2c84ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[267],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__28_send_static_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__28_send_static_file,
        mod_consts[374],
#if PYTHON_VERSION >= 0x300
        mod_consts[375],
#endif
        codeobj_317c8759b51bff47ef35e31211cdfc30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[272],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__29_open_resource(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__29_open_resource,
        mod_consts[377],
#if PYTHON_VERSION >= 0x300
        mod_consts[378],
#endif
        codeobj_e6cbd24610299eb01a24b19160ec1c44,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[275],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__2_get_debug_flag() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__2_get_debug_flag,
        mod_consts[334],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3f0ccd43d03b9a381428fc59fd4e5c1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__30_total_seconds() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__30_total_seconds,
        mod_consts[265],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bfea9c8f94946c8b96e8ce9eda220482,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[281],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__31_is_ip() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__31_is_ip,
        mod_consts[379],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c369f40142862624d49378876919f416,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[292],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__3_get_load_dotenv(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__3_get_load_dotenv,
        mod_consts[336],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b002ee83705153213faefa68e4c6f131,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__4__endpoint_from_view_func() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__4__endpoint_from_view_func,
        mod_consts[337],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba22fd2decd55f0025c5d8dedb95ce06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__5_stream_with_context() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__5_stream_with_context,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dea858f73efed4994f1f5668c0210a8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__5_stream_with_context$$$function__1_decorator(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__5_stream_with_context$$$function__1_decorator,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[20],
#endif
        codeobj_6422d8614f3b1b5c9af26f7a006e1a36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__5_stream_with_context$$$function__2_generator(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__5_stream_with_context$$$function__2_generator,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[24],
#endif
        codeobj_c7f89a174bf16aa5fa89f06c4041cb25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__6_make_response() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__6_make_response,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8f5dfb8821cccc3aeb55a51c04449cc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__7_url_for() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__7_url_for,
        mod_consts[338],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c63e8ed2b45ae814e4f2fd1c7c9367ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__8_get_template_attribute() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__8_get_template_attribute,
        mod_consts[339],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c91fe8a03917afa6e2ec0d7d4a84257,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[81],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flask$helpers$$$function__9_flash(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flask$helpers$$$function__9_flash,
        mod_consts[341],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6b82acf1e57146a2e1b71fa9fcb02073,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flask$helpers,
        mod_consts[91],
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

function_impl_code functable_flask$helpers[] = {
    impl_flask$helpers$$$function__5_stream_with_context$$$function__1_decorator,
    impl_flask$helpers$$$function__5_stream_with_context$$$function__2_generator,
    impl_flask$helpers$$$function__10_get_flashed_messages$$$function__1_lambda,
    impl_flask$helpers$$$function__1_get_env,
    impl_flask$helpers$$$function__2_get_debug_flag,
    impl_flask$helpers$$$function__3_get_load_dotenv,
    impl_flask$helpers$$$function__4__endpoint_from_view_func,
    impl_flask$helpers$$$function__5_stream_with_context,
    impl_flask$helpers$$$function__6_make_response,
    impl_flask$helpers$$$function__7_url_for,
    impl_flask$helpers$$$function__8_get_template_attribute,
    impl_flask$helpers$$$function__9_flash,
    impl_flask$helpers$$$function__10_get_flashed_messages,
    impl_flask$helpers$$$function__11_send_file,
    impl_flask$helpers$$$function__12_safe_join,
    impl_flask$helpers$$$function__13_send_from_directory,
    impl_flask$helpers$$$function__14_get_root_path,
    impl_flask$helpers$$$function__15__matching_loader_thinks_module_is_package,
    impl_flask$helpers$$$function__16__find_package_path,
    impl_flask$helpers$$$function__17_find_package,
    impl_flask$helpers$$$function__18___init__,
    impl_flask$helpers$$$function__19___get__,
    impl_flask$helpers$$$function__20___init__,
    impl_flask$helpers$$$function__21_static_folder,
    impl_flask$helpers$$$function__22_static_folder,
    impl_flask$helpers$$$function__23_static_url_path,
    impl_flask$helpers$$$function__24_static_url_path,
    impl_flask$helpers$$$function__25_has_static_folder,
    impl_flask$helpers$$$function__26_jinja_loader,
    impl_flask$helpers$$$function__27_get_send_file_max_age,
    impl_flask$helpers$$$function__28_send_static_file,
    impl_flask$helpers$$$function__29_open_resource,
    impl_flask$helpers$$$function__30_total_seconds,
    impl_flask$helpers$$$function__31_is_ip,
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

    function_impl_code *current = functable_flask$helpers;
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

    if (offset > sizeof(functable_flask$helpers) || offset < 0) {
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
        functable_flask$helpers[offset],
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
        module_flask$helpers,
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
PyObject *modulecode_flask$helpers(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_flask$helpers = module;

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
    PRINT_STRING("flask.helpers: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("flask.helpers: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("flask.helpers: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initflask$helpers\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_flask$helpers = MODULE_DICT(module_flask$helpers);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flask$helpers,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flask$helpers,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flask$helpers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flask$helpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flask$helpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flask$helpers);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flask$helpers, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_flask$helpers, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flask$helpers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flask$helpers);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_f98abe36b95ca69a88ff346a3d6d9263;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_flask$helpers$$$class__1_locked_cached_property_936 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_2eacff08968172f2a8f1316944b1e3ec_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2eacff08968172f2a8f1316944b1e3ec_2 = NULL;
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
    PyObject *locals_flask$helpers$$$class__2__PackageBoundObject_962 = NULL;
    struct Nuitka_FrameObject *frame_341ef58bc638ee8c14bbf71578303b07_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_341ef58bc638ee8c14bbf71578303b07_3 = NULL;
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
        tmp_assign_source_1 = mod_consts[293];
        UPDATE_STRING_DICT0(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[294];
        UPDATE_STRING_DICT0(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_f98abe36b95ca69a88ff346a3d6d9263 = MAKE_MODULE_FRAME(codeobj_f98abe36b95ca69a88ff346a3d6d9263, module_flask$helpers);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_f98abe36b95ca69a88ff346a3d6d9263);
    assert(Py_REFCNT(frame_f98abe36b95ca69a88ff346a3d6d9263) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[294];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[295]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[295]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[219], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[295]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[295]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[296], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[135];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[107];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 12;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 13;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 14;
        tmp_assign_source_7 = IMPORT_HARD_PKGUTIL();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[172];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 15;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[285];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 16;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 17;
        tmp_assign_source_10 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT0(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[118];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 18;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[298];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[299];
        tmp_level_name_6 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 19;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[21],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[300];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[301];
        tmp_level_name_7 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 20;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[243],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[243]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[152];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[302];
        tmp_level_name_8 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 21;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[152],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[152]);
        }

        Py_DECREF(tmp_import_name_from_3);
        assert(!(tmp_assign_source_14 == NULL));
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_arg_name_9;
        PyObject *tmp_locals_arg_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = mod_consts[303];
        tmp_globals_arg_name_9 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[304];
        tmp_level_name_9 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 22;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_arg_name_9, tmp_locals_arg_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        assert(!(tmp_import_name_from_4 == NULL));
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[159],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[159]);
        }

        Py_DECREF(tmp_import_name_from_4);
        assert(!(tmp_assign_source_15 == NULL));
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_arg_name_10;
        PyObject *tmp_locals_arg_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = mod_consts[305];
        tmp_globals_arg_name_10 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[306];
        tmp_level_name_10 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 24;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_arg_name_10, tmp_locals_arg_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[263],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[263]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_arg_name_11;
        PyObject *tmp_locals_arg_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = mod_consts[307];
        tmp_globals_arg_name_11 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_11 = Py_None;
        tmp_fromlist_name_11 = mod_consts[308];
        tmp_level_name_11 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 25;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_arg_name_11, tmp_locals_arg_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[111],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_arg_name_12;
        PyObject *tmp_locals_arg_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = mod_consts[309];
        tmp_globals_arg_name_12 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_12 = Py_None;
        tmp_fromlist_name_12 = mod_consts[310];
        tmp_level_name_12 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 26;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_arg_name_12, tmp_locals_arg_name_12, tmp_fromlist_name_12, tmp_level_name_12);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[185],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[185]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_arg_name_13;
        PyObject *tmp_locals_arg_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = mod_consts[309];
        tmp_globals_arg_name_13 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_13 = Py_None;
        tmp_fromlist_name_13 = mod_consts[311];
        tmp_level_name_13 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 27;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_13, tmp_globals_arg_name_13, tmp_locals_arg_name_13, tmp_fromlist_name_13, tmp_level_name_13);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[178],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[178]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_arg_name_14;
        PyObject *tmp_locals_arg_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = mod_consts[309];
        tmp_globals_arg_name_14 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_14 = Py_None;
        tmp_fromlist_name_14 = mod_consts[312];
        tmp_level_name_14 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 28;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_14, tmp_globals_arg_name_14, tmp_locals_arg_name_14, tmp_fromlist_name_14, tmp_level_name_14);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[166],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[166]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_arg_name_15;
        PyObject *tmp_locals_arg_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = mod_consts[313];
        tmp_globals_arg_name_15 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_15 = Py_None;
        tmp_fromlist_name_15 = mod_consts[314];
        tmp_level_name_15 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 29;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_15, tmp_globals_arg_name_15, tmp_locals_arg_name_15, tmp_fromlist_name_15, tmp_level_name_15);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[68],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_arg_name_16;
        PyObject *tmp_locals_arg_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = mod_consts[315];
        tmp_globals_arg_name_16 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_16 = Py_None;
        tmp_fromlist_name_16 = mod_consts[316];
        tmp_level_name_16 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 30;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_16, tmp_globals_arg_name_16, tmp_locals_arg_name_16, tmp_fromlist_name_16, tmp_level_name_16);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[76],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_arg_name_17;
        PyObject *tmp_locals_arg_name_17;
        PyObject *tmp_fromlist_name_17;
        PyObject *tmp_level_name_17;
        tmp_name_name_17 = mod_consts[317];
        tmp_globals_arg_name_17 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_17 = Py_None;
        tmp_fromlist_name_17 = mod_consts[318];
        tmp_level_name_17 = mod_consts[40];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 31;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_name_17, tmp_globals_arg_name_17, tmp_locals_arg_name_17, tmp_fromlist_name_17, tmp_level_name_17);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[142],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[142]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_18;
        PyObject *tmp_globals_arg_name_18;
        PyObject *tmp_locals_arg_name_18;
        PyObject *tmp_fromlist_name_18;
        PyObject *tmp_level_name_18;
        tmp_name_name_18 = mod_consts[319];
        tmp_globals_arg_name_18 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_18 = Py_None;
        tmp_fromlist_name_18 = mod_consts[320];
        tmp_level_name_18 = mod_consts[38];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 33;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_name_18, tmp_globals_arg_name_18, tmp_locals_arg_name_18, tmp_fromlist_name_18, tmp_level_name_18);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[98],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[98]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_19;
        PyObject *tmp_globals_arg_name_19;
        PyObject *tmp_locals_arg_name_19;
        PyObject *tmp_fromlist_name_19;
        PyObject *tmp_level_name_19;
        tmp_name_name_19 = mod_consts[319];
        tmp_globals_arg_name_19 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_19 = Py_None;
        tmp_fromlist_name_19 = mod_consts[321];
        tmp_level_name_19 = mod_consts[38];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 34;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_name_19, tmp_globals_arg_name_19, tmp_locals_arg_name_19, tmp_fromlist_name_19, tmp_level_name_19);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[282],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[282]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_20;
        PyObject *tmp_globals_arg_name_20;
        PyObject *tmp_locals_arg_name_20;
        PyObject *tmp_fromlist_name_20;
        PyObject *tmp_level_name_20;
        tmp_name_name_20 = mod_consts[319];
        tmp_globals_arg_name_20 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_20 = Py_None;
        tmp_fromlist_name_20 = mod_consts[322];
        tmp_level_name_20 = mod_consts[38];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 35;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_name_20, tmp_globals_arg_name_20, tmp_locals_arg_name_20, tmp_fromlist_name_20, tmp_level_name_20);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[99],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_21;
        PyObject *tmp_globals_arg_name_21;
        PyObject *tmp_locals_arg_name_21;
        PyObject *tmp_fromlist_name_21;
        PyObject *tmp_level_name_21;
        tmp_name_name_21 = mod_consts[319];
        tmp_globals_arg_name_21 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_21 = Py_None;
        tmp_fromlist_name_21 = mod_consts[323];
        tmp_level_name_21 = mod_consts[38];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 36;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_name_21, tmp_globals_arg_name_21, tmp_locals_arg_name_21, tmp_fromlist_name_21, tmp_level_name_21);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[113],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[113]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_22;
        PyObject *tmp_globals_arg_name_22;
        PyObject *tmp_locals_arg_name_22;
        PyObject *tmp_fromlist_name_22;
        PyObject *tmp_level_name_22;
        tmp_name_name_22 = mod_consts[324];
        tmp_globals_arg_name_22 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_22 = Py_None;
        tmp_fromlist_name_22 = mod_consts[325];
        tmp_level_name_22 = mod_consts[38];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 37;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_name_22, tmp_globals_arg_name_22, tmp_locals_arg_name_22, tmp_fromlist_name_22, tmp_level_name_22);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[43],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_23;
        PyObject *tmp_globals_arg_name_23;
        PyObject *tmp_locals_arg_name_23;
        PyObject *tmp_fromlist_name_23;
        PyObject *tmp_level_name_23;
        tmp_name_name_23 = mod_consts[324];
        tmp_globals_arg_name_23 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_23 = Py_None;
        tmp_fromlist_name_23 = mod_consts[326];
        tmp_level_name_23 = mod_consts[38];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 38;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_name_23, tmp_globals_arg_name_23, tmp_locals_arg_name_23, tmp_fromlist_name_23, tmp_level_name_23);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[28],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[28]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_name_24;
        PyObject *tmp_globals_arg_name_24;
        PyObject *tmp_locals_arg_name_24;
        PyObject *tmp_fromlist_name_24;
        PyObject *tmp_level_name_24;
        tmp_name_name_24 = mod_consts[324];
        tmp_globals_arg_name_24 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_24 = Py_None;
        tmp_fromlist_name_24 = mod_consts[327];
        tmp_level_name_24 = mod_consts[38];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 39;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_name_24, tmp_globals_arg_name_24, tmp_locals_arg_name_24, tmp_fromlist_name_24, tmp_level_name_24);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[36],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_name_25;
        PyObject *tmp_globals_arg_name_25;
        PyObject *tmp_locals_arg_name_25;
        PyObject *tmp_fromlist_name_25;
        PyObject *tmp_level_name_25;
        tmp_name_name_25 = mod_consts[324];
        tmp_globals_arg_name_25 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_25 = Py_None;
        tmp_fromlist_name_25 = mod_consts[328];
        tmp_level_name_25 = mod_consts[38];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 40;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_name_25, tmp_globals_arg_name_25, tmp_locals_arg_name_25, tmp_fromlist_name_25, tmp_level_name_25);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[46],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_name_26;
        PyObject *tmp_globals_arg_name_26;
        PyObject *tmp_locals_arg_name_26;
        PyObject *tmp_fromlist_name_26;
        PyObject *tmp_level_name_26;
        tmp_name_name_26 = mod_consts[324];
        tmp_globals_arg_name_26 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_26 = Py_None;
        tmp_fromlist_name_26 = mod_consts[329];
        tmp_level_name_26 = mod_consts[38];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 41;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_name_26, tmp_globals_arg_name_26, tmp_locals_arg_name_26, tmp_fromlist_name_26, tmp_level_name_26);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[82],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_name_27;
        PyObject *tmp_globals_arg_name_27;
        PyObject *tmp_locals_arg_name_27;
        PyObject *tmp_fromlist_name_27;
        PyObject *tmp_level_name_27;
        tmp_name_name_27 = mod_consts[330];
        tmp_globals_arg_name_27 = (PyObject *)moduledict_flask$helpers;
        tmp_locals_arg_name_27 = Py_None;
        tmp_fromlist_name_27 = mod_consts[331];
        tmp_level_name_27 = mod_consts[38];
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 42;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_name_27, tmp_globals_arg_name_27, tmp_locals_arg_name_27, tmp_fromlist_name_27, tmp_level_name_27);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_flask$helpers,
                mod_consts[86],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[86]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = (PyObject *)&PyBaseObject_Type;
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 45;
        tmp_assign_source_34 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_list_arg_1;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_expression_name_1;
            PyObject *tmp_expression_name_2;
            tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_name_2 == NULL)) {
                tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto frame_exception_exit_1;
            }
            tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[100]);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[332]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto frame_exception_exit_1;
            }
            tmp_iter_arg_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_name_3;
                PyObject *tmp_expression_name_4;
                PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
                tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[2]);

                if (unlikely(tmp_expression_name_4 == NULL)) {
                    tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                }

                if (tmp_expression_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;

                    goto tuple_build_exception_1;
                }
                tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[100]);
                if (tmp_expression_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;

                    goto tuple_build_exception_1;
                }
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[333]);
                Py_DECREF(tmp_expression_name_3);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;

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
            tmp_assign_source_36 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            assert(!(tmp_assign_source_36 == NULL));
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_36;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_list_arg_1 = MAKE_GENERATOR_flask$helpers$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_35 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_flask$helpers$$$function__1_get_env();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_flask$helpers$$$function__2_get_debug_flag();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[335];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_39 = MAKE_FUNCTION_flask$helpers$$$function__3_get_load_dotenv(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_flask$helpers$$$function__4__endpoint_from_view_func();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_flask$helpers$$$function__5_stream_with_context();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_flask$helpers$$$function__6_make_response();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_flask$helpers$$$function__7_url_for();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_flask$helpers$$$function__8_get_template_attribute();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[340];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_45 = MAKE_FUNCTION_flask$helpers$$$function__9_flash(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[342];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_46 = MAKE_FUNCTION_flask$helpers$$$function__10_get_flashed_messages(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[344];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_47 = MAKE_FUNCTION_flask$helpers$$$function__11_send_file(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_flask$helpers$$$function__12_safe_join();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_flask$helpers$$$function__13_send_from_directory();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_flask$helpers$$$function__14_get_root_path();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_flask$helpers$$$function__15__matching_loader_thinks_module_is_package();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;


        tmp_assign_source_52 = MAKE_FUNCTION_flask$helpers$$$function__16__find_package_path();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_flask$helpers$$$function__17_find_package();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_53);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[346];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_54 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[347];
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
        tmp_key_name_2 = mod_consts[347];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_5 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[40];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_5, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_56 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_56;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[347];
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
    tmp_dictdel_key = mod_consts[347];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 936;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_6 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_6, mod_consts[348]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_7 = tmp_class_creation_1__metaclass;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[348]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[349];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 936;
        tmp_assign_source_57 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_57;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_8 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_8, mod_consts[350]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_2;
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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[351];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[17];
        tmp_getattr_default_1 = mod_consts[352];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_9;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_9 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[17]);
            Py_DECREF(tmp_expression_name_9);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 936;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 936;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_58;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flask$helpers$$$class__1_locked_cached_property_936 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[353];
        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__1_locked_cached_property_936, mod_consts[205], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[354];
        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__1_locked_cached_property_936, mod_consts[242], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[349];
        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__1_locked_cached_property_936, mod_consts[355], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_2eacff08968172f2a8f1316944b1e3ec_2)) {
            Py_XDECREF(cache_frame_2eacff08968172f2a8f1316944b1e3ec_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_2eacff08968172f2a8f1316944b1e3ec_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_2eacff08968172f2a8f1316944b1e3ec_2 = MAKE_FUNCTION_FRAME(codeobj_2eacff08968172f2a8f1316944b1e3ec, module_flask$helpers, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_2eacff08968172f2a8f1316944b1e3ec_2->m_type_description == NULL);
        frame_2eacff08968172f2a8f1316944b1e3ec_2 = cache_frame_2eacff08968172f2a8f1316944b1e3ec_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_2eacff08968172f2a8f1316944b1e3ec_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_2eacff08968172f2a8f1316944b1e3ec_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[356];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_flask$helpers$$$function__18___init__(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__1_locked_cached_property_936, mod_consts[357], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 944;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[359];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_flask$helpers$$$function__19___get__(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__1_locked_cached_property_936, mod_consts[360], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 951;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2eacff08968172f2a8f1316944b1e3ec_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2eacff08968172f2a8f1316944b1e3ec_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2eacff08968172f2a8f1316944b1e3ec_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2eacff08968172f2a8f1316944b1e3ec_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2eacff08968172f2a8f1316944b1e3ec_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2eacff08968172f2a8f1316944b1e3ec_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_2eacff08968172f2a8f1316944b1e3ec_2 == cache_frame_2eacff08968172f2a8f1316944b1e3ec_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_2eacff08968172f2a8f1316944b1e3ec_2);
            cache_frame_2eacff08968172f2a8f1316944b1e3ec_2 = NULL;
        }

        assertFrameObject(frame_2eacff08968172f2a8f1316944b1e3ec_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = mod_consts[346];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 936;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[346];
        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__1_locked_cached_property_936, mod_consts[362], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[349];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flask$helpers$$$class__1_locked_cached_property_936;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 936;
            tmp_assign_source_60 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 936;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_59 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_flask$helpers$$$class__1_locked_cached_property_936);
        locals_flask$helpers$$$class__1_locked_cached_property_936 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF(locals_flask$helpers$$$class__1_locked_cached_property_936);
        locals_flask$helpers$$$class__1_locked_cached_property_936 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_2;
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
        exception_lineno = 936;
        goto try_except_handler_2;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_59);
    }
    goto try_end_1;
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
        PyObject *tmp_assign_source_61;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[346];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_61 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[347];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[347];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_5;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_10 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = mod_consts[40];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_10, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_63 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_63;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[347];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[347];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 962;

        goto try_except_handler_5;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_11 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_11, mod_consts[348]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_12 = tmp_class_creation_2__metaclass;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[348]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_5;
        }
        tmp_tuple_element_5 = mod_consts[363];
        tmp_args_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 962;
        tmp_assign_source_64 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_64;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_13;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_13 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_13, mod_consts[350]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_5;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
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
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[351];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[17];
        tmp_getattr_default_2 = mod_consts[352];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_5;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_14;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_name_14 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_14 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[17]);
            Py_DECREF(tmp_expression_name_14);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 962;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_name_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 962;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_65;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_66;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flask$helpers$$$class__2__PackageBoundObject_962 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[353];
        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[205], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[363];
        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[355], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_341ef58bc638ee8c14bbf71578303b07_3)) {
            Py_XDECREF(cache_frame_341ef58bc638ee8c14bbf71578303b07_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_341ef58bc638ee8c14bbf71578303b07_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_341ef58bc638ee8c14bbf71578303b07_3 = MAKE_FUNCTION_FRAME(codeobj_341ef58bc638ee8c14bbf71578303b07, module_flask$helpers, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_341ef58bc638ee8c14bbf71578303b07_3->m_type_description == NULL);
        frame_341ef58bc638ee8c14bbf71578303b07_3 = cache_frame_341ef58bc638ee8c14bbf71578303b07_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_341ef58bc638ee8c14bbf71578303b07_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_341ef58bc638ee8c14bbf71578303b07_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[198], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 965;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[248], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 969;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[103], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 973;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[356];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_flask$helpers$$$function__20___init__(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[357], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 975;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_2;
            tmp_res = MAPPING_HAS_ITEM(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[365]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 995;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_name_5 = PyObject_GetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[365]);

            if (unlikely(tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[365]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 995;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 995;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_1 = MAKE_FUNCTION_flask$helpers$$$function__21_static_folder();

            frame_341ef58bc638ee8c14bbf71578303b07_3->m_frame.f_lineno = 995;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 995;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_name_6 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_2 = MAKE_FUNCTION_flask$helpers$$$function__21_static_folder();

            frame_341ef58bc638ee8c14bbf71578303b07_3->m_frame.f_lineno = 995;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 995;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[258], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 996;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[258]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[258]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 1001;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1001;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_3 = MAKE_FUNCTION_flask$helpers$$$function__22_static_folder();

            frame_341ef58bc638ee8c14bbf71578303b07_3->m_frame.f_lineno = 1001;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[367], tmp_args_element_name_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1001;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[258], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1002;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_5;
            tmp_res = MAPPING_HAS_ITEM(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[365]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1007;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_name_7 = PyObject_GetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[365]);

            if (unlikely(tmp_called_name_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[365]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 1007;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1007;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_4 = MAKE_FUNCTION_flask$helpers$$$function__23_static_url_path();

            frame_341ef58bc638ee8c14bbf71578303b07_3->m_frame.f_lineno = 1007;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_4);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1007;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_name_8 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_5 = MAKE_FUNCTION_flask$helpers$$$function__23_static_url_path();

            frame_341ef58bc638ee8c14bbf71578303b07_3->m_frame.f_lineno = 1007;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1007;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[368], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1008;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_6;
            tmp_called_instance_2 = PyObject_GetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[368]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[368]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 1021;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1021;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_6 = MAKE_FUNCTION_flask$helpers$$$function__24_static_url_path();

            frame_341ef58bc638ee8c14bbf71578303b07_3->m_frame.f_lineno = 1021;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[367], tmp_args_element_name_6);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1021;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[368], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1022;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_8;
            tmp_res = MAPPING_HAS_ITEM(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[365]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1028;
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
            tmp_called_name_9 = PyObject_GetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[365]);

            if (unlikely(tmp_called_name_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[365]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 1028;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1028;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_7 = MAKE_FUNCTION_flask$helpers$$$function__25_has_static_folder();

            frame_341ef58bc638ee8c14bbf71578303b07_3->m_frame.f_lineno = 1028;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_7);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1028;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_name_10 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_8 = MAKE_FUNCTION_flask$helpers$$$function__25_has_static_folder();

            frame_341ef58bc638ee8c14bbf71578303b07_3->m_frame.f_lineno = 1028;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1028;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[268], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1029;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_9;
            tmp_called_name_11 = PyObject_GetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[349]);

            if (tmp_called_name_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[349]);

                    if (unlikely(tmp_called_name_11 == NULL)) {
                        tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[349]);
                    }

                    if (tmp_called_name_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1037;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_11);
                }
            }



            tmp_args_element_name_9 = MAKE_FUNCTION_flask$helpers$$$function__26_jinja_loader();

            frame_341ef58bc638ee8c14bbf71578303b07_3->m_frame.f_lineno = 1037;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_9);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1037;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[371], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1038;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flask$helpers$$$function__27_get_send_file_max_age();

        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[149], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_flask$helpers$$$function__28_send_static_file();

        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[374], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = mod_consts[376];
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_flask$helpers$$$function__29_open_resource(tmp_defaults_8);

            tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[377], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1087;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_341ef58bc638ee8c14bbf71578303b07_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_341ef58bc638ee8c14bbf71578303b07_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_341ef58bc638ee8c14bbf71578303b07_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_341ef58bc638ee8c14bbf71578303b07_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_341ef58bc638ee8c14bbf71578303b07_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_341ef58bc638ee8c14bbf71578303b07_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_341ef58bc638ee8c14bbf71578303b07_3 == cache_frame_341ef58bc638ee8c14bbf71578303b07_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_341ef58bc638ee8c14bbf71578303b07_3);
            cache_frame_341ef58bc638ee8c14bbf71578303b07_3 = NULL;
        }

        assertFrameObject(frame_341ef58bc638ee8c14bbf71578303b07_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            tmp_compexpr_right_2 = mod_consts[346];
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 962;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_15 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        tmp_dictset_value = mod_consts[346];
        tmp_res = PyObject_SetItem(locals_flask$helpers$$$class__2__PackageBoundObject_962, mod_consts[362], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_7;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_12 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[363];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_flask$helpers$$$class__2__PackageBoundObject_962;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame.f_lineno = 962;
            tmp_assign_source_67 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 962;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_67;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_66 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_66);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_flask$helpers$$$class__2__PackageBoundObject_962);
        locals_flask$helpers$$$class__2__PackageBoundObject_962 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flask$helpers$$$class__2__PackageBoundObject_962);
        locals_flask$helpers$$$class__2__PackageBoundObject_962 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_6:;
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
        exception_lineno = 962;
        goto try_except_handler_5;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_66);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
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
    RESTORE_FRAME_EXCEPTION(frame_f98abe36b95ca69a88ff346a3d6d9263);
#endif
    popFrameStack();

    assertFrameObject(frame_f98abe36b95ca69a88ff346a3d6d9263);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f98abe36b95ca69a88ff346a3d6d9263);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f98abe36b95ca69a88ff346a3d6d9263, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f98abe36b95ca69a88ff346a3d6d9263->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f98abe36b95ca69a88ff346a3d6d9263, exception_lineno);
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
    {
        PyObject *tmp_assign_source_68;


        tmp_assign_source_68 = MAKE_FUNCTION_flask$helpers$$$function__30_total_seconds();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;


        tmp_assign_source_69 = MAKE_FUNCTION_flask$helpers$$$function__31_is_ip();

        UPDATE_STRING_DICT1(moduledict_flask$helpers, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_69);
    }

    return module_flask$helpers;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

