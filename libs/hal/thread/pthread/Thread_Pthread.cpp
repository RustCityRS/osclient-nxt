// libs/hal/thread/pthread/Thread_Pthread.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.thread

namespace jag::internal {
    // 0x100c960f0, 176 bytes, placed by __FILE__ string
    // CreateSignalHandlerStack()
    void CreateSignalHandlerStack() {
        void* pvVar2;
        long* plVar3;
        stack_t local_28;

        pvVar2 = (void*)_mmap(0, 131072, 3, 4098, 4294967295, 0);
        plVar3 = (long*)(*(code*)g_signalHandlerStack)();
        *plVar3 = (long)pvVar2;
        if ((long)pvVar2 + 1U < 2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/pthread/"
                            "Thread_Pthread.cpp",
                            71, (char*)0);
        }
        local_28.ss_flags = 0;
        local_28._20_4_ = 0;
        local_28.ss_size = 131072;
        local_28.ss_sp = pvVar2;
        if (_sigaltstack(&local_28, (stack_t*)0) == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("result != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/pthread/"
                      "Thread_Pthread.cpp",
                      66, (char*)0);
        }
    }

    // 0x100c961a0, 96 bytes, placed by neighbouring functions
    // DestroySignalHandlerStack()
    void DestroySignalHandlerStack() {
        long* plVar1;
        undefined8* puVar2;
        stack_t local_28;

        plVar1 = (long*)(*(code*)g_signalHandlerStack)();
        if (1 < *plVar1 + 1U) {
            local_28.ss_sp = (void*)0;
            local_28.ss_size = 0;
            local_28.ss_flags = 4;
            local_28._20_4_ = 0;
            _sigaltstack(&local_28, (stack_t*)0);
            puVar2 = (undefined8*)(*(code*)g_signalHandlerStack)();
            _munmap(*puVar2, 131072);
        }
    }

    // 0x100c96200, 64 bytes, placed by neighbouring functions
    // ThreadStartHook(void*)
    undefined8 ThreadStartHook(void* param_1) {
        undefined8 uVar1;

        CreateSignalHandlerStack();
        uVar1 = (**(code**)param_1)(*(undefined8*)((long)param_1 + 8));
        if (param_1 != (void*)0) {
            operator_delete(param_1);
        }
        DestroySignalHandlerStack();
        return uVar1;
    }

    // 0x100c96240, 272 bytes, placed by neighbouring functions
    // PThreadCreateHook(_opaque_pthread_t**, _opaque_pthread_attr_t const*, void* (*)(void*), void*)
    undefined4 PThreadCreateHook(_opaque_pthread_t** param_1, _opaque_pthread_attr_t* param_2,
                                 _func_void_ptr_void_ptr* param_3, void* param_4) {
        code* pcVar1;
        undefined4 uVar2;
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>* this;
        _opaque_pthread_attr_t* p_Var3;
        size_t local_80;
        pthread_attr_t local_78;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (PThreadCreateHook(_opaque_pthread_t**, _opaque_pthread_attr_t_const*, void* (*)(void*),
                              void*)::pthreadCreate == (code*)0) {
            PThreadCreateHook(_opaque_pthread_t**, _opaque_pthread_attr_t_const*, void* (*)(void*),
                              void*)::pthreadCreate = (code*)_dlsym(18446744073709551615, "pthread_create");
        }
        local_80 = 0;
        _pthread_attr_init(&local_78);
        p_Var3 = param_2;
        if (param_2 == (_opaque_pthread_attr_t*)0) {
            p_Var3 = &local_78;
        }
        _pthread_attr_getstacksize(p_Var3, &local_80);
        if ((param_2 == (_opaque_pthread_attr_t*)0) || (local_80 < 1048576)) {
            _pthread_attr_setstacksize(&local_78, 1048576);
            param_2 = &local_78;
        }
        pcVar1 = PThreadCreateHook(_opaque_pthread_t**, _opaque_pthread_attr_t_const*, void* (*)(void*),
                                   void*)::pthreadCreate;
        this = operator_new(16);
        eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
            this, (hash_node*)param_3, param_4);
        uVar2 = (*pcVar1)(param_1, param_2, ThreadStartHook, this);
        _pthread_attr_destroy(&local_78);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar2;
    }

    // 0x100c96350, 64 bytes, placed by neighbouring functions
    // GetCpuFreqs()
    internal* GetCpuFreqs() {
        uint uVar1;

        uVar1 = std::thread::hardware_concurrency();
        eastl::vector<unsigned long long, BucketAllocatorEASTL>::vector();
        reserve((ulong)uVar1);
        return this;
    }

    // 0x100c963f0, 704 bytes, placed by __FILE__ string
    // GetCoreAffinities()
    vector<unsigned int, BucketAllocatorEASTL>* GetCoreAffinities() {
        long lVar1;
        long lVar2;
        char cVar3;
        undefined8 uVar4;
        ulonglong* puVar5;
        ulonglong* puVar6;
        long lVar7;
        ulong uVar8;
        long* plVar9;
        undefined8* puVar10;
        ulong uVar11;
        undefined1 auVar12[16];
        internal local_58[3];
        uint local_34;

        eastl::vector<unsigned int, BucketAllocatorEASTL>::vector();
        GetCpuFreqs(local_58);
        cVar3 = local_58->empty();
        if (cVar3 == '\0') {
            puVar5 = (ulonglong*)local_58->HeapBeginPtr();
            puVar6 = (ulonglong*)local_58->end();
            local_34 = 0;
            puVar5 = std::find<unsigned long long*, int>(puVar5, puVar6, (int*)&local_34);
            puVar6 = (ulonglong*)local_58->end();
            if (puVar5 == puVar6) {
                puVar5 = (ulonglong*)local_58->HeapBeginPtr();
                puVar6 = (ulonglong*)local_58->end();
                auVar12 = std::minmax_element<unsigned long long*>(puVar5, puVar6);
                lVar1 = *auVar12._0_8_;
                lVar2 = *auVar12._8_8_;
                lVar7 = local_58->size();
                if (lVar7 != 0) {
                    uVar11 = 0;
                    do {
                        plVar9 = (long*)eastl::vector<unsigned long long, BucketAllocatorEASTL>::operator[](
                            (vector<unsigned long long, BucketAllocatorEASTL>*)local_58, uVar11);
                        if (*plVar9 == lVar1) {
                            uVar4 = logger::default_logger();
                            puVar10 = (undefined8*)eastl::vector<unsigned long long, BucketAllocatorEASTL>::operator[](
                                (vector<unsigned long long, BucketAllocatorEASTL>*)local_58, uVar11);
                            logger::Logger::Log(uVar4, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/thread/pthread/Thread_Pthread.cpp",
                                                183, "Slow core: %llu, %llu", uVar11, *puVar10);
                            local_34 = 4;
                            push_back(&local_34);
                        } else {
                            plVar9 = (long*)eastl::vector<unsigned long long, BucketAllocatorEASTL>::operator[](
                                (vector<unsigned long long, BucketAllocatorEASTL>*)local_58, uVar11);
                            if (*plVar9 == lVar2) {
                                uVar4 = logger::default_logger();
                                puVar10 =
                                    (undefined8*)eastl::vector<unsigned long long, BucketAllocatorEASTL>::operator[](
                                        (vector<unsigned long long, BucketAllocatorEASTL>*)local_58, uVar11);
                                logger::Logger::Log(uVar4, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/hal/thread/pthread/Thread_Pthread.cpp",
                                                    188, "Fast core: %llu, %llu", uVar11, *puVar10);
                                local_34 = 1;
                                push_back(&local_34);
                            } else {
                                uVar4 = logger::default_logger();
                                puVar10 =
                                    (undefined8*)eastl::vector<unsigned long long, BucketAllocatorEASTL>::operator[](
                                        (vector<unsigned long long, BucketAllocatorEASTL>*)local_58, uVar11);
                                logger::Logger::Log(uVar4, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/hal/thread/pthread/Thread_Pthread.cpp",
                                                    193, "Med core: %llu, %llu", uVar11, *puVar10);
                                local_34 = 2;
                                push_back(&local_34);
                            }
                        }
                        uVar11 = uVar11 + 1;
                        uVar8 = local_58->size();
                    } while (uVar11 < uVar8);
                }
            } else {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/"
                                    "pthread/Thread_Pthread.cpp",
                                    171, "Failed to parse CPU topology from /sys");
            }
        } else {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/"
                                "pthread/Thread_Pthread.cpp",
                                167, "Failed to read CPU topology from /sys");
        }
        local_58->~vector();
        return (vector<unsigned int, BucketAllocatorEASTL>*)this;
    }

} // namespace jag::internal

