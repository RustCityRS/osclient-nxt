// libs/jtl/Singleton.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 19 instantiations, e.g. <DebugPrimitiveRendererBasic>, <PrimitiveShaderFamily>, <SecureRandom>
    class Singleton {
    public:
        SecureRandom* Create<>();
        void InstancePtr();
        void Instance();
        Singleton();
        void Destroy();
        game::ServerSyncing* Create<>();
        graphics::AnimationManager* Create<>();
        hardware::HardwareInfo* Create<>();
        render::RenderDevice* Create<>();
        graphicutils::Screengrabber* Create<>();
        PrimitiveShaderFamily* Create<>();
        render::BuiltinStates* Create<>();
        render::ShaderManager<render::VertexShader>* Create<unsigned int const&>(unsigned int const&);
        render::ShaderManager<render::PixelShader>* Create<unsigned int const&>(unsigned int const&);
        render::ShaderManager<render::ComputeShader>* Create<unsigned int const&>(unsigned int const&);
        render::ShaderProgramManager* Create<unsigned int const&>(unsigned int const&);
        render::VertexDeclarationManager* Create<unsigned int const&>(unsigned int const&);
        render::VAOManager* Create<>();
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 8 bytes */ m_pSingleton;  // = 0
    };

    // 0x100f370f0, 16 bytes, __data
    Singleton<graphicutils::Screengrabber>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f371b0, 16 bytes, __data
    Singleton<hardware::HardwareInfo>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f371c0, 16 bytes, __data
    Singleton<render::RenderDevice>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f37330, 8 bytes, __data
    Singleton<SecureRandom>::m_pSingleton = 0;

    // 0x100f373f0, 16 bytes, __data
    Singleton<render::ShaderProgramManager>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f37400, 16 bytes, __data
    Singleton<render::VertexDeclarationManager>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f37410, 8 bytes, __data
    Singleton<graphics::AnimationManager>::m_pSingleton = 0;

    // 0x100f38e00, 16 bytes, __data
    Singleton<graphics::ModelUpdateManager>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f3d630, 8 bytes, __data
    Singleton<game::ServerSyncing>::m_pSingleton = 0;

    // 0x100f3e5c0, 16 bytes, __data
    Singleton<game::SoundManager>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f441b0, 16 bytes, __data
    Singleton<render::ShaderManager<render::VertexShader>>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f441c0, 16 bytes, __data
    Singleton<render::ShaderManager<render::PixelShader>>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f44370, 8 bytes, __data
    Singleton<graphics::VectorFontLoader>::m_pSingleton = 0;

    // 0x100f44ad0, 16 bytes, __data
    Singleton<render::BuiltinStates>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f453f8, 8 bytes, __data
    Singleton<DebugPrimitiveRendererBasic>::m_pSingleton = 0;

    // 0x100f460e8, 8 bytes, __data
    Singleton<PrimitiveShaderFamily>::m_pSingleton = 0;

    // 0x100f48548, 8 bytes, __data
    Singleton<testframework::TestRunner>::m_pSingleton = 0;

    // 0x100f48918, 8 bytes, __data
    Singleton<render::ShaderManager<render::ComputeShader>>::m_pSingleton = 0;

    // 0x100f48928, 8 bytes, __data
    Singleton<render::VAOManager>::m_pSingleton = 0;

    // 0x10017b300, 80 bytes, inline, placed by class name and debug map
    // SecureRandom* Singleton<SecureRandom>::Create<>()
    SecureRandom* Singleton<SecureRandom>::Create<>() {
        SecureRandom* pSVar2;

        if (InstancePtr() == 0) {
            pSVar2 = operator_new(320);
            SecureRandom::SecureRandom(pSVar2);
        }
        pSVar2 = (SecureRandom*)InstancePtr();
        return pSVar2;
    }

    // 0x10017b350, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> > >::type make_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >, int>(int&&)
    /* shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char,
   BucketAllocatorEASTL> > >::type make_shared<oldscape::PacketJ<Array<unsigned
   char, BucketAllocatorEASTL> >, int&>(int&) */

    jag* make_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        PacketJ* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>,
                                   int, oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10017b440, 16 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p8<unsigned long long>(unsigned long long)
    /* void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p8<long long>(long
   long) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, longlong param_1) {
        pT<long long>(this, param_1);
    }

    // 0x10017b450, 288 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::chunkRsaEncrypt(math::BigInteger const&, math::BigInteger const&)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::chunkRsaEncrypt(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, BigInteger* param_1, BigInteger* param_2) {
        int iVar1;
        uchar* puVar2;
        ulong uVar3;
        BigInteger local_58[3];
        BigInteger local_40;
        BigInteger local_38;

        iVar1 = param_2->GetByteSize();
        if (iVar1 <= *(int*)(this + 24)) {
            /* WARNING: Subroutine does not return */
            LogAssert("rsan.GetByteSize() > (int)m_pos",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      405, (char*)0);
        }
        puVar2 = (uchar*)data();
        new (&local_40) math::BigInteger(puVar2, *(ulong*)(this + 24));
        local_38.PowMod(&local_40, param_1);
        local_58->Get();
        SetPos(this, 0);
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        p2<int>(this, iVar1);
        puVar2 = (uchar*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        pArrayBuffer(this, puVar2, 0, uVar3);
        local_58->~basic_string();
        local_38.~BigInteger();
        local_40.~BigInteger();
    }

    // 0x10017b570, 256 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p6<long long>(long long)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p6<long long>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, longlong param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 6U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 6 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      163, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((ulong)param_1 >> 40);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((ulong)param_1 >> 32);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((ulong)param_1 >> 24);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((ulong)param_1 >> 16);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((ulong)param_1 >> 8);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)param_1;
    }

    // 0x10017b6b0, 80 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pStringUTF8ToCP1252<eastl::string >(eastl::string const&, bool)
    /* void PacketT<Array<unsigned char, BucketAllocatorEASTL>
   >::pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>
   >(eastl::basic_string<char, BucketAllocatorEASTL> const&, bool) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
        eastl::basic_string<char, BucketAllocatorEASTL>>(PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this,
                                                         basic_string* param_1, bool param_2) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        pStringUTF8ToCP1252(this, pcVar1, uVar2, param_2);
    }

    // 0x10017b700, 80 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::SetPos(unsigned long)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::SetPos(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, ulong param_1) {
        ulong uVar1;

        uVar1 = end();
        if (uVar1 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("_pos <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 176,
                      "Packet: Invalid pos");
        }
        *(ulong*)(this + 24) = param_1;
    }

    // 0x10017b750, 336 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::tinyKeyEncrypt(std::array<int, 4ul> const&, unsigned long, unsigned long)
    /* PacketT<Array<unsigned char, BucketAllocatorEASTL>
   >::tinyKeyEncrypt(std::array<int, 4ul> const&, unsigned long, unsigned long) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::tinyKeyEncrypt(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, array* param_1, ulong param_2, ulong param_3) {
        undefined8 uVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        ulong uVar5;
        int* piVar6;
        ulong uVar7;
        uint uVar8;

        uVar1 = *(undefined8*)(this + 24);
        *(ulong*)(this + 24) = param_2;
        if (7 < param_3 - param_2) {
            uVar7 = param_3 - param_2 >> 3;
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
                    piVar6 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, (ulong)(uVar8 & 3));
                    uVar2 = uVar2 + (*piVar6 + uVar8 ^ (uVar3 >> 5 ^ uVar3 << 4) + uVar3);
                    piVar6 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1,
                                                                    (ulong)(uVar8 + 2654435769 >> 11 & 3));
                    uVar3 = (*piVar6 + uVar8 + 2654435769 ^ (uVar2 >> 5 ^ uVar2 * 16) + uVar2) + uVar3;
                    iVar4 = iVar4 + 1;
                    uVar8 = uVar8 + 2654435769;
                } while (iVar4 != 0);
                *(long*)(this + 24) = *(long*)(this + 24) + -8;
                p4<int>(this, uVar2);
                p4<int>(this, uVar3);
                uVar7 = uVar7 + 1;
            } while (uVar7 != uVar5);
        }
        *(undefined8*)(this + 24) = uVar1;
    }

    // 0x10017b8a0, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::GetSize() const
    /* graphics::TextureAtlasReference::GetTextureAtlas() const */

    void graphics::TextureAtlasReference::GetTextureAtlas() {
        end();
    }

    // 0x10017b8b0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> > >::type make_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >, unsigned long>(unsigned long&&)
    jag*
    jag::make_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, unsigned long>(ulong* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        PacketJ* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, unsigned long>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>,
                                   int, oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10017b950, 224 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pArrayBuffer(unsigned char const*, unsigned long, unsigned long)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pArrayBuffer(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, uchar* param_1, ulong param_2, ulong param_3) {
        ulong uVar1;
        long lVar2;
        ulong* puVar3;
        void* pvVar4;
        ulong local_38;
        ulong local_30;

        if (param_3 != 0) {
            lVar2 = *(long*)(this + 24);
            local_30 = param_3;
            uVar1 = end();
            if (uVar1 < param_3 + lVar2) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_pos + size <= m_data.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 325,
                    (char*)0);
            }
            if (param_1 == (uchar*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "val != nullptr",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 326,
                    (char*)0);
            }
            lVar2 = end();
            uVar1 = *(ulong*)(this + 24);
            local_38 = lVar2 - uVar1;
            puVar3 = std::min<unsigned long>(&local_30, &local_38);
            local_30 = *puVar3;
            pvVar4 = (void*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
            _memcpy(pvVar4, param_1 + param_2, local_30);
            *(ulong*)(this + 24) = *(long*)(this + 24) + local_30;
        }
    }

    // 0x10017ba30, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::GetDataPtr()
    /* PacketT<Array<unsigned char, eastl::allocator> >::GetDataPtr() */

    void
    PacketT<Array<unsigned char, eastl::allocator>>::GetDataPtr(PacketT<Array<unsigned char, eastl::allocator>>* this) {
        data();
    }

    // 0x10017ba40, 16 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p2<unsigned long>(unsigned long)
    /* void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p2<int>(int) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        pT<short>(this, (short)param_1);
    }

    // 0x100189b90, 16 bytes, inline, placed by class name
    // Singleton<hardware::HardwareInfo>::InstancePtr()
    void Singleton<hardware::HardwareInfo>::InstancePtr() {
        std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::get();
    }

    // 0x100189ba0, 64 bytes, inline, placed by class name
    // Singleton<hardware::HardwareInfo>::Instance()
    void Singleton<hardware::HardwareInfo>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c60);
        }
        std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::operator*(
            (unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>*)this);
    }

    // 0x1001a62a0, 16 bytes, inline, placed by class name
    // Singleton<SecureRandom>::InstancePtr()
    void Singleton<SecureRandom>::InstancePtr() {
        std::unique_ptr<SecureRandom, std::default_delete<SecureRandom>>::get();
    }

    // 0x1003a2810, 16 bytes, inline, placed by class name
    // Singleton<render::RenderDevice>::InstancePtr()
    void Singleton<render::RenderDevice>::InstancePtr() {
        std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::get();
    }

    // 0x1003a2820, 64 bytes, inline, placed by class name
    // Singleton<render::RenderDevice>::Instance()
    void Singleton<render::RenderDevice>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c10);
        }
        std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::operator*(
            (unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>*)this);
    }

    // 0x1003aa410, 64 bytes, inline, placed by class name
    // Singleton<SecureRandom>::Instance()
    void Singleton<SecureRandom>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6bd0);
        }
        std::unique_ptr<SecureRandom, std::default_delete<SecureRandom>>::operator*(
            (unique_ptr<SecureRandom, std::default_delete<SecureRandom>>*)this);
    }

    // 0x1003aa600, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<SecureRandom>::Singleton()
    void Singleton<SecureRandom>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6bd0->reset(this);
    }

    // 0x10042ee00, 64 bytes, inline, placed by class name
    // Singleton<graphics::ModelUpdateManager>::Instance()
    void Singleton<graphics::ModelUpdateManager>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c58);
        }
        std::unique_ptr<graphics::ModelUpdateManager, std::default_delete<graphics::ModelUpdateManager>>::operator*(
            (unique_ptr<graphics::ModelUpdateManager, std::default_delete<graphics::ModelUpdateManager>>*)this);
    }

    // 0x1004692d0, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<game::ServerSyncing>::Singleton()
    void Singleton<game::ServerSyncing>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c00->reset(this);
    }

    // 0x10046ade0, 64 bytes, inline, placed by class name
    // Singleton<game::ServerSyncing>::Instance()
    void Singleton<game::ServerSyncing>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c00);
        }
        std::unique_ptr<game::ServerSyncing, std::default_delete<game::ServerSyncing>>::operator*(
            (unique_ptr<game::ServerSyncing, std::default_delete<game::ServerSyncing>>*)this);
    }

    // 0x100565370, 32 bytes, inline, placed by class name
    // Singleton<game::ServerSyncing>::Destroy()
    void Singleton<game::ServerSyncing>::Destroy() {
        default_delete<game::ServerSyncing>* this_00;
        ServerSyncing* in_RSI;

        this_00 = (default_delete<game::ServerSyncing>*)
            std::unique_ptr<game::ServerSyncing, std::default_delete<game::ServerSyncing>>::get();
        std::default_delete<game::ServerSyncing>::operator()(this_00, in_RSI);
        std::unique_ptr<game::ServerSyncing, std::default_delete<game::ServerSyncing>>::release();
    }

    // 0x1005653e0, 80 bytes, inline, placed by class name
    // game::ServerSyncing* Singleton<game::ServerSyncing>::Create<>()
    ServerSyncing* Singleton<game::ServerSyncing>::Create<>() {
        ServerSyncing* pSVar2;

        if (InstancePtr() == 0) {
            pSVar2 = operator_new(56584);
            game::ServerSyncing::ServerSyncing(pSVar2);
        }
        pSVar2 = (ServerSyncing*)InstancePtr();
        return pSVar2;
    }

    // 0x1005708e0, 16 bytes, inline, placed by class name
    // Singleton<game::ServerSyncing>::InstancePtr()
    void Singleton<game::ServerSyncing>::InstancePtr() {
        std::unique_ptr<game::ServerSyncing, std::default_delete<game::ServerSyncing>>::get();
    }

    // 0x1005f8380, 16 bytes, inline, placed by class name
    // Singleton<game::SoundManager>::InstancePtr()
    void Singleton<game::SoundManager>::InstancePtr() {
        std::unique_ptr<game::SoundManager, std::default_delete<game::SoundManager>>::get();
    }

    // 0x100662d50, 64 bytes, inline, placed by class name
    // Singleton<game::SoundManager>::Instance()
    void Singleton<game::SoundManager>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6bf8);
        }
        std::unique_ptr<game::SoundManager, std::default_delete<game::SoundManager>>::operator*(
            (unique_ptr<game::SoundManager, std::default_delete<game::SoundManager>>*)this);
    }

    // 0x100663670, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<game::SoundManager>::Singleton()
    void Singleton<game::SoundManager>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6bf8->reset(this);
    }

    // 0x1008e5fc0, 64 bytes, inline, placed by class name
    // Singleton<graphics::VectorFontLoader>::Instance()
    void Singleton<graphics::VectorFontLoader>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c50);
        }
        std::unique_ptr<graphics::VectorFontLoader, std::default_delete<graphics::VectorFontLoader>>::operator*(
            (unique_ptr<graphics::VectorFontLoader, std::default_delete<graphics::VectorFontLoader>>*)this);
    }

    // 0x100930d00, 64 bytes, inline, placed by class name
    // Singleton<render::VertexDeclarationManager>::Instance()
    void Singleton<render::VertexDeclarationManager>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c40);
        }
        std::unique_ptr<render::VertexDeclarationManager, std::default_delete<render::VertexDeclarationManager>>::
        operator*(
            (unique_ptr<render::VertexDeclarationManager, std::default_delete<render::VertexDeclarationManager>>*)this);
    }

    // 0x100934750, 64 bytes, inline, placed by class name
    // Singleton<render::ShaderProgramManager>::Instance()
    void Singleton<render::ShaderProgramManager>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c38);
        }
        std::unique_ptr<render::ShaderProgramManager, std::default_delete<render::ShaderProgramManager>>::operator*(
            (unique_ptr<render::ShaderProgramManager, std::default_delete<render::ShaderProgramManager>>*)this);
    }

    // 0x10097ed80, 80 bytes, inline, placed by class name
    // graphics::AnimationManager* Singleton<graphics::AnimationManager>::Create<>()
    AnimationManager* Singleton<graphics::AnimationManager>::Create<>() {
        AnimationManager* pAVar2;

        if (InstancePtr() == 0) {
            pAVar2 = operator_new(8);
            graphics::AnimationManager::AnimationManager(pAVar2);
        }
        pAVar2 = (AnimationManager*)InstancePtr();
        return pAVar2;
    }

    // 0x10097edd0, 64 bytes, inline, placed by class name
    // Singleton<graphics::AnimationManager>::Instance()
    void Singleton<graphics::AnimationManager>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c48);
        }
        std::unique_ptr<graphics::AnimationManager, std::default_delete<graphics::AnimationManager>>::operator*(
            (unique_ptr<graphics::AnimationManager, std::default_delete<graphics::AnimationManager>>*)this);
    }

    // 0x100980460, 32 bytes, inline, placed by class name
    // Singleton<graphics::AnimationManager>::Destroy()
    void Singleton<graphics::AnimationManager>::Destroy() {
        default_delete<graphics::AnimationManager>* this_00;
        AnimationManager* in_RSI;

        this_00 = (default_delete<graphics::AnimationManager>*)
            std::unique_ptr<graphics::AnimationManager, std::default_delete<graphics::AnimationManager>>::get();
        std::default_delete<graphics::AnimationManager>::operator()(this_00, in_RSI);
        std::unique_ptr<graphics::AnimationManager, std::default_delete<graphics::AnimationManager>>::release();
    }

    // 0x100989760, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<graphics::AnimationManager>::Singleton()
    void Singleton<graphics::AnimationManager>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c48->reset(this);
    }

    // 0x10099b980, 16 bytes, inline, placed by class name
    // Singleton<graphics::AnimationManager>::InstancePtr()
    void Singleton<graphics::AnimationManager>::InstancePtr() {
        std::unique_ptr<graphics::AnimationManager, std::default_delete<graphics::AnimationManager>>::get();
    }

    // 0x1009c9200, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<DebugPrimitiveRendererBasic>::Singleton()
    void Singleton<DebugPrimitiveRendererBasic>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6bf0->reset(this);
    }

    // 0x100b03990, 80 bytes, inline, placed by class name
    // hardware::HardwareInfo* Singleton<hardware::HardwareInfo>::Create<>()
    HardwareInfo* Singleton<hardware::HardwareInfo>::Create<>() {
        HardwareInfo* pHVar2;

        if (InstancePtr() == 0) {
            pHVar2 = operator_new(280);
            hardware::HardwareInfo::HardwareInfo(pHVar2);
        }
        pHVar2 = (HardwareInfo*)InstancePtr();
        return pHVar2;
    }

    // 0x100b039e0, 80 bytes, inline, placed by class name
    // render::RenderDevice* Singleton<render::RenderDevice>::Create<>()
    RenderDevice* Singleton<render::RenderDevice>::Create<>() {
        RenderDevice* pRVar2;

        if (InstancePtr() == 0) {
            pRVar2 = operator_new(62238400);
            render::RenderDevice::RenderDevice(pRVar2);
        }
        pRVar2 = (RenderDevice*)InstancePtr();
        return pRVar2;
    }

    // 0x100b03a30, 112 bytes, inline, placed by class name
    // graphicutils::Screengrabber* Singleton<graphicutils::Screengrabber>::Create<>()
    Screengrabber* Singleton<graphicutils::Screengrabber>::Create<>() {
        Screengrabber* pSVar2;

        if (InstancePtr() == 0) {
            pSVar2 = operator_new(104);
            pSVar2->field_0 = (pair*)0;
            pSVar2->field_8 = (pair*)0;
            *(undefined8*)&pSVar2->field_16 = 0;
            *(undefined8*)&pSVar2->field_24 = 0;
            *(undefined8*)&pSVar2->m_screenshotSaveMode = 0;
            *(undefined8*)&pSVar2->field_40 = 0;
            *(undefined8*)&pSVar2->field_48 = 0;
            *(undefined8*)&pSVar2->field_56 = 0;
            *(undefined8*)&pSVar2->field_64 = 0;
            *(undefined8*)&pSVar2->field_72 = 0;
            *(undefined8*)&pSVar2->field_80 = 0;
            *(undefined8*)&pSVar2->field_88 = 0;
            *(undefined8*)&pSVar2->field_96 = 0;
            graphicutils::Screengrabber::Screengrabber(pSVar2);
        }
        pSVar2 = (Screengrabber*)InstancePtr();
        return pSVar2;
    }

    // 0x100b03ca0, 32 bytes, inline, placed by class name
    // Singleton<render::RenderDevice>::Destroy()
    void Singleton<render::RenderDevice>::Destroy() {
        default_delete<render::RenderDevice>* this_00;
        RenderDevice* in_RSI;

        this_00 = (default_delete<render::RenderDevice>*)
            std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::get();
        std::default_delete<render::RenderDevice>::operator()(this_00, in_RSI);
        std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::release();
    }

    // 0x100b03cc0, 32 bytes, inline, placed by class name
    // Singleton<hardware::HardwareInfo>::Destroy()
    void Singleton<hardware::HardwareInfo>::Destroy() {
        default_delete<hardware::HardwareInfo>* this_00;
        HardwareInfo* in_RSI;

        this_00 = (default_delete<hardware::HardwareInfo>*)
            std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::get();
        std::default_delete<hardware::HardwareInfo>::operator()(this_00, in_RSI);
        std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::release();
    }

    // 0x100b03ce0, 32 bytes, inline, placed by class name
    // Singleton<graphicutils::Screengrabber>::Destroy()
    void Singleton<graphicutils::Screengrabber>::Destroy() {
        default_delete<graphicutils::Screengrabber>* this_00;
        Screengrabber* in_RSI;

        this_00 = (default_delete<graphicutils::Screengrabber>*)
            std::unique_ptr<graphicutils::Screengrabber, std::default_delete<graphicutils::Screengrabber>>::get();
        std::default_delete<graphicutils::Screengrabber>::operator()(this_00, in_RSI);
        std::unique_ptr<graphicutils::Screengrabber, std::default_delete<graphicutils::Screengrabber>>::release();
    }

    // 0x100b04320, 80 bytes, inline, placed by class name
    // PrimitiveShaderFamily* Singleton<PrimitiveShaderFamily>::Create<>()
    PrimitiveShaderFamily* Singleton<PrimitiveShaderFamily>::Create<>() {
        PrimitiveShaderFamily* pPVar2;

        if (InstancePtr() == 0) {
            pPVar2 = operator_new(33424);
            PrimitiveShaderFamily::PrimitiveShaderFamily(pPVar2);
        }
        pPVar2 = (PrimitiveShaderFamily*)InstancePtr();
        return pPVar2;
    }

    // 0x100b046f0, 32 bytes, inline, placed by class name
    // Singleton<PrimitiveShaderFamily>::Destroy()
    void Singleton<PrimitiveShaderFamily>::Destroy() {
        default_delete<PrimitiveShaderFamily>* this_00;
        PrimitiveShaderFamily* in_RSI;

        this_00 = (default_delete<PrimitiveShaderFamily>*)
            std::unique_ptr<PrimitiveShaderFamily, std::default_delete<PrimitiveShaderFamily>>::get();
        std::default_delete<PrimitiveShaderFamily>::operator()(this_00, in_RSI);
        std::unique_ptr<PrimitiveShaderFamily, std::default_delete<PrimitiveShaderFamily>>::release();
    }

    // 0x100b04f20, 64 bytes, inline, placed by class name
    // Singleton<graphicutils::Screengrabber>::Instance()
    void Singleton<graphicutils::Screengrabber>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6bd8);
        }
        std::unique_ptr<graphicutils::Screengrabber, std::default_delete<graphicutils::Screengrabber>>::operator*(
            (unique_ptr<graphicutils::Screengrabber, std::default_delete<graphicutils::Screengrabber>>*)this);
    }

    // 0x100b07a60, 16 bytes, inline, placed by class name
    // Singleton<graphicutils::Screengrabber>::InstancePtr()
    void Singleton<graphicutils::Screengrabber>::InstancePtr() {
        std::unique_ptr<graphicutils::Screengrabber, std::default_delete<graphicutils::Screengrabber>>::get();
    }

    // 0x100b07b00, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<graphicutils::Screengrabber>::Singleton()
    void Singleton<graphicutils::Screengrabber>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6bd8->reset(this);
    }

    // 0x100b08230, 16 bytes, inline, placed by class name
    // Singleton<PrimitiveShaderFamily>::InstancePtr()
    void Singleton<PrimitiveShaderFamily>::InstancePtr() {
        std::unique_ptr<PrimitiveShaderFamily, std::default_delete<PrimitiveShaderFamily>>::get();
    }

    // 0x100ba9490, 64 bytes, inline, placed by class name
    // Singleton<testframework::TestRunner>::Instance()
    void Singleton<testframework::TestRunner>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6be0);
        }
        std::unique_ptr<testframework::TestRunner, std::default_delete<testframework::TestRunner>>::operator*(
            (unique_ptr<testframework::TestRunner, std::default_delete<testframework::TestRunner>>*)this);
    }

    // 0x100bb8800, 64 bytes, inline, placed by class name
    // Singleton<PrimitiveShaderFamily>::Instance()
    void Singleton<PrimitiveShaderFamily>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6be8);
        }
        std::unique_ptr<PrimitiveShaderFamily, std::default_delete<PrimitiveShaderFamily>>::operator*(
            (unique_ptr<PrimitiveShaderFamily, std::default_delete<PrimitiveShaderFamily>>*)this);
    }

    // 0x100bc0f50, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<PrimitiveShaderFamily>::Singleton()
    void Singleton<PrimitiveShaderFamily>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6be8->reset(this);
    }

    // 0x100bc6c50, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<render::VAOManager>::Singleton()
    void Singleton<render::VAOManager>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c08->reset(this);
    }

    // 0x100bdcb10, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<render::RenderDevice>::Singleton()
    void Singleton<render::RenderDevice>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c10->reset(this);
    }

    // 0x100bdd030, 80 bytes, inline, placed by class name
    // render::BuiltinStates* Singleton<render::BuiltinStates>::Create<>()
    BuiltinStates* Singleton<render::BuiltinStates>::Create<>() {
        BuiltinStates* pBVar2;

        if (InstancePtr() == 0) {
            pBVar2 = operator_new(2672);
            render::BuiltinStates::BuiltinStates(pBVar2);
        }
        pBVar2 = (BuiltinStates*)InstancePtr();
        return pBVar2;
    }

    // 0x100bef4c0, 64 bytes, inline, placed by class name
    // Singleton<render::ShaderManager<render::VertexShader> >::Instance()
    void Singleton<render::ShaderManager<render::VertexShader>>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c28);
        }
        std::unique_ptr<render::ShaderManager<render::VertexShader>,
                        std::default_delete<render::ShaderManager<render::VertexShader>>>::
        operator*((unique_ptr<render::ShaderManager<render::VertexShader>,
                              std::default_delete<render::ShaderManager<render::VertexShader>>>*)this);
    }

    // 0x100bef680, 64 bytes, inline, placed by class name
    // Singleton<render::ShaderManager<render::PixelShader> >::Instance()
    void Singleton<render::ShaderManager<render::PixelShader>>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c20);
        }
        std::unique_ptr<render::ShaderManager<render::PixelShader>,
                        std::default_delete<render::ShaderManager<render::PixelShader>>>::
        operator*((unique_ptr<render::ShaderManager<render::PixelShader>,
                              std::default_delete<render::ShaderManager<render::PixelShader>>>*)this);
    }

    // 0x100bef840, 64 bytes, inline, placed by class name
    // Singleton<render::ShaderManager<render::ComputeShader> >::Instance()
    void Singleton<render::ShaderManager<render::ComputeShader>>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c30);
        }
        std::unique_ptr<render::ShaderManager<render::ComputeShader>,
                        std::default_delete<render::ShaderManager<render::ComputeShader>>>::
        operator*((unique_ptr<render::ShaderManager<render::ComputeShader>,
                              std::default_delete<render::ShaderManager<render::ComputeShader>>>*)this);
    }

    // 0x100bf36e0, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<render::BuiltinStates>::Singleton()
    void Singleton<render::BuiltinStates>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c18->reset(this);
    }

    // 0x100bf9a60, 16 bytes, inline, placed by class name
    // Singleton<render::BuiltinStates>::InstancePtr()
    void Singleton<render::BuiltinStates>::InstancePtr() {
        std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::get();
    }

    // 0x100c0c9c0, 80 bytes, inline, placed by class name
    // render::ShaderManager<render::VertexShader>* Singleton<render::ShaderManager<render::VertexShader> >::Create<unsigned int const&>(unsigned int const&)
    ShaderManager* Singleton<render::ShaderManager<render::VertexShader>>::Create<unsigned int const&>(uint* param_1) {
        ShaderManager<render::VertexShader>* this;

        if (InstancePtr() == 0) {
            this = operator_new(104);
            render::ShaderManager<render::VertexShader>::ShaderManager(this, *param_1);
        }
        return (ShaderManager*)InstancePtr();
    }

    // 0x100c0ca10, 80 bytes, inline, placed by class name
    // render::ShaderManager<render::PixelShader>* Singleton<render::ShaderManager<render::PixelShader> >::Create<unsigned int const&>(unsigned int const&)
    ShaderManager* Singleton<render::ShaderManager<render::PixelShader>>::Create<unsigned int const&>(uint* param_1) {
        ShaderManager<render::PixelShader>* this;

        if (InstancePtr() == 0) {
            this = operator_new(104);
            render::ShaderManager<render::PixelShader>::ShaderManager(this, *param_1);
        }
        return (ShaderManager*)InstancePtr();
    }

    // 0x100c0ca60, 80 bytes, inline, placed by class name
    // render::ShaderManager<render::ComputeShader>* Singleton<render::ShaderManager<render::ComputeShader> >::Create<unsigned int const&>(unsigned int const&)
    ShaderManager* Singleton<render::ShaderManager<render::ComputeShader>>::Create<unsigned int const&>(uint* param_1) {
        ShaderManager<render::ComputeShader>* this;

        if (InstancePtr() == 0) {
            this = operator_new(104);
            render::ShaderManager<render::ComputeShader>::ShaderManager(this, *param_1);
        }
        return (ShaderManager*)InstancePtr();
    }

    // 0x100c0cab0, 80 bytes, inline, placed by class name
    // render::ShaderProgramManager* Singleton<render::ShaderProgramManager>::Create<unsigned int const&>(unsigned int const&)
    ShaderProgramManager* Singleton<render::ShaderProgramManager>::Create<unsigned int const&>(uint* param_1) {
        ShaderProgramManager* pSVar2;

        if (InstancePtr() == 0) {
            pSVar2 = operator_new(112);
            render::ShaderProgramManager::ShaderProgramManager(pSVar2, *param_1);
        }
        pSVar2 = (ShaderProgramManager*)InstancePtr();
        return pSVar2;
    }

    // 0x100c0cb00, 80 bytes, inline, placed by class name
    // render::VertexDeclarationManager* Singleton<render::VertexDeclarationManager>::Create<unsigned int const&>(unsigned int const&)
    VertexDeclarationManager* Singleton<render::VertexDeclarationManager>::Create<unsigned int const&>(uint* param_1) {
        VertexDeclarationManager* pVVar2;

        if (InstancePtr() == 0) {
            pVVar2 = operator_new(48);
            render::VertexDeclarationManager::VertexDeclarationManager(pVVar2, *param_1);
        }
        pVVar2 = (VertexDeclarationManager*)InstancePtr();
        return pVVar2;
    }

    // 0x100c0cb50, 80 bytes, inline, placed by class name
    // render::VAOManager* Singleton<render::VAOManager>::Create<>()
    VAOManager* Singleton<render::VAOManager>::Create<>() {
        VAOManager* pVVar2;

        if (InstancePtr() == 0) {
            pVVar2 = operator_new(1016456);
            render::VAOManager::VAOManager(pVVar2);
        }
        pVVar2 = (VAOManager*)InstancePtr();
        return pVVar2;
    }

    // 0x100c0cbd0, 32 bytes, inline, placed by class name
    // Singleton<render::VAOManager>::Destroy()
    void Singleton<render::VAOManager>::Destroy() {
        default_delete<render::VAOManager>* this_00;
        VAOManager* in_RSI;

        this_00 = (default_delete<render::VAOManager>*)
            std::unique_ptr<render::VAOManager, std::default_delete<render::VAOManager>>::get();
        std::default_delete<render::VAOManager>::operator()(this_00, in_RSI);
        std::unique_ptr<render::VAOManager, std::default_delete<render::VAOManager>>::release();
    }

    // 0x100c0cbf0, 32 bytes, inline, placed by class name
    // Singleton<render::VertexDeclarationManager>::Destroy()
    void Singleton<render::VertexDeclarationManager>::Destroy() {
        default_delete<render::VertexDeclarationManager>* this_00;
        VertexDeclarationManager* in_RSI;

        this_00 = (default_delete<render::VertexDeclarationManager>*)std::unique_ptr<
            render::VertexDeclarationManager, std::default_delete<render::VertexDeclarationManager>>::get();
        std::default_delete<render::VertexDeclarationManager>::operator()(this_00, in_RSI);
        std::unique_ptr<render::VertexDeclarationManager,
                        std::default_delete<render::VertexDeclarationManager>>::release();
    }

    // 0x100c0cc10, 32 bytes, inline, placed by class name
    // Singleton<render::ShaderProgramManager>::Destroy()
    void Singleton<render::ShaderProgramManager>::Destroy() {
        default_delete<render::ShaderProgramManager>* this_00;
        ShaderProgramManager* in_RSI;

        this_00 = (default_delete<render::ShaderProgramManager>*)
            std::unique_ptr<render::ShaderProgramManager, std::default_delete<render::ShaderProgramManager>>::get();
        std::default_delete<render::ShaderProgramManager>::operator()(this_00, in_RSI);
        std::unique_ptr<render::ShaderProgramManager, std::default_delete<render::ShaderProgramManager>>::release();
    }

    // 0x100c0cc30, 32 bytes, inline, placed by class name
    // Singleton<render::ShaderManager<render::PixelShader> >::Destroy()
    void Singleton<render::ShaderManager<render::PixelShader>>::Destroy() {
        default_delete<render::ShaderManager<render::PixelShader>>* this_00;
        ShaderManager* in_RSI;

        this_00 = (default_delete<render::ShaderManager<render::PixelShader>>*)
            std::unique_ptr<render::ShaderManager<render::PixelShader>,
                            std::default_delete<render::ShaderManager<render::PixelShader>>>::get();
        std::default_delete<render::ShaderManager<render::PixelShader>>::operator()(this_00, in_RSI);
        std::unique_ptr<render::ShaderManager<render::PixelShader>,
                        std::default_delete<render::ShaderManager<render::PixelShader>>>::release();
    }

    // 0x100c0cc50, 32 bytes, inline, placed by class name
    // Singleton<render::ShaderManager<render::ComputeShader> >::Destroy()
    void Singleton<render::ShaderManager<render::ComputeShader>>::Destroy() {
        default_delete<render::ShaderManager<render::ComputeShader>>* this_00;
        ShaderManager* in_RSI;

        this_00 = (default_delete<render::ShaderManager<render::ComputeShader>>*)
            std::unique_ptr<render::ShaderManager<render::ComputeShader>,
                            std::default_delete<render::ShaderManager<render::ComputeShader>>>::get();
        std::default_delete<render::ShaderManager<render::ComputeShader>>::operator()(this_00, in_RSI);
        std::unique_ptr<render::ShaderManager<render::ComputeShader>,
                        std::default_delete<render::ShaderManager<render::ComputeShader>>>::release();
    }

    // 0x100c0cc70, 32 bytes, inline, placed by class name
    // Singleton<render::ShaderManager<render::VertexShader> >::Destroy()
    void Singleton<render::ShaderManager<render::VertexShader>>::Destroy() {
        default_delete<render::ShaderManager<render::VertexShader>>* this_00;
        ShaderManager* in_RSI;

        this_00 = (default_delete<render::ShaderManager<render::VertexShader>>*)
            std::unique_ptr<render::ShaderManager<render::VertexShader>,
                            std::default_delete<render::ShaderManager<render::VertexShader>>>::get();
        std::default_delete<render::ShaderManager<render::VertexShader>>::operator()(this_00, in_RSI);
        std::unique_ptr<render::ShaderManager<render::VertexShader>,
                        std::default_delete<render::ShaderManager<render::VertexShader>>>::release();
    }

    // 0x100c14a20, 64 bytes, inline, placed by class name
    // Singleton<render::VAOManager>::Instance()
    void Singleton<render::VAOManager>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c08);
        }
        std::unique_ptr<render::VAOManager, std::default_delete<render::VAOManager>>::operator*(
            (unique_ptr<render::VAOManager, std::default_delete<render::VAOManager>>*)this);
    }

    // 0x100c16c70, 64 bytes, inline, placed by class name
    // Singleton<render::BuiltinStates>::Instance()
    void Singleton<render::BuiltinStates>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (!std::operator!=((unique_ptr*)this, in_RSI)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSingleton != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 25,
                      "No singleton at %p\n", PTR_m_pSingleton_100ee6c18);
        }
        std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::operator*(
            (unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>*)this);
    }

    // 0x100c2b780, 32 bytes, inline, placed by class name
    // Singleton<render::BuiltinStates>::Destroy()
    void Singleton<render::BuiltinStates>::Destroy() {
        default_delete<render::BuiltinStates>* this_00;
        BuiltinStates* in_RSI;

        this_00 = (default_delete<render::BuiltinStates>*)
            std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::get();
        std::default_delete<render::BuiltinStates>::operator()(this_00, in_RSI);
        std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::release();
    }

    // 0x100c37da0, 16 bytes, inline, placed by class name
    // Singleton<render::ShaderManager<render::VertexShader> >::InstancePtr()
    void Singleton<render::ShaderManager<render::VertexShader>>::InstancePtr() {
        std::unique_ptr<render::ShaderManager<render::VertexShader>,
                        std::default_delete<render::ShaderManager<render::VertexShader>>>::get();
    }

    // 0x100c37e10, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<render::ShaderManager<render::VertexShader> >::Singleton()
    void Singleton<render::ShaderManager<render::VertexShader>>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c28->reset(this);
    }

    // 0x100c382d0, 16 bytes, inline, placed by class name
    // Singleton<render::ShaderManager<render::PixelShader> >::InstancePtr()
    void Singleton<render::ShaderManager<render::PixelShader>>::InstancePtr() {
        std::unique_ptr<render::ShaderManager<render::PixelShader>,
                        std::default_delete<render::ShaderManager<render::PixelShader>>>::get();
    }

    // 0x100c38340, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<render::ShaderManager<render::PixelShader> >::Singleton()
    void Singleton<render::ShaderManager<render::PixelShader>>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c20->reset(this);
    }

    // 0x100c38800, 16 bytes, inline, placed by class name
    // Singleton<render::ShaderManager<render::ComputeShader> >::InstancePtr()
    void Singleton<render::ShaderManager<render::ComputeShader>>::InstancePtr() {
        std::unique_ptr<render::ShaderManager<render::ComputeShader>,
                        std::default_delete<render::ShaderManager<render::ComputeShader>>>::get();
    }

    // 0x100c38870, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<render::ShaderManager<render::ComputeShader> >::Singleton()
    void Singleton<render::ShaderManager<render::ComputeShader>>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c30->reset(this);
    }

    // 0x100c38d30, 16 bytes, inline, placed by class name
    // Singleton<render::ShaderProgramManager>::InstancePtr()
    void Singleton<render::ShaderProgramManager>::InstancePtr() {
        std::unique_ptr<render::ShaderProgramManager, std::default_delete<render::ShaderProgramManager>>::get();
    }

    // 0x100c38db0, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<render::ShaderProgramManager>::Singleton()
    void Singleton<render::ShaderProgramManager>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c38->reset(this);
    }

    // 0x100c39210, 16 bytes, inline, placed by class name
    // Singleton<render::VertexDeclarationManager>::InstancePtr()
    void Singleton<render::VertexDeclarationManager>::InstancePtr() {
        std::unique_ptr<render::VertexDeclarationManager, std::default_delete<render::VertexDeclarationManager>>::get();
    }

    // 0x100c392b0, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<render::VertexDeclarationManager>::Singleton()
    void Singleton<render::VertexDeclarationManager>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c40->reset(this);
    }

    // 0x100c39590, 16 bytes, inline, placed by class name
    // Singleton<render::VAOManager>::InstancePtr()
    void Singleton<render::VAOManager>::InstancePtr() {
        std::unique_ptr<render::VAOManager, std::default_delete<render::VAOManager>>::get();
    }

    // 0x100c60110, 80 bytes, base-object constructor, inline, placed by class name
    // Singleton<hardware::HardwareInfo>::Singleton()
    void Singleton<hardware::HardwareInfo>::Singleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/Singleton.h", 15,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee6c60->reset(this);
    }

} // namespace jag
