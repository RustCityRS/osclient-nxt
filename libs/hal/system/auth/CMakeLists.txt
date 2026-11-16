add_library(libs.hal.system.auth STATIC
    ${ROOT}/_unplaced/libs/hal/system/auth/unity_0.cpp
    AuthWeb.cpp
    AuthWebUtils.cpp
    Auth_Default.cpp
    FederatedLoginHandler.cpp
    tokenauth/TokenAuthLoginHandler.cpp
)
set_target_properties(libs.hal.system.auth PROPERTIES UNITY_BUILD ON)
