PV = "4.4.0+git"
SRCREV = "012cdca49db398693903e05c42a254a3a0c0d8f2"

SRC_URI:remove = " \
    file://0001-checkconf.mk-do-not-use-full-path-to-generate-guard-.patch \
    file://0001-arm64.h-fix-compile-error-with-Clang.patch \
    file://0002-libutils-zlib-fix-Clang-warnings.patch \
"
