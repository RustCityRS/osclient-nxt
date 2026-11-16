add_library(libs.constants STATIC
    ${ROOT}/_unplaced/libs/constants/unity_0.cpp
    DataStatus.cpp
    EncodeType.cpp
    Language.cpp
    ModeGame.cpp
    ModeWhere.cpp
    Priority.cpp
)
set_target_properties(libs.constants PROPERTIES UNITY_BUILD ON)
