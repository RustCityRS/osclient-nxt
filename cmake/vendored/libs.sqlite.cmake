# libs.sqlite: vendored third-party library, original sources were not rebuilt
add_library(libs.sqlite STATIC
    ${DEVPLATFORM}/3rdPartyLibs/cpp/sqlite/sqlite3.code
)
