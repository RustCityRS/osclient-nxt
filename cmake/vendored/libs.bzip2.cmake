# libs.bzip2: vendored third-party library, original sources were not rebuilt
add_library(libs.bzip2 STATIC
    ${DEVPLATFORM}/3rdPartyLibs/cpp/bzip2/blocksort.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/bzip2/bzlib.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/bzip2/compress.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/bzip2/decompress.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/bzip2/huffman.c
)
