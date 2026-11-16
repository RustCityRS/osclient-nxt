// libs/hal/network/ClientSocket.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class ClientSocket {
    public:
        GetRawAddress() const;
        bool IsOpen() const;
        Connect(char const*, Error*, int, int);
        ClientSocket* GetIPAddress() const;
        ClientSocket(unsigned int);
        void GlobalInit();
        void InitImpl();
        ~ClientSocket();
        Close(Error*);
        uint Connect(sock::AddressInfo const&, Error*, int, int);
        void SetErrorCode(Error*, int);
        Shutdown(int, Error*);
        long Read(unsigned char*, unsigned long, Error*) const;
        long Write(unsigned char const*, unsigned long, Error*) const;
        Available(Error*) const;
        void SetSocketRecvTimeOut(int);
        void SetSocketConnectTimeOut(int);

        // data members, from how the methods use this: 136 bytes
        int field_0; // offset 0
        int field_4; // offset 4
        int field_8; // offset 8
        char _unknown_12[116];
        char field_128;       // offset 128
        undefined1 field_129; // offset 129
        char _unknown_130[6];
    };

    // 0x1009f9a90, 32 bytes, inline, placed by class name and debug map
    // ClientSocket::IsOpen() const
    bool ClientSocket::IsOpen() {
        if (field_8 == -1) {
            return false;
        }
        return field_128 != '\0';
    }

    // 0x1009fbb10, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >* placement_new<PacketT<Array<unsigned char, eastl::allocator> >, int>(void*, int&&)
    /* PacketT<Array<unsigned char, eastl::allocator> >*
   placement_new<PacketT<Array<unsigned char, eastl::allocator> >, int&>(void*, int&)
    */

    PacketT* placement_new<PacketT<Array<unsigned char, eastl::allocator>>, int&>(void* param_1, int* param_2) {
        PacketT<Array<unsigned char, eastl::allocator>>::PacketT(param_1, (long)*param_2);
        return param_1;
    }

    // 0x1009fbb30, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::PacketT(PacketT<Array<unsigned char, eastl::allocator> >&&)
    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  PacketT* param_1) {
        new (this) Array<unsigned char, eastl::allocator>(param_1);
        *(undefined8*)(this + 24) = *(undefined8*)(param_1 + 24);
        *(undefined8*)(param_1 + 24) = 0;
    }

    // 0x1009fbc70, 144 bytes, inline, placed by debug map only (low confidence)
    // unsigned int PacketReaderMixin<PacketView>::gT<unsigned int>()
    uint PacketReaderMixin<PacketView>::gT<unsigned int>() {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        undefined8 uVar6;
        uint local_2c;

        lVar4 = end();
        lVar2 = *(long*)(this + 16);
        uVar1 = lVar2 + 4;
        *(ulong*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(undefined8*)(this + 16);
            uVar6 = HeapBeginPtr();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2c = *(uint*)(lVar4 + lVar2);
        ReorderToBE<int>((int*)&local_2c);
        return local_2c;
    }

    // 0x1009fbfe0, 752 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::ToString(int, int) const
    PacketT<Array<unsigned char, eastl::allocator>>*
    PacketT<Array<unsigned char, eastl::allocator>>::ToString(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                              int param_1, int param_2) {
        byte bVar1;
        uchar uVar2;
        undefined8 uVar3;
        TextureAtlasReference* this_00;
        char cVar4;
        undefined8 uVar6;
        ulong uVar7;
        byte* pbVar8;
        uchar* puVar9;
        int in_ECX;
        ulong uVar10;
        undefined4 in_register_00000034;
        char* pcVar11;
        ulong uVar12;
        eastl::string local_a8[36];
        uint local_84;
        TextureAtlasReference* local_80;
        fixed_string<char, 20, true, eastl::allocator> local_78[64];
        long local_38;

        local_80 = (TextureAtlasReference*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (local_80->GetTextureAtlas() == 0) {
            new (local_78) eastl::allocator("EASTL basic_string");
            new (this) eastl::string("{ Packet : empty }", local_78);
        } else {
            eastl::string::basic_string(local_a8);
            eastl::string::reserve(local_a8, 512);
            uVar3 = *(undefined8*)&local_80->field_24;
            uVar6 = local_80->end();
            eastl::string::sprintf((char*)local_a8, "{ Packet: pos=%llu/%llu:", uVar3, uVar6);
            if (0 < in_ECX) {
                local_84 = in_ECX + param_2;
                uVar7 = (ulong)(int)local_84;
                do {
                    this_00 = local_80;
                    uVar12 = (ulong)(uint)param_2;
                    pcVar11 = " ";
                    if (param_2 == *(uint*)&local_80->field_24) {
                        pcVar11 = "^";
                    }
                    eastl::string::operator+=(local_a8, pcVar11);
                    uVar10 = (ulong)param_2;
                    pbVar8 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)this_00, uVar10);
                    bVar1 = *pbVar8;
                    cVar4 = isVeryInterestingCharacter(bVar1);
                    if ((cVar4 == '\0') || ((int)local_84 <= (int)(param_2 + 2U))) {
                    LAB_1009fc1a0:
                        eastl::fixed_string<char, 20, true, eastl::allocator>::fixed_string(local_78);
                        eastl::basic_string<char,
                                            eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
                                                                          eastl::allocator>>::sprintf((char*)local_78,
                                                                                                      &DAT_100e2f3ea,
                                                                                                      (ulong)bVar1);
                        pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::string::operator+=(local_a8, pcVar11);
                        /* WARNING: Subroutine does not return */
                        local_78->~fixed_string();
                    }
                    puVar9 = (uchar*)Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)local_80, (long)(int)(param_2 + 1));
                    cVar4 = isInterestingCharacter(*puVar9);
                    if (cVar4 == '\0')
                        goto LAB_1009fc1a0;
                    puVar9 = (uchar*)Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)local_80, (long)(int)(param_2 + 2U));
                    cVar4 = isInterestingCharacter(*puVar9);
                    if (cVar4 == '\0')
                        goto LAB_1009fc1a0;
                    if (param_2 < (int)local_84) {
                        uVar12 = uVar10;
                        do {
                            puVar9 = (uchar*)Array<unsigned char, eastl::allocator>::operator[](
                                (Array<unsigned char, eastl::allocator>*)local_80, uVar12);
                            uVar2 = *puVar9;
                            cVar4 = isInterestingCharacter(uVar2);
                            if (cVar4 == '\0')
                                goto LAB_1009fc1f3;
                            if (((long)uVar10 < (long)uVar12) && ((int)uVar12 == *(int*)&local_80->field_24)) {
                                eastl::string::operator+=(local_a8, '^');
                            }
                            eastl::string::operator+=(local_a8, uVar2);
                            uVar12 = uVar12 + 1;
                        } while (uVar7 != uVar12);
                        param_2 = local_84;
                    } else {
                    LAB_1009fc1f3:
                        param_2 = (int)uVar12;
                    }
                } while (param_2 < (int)local_84);
            }
            pcVar11 = " ";
            if (param_2 == *(uint*)&local_80->field_24) {
                pcVar11 = "^";
            }
            eastl::string::operator+=(local_a8, pcVar11);
            eastl::string::operator+=(local_a8, "}");
            new (this) eastl::string(local_a8);
            eastl::string::~basic_string(local_a8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1009fc2d0, 48 bytes, inline, placed by debug map only (low confidence)
    // isVeryInterestingCharacter(unsigned char)
    bool isVeryInterestingCharacter(uchar param_1) {
        bool bVar1;

        bVar1 = true;
        if (25 < (byte)(param_1 + 159)) {
            bVar1 = (param_1 == '/' || param_1 == '\\') || (byte)(param_1 + 191) < 26;
        }
        return bVar1;
    }

    // 0x1009fc300, 48 bytes, inline, placed by debug map only (low confidence)
    // isInterestingCharacter(unsigned char)
    bool isInterestingCharacter(uchar param_1) {
        bool bVar1;

        bVar1 = true;
        if (25 < (byte)(param_1 + 159)) {
            bVar1 = (param_1 == '/' || param_1 == '\\') || (byte)(param_1 - 33) < 58;
        }
        return bVar1;
    }

    // 0x1009fe5b0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
   math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::basic_string<char,
   eastl::allocator>, bool)::$_1>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void
   ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
   math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::basic_string<char,
   eastl::allocator>, bool)::$_1>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void
   ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<Js5ResourceProvider::Js5ResourceProvider(
            Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
            math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(352, 4, 8);
    }

    // 0x1009fea70, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
   math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::basic_string<char,
   eastl::allocator>, bool)::$_1>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void
   ()> 
   >::deallocate(std::__packaged_task_func<std::__bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
   math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::basic_string<char,
   eastl::allocator>, bool)::$_1>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void
   ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<Js5ResourceProvider::Js5ResourceProvider(
            Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
            math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 352);
    }

    // 0x100a008c0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::PacketT()
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        new (this) Array<unsigned char, BucketAllocatorEASTL>();
        *(undefined8*)(this + 24) = 0;
    }

    // 0x100a00a70, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >* placement_new<PacketT<Array<unsigned char, eastl::allocator> >, unsigned int>(void*, unsigned int&&)
    /* PacketT<Array<unsigned char, eastl::allocator> >*
   placement_new<PacketT<Array<unsigned char, eastl::allocator> >, unsigned
   int&>(void*, unsigned int&) */

    PacketT* placement_new<PacketT<Array<unsigned char, eastl::allocator>>, unsigned int&>(void* param_1,
                                                                                           uint* param_2) {
        PacketT<Array<unsigned char, eastl::allocator>>::PacketT(param_1, (ulong)*param_2);
        return param_1;
    }

    // 0x100a00a90, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::PacketT(Array<unsigned char, eastl::allocator> const&)
    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  Array* param_1) {
        ulong uVar1;
        void* pvVar2;
        void* pvVar3;
        size_t sVar4;

        new (this) Array<unsigned char, eastl::allocator>();
        *(undefined8*)(this + 24) = 0;
        uVar1 = param_1->end();
        Reserve(this, uVar1);
        pvVar2 = (void*)data();
        pvVar3 = (void*)param_1->data();
        sVar4 = param_1->end();
        _memcpy(pvVar2, pvVar3, sVar4);
    }

    // 0x100a00b10, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::PacketT(Array<unsigned char, eastl::allocator>&&)
    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  Array* param_1) {
        new (this) Array<unsigned char, eastl::allocator>();
        *(undefined8*)(this + 24) = 0;
        eastl::swap<Array<unsigned char, eastl::allocator>>((Array*)this, param_1);
    }

    // 0x100a00bc0, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >* placement_new<PacketT<Array<unsigned char, eastl::allocator> >, Array<unsigned char, eastl::allocator> >(void*, Array<unsigned char, eastl::allocator>&&)
    PacketT*
    jag::placement_new<PacketT<Array<unsigned char, eastl::allocator>>, Array<unsigned char, eastl::allocator>>(
        void* param_1, Array* param_2) {
        PacketT<Array<unsigned char, eastl::allocator>>::PacketT(param_1, param_2);
        return param_1;
    }

    // 0x100a00be0, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >* placement_new<PacketT<Array<unsigned char, eastl::allocator> >, PacketT<Array<unsigned char, eastl::allocator> > >(void*, PacketT<Array<unsigned char, eastl::allocator> >&&)
    /* PacketT<Array<unsigned char, eastl::allocator> >*
   placement_new<PacketT<Array<unsigned char, eastl::allocator> >,
   hal::audio::decoders::vorbis::VorbisDecoderPacket>(void*,
   hal::audio::decoders::vorbis::VorbisDecoderPacket&&) */

    PacketT* jag::placement_new<PacketT<Array<unsigned char, eastl::allocator>>,
                                hal::audio::decoders::vorbis::VorbisDecoderPacket>(void* param_1,
                                                                                   VorbisDecoderPacket* param_2) {
        PacketT<Array<unsigned char, eastl::allocator>>::PacketT(param_1, (PacketT*)param_2);
        return param_1;
    }

    // 0x100a00c00, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator> > >* placement_new<ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator> > >, int, PacketT<Array<unsigned char, eastl::allocator> >*&>(void*, int&&, PacketT<Array<unsigned char, eastl::allocator> >*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator>>>, int,
                                           PacketT<Array<unsigned char, eastl::allocator>>*&>(void* param_1,
                                                                                              int* param_2,
                                                                                              PacketT** param_3) {
        ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator>>>::ref_counter_shared(param_1, (long)*param_2,
                                                                                                *param_3);
        return param_1;
    }

    // 0x100a00c20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator> > >::ref_counter_shared(unsigned long, PacketT<Array<unsigned char, eastl::allocator> >*): jumps straight to the base-object constructor

    // 0x100a00c30, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator> > >::ref_counter_shared(unsigned long, PacketT<Array<unsigned char, eastl::allocator> >*)
    void ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator>>>::ref_counter_shared(
        ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator>>>* this, ulong param_1, PacketT* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74f8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(PacketT**)(this + 24) = param_2;
    }

    // 0x100a00c70, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator> > >::DeleteData()
    void ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator>>>::DeleteData(
        ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~VBOMapper();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100a00cc0, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >* placement_new<PacketT<Array<unsigned char, eastl::allocator> >, PacketT<Array<unsigned char, eastl::allocator> >&>(void*, PacketT<Array<unsigned char, eastl::allocator> >&)
    PacketT* jag::placement_new<PacketT<Array<unsigned char, eastl::allocator>>,
                                PacketT<Array<unsigned char, eastl::allocator>>&>(void* param_1, PacketT* param_2) {
        PacketT<Array<unsigned char, eastl::allocator>>::PacketT(param_1, param_2);
        return param_1;
    }

    // 0x100a00e40, 64 bytes, inline, placed by debug map only (low confidence)
    // bool operator< <Js5WorkerRequestMessage, Js5WorkerRequestMessage>(shared_ptr<Js5WorkerRequestMessage> const&, shared_ptr<Js5WorkerRequestMessage> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(shared_ptr<Js5WorkerRequestMessage> const&,
   shared_ptr<Js5WorkerRequestMessage> const&) */

    bool operator<(shared_ptr* param_1, shared_ptr* param_2) {
        Js5WorkerRequestMessage* local_20;
        Js5WorkerRequestMessage* local_18;

        local_20 = (Js5WorkerRequestMessage*)param_1->end();
        local_18 = (Js5WorkerRequestMessage*)param_2->end();
        return (bool)std::less<Js5WorkerRequestMessage*>::operator()(&local_20, &local_18);
    }

    // 0x100a00f50, 64 bytes, inline, placed by debug map only (low confidence)
    // Js5WorkerRequestMessage* placement_new<Js5WorkerRequestMessage>(void*)
    Js5WorkerRequestMessage* placement_new<Js5WorkerRequestMessage>(void* param_1) {
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        Js5WorkerRequestMessage::Js5WorkerRequestMessage(param_1);
        return param_1;
    }

    // 0x100a00f90, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768> >* placement_new<MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768> >, MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData*&, Js5WorkerRequestMessage*>(void*, MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData*&, Js5WorkerRequestMessage*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>,
                       MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData*&, Js5WorkerRequestMessage*>(
        void* param_1, RefCounterAndData** param_2, Js5WorkerRequestMessage** param_3) {
        MakeSharedPoolRefCounter<Js5WorkerRequestMessage,
                                 MakeSharedPool<Js5WorkerRequestMessage, 768>>::MakeSharedPoolRefCounter(param_1,
                                                                                                         *param_2,
                                                                                                         *param_3);
        return param_1;
    }

    // 0x100a01010, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768> >::MakeSharedPoolRefCounter(void*, Js5WorkerRequestMessage*): jumps straight to the base-object constructor

    // 0x100a01020, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768> >::MakeSharedPoolRefCounter(void*, Js5WorkerRequestMessage*)
    void jag::MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>* this,
            void* param_1, Js5WorkerRequestMessage* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee79c0 + 16;
        *(void**)(this + 16) = param_1;
        *(Js5WorkerRequestMessage**)(this + 24) = param_2;
    }

    // 0x100a01060, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768> >::DeleteData()
    void
    jag::MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>::DeleteData(
        MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>* this) {
        if (*(Js5WorkerRequestMessage**)(this + 24) != (Js5WorkerRequestMessage*)0) {
            Js5WorkerRequestMessage::~Js5WorkerRequestMessage(*(Js5WorkerRequestMessage**)(this + 24));
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100a01090, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>::DeleteSelf(
        MakeSharedPoolRefCounter<Js5WorkerRequestMessage, MakeSharedPool<Js5WorkerRequestMessage, 768>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<Js5WorkerRequestMessage, 768>::deallocate(pvVar1);
    }

    // 0x100a01d70, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >* placement_new<PacketT<Array<unsigned char, eastl::allocator> >>(void*)
    PacketT* placement_new<PacketT<Array<unsigned char, eastl::allocator>>>(void* param_1) {
        PacketT<Array<unsigned char, eastl::allocator>>::PacketT(param_1);
        return param_1;
    }

    // 0x100b0b7e0, 160 bytes, inline, placed by class name
    // ClientSocket::Connect(char const*, Error*, int, int)
    undefined4 ClientSocket::Connect(char* param_1, Error* param_2, int param_3, int param_4) {
        undefined4 uVar2;
        char* pcVar3;
        AddressInfo local_48;

        new (&local_48) sock::AddressInfo(param_1);
        if (local_48.operator_cast_to_bool()) {
            uVar2 = Connect(this, &local_48, param_2, param_3, param_4);
        } else {
            uVar2 = 0;
        }
        pcVar3 = "";
        if ((char)uVar2 != '\0') {
            pcVar3 = param_1;
        }
        (&field_96, pcVar3)->assign();
        local_48.~AddressInfo();
        return uVar2;
    }

    // 0x100b0b920, 32 bytes, inline, placed by class name
    // ClientSocket::GetIPAddress() const
    ClientSocket* ClientSocket::GetIPAddress() {
        GetIPAddress();
        return this;
    }

    // 0x100b10aa0, 16 bytes, inline, placed by class name
    // ClientSocket::SetErrorCode(Error*, int)
    /* File::SetErrorCode(Error*, int) */

    void File::SetErrorCode(Error* param_1, int param_2) {
        if (param_1 != (Error*)0) {
            std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>::__cxx_atomic_base_impl();
        }
    }

} // namespace jag

// 0x1009f9c80, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// Js5WorkerRequestMessage::Js5WorkerRequestMessage()
void Js5WorkerRequestMessage::Js5WorkerRequestMessage() {
    new (this) jag::MakeSharedPool<Js5WorkerRequestMessage, 768>();
    *(undefined8*)this = 18446744069414584350;
    *(undefined8*)(this + 8) = 4294967295;
    *(undefined**)(this + 16) = jag::EncodeType::NONE;
    *(undefined4*)(this + 24) = 16777216;
    *(undefined8*)(this + 28) = 0;
    *(undefined**)(this + 40) = jag::Priority::LOW;
    new ((this + 48)) jag::Array<unsigned char, eastl::allocator>();
}
