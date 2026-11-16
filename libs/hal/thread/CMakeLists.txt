add_library(libs.hal.thread STATIC
    ${ROOT}/_unplaced/libs/hal/thread/unity_0.cpp
    Fence.cpp
    ThreadPool.cpp
    pthread/Thread_Pthread.cpp
    thread.cpp
    thread_specific_ptr.cpp
)
set_target_properties(libs.hal.thread PROPERTIES UNITY_BUILD ON)
