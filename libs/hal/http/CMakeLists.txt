add_library(libs.hal.http STATIC
    ${ROOT}/_unplaced/libs/hal/http/unity_0.cpp
    CRMData.cpp
    HTTPRequest.cpp
    HTTPUtils.cpp
    curl/HTTPRequest_CURL.cpp
)
set_target_properties(libs.hal.http PROPERTIES UNITY_BUILD ON)
