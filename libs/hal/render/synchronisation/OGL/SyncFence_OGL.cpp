// libs/hal/render/synchronisation/OGL/SyncFence_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

namespace jag::render {
    class SyncFence {
    public:
        SyncFence();
        ~SyncFence();
        void Destroy();
        SyncFence(SyncFence&& syncFence);
        SyncFence* operator=(SyncFence&& syncFence);
        unsigned long Create();
        void ReleaseNativeResources();
        uint32_t WaitClient(float arg1) const;
        void WaitServer() const;
        bool IsCreated() const;
        unsigned long HasBeenNotified() const;
        static int64_t m_count;

    private:
        uint64_t field_0;
    };

    // 0x103bd9d38
    int64_t SyncFence::m_count;

    // 0x100bc8260
    unsigned long SyncFence::Create() {
        unsigned long uVar1;
        unsigned long unaff_RBX;
        unsigned long in_RSI;
        uint8_t auVar3[12];

        if (field_0 != 0) {
            LogAssert("m_GLSync == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                      "synchronisation/OGL/SyncFence_OGL.cpp",
                      42, nullptr);
        }
        auto this_00 = Instance();
        auVar3 = this_00->GetOrigin();
        if (*(char*)(auVar3._0_8_ + 187) == '\0') {
            field_0 = 1;
        } else {
            uVar1 = this_00->fetch_add(in_RSI, auVar3._8_4_);
            if (512 < uVar1) {
                LogAssert("totalInstances <= 512",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "synchronisation/OGL/SyncFence_OGL.cpp",
                          49, "Excessive SyncFences have been created - this will not work on all platforms.");
            }
            unaff_RBX = 0;
            field_0 = (*___glewFenceSync)(37143, 0);
            CheckGlErrorInternal("glFenceSync",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "synchronisation/OGL/SyncFence_OGL.cpp",
                                 53);
            if (field_0 == 0)
                goto LAB_100bc8333;
        }
        _glFlush();
        CheckGlErrorInternal("glFlush",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "synchronisation/OGL/SyncFence_OGL.cpp",
                             71);
        unaff_RBX = (((uint64_t)((int64_t)(unaff_RBX >> 8)) << 8) | (uint8_t)1);
    LAB_100bc8333:
        return unaff_RBX & 4294967295;
    }

    // 0x100bc8350
    void SyncFence::ReleaseNativeResources() {
        bool cVar1;
        long lVar3;

        if (InstancePtr() != nullptr) {
            lVar3 = ((MapArea*)Instance())->GetOrigin();
            if (*(char*)(lVar3 + 187) != '\0') {
                if (field_0 == 0) {
                    return;
                }
                std::__atomic_base<unsigned long, true>::operator--();
                cVar1 = (*___glewIsSync)(field_0);
                CheckGlErrorInternal("glIsSync",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "synchronisation/OGL/SyncFence_OGL.cpp",
                                     178);
                if (cVar1) {
                    (*___glewDeleteSync)(field_0);
                    CheckGlErrorInternal("glDeleteSync",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/synchronisation/OGL/SyncFence_OGL.cpp",
                                         181);
                }
            }
        }
        field_0 = 0;
    }

