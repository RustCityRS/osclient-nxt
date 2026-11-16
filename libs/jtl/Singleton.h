// libs/jtl/Singleton.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 19 instantiations, e.g. <DebugPrimitiveRendererBasic>, <PrimitiveShaderFamily>, <SecureRandom>
    class Singleton {
    public:
        SecureRandom* Create<>();
        void InstancePtr();
        void Instance();
        RenderDevice* InstancePtr();
        SecureRandom* Instance();
        Singleton();
        void Destroy();
        game::ServerSyncing* Create<>();
        VertexDeclarationManager* Instance();
        graphics::AnimationManager* Create<>();
        hardware::HardwareInfo* Create<>();
        render::RenderDevice* Create<>();
        graphicutils::Screengrabber* Create<>();
        PrimitiveShaderFamily* Create<>();
        render::BuiltinStates* Create<>();
        render::ShaderManager<render::VertexShader>* Create<unsigned int const&>(const unsigned int& arg1);
        render::ShaderManager<render::PixelShader>* Create<unsigned int const&>(const unsigned int& arg1);
        render::ShaderManager<render::ComputeShader>* Create<unsigned int const&>(const unsigned int& arg1);
        render::ShaderProgramManager* Create<unsigned int const&>(const unsigned int& arg1);
        render::VertexDeclarationManager* Create<unsigned int const&>(const unsigned int& arg1);
        render::VAOManager* Create<>();
        VAOManager* Instance();
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static int64_t m_pSingleton;  // = 0
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static int64_t m_pSingleton;  // = 0
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static int64_t m_pSingleton;  // = 0
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static int64_t m_pSingleton;  // = 0
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static int64_t m_pSingleton;  // = 0
        static int64_t m_pSingleton;  // = 0
        static int64_t m_pSingleton;  // = 0
        static int64_t m_pSingleton;  // = 0
        static int64_t m_pSingleton;  // = 0
    };

    // 0x100f370f0
    float Singleton<graphicutils::Screengrabber>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f371b0
    float Singleton<hardware::HardwareInfo>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f371c0
    float Singleton<render::RenderDevice>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f37330
    int64_t Singleton<SecureRandom>::m_pSingleton = 0;

    // 0x100f373f0
    float Singleton<render::ShaderProgramManager>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f37400
    float Singleton<render::VertexDeclarationManager>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f37410
    int64_t Singleton<graphics::AnimationManager>::m_pSingleton = 0;

    // 0x100f38e00
    float Singleton<graphics::ModelUpdateManager>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f3d630
    int64_t Singleton<game::ServerSyncing>::m_pSingleton = 0;

    // 0x100f3e5c0
    float Singleton<game::SoundManager>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f441b0
    float Singleton<render::ShaderManager<render::VertexShader>>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f441c0
    float Singleton<render::ShaderManager<render::PixelShader>>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f44370
    int64_t Singleton<graphics::VectorFontLoader>::m_pSingleton = 0;

    // 0x100f44ad0
    float Singleton<render::BuiltinStates>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f453f8
    int64_t Singleton<DebugPrimitiveRendererBasic>::m_pSingleton = 0;

    // 0x100f460e8
    int64_t Singleton<PrimitiveShaderFamily>::m_pSingleton = 0;

    // 0x100f48548
    int64_t Singleton<testframework::TestRunner>::m_pSingleton = 0;

    // 0x100f48918
    int64_t Singleton<render::ShaderManager<render::ComputeShader>>::m_pSingleton = 0;

    // 0x100f48928
    int64_t Singleton<render::VAOManager>::m_pSingleton = 0;

    // 0x10017b300
    SecureRandom* Singleton<SecureRandom>::Create<>() {
        if (InstancePtr(this) == 0) {
            this = (Singleton<SecureRandom>*)operator new(320);
            new (this) SecureRandom();
        }
        return (SecureRandom*)InstancePtr(this);
    }

    // 0x10017b350
    shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::type
    make_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int>(int&& arg1) {
        ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> _> _>* ref_counter_shared;
        int local_34;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>* local_30[2];

        auto arg1_00 = aligned_alloc(64, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::type result;
        } else {
            local_30[0] = placement_new<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>, int,
                              oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*&>(arg1_00, &local_34,
                                                                                               local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10017b440
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<unsigned long long>(unsigned long long arg1) {
        pT<long long>(this, arg1);
    }

    // 0x10017b450
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::chunkRsaEncrypt(const math::BigInteger& bigInteger1,
                                                                              const math::BigInteger& bigInteger2) {
        BigInteger local_38;

        if (bigInteger2.GetByteSize() <= *(int*)(this + 24)) {
            LogAssert("rsan.GetByteSize() > (int)m_pos",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      405, nullptr);
        }
        auto puVar2 = data();
        BigInteger local_40(puVar2, *(unsigned long*)(this + 24));
        local_38.PowMod(&local_40, bigInteger1);
        auto local_58 = local_38.Get();
        SetPos(this, 0);
        unsigned int arg1 = local_58.size();
        p2<int>(this, arg1);
        puVar2 = (unsigned char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg3 = local_58.size();
        pArrayBuffer(this, puVar2, 0, arg3);
    }

    // 0x10017b570
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p6<long long>(long long arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 6U) {
            LogAssert("m_pos + 6 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      163, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned long)arg1 >> 40);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned long)arg1 >> 32);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned long)arg1 >> 24);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned long)arg1 >> 16);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned long)arg1 >> 8);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)arg1;
    }

    // 0x10017b6b0
    void
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<eastl::string>(const eastl::string& str,
                                                                                            bool arg2) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2_00 = str.size();
        pStringUTF8ToCP1252(this, str_00, arg2_00, arg2);
    }

    // 0x10017b700
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::SetPos(unsigned long arg1) {
        if (end() < arg1) {
            LogAssert("_pos <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 176,
                      "Packet: Invalid pos");
        }
        *(unsigned long*)(this + 24) = arg1;
    }

    // 0x10017b750
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::tinyKeyEncrypt(const std::array<int, 4ul>& arg1,
                                                                             unsigned long arg2, unsigned long arg3) {
        unsigned int uVar2;
        unsigned int uVar3;
        int iVar4;
        unsigned long uVar5;
        int* piVar6;
        unsigned long uVar7;
        unsigned int uVar8;

        uint64_t uVar1 = *(uint64_t*)(this + 24);
        *(unsigned long*)(this + 24) = arg2;
        if (7 < arg3 - arg2) {
            uVar7 = arg3 - arg2 >> 3;
            uVar5 = 1;
            if (1 < uVar7) {
                uVar5 = uVar7;
            }
            uVar7 = 0;
            do {
                uVar2 = g4();
                uVar3 = g4();
                iVar4 = -32;
                uVar8 = 0;
                do {
                    piVar6 = &arg1[(unsigned long)(uVar8 & 3)];
                    uVar2 = uVar2 + (*piVar6 + uVar8 ^ (uVar3 >> 5 ^ uVar3 << 4) + uVar3);
                    piVar6 = &arg1[(unsigned long)(uVar8 + 2654435769 >> 11 & 3)];
                    uVar3 = (*piVar6 + uVar8 + 2654435769 ^ (uVar2 >> 5 ^ uVar2 * 16) + uVar2) + uVar3;
                    iVar4 = iVar4 + 1;
                    uVar8 = uVar8 + 2654435769;
                } while (iVar4 != 0);
                *(long*)(this + 24) = *(long*)(this + 24) - 8;
                p4<int>(this, (unsigned long)uVar2);
                p4<int>(this, (unsigned long)uVar3);
                uVar7 = uVar7 + 1;
            } while (uVar7 != uVar5);
        }
        *(uint64_t*)(this + 24) = uVar1;
    }

    // 0x10017b8a0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::GetSize() const {
        end();
    }

    // 0x10017b8b0
    shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::type
    make_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, unsigned long>(unsigned long&& arg1) {
        ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> _> _>* ref_counter_shared;
        int local_34;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>* local_30[2];

        auto arg1_00 = aligned_alloc(64, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::type result;
        } else {
            local_30[0] = placement_new<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, unsigned long>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>, int,
                              oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*&>(arg1_00, &local_34,
                                                                                               local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10017b950
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pArrayBuffer(const unsigned char* arg1,
                                                                           unsigned long arg2, unsigned long arg3) {
        unsigned long uVar1;
        long lVar2;
        unsigned long* puVar3;
        unsigned long local_38;
        unsigned long local_30;

        if (arg3 != 0) {
            lVar2 = *(long*)(this + 24);
            local_30 = arg3;
            uVar1 = end();
            if (uVar1 < arg3 + lVar2) {
                LogAssert(
                    "m_pos + size <= m_data.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 325,
                    nullptr);
            }
            if (arg1 == nullptr) {
                LogAssert(
                    "val != nullptr",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 326,
                    nullptr);
            }
            lVar2 = end();
            uVar1 = *(unsigned long*)(this + 24);
            local_38 = lVar2 - uVar1;
            puVar3 = std::min<unsigned long>(local_30, local_38);
            local_30 = *puVar3;
            _memcpy((void*)(*this)[uVar1], arg1 + arg2, local_30);
            *(unsigned long*)(this + 24) = *(long*)(this + 24) + local_30;
        }
    }

    // 0x10017ba30
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::GetDataPtr() {
        data();
    }

    // 0x10017ba40
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<unsigned long>(unsigned long arg1) {
        pT<short>(this, (short)arg1);
    }

    // 0x100189b90
    void Singleton<hardware::HardwareInfo>::InstancePtr() {
        get();
    }

    // 0x100189ba0
    void Singleton<hardware::HardwareInfo>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c60);
        }
        **this;
    }

    // 0x1001a62a0
    void Singleton<SecureRandom>::InstancePtr() {
        get();
    }

    // 0x1003a2810
    RenderDevice* Singleton<render::RenderDevice>::InstancePtr() {
        return (RenderDevice*)get();
    }

    // 0x1003a2820
    void Singleton<render::RenderDevice>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c10);
        }
        **this;
    }

    // 0x1003aa410
    SecureRandom* Singleton<SecureRandom>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6bd0);
        }
        return (SecureRandom*)**this;
    }

    // 0x1003aa600
    Singleton<SecureRandom>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6bd0->reset(this);
    }

    // 0x10042ee00
    void Singleton<graphics::ModelUpdateManager>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c58);
        }
        **this;
    }

    // 0x1004692d0
    Singleton<game::ServerSyncing>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c00->reset(this);
    }

    // 0x10046ade0
    void Singleton<game::ServerSyncing>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c00);
        }
        **this;
    }

    // 0x100565370
    void Singleton<game::ServerSyncing>::Destroy() {
        ServerSyncing* in_RSI;

        auto this_00 = get();
        std::default_delete<game::ServerSyncing>::operator()(this_00, in_RSI);
        std::unique_ptr<game::ServerSyncing>::release();
    }

    // 0x1005653e0
    game::ServerSyncing* Singleton<game::ServerSyncing>::Create<>() {
        if (InstancePtr(this) == 0) {
            this = (Singleton<game::ServerSyncing>*)operator new(56584);
            new (this) game::ServerSyncing();
        }
        return (ServerSyncing*)InstancePtr(this);
    }

    // 0x1005708e0
    void Singleton<game::ServerSyncing>::InstancePtr() {
        get();
    }

    // 0x1005f8380
    void Singleton<game::SoundManager>::InstancePtr() {
        get();
    }

    // 0x100662d50
    void Singleton<game::SoundManager>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6bf8);
        }
        **this;
    }

    // 0x100663670
    Singleton<game::SoundManager>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6bf8->reset(this);
    }

    // 0x1008e5fc0
    void Singleton<graphics::VectorFontLoader>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c50);
        }
        **this;
    }

    // 0x100930d00
    VertexDeclarationManager* Singleton<render::VertexDeclarationManager>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c40);
        }
        return (VertexDeclarationManager*)**this;
    }

    // 0x100934750
    void Singleton<render::ShaderProgramManager>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c38);
        }
        **this;
    }

    // 0x10097ed80
    graphics::AnimationManager* Singleton<graphics::AnimationManager>::Create<>() {
        if (InstancePtr(this) == 0) {
            this = (Singleton<graphics::AnimationManager>*)operator new(8);
            new (this) graphics::AnimationManager();
        }
        return (AnimationManager*)InstancePtr(this);
    }

    // 0x10097edd0
    void Singleton<graphics::AnimationManager>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c48);
        }
        **this;
    }

    // 0x100980460
    void Singleton<graphics::AnimationManager>::Destroy() {
        AnimationManager* in_RSI;

        auto this_00 = get();
        std::default_delete<graphics::AnimationManager>::operator()(this_00, in_RSI);
        std::unique_ptr<graphics::AnimationManager>::release();
    }

    // 0x100989760
    Singleton<graphics::AnimationManager>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c48->reset(this);
    }

    // 0x10099b980
    void Singleton<graphics::AnimationManager>::InstancePtr() {
        get();
    }

    // 0x1009c9200
    Singleton<DebugPrimitiveRendererBasic>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6bf0->reset(this);
    }

    // 0x100b03990
    hardware::HardwareInfo* Singleton<hardware::HardwareInfo>::Create<>() {
        if (InstancePtr(this) == 0) {
            this = (Singleton<hardware::HardwareInfo>*)operator new(280);
            new (this) hardware::HardwareInfo();
        }
        return (HardwareInfo*)InstancePtr(this);
    }

    // 0x100b039e0
    render::RenderDevice* Singleton<render::RenderDevice>::Create<>() {
        auto pRVar1 = InstancePtr(this);
        if (pRVar1 == nullptr) {
            this = (Singleton<render::RenderDevice>*)operator new(62238400);
            new (this) render::RenderDevice();
        }
        pRVar1 = InstancePtr(this);
        return pRVar1;
    }

    // 0x100b03a30
    graphicutils::Screengrabber* Singleton<graphicutils::Screengrabber>::Create<>() {
        if (InstancePtr(this) == 0) {
            this = (Singleton<graphicutils::Screengrabber>*)operator new(104);
            ((Screengrabber*)this)->field_0 = nullptr;
            ((Screengrabber*)this)->field_8 = nullptr;
            *(uint64_t*)&((Screengrabber*)this)->field_16 = 0;
            *(uint64_t*)&((Screengrabber*)this)->field_24 = 0;
            *(uint64_t*)&((Screengrabber*)this)->m_screenshotSaveMode = 0;
            *(uint64_t*)&((Screengrabber*)this)->field_40 = 0;
            *(uint64_t*)&((Screengrabber*)this)->field_48 = 0;
            *(uint64_t*)&((Screengrabber*)this)->field_56 = 0;
            *(uint64_t*)&((Screengrabber*)this)->field_64 = 0;
            *(uint64_t*)&((Screengrabber*)this)->field_72 = 0;
            *(uint64_t*)&((Screengrabber*)this)->field_80 = 0;
            *(uint64_t*)&((Screengrabber*)this)->field_88 = 0;
            *(uint64_t*)&((Screengrabber*)this)->field_96 = 0;
            new (this) graphicutils::Screengrabber();
        }
        return (Screengrabber*)InstancePtr(this);
    }

    // 0x100b03ca0
    void Singleton<render::RenderDevice>::Destroy() {
        RenderDevice* in_RSI;

        auto this_00 = get();
        std::default_delete<render::RenderDevice>::operator()(this_00, in_RSI);
        std::unique_ptr<render::RenderDevice>::release();
    }

    // 0x100b03cc0
    void Singleton<hardware::HardwareInfo>::Destroy() {
        HardwareInfo* in_RSI;

        auto this_00 = get();
        std::default_delete<hardware::HardwareInfo>::operator()(this_00, in_RSI);
        std::unique_ptr<hardware::HardwareInfo>::release();
    }

    // 0x100b03ce0
    void Singleton<graphicutils::Screengrabber>::Destroy() {
        Screengrabber* in_RSI;

        auto this_00 = get();
        std::default_delete<graphicutils::Screengrabber>::operator()(this_00, in_RSI);
        std::unique_ptr<graphicutils::Screengrabber>::release();
    }

    // 0x100b04320
    PrimitiveShaderFamily* Singleton<PrimitiveShaderFamily>::Create<>() {
        if (InstancePtr(this) == 0) {
            this = (Singleton<PrimitiveShaderFamily>*)operator new(33424);
            new (this) PrimitiveShaderFamily();
        }
        return (PrimitiveShaderFamily*)InstancePtr(this);
    }

    // 0x100b046f0
    void Singleton<PrimitiveShaderFamily>::Destroy() {
        PrimitiveShaderFamily* in_RSI;

        auto this_00 = get();
        std::default_delete<PrimitiveShaderFamily>::operator()(this_00, in_RSI);
        std::unique_ptr<PrimitiveShaderFamily>::release();
    }

    // 0x100b04f20
    void Singleton<graphicutils::Screengrabber>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6bd8);
        }
        **this;
    }

    // 0x100b07a60
    void Singleton<graphicutils::Screengrabber>::InstancePtr() {
        get();
    }

    // 0x100b07b00
    Singleton<graphicutils::Screengrabber>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6bd8->reset(this);
    }

    // 0x100b08230
    void Singleton<PrimitiveShaderFamily>::InstancePtr() {
        get();
    }

    // 0x100ba9490
    void Singleton<testframework::TestRunner>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6be0);
        }
        **this;
    }

    // 0x100bb8800
    void Singleton<PrimitiveShaderFamily>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6be8);
        }
        **this;
    }

    // 0x100bc0f50
    Singleton<PrimitiveShaderFamily>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6be8->reset(this);
    }

    // 0x100bc6c50
    Singleton<render::VAOManager>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c08->reset(this);
    }

    // 0x100bdcb10
    Singleton<render::RenderDevice>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c10->reset(this);
    }

    // 0x100bdd030
    render::BuiltinStates* Singleton<render::BuiltinStates>::Create<>() {
        if (InstancePtr(this) == 0) {
            this = (Singleton<render::BuiltinStates>*)operator new(2672);
            new (this) render::BuiltinStates();
        }
        return (BuiltinStates*)InstancePtr(this);
    }

    // 0x100bef4c0
    void Singleton<render::ShaderManager<render::VertexShader>>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c28);
        }
        **this;
    }

    // 0x100bef680
    void Singleton<render::ShaderManager<render::PixelShader>>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c20);
        }
        **this;
    }

    // 0x100bef840
    void Singleton<render::ShaderManager<render::ComputeShader>>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c30);
        }
        **this;
    }

    // 0x100bf36e0
    Singleton<render::BuiltinStates>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c18->reset(this);
    }

    // 0x100bf9a60
    void Singleton<render::BuiltinStates>::InstancePtr() {
        get();
    }

    // 0x100c0c9c0
    render::ShaderManager<render::VertexShader>*
    Singleton<render::ShaderManager<render::VertexShader>>::Create<unsigned int const&>(const unsigned int& arg1) {
        ShaderManager<render::VertexShader>* pSVar2 = (ShaderManager<render::VertexShader>*)arg1;
        if (InstancePtr((Singleton<render::ShaderManager<render::VertexShader>>*)arg1) == 0) {
            pSVar2 = (ShaderManager<render::VertexShader>*)operator new(104);
            new (pSVar2) render::ShaderManager<render::VertexShader>(arg1);
        }
        pSVar2 = (ShaderManager<render::VertexShader>*)InstancePtr(
            (Singleton<render::ShaderManager<render::VertexShader>>*)pSVar2);
        return pSVar2;
    }

    // 0x100c0ca10
    render::ShaderManager<render::PixelShader>*
    Singleton<render::ShaderManager<render::PixelShader>>::Create<unsigned int const&>(const unsigned int& arg1) {
        ShaderManager<render::PixelShader>* pSVar2 = (ShaderManager<render::PixelShader>*)arg1;
        if (InstancePtr((Singleton<render::ShaderManager<render::PixelShader>>*)arg1) == 0) {
            pSVar2 = (ShaderManager<render::PixelShader>*)operator new(104);
            new (pSVar2) render::ShaderManager<render::PixelShader>(arg1);
        }
        pSVar2 = (ShaderManager<render::PixelShader>*)InstancePtr(
            (Singleton<render::ShaderManager<render::PixelShader>>*)pSVar2);
        return pSVar2;
    }

    // 0x100c0ca60
    render::ShaderManager<render::ComputeShader>*
    Singleton<render::ShaderManager<render::ComputeShader>>::Create<unsigned int const&>(const unsigned int& arg1) {
        ShaderManager<render::ComputeShader>* pSVar2 = (ShaderManager<render::ComputeShader>*)arg1;
        if (InstancePtr((Singleton<render::ShaderManager<render::ComputeShader>>*)arg1) == 0) {
            pSVar2 = (ShaderManager<render::ComputeShader>*)operator new(104);
            new (pSVar2) render::ShaderManager<render::ComputeShader>(arg1);
        }
        pSVar2 = (ShaderManager<render::ComputeShader>*)InstancePtr(
            (Singleton<render::ShaderManager<render::ComputeShader>>*)pSVar2);
        return pSVar2;
    }

    // 0x100c0cab0
    render::ShaderProgramManager*
    Singleton<render::ShaderProgramManager>::Create<unsigned int const&>(const unsigned int& arg1) {
        ShaderProgramManager* pSVar2 = (ShaderProgramManager*)arg1;
        if (InstancePtr((Singleton<render::ShaderProgramManager>*)arg1) == 0) {
            pSVar2 = (ShaderProgramManager*)operator new(112);
            new (pSVar2) render::ShaderProgramManager(arg1);
        }
        pSVar2 = (ShaderProgramManager*)InstancePtr((Singleton<render::ShaderProgramManager>*)pSVar2);
        return pSVar2;
    }

    // 0x100c0cb00
    render::VertexDeclarationManager*
    Singleton<render::VertexDeclarationManager>::Create<unsigned int const&>(const unsigned int& arg1) {
        VertexDeclarationManager* pVVar2 = (VertexDeclarationManager*)arg1;
        if (InstancePtr((Singleton<render::VertexDeclarationManager>*)arg1) == 0) {
            pVVar2 = (VertexDeclarationManager*)operator new(48);
            new (pVVar2) render::VertexDeclarationManager(arg1);
        }
        pVVar2 = (VertexDeclarationManager*)InstancePtr((Singleton<render::VertexDeclarationManager>*)pVVar2);
        return pVVar2;
    }

    // 0x100c0cb50
    render::VAOManager* Singleton<render::VAOManager>::Create<>() {
        if (InstancePtr(this) == 0) {
            this = (Singleton<render::VAOManager>*)operator new(1016456);
            new (this) render::VAOManager();
        }
        return (VAOManager*)InstancePtr(this);
    }

    // 0x100c0cbd0
    void Singleton<render::VAOManager>::Destroy() {
        VAOManager* in_RSI;

        auto this_00 = get();
        std::default_delete<render::VAOManager>::operator()(this_00, in_RSI);
        std::unique_ptr<render::VAOManager>::release();
    }

    // 0x100c0cbf0
    void Singleton<render::VertexDeclarationManager>::Destroy() {
        VertexDeclarationManager* in_RSI;

        auto this_00 = get();
        std::default_delete<render::VertexDeclarationManager>::operator()(this_00, in_RSI);
        std::unique_ptr<render::VertexDeclarationManager>::release();
    }

    // 0x100c0cc10
    void Singleton<render::ShaderProgramManager>::Destroy() {
        ShaderProgramManager* in_RSI;

        auto this_00 = get();
        std::default_delete<render::ShaderProgramManager>::operator()(this_00, in_RSI);
        std::unique_ptr<render::ShaderProgramManager>::release();
    }

    // 0x100c0cc30
    void Singleton<render::ShaderManager<render::PixelShader>>::Destroy() {
        ShaderManager<render::PixelShader>* in_RSI;

        auto this_00 = get();
        std::default_delete<render::ShaderManager<render::PixelShader>>::operator()(this_00, in_RSI);
        std::unique_ptr<render::ShaderManager<render::PixelShader>>::release();
    }

    // 0x100c0cc50
    void Singleton<render::ShaderManager<render::ComputeShader>>::Destroy() {
        ShaderManager<render::ComputeShader>* in_RSI;

        auto this_00 = get();
        std::default_delete<render::ShaderManager<render::ComputeShader>>::operator()(this_00, in_RSI);
        std::unique_ptr<render::ShaderManager<render::ComputeShader>>::release();
    }

    // 0x100c0cc70
    void Singleton<render::ShaderManager<render::VertexShader>>::Destroy() {
        ShaderManager<render::VertexShader>* in_RSI;

        auto this_00 = get();
        std::default_delete<render::ShaderManager<render::VertexShader>>::operator()(this_00, in_RSI);
        std::unique_ptr<render::ShaderManager<render::VertexShader>>::release();
    }

    // 0x100c14a20
    VAOManager* Singleton<render::VAOManager>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c08);
        }
        return (VAOManager*)**this;
    }

    // 0x100c16c70
    void Singleton<render::BuiltinStates>::Instance() {
        void* in_RSI;

        if (!this != in_RSI) {
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c18);
        }
        **this;
    }

    // 0x100c2b780
    void Singleton<render::BuiltinStates>::Destroy() {
        BuiltinStates* in_RSI;

        auto this_00 = get();
        std::default_delete<render::BuiltinStates>::operator()(this_00, in_RSI);
        std::unique_ptr<render::BuiltinStates>::release();
    }

    // 0x100c37da0
    void Singleton<render::ShaderManager<render::VertexShader>>::InstancePtr() {
        get();
    }

    // 0x100c37e10
    Singleton<render::ShaderManager<render::VertexShader>>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c28->reset(this);
    }

    // 0x100c382d0
    void Singleton<render::ShaderManager<render::PixelShader>>::InstancePtr() {
        get();
    }

    // 0x100c38340
    Singleton<render::ShaderManager<render::PixelShader>>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c20->reset(this);
    }

    // 0x100c38800
    void Singleton<render::ShaderManager<render::ComputeShader>>::InstancePtr() {
        get();
    }

    // 0x100c38870
    Singleton<render::ShaderManager<render::ComputeShader>>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c30->reset(this);
    }

    // 0x100c38d30
    void Singleton<render::ShaderProgramManager>::InstancePtr() {
        get();
    }

    // 0x100c38db0
    Singleton<render::ShaderProgramManager>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c38->reset(this);
    }

    // 0x100c39210
    void Singleton<render::VertexDeclarationManager>::InstancePtr() {
        get();
    }

    // 0x100c392b0
    Singleton<render::VertexDeclarationManager>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c40->reset(this);
    }

    // 0x100c39590
    void Singleton<render::VAOManager>::InstancePtr() {
        get();
    }

    // 0x100c60110
    Singleton<hardware::HardwareInfo>::Singleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c60->reset(this);
    }

} // namespace jag
