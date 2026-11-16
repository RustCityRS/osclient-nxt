# libs.lzma: vendored third-party library, original sources were not rebuilt
add_library(libs.lzma STATIC
    ${DEVPLATFORM}/3rdPartyLibs/cpp/lzma1805/C/LzmaDec.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/lzma1805/C/Sha256.c
)
