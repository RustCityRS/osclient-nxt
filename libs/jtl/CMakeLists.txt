add_library(libs.jtl STATIC
    ${ROOT}/_unplaced/libs/jtl/unity_0.cpp
    Algorithms.cpp
    EASTL.cpp
    StringEnum.cpp
    StringTools.cpp
    StringUtils.cpp
    TextConvert.cpp
    allocator/Allocator.cpp
    allocator/Bucket.cpp
    allocator/HeapAllocator.cpp
    allocator/LinearAllocator.cpp
    allocator/PoolAllocator.cpp
    allocator/SimpleAllocator.cpp
    pool/SharedUniquePool.cpp
    utils/Base64.cpp
)
set_target_properties(libs.jtl PROPERTIES UNITY_BUILD ON)