    // 0x100bc83f0
    uint32_t SyncFence::WaitClient(float arg1) const {
        bool cVar1;
        uint32_t uVar2;
        unsigned long uVar4;

        long lVar3 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar3 + 187) == '\0') {
            _glFinish();
            CheckGlErrorInternal("glFinish",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "synchronisation/OGL/SyncFence_OGL.cpp",
                                 101);
            uVar2 = 37148;
        } else {
            if (field_0 == 0) {
                LogAssert("m_GLSync != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "synchronisation/OGL/SyncFence_OGL.cpp",
                          87, nullptr);
            }
            cVar1 = (*___glewIsSync)(field_0);
            CheckGlErrorInternal("glIsSync",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "synchronisation/OGL/SyncFence_OGL.cpp",
                                 89);
            if (!cVar1) {
                (logger::default_logger())
                    ->Log(false, 3,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "synchronisation/OGL/SyncFence_OGL.cpp",
                          90, "%s called on invalid sync fence", "WaitClient");
            }
            uVar4 = (unsigned long)(arg1 * 1e+06);
            uVar2 =
                (*___glewClientWaitSync)(field_0, 1, (long)(arg1 * 1e+06 - 9.223372e+18) & (long)uVar4 >> 63 | uVar4);
            CheckGlErrorInternal("glClientWaitSync",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "synchronisation/OGL/SyncFence_OGL.cpp",
                                 96);
        }
        return uVar2;
    }

    // 0x100bc8530
    void SyncFence::WaitServer() const {
        bool cVar1;
        long lVar3;
        int arg3;
        char* str1;

        if (InstancePtr() != nullptr) {
            lVar3 = ((MapArea*)Instance())->GetOrigin();
            if (*(char*)(lVar3 + 187) != '\0') {
                if (field_0 == 0) {
                    LogAssert("m_GLSync != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "synchronisation/OGL/SyncFence_OGL.cpp",
                              112, nullptr);
                }
                cVar1 = (*___glewIsSync)(field_0);
                CheckGlErrorInternal("glIsSync",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "synchronisation/OGL/SyncFence_OGL.cpp",
                                     114);
                if (!cVar1) {
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "synchronisation/OGL/SyncFence_OGL.cpp",
                              115, "%s called on invalid sync fence", "WaitServer");
                }
                (*___glewWaitSync)(field_0, 0, 18446744073709551615);
                str1 = "glWaitSync";
                arg3 = 119;
                goto LAB_100bc862d;
            }
        }
        _glFlush();
        str1 = "glFlush";
        arg3 = 123;
    LAB_100bc862d:
        CheckGlErrorInternal(str1,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "synchronisation/OGL/SyncFence_OGL.cpp",
                             arg3);
    }

    // 0x100bc8640
    bool SyncFence::IsCreated() const {
        return field_0 != 0;
    }

    // 0x100bc8650
    unsigned long SyncFence::HasBeenNotified() const {
        unsigned int uVar1;
        Logger* pLVar3;
        unsigned long uVar4;
        bool arg1;
        int arg4;
        char* str2;
        int local_1c;

        long lVar2 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar2 + 188) == '\0') {
            pLVar3 = logger::default_logger();
            str2 = "Attempting to use %s without async sync fence support";
            arg1 = true;
            arg4 = 162;
        LAB_100bc8734:
            pLVar3->Log(arg1, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                        "synchronisation/OGL/SyncFence_OGL.cpp",
                        arg4, str2);
            uVar4 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
        } else {
            if (field_0 == 0) {
                pLVar3 = logger::default_logger();
                pLVar3->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "synchronisation/OGL/SyncFence_OGL.cpp",
                            138, "Call Create() before calling HasBeenNotified() on a SyncFence");
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "synchronisation/OGL/SyncFence_OGL.cpp",
                                139, nullptr);
            }
            local_1c = -1;
            (*___glewGetSynciv)(field_0, 37140, 4, 0, &local_1c);
            CheckGlErrorInternal("glGetSynciv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "synchronisation/OGL/SyncFence_OGL.cpp",
                                 145);
            if (local_1c != 37145) {
                uVar1 = (*___glewIsSync)(field_0);
                this = (SyncFence*)(unsigned long)uVar1;
                CheckGlErrorInternal("glIsSync",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "synchronisation/OGL/SyncFence_OGL.cpp",
                                     149);
                if ((char)uVar1 == '\0') {
                    pLVar3 = logger::default_logger();
                    str2 = "Checking HasBeenNotified on an invalid SyncFence";
                    arg1 = false;
                    arg4 = 152;
                    goto LAB_100bc8734;
                }
            }
            uVar4 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)(local_1c == 37145));
        }
        return uVar4 & 4294967295;
    }

} // namespace jag::render
