// libs/hal/render/synchronisation/OGL/SyncFence_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

namespace jag::render {
    class SyncFence {
    public:
        SyncFence();
        ~SyncFence();
        void Destroy();
        SyncFence(SyncFence&&);
        SyncFence* operator=(SyncFence&&);
        ulong Create();
        void ReleaseNativeResources();
        WaitClient(float) const;
        void WaitServer() const;
        bool IsCreated() const;
        ulong HasBeenNotified() const;
        static /* 8 bytes */ m_count;

        // data members, from how the methods use this: 8 bytes
        __GLsync* field_0; // offset 0
    };

    // 0x103bd9d38, 8 bytes, __common; zero-initialised
    SyncFence::m_count;

    // 0x100bc8260, 224 bytes, placed by __FILE__ string
    // SyncFence::Create()
    ulong SyncFence::Create() {
        MapArea* this_00;
        long lVar1;
        ulong uVar2;
        ulong unaff_RBX;

        if (field_0 != (__GLsync*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLSync == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                      "synchronisation/OGL/SyncFence_OGL.cpp",
                      42, (char*)0);
        }
        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 187) == '\0') {
            field_0 = (__GLsync*)1;
        } else {
            uVar2 = std::__atomic_base<unsigned long, true>::fetch_add();
            if (512 < uVar2) {
                /* WARNING: Subroutine does not return */
                LogAssert("totalInstances <= 512",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "synchronisation/OGL/SyncFence_OGL.cpp",
                          49, "Excessive SyncFences have been created - this will not work on all platforms.");
            }
            unaff_RBX = 0;
            field_0 = (__GLsync*)(*___glewFenceSync)(37143, 0);
            CheckGlErrorInternal("glFenceSync",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "synchronisation/OGL/SyncFence_OGL.cpp",
                                 53);
            if (field_0 == (__GLsync*)0)
                goto LAB_100bc8333;
        }
        _glFlush();
        CheckGlErrorInternal("glFlush",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "synchronisation/OGL/SyncFence_OGL.cpp",
                             71);
        unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8), 1);
    LAB_100bc8333:
        return unaff_RBX & 4294967295;
    }

    // 0x100bc8350, 160 bytes, placed by __FILE__ string
    // SyncFence::ReleaseNativeResources()
    void SyncFence::ReleaseNativeResources() {
        char cVar1;
        long lVar2;
        MapArea* this_00;

        lVar2 = Singleton<RenderDevice>::InstancePtr();
        if (lVar2 != 0) {
            this_00 = (MapArea*)Instance();
            lVar2 = this_00->GetOrigin();
            if (*(char*)(lVar2 + 187) != '\0') {
                if (field_0 == (__GLsync*)0) {
                    return;
                }
                std::__atomic_base<unsigned long, true>::operator--((__atomic_base<unsigned long, true>*)this_00);
                cVar1 = (*___glewIsSync)(field_0);
                CheckGlErrorInternal("glIsSync",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "synchronisation/OGL/SyncFence_OGL.cpp",
                                     178);
                if (cVar1 != '\0') {
                    (*___glewDeleteSync)(field_0);
                    CheckGlErrorInternal("glDeleteSync",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/synchronisation/OGL/SyncFence_OGL.cpp",
                                         181);
                }
            }
        }
        field_0 = (__GLsync*)0;
    }

    // 0x100bc83f0, 320 bytes, placed by __FILE__ string
    // SyncFence::WaitClient(float) const
    undefined4 SyncFence::WaitClient(float param_1) {
        char cVar1;
        undefined4 uVar2;
        MapArea* this_00;
        long lVar3;
        undefined8 uVar4;
        ulong uVar5;

        this_00 = (MapArea*)Instance();
        lVar3 = this_00->GetOrigin();
        if (*(char*)(lVar3 + 187) == '\0') {
            _glFinish();
            CheckGlErrorInternal("glFinish",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "synchronisation/OGL/SyncFence_OGL.cpp",
                                 101);
            uVar2 = 37148;
        } else {
            if (field_0 == (__GLsync*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_GLSync != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "synchronisation/OGL/SyncFence_OGL.cpp",
                          87, (char*)0);
            }
            cVar1 = (*___glewIsSync)(field_0);
            CheckGlErrorInternal("glIsSync",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "synchronisation/OGL/SyncFence_OGL.cpp",
                                 89);
            if (cVar1 == '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "synchronisation/OGL/SyncFence_OGL.cpp",
                                    90, "%s called on invalid sync fence", "WaitClient");
            }
            uVar5 = (ulong)(param_1 * 1e+06);
            uVar2 = (*___glewClientWaitSync)(field_0, 1,
                                             (long)(param_1 * 1e+06 - 9.223372e+18) & (long)uVar5 >> 63 | uVar5);
            CheckGlErrorInternal("glClientWaitSync",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "synchronisation/OGL/SyncFence_OGL.cpp",
                                 96);
        }
        return uVar2;
    }

    // 0x100bc8530, 272 bytes, placed by __FILE__ string
    // SyncFence::WaitServer() const
    void SyncFence::WaitServer() {
        char cVar1;
        long lVar2;
        MapArea* this_00;
        undefined8 uVar3;
        int iVar4;
        char* pcVar5;

        lVar2 = Singleton<RenderDevice>::InstancePtr();
        if (lVar2 != 0) {
            this_00 = (MapArea*)Instance();
            lVar2 = this_00->GetOrigin();
            if (*(char*)(lVar2 + 187) != '\0') {
                if (field_0 == (__GLsync*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_GLSync != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "synchronisation/OGL/SyncFence_OGL.cpp",
                              112, (char*)0);
                }
                cVar1 = (*___glewIsSync)(field_0);
                CheckGlErrorInternal("glIsSync",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "synchronisation/OGL/SyncFence_OGL.cpp",
                                     114);
                if (cVar1 == '\0') {
                    uVar3 = logger::default_logger();
                    logger::Logger::Log(uVar3, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/synchronisation/OGL/SyncFence_OGL.cpp",
                                        115, "%s called on invalid sync fence", "WaitServer");
                }
                (*___glewWaitSync)(field_0, 0, 18446744073709551615);
                pcVar5 = "glWaitSync";
                iVar4 = 119;
                goto LAB_100bc862d;
            }
        }
        _glFlush();
        pcVar5 = "glFlush";
        iVar4 = 123;
    LAB_100bc862d:
        CheckGlErrorInternal(pcVar5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "synchronisation/OGL/SyncFence_OGL.cpp",
                             iVar4);
    }

    // 0x100bc8640, 16 bytes, placed by neighbouring functions
    // SyncFence::IsCreated() const
    bool SyncFence::IsCreated() {
        return field_0 != (__GLsync*)0;
    }

    // 0x100bc8650, 368 bytes, placed by __FILE__ string
    // SyncFence::HasBeenNotified() const
    ulong SyncFence::HasBeenNotified() {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        undefined8 uVar3;
        ulong uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        char* pcVar7;
        int local_1c;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 188) == '\0') {
            uVar3 = logger::default_logger();
            pcVar7 = "Attempting to use %s without async sync fence support";
            uVar5 = 1;
            uVar6 = 162;
        LAB_100bc8734:
            logger::Logger::Log(uVar3, uVar5, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "synchronisation/OGL/SyncFence_OGL.cpp",
                                uVar6, pcVar7);
            uVar4 = CONCAT71((int7)((ulong)this >> 8), 1);
        } else {
            if (field_0 == (__GLsync*)0) {
                uVar3 = logger::default_logger();
                logger::Logger::Log(uVar3, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "synchronisation/OGL/SyncFence_OGL.cpp",
                                    138, "Call Create() before calling HasBeenNotified() on a SyncFence");
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "synchronisation/OGL/SyncFence_OGL.cpp",
                                139, (char*)0);
            }
            local_1c = -1;
            (*___glewGetSynciv)(field_0, 37140, 4, 0, &local_1c);
            CheckGlErrorInternal("glGetSynciv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "synchronisation/OGL/SyncFence_OGL.cpp",
                                 145);
            if (local_1c != 37145) {
                uVar1 = (*___glewIsSync)(field_0);
                this = (SyncFence*)(ulong)uVar1;
                CheckGlErrorInternal("glIsSync",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "synchronisation/OGL/SyncFence_OGL.cpp",
                                     149);
                if ((char)uVar1 == '\0') {
                    uVar3 = logger::default_logger();
                    pcVar7 = "Checking HasBeenNotified on an invalid SyncFence";
                    uVar5 = 0;
                    uVar6 = 152;
                    goto LAB_100bc8734;
                }
            }
            uVar4 = CONCAT71((int7)((ulong)this >> 8), local_1c == 37145);
        }
        return uVar4 & 4294967295;
    }

} // namespace jag::render
