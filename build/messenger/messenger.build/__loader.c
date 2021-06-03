
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 0 > 0
static unsigned char *bytecode_data[0];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_PyQt6(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$chardistribution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$cp949prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escsm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$eucjpprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$hebrewprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jisfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jpcntx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langbulgarianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langgreekmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langhebrewmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langrussianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langthaimodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langturkishmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$latin1prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcssm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sjisprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$universaldetector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf8prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_clientui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin32_bootstrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin32_system32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$__version__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$_internal_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$_appengine_environ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$appengine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$pyopenssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$socks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports$makefile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname$_implementation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssltransport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"PyQt6", modulecode_PyQt6, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet", modulecode_chardet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"chardet.big5freq", modulecode_chardet$big5freq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.big5prober", modulecode_chardet$big5prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.chardistribution", modulecode_chardet$chardistribution, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.charsetgroupprober", modulecode_chardet$charsetgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.charsetprober", modulecode_chardet$charsetprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.codingstatemachine", modulecode_chardet$codingstatemachine, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.cp949prober", modulecode_chardet$cp949prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.enums", modulecode_chardet$enums, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.escprober", modulecode_chardet$escprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.escsm", modulecode_chardet$escsm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.eucjpprober", modulecode_chardet$eucjpprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euckrfreq", modulecode_chardet$euckrfreq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euckrprober", modulecode_chardet$euckrprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euctwfreq", modulecode_chardet$euctwfreq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euctwprober", modulecode_chardet$euctwprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.gb2312freq", modulecode_chardet$gb2312freq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.gb2312prober", modulecode_chardet$gb2312prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.hebrewprober", modulecode_chardet$hebrewprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.jisfreq", modulecode_chardet$jisfreq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.jpcntx", modulecode_chardet$jpcntx, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langbulgarianmodel", modulecode_chardet$langbulgarianmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langgreekmodel", modulecode_chardet$langgreekmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langhebrewmodel", modulecode_chardet$langhebrewmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langrussianmodel", modulecode_chardet$langrussianmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langthaimodel", modulecode_chardet$langthaimodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langturkishmodel", modulecode_chardet$langturkishmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.latin1prober", modulecode_chardet$latin1prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.mbcharsetprober", modulecode_chardet$mbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.mbcsgroupprober", modulecode_chardet$mbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.mbcssm", modulecode_chardet$mbcssm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.sbcharsetprober", modulecode_chardet$sbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.sbcsgroupprober", modulecode_chardet$sbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.sjisprober", modulecode_chardet$sjisprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.universaldetector", modulecode_chardet$universaldetector, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.utf8prober", modulecode_chardet$utf8prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.version", modulecode_chardet$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"clientui", modulecode_clientui, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna", modulecode_idna, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"idna.core", modulecode_idna$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.intranges", modulecode_idna$intranges, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.package_data", modulecode_idna$package_data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pywin32_bootstrap", modulecode_pywin32_bootstrap, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pywin32_system32", modulecode_pywin32_system32, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"requests", modulecode_requests, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.adapters", modulecode_requests$adapters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.api", modulecode_requests$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.auth", modulecode_requests$auth, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.certs", modulecode_requests$certs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.compat", modulecode_requests$compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.cookies", modulecode_requests$cookies, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.hooks", modulecode_requests$hooks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.models", modulecode_requests$models, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.packages", modulecode_requests$packages, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.sessions", modulecode_requests$sessions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.structures", modulecode_requests$structures, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.utils", modulecode_requests$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3._version", modulecode_urllib3$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.contrib._appengine_environ", modulecode_urllib3$contrib$_appengine_environ, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.appengine", modulecode_urllib3$contrib$appengine, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.pyopenssl", modulecode_urllib3$contrib$pyopenssl, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.socks", modulecode_urllib3$contrib$socks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages", modulecode_urllib3$packages, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports", modulecode_urllib3$packages$backports, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports.makefile", modulecode_urllib3$packages$backports$makefile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages.six", modulecode_urllib3$packages$six, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages.ssl_match_hostname", modulecode_urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.ssl_match_hostname._implementation", modulecode_urllib3$packages$ssl_match_hostname$_implementation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.request", modulecode_urllib3$request, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.response", modulecode_urllib3$response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.proxy", modulecode_urllib3$util$proxy, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.queue", modulecode_urllib3$util$queue, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.ssltransport", modulecode_urllib3$util$ssltransport, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, NUITKA_TRANSLATED_FLAG},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}


