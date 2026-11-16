add_library(libs.systemheap STATIC
    ${ROOT}/_unplaced/libs/systemheap/unity_0.cpp
    ${ROOT}/libs/game/runetek5/config/ConfigProviderBatchInterface.cpp
    CRTHeapAllocatorProxy.cpp
    ${ROOT}/projects/osclient/camera/tweens/CinemaCameraMovementTween.cpp
    ${ROOT}/projects/osclient/options/IOption.cpp
)
set_target_properties(libs.systemheap PROPERTIES UNITY_BUILD ON)
