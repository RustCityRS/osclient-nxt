# libs.libpng: vendored third-party library, original sources were not rebuilt
add_library(libs.libpng STATIC
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/png.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngerror.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngget.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngmem.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngpread.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngread.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngrio.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngrtran.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngrutil.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngset.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngtrans.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngwio.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngwrite.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngwtran.c
    ${DEVPLATFORM}/3rdPartyLibs/cpp/libpng-1.6.7/png16/pngwutil.c
)
