// libs/hal/thread/pthread/Thread_Pthread.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.thread

namespace jag::internal {
    // 0x100c960f0
    void CreateSignalHandlerStack() {
        stack_t local_28;

        auto pvVar2 = _mmap(0, 131072, 3, 4098, 4294967295, 0);
        long* plVar3 = (long*)(*(void (*)(...))g_signalHandlerStack)();
        *plVar3 = (long)pvVar2;
        if ((long)pvVar2 + 1U < 2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/pthread/"
                            "Thread_Pthread.cpp",
                            71, nullptr);
        }
        local_28.ss_flags = 0;
        local_28._20_4_ = 0;
        local_28.ss_size = 131072;
        local_28.ss_sp = pvVar2;
        if (_sigaltstack(&local_28, nullptr) == -1) {
            LogAssert("result != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/pthread/"
                      "Thread_Pthread.cpp",
                      66, nullptr);
        }
    }

    // 0x100c961a0
    void DestroySignalHandlerStack() {
        uint64_t* puVar2;
        stack_t local_28;

        long* plVar1 = (long*)(*(void (*)(...))g_signalHandlerStack)();
        if (1 < *plVar1 + 1U) {
            local_28.ss_sp = nullptr;
            local_28.ss_size = 0;
            local_28.ss_flags = 4;
            local_28._20_4_ = 0;
            _sigaltstack(&local_28, nullptr);
            puVar2 = (uint64_t*)(*(void (*)(...))g_signalHandlerStack)();
            _munmap(*puVar2, 131072);
        }
    }

    // 0x100c96200
    void ThreadStartHook(void* arg1) {
        CreateSignalHandlerStack();
        uint64_t uVar1 = (**(void (**)(...))arg1)(*(uint64_t*)((long)arg1 + 8));
        if (arg1 != nullptr) {
            operator delete(arg1);
        }
        DestroySignalHandlerStack();
        return uVar1;
    }

    // 0x100c96240
    void PThreadCreateHook(_opaque_pthread_t** arg1, const _opaque_pthread_attr_t* opaque_pthread_attr_t,
                           void* (*arg3)(void*), void* arg4) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>* hashtable_iterator;
        pthread_attr_t local_78;

        if (PThreadCreateHook(_opaque_pthread_t**, opaque_pthread_attr_t const*, void* (*)(void*),
                              void*)::pthreadCreate == (void (*)(...))0) {
            PThreadCreateHook(_opaque_pthread_t**, opaque_pthread_attr_t const*, void* (*)(void*),
                              void*)::pthreadCreate = (void (*)(...))_dlsym(18446744073709551615, "pthread_create");
        }
        size_t local_80 = 0;
        _pthread_attr_init(&local_78);
        pthread_attr_t* ppVar3 = (pthread_attr_t*)opaque_pthread_attr_t;
        if (opaque_pthread_attr_t == nullptr) {
            ppVar3 = &local_78;
        }
        _pthread_attr_getstacksize(ppVar3, &local_80);
        if ((opaque_pthread_attr_t == nullptr) || (local_80 < 1048576)) {
            _pthread_attr_setstacksize(&local_78, 1048576);
            opaque_pthread_attr_t = (_opaque_pthread_attr_t*)&local_78;
        }
        void* pcVar1 = PThreadCreateHook(_opaque_pthread_t**, opaque_pthread_attr_t const*, void* (*)(void*),
                                         void*)::pthreadCreate;
        hashtable_iterator = (hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>*)operator new(16);
        new (hashtable_iterator) eastl::hashtable_iterator(arg3, (unsigned long)arg4);
        uint32_t uVar2 = (*pcVar1)(arg1, opaque_pthread_attr_t, ThreadStartHook, hashtable_iterator);
        _pthread_attr_destroy(&local_78);
        return uVar2;
    }

    // 0x100c96350
    auto GetCpuFreqs() {
        unsigned int uVar1 = std::thread::hardware_concurrency();
        auto result;
        result.reserve((unsigned long)uVar1);
        return result;
    }

    // 0x100c963f0
    vector<unsigned int, BucketAllocatorEASTL>* GetCoreAffinities() {
        long lVar1;
        long lVar2;
        Logger* pLVar4;
        unsigned long long* puVar5;
        unsigned long long* puVar6;
        unsigned long uVar8;
        long* plVar9;
        uint64_t* puVar10;
        vector<unsigned int, BucketAllocatorEASTL>* in_RDI;
        unsigned long arg1;
        uint8_t auVar11[16];
        ReturnValue local_58;
        vector<unsigned int, BucketAllocatorEASTL>* local_40;
        unsigned int local_34;

        return local_40 = in_RDI;
        new (in_RDI) eastl::vector<unsigned int, BucketAllocatorEASTL>();
        GetCpuFreqs(&local_58);
        if (local_58.empty() == '\0') {
            puVar5 = (unsigned long long*)local_58.HeapBeginPtr();
            puVar6 = (unsigned long long*)local_58.end();
            local_34 = 0;
            puVar5 = std::find<unsigned long long*, int>(puVar5, puVar6, local_34);
            puVar6 = (unsigned long long*)local_58.end();
            if (puVar5 == puVar6) {
                puVar5 = (unsigned long long*)local_58.HeapBeginPtr();
                puVar6 = (unsigned long long*)local_58.end();
                auVar11 = std::minmax_element<unsigned long long*>(puVar5, puVar6);
                lVar1 = *auVar11._0_8_;
                lVar2 = *auVar11._8_8_;
                if (local_58.size() != 0) {
                    arg1 = 0;
                    do {
                        plVar9 = &local_58[arg1];
                        if (*plVar9 == lVar1) {
                            pLVar4 = logger::default_logger();
                            puVar10 = &local_58[arg1];
                            pLVar4->Log(false, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "thread/pthread/Thread_Pthread.cpp",
                                        183, "Slow core: %llu, %llu", arg1, *puVar10);
                            local_34 = 4;
                            local_40->push_back(local_34);
                        } else {
                            plVar9 = &local_58[arg1];
                            if (*plVar9 == lVar2) {
                                pLVar4 = logger::default_logger();
                                puVar10 = &local_58[arg1];
                                pLVar4->Log(false, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "thread/pthread/Thread_Pthread.cpp",
                                            188, "Fast core: %llu, %llu", arg1, *puVar10);
                                local_34 = 1;
                                local_40->push_back(local_34);
                            } else {
                                pLVar4 = logger::default_logger();
                                puVar10 = &local_58[arg1];
                                pLVar4->Log(false, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "thread/pthread/Thread_Pthread.cpp",
                                            193, "Med core: %llu, %llu", arg1, *puVar10);
                                local_34 = 2;
                                local_40->push_back(local_34);
                            }
                        }
                        arg1 = arg1 + 1;
                        uVar8 = local_58.size();
                    } while (arg1 < uVar8);
                }
            } else {
                pLVar4 = logger::default_logger();
                pLVar4->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/pthread/"
                            "Thread_Pthread.cpp",
                            171, "Failed to parse CPU topology from /sys");
            }
        } else {
            pLVar4 = logger::default_logger();
            pLVar4->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/pthread/"
                        "Thread_Pthread.cpp",
                        167, "Failed to read CPU topology from /sys");
        }
    }

} // namespace jag::internal

namespace jag::this_thread {
    // 0x100c95580
    void SetThreadName(const char* str) {
        Logger* logger;
        uint64_t uVar4;

        eastl::string local_68(str);
        auto local_40 = local_68.substr(0, 15);
        size_t sVar2 = _strlen(str);
        size_t sVar3 = local_40.size();
        if (sVar2 != sVar3) {
            logger = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/pthread/"
                        "Thread_Pthread.cpp",
                        264, "Truncated thread name from: %s to: %s", str, uVar4);
        }
        auto IVar5 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread, "currentThread");
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar5);
        uint64_t uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        IVar5 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar6);
        uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar4, "setName:", uVar6);
        uint8_t* puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar6);
        (*(void (*)(...))puVar1)(uVar4);
        internal::g_ThreadName();
        eastl::string* this_00 = (eastl::string*)(*(void (*)(...))internal::g_ThreadName)();
        *this_00 = &local_40;
    }

    // 0x100c95710
    void GetThreadName() {
        internal::g_ThreadName();
        (*(void (*)(...))internal::g_ThreadName)();
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag::this_thread
