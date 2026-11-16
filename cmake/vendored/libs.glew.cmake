# libs.glew: vendored third-party library, original sources were not rebuilt
add_library(libs.glew STATIC
    ${DEVPLATFORM}/3rdPartyLibs/cpp/glew/src/glew.c
)
