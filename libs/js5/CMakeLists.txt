add_library(libs.js5 STATIC
    ${ROOT}/_unplaced/libs/js5/unity_0.cpp
    Js5ArchiveSetSettings.cpp
    Js5Compression.cpp
    Js5LocalModeLoader.cpp
    Js5ResourceProvider.cpp
    caching/Js5DiskCache.cpp
    caching/Js5DiskFileFormat.cpp
    caching/Js5MemoryCache.cpp
    index/Js5Index.cpp
    index/Js5MasterIndex.cpp
    network/Js5HTTPQueue.cpp
    network/Js5HTTPQueueRequest.cpp
    network/Js5NetQueue.cpp
    worker/Js5WorkerThread.cpp
)
set_target_properties(libs.js5 PROPERTIES UNITY_BUILD ON)