namespace jag::this_thread {
    // 0x100c95580, 400 bytes, placed by debug map only (low confidence)
    // SetThreadName(char const*)
    void SetThreadName(char* param_1) {
        undefined* puVar1;
        size_t sVar2;
        size_t sVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        ID IVar6;
        eastl::string* this;
        eastl::string local_68[32];
        allocator local_48[8];
        basic_string local_40[32];

        eastl::allocator::allocator(local_48, "EASTL basic_string");
        eastl::string::basic_string(local_68, param_1, local_48);
        eastl::string::substr((ulong)local_40, (ulong)local_68);
        eastl::string::~basic_string(local_68);
        sVar2 = _strlen(param_1);
        sVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (sVar2 != sVar3) {
            uVar4 = logger::default_logger();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar4, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/"
                                "pthread/Thread_Pthread.cpp",
                                264, "Truncated thread name from: %s to: %s", param_1, uVar5);
        }
        IVar6 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread, "currentThread");
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar6);
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        IVar6 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar5);
        uVar5 = _objc_retainAutoreleasedReturnValue(IVar6);
        (*(code*)PTR__objc_msgSend_100ee9e50)(uVar4, "setName:", uVar5);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(uVar5);
        (*(code*)puVar1)(uVar4);
        internal::g_ThreadName();
        this = (eastl::string*)(*(code*)internal::g_ThreadName)();
        eastl::string::operator=(this, local_40);
        local_40->~basic_string();
    }

    // 0x100c95710, 32 bytes, placed by debug map only (low confidence)
    // GetThreadName()
    void GetThreadName() {
        internal::g_ThreadName();
        (*(code*)internal::g_ThreadName)();
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag::this_thread
