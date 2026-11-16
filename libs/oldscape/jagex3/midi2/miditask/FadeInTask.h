// libs/oldscape/jagex3/midi2/miditask/FadeInTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x1002d9f70, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::PacketT(unsigned char const*, unsigned long)
    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  uchar* param_1, ulong param_2) {
        void* pvVar1;

        new (this) Array<unsigned char, eastl::allocator>();
        *(undefined8*)(this + 24) = 0;
        Reserve(this, param_2);
        pvVar1 = (void*)data();
        _memcpy(pvVar1, param_1, param_2);
    }

    // 0x1002daac0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(unsigned char const*, unsigned long)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, uchar* param_1, ulong param_2) {
        void* pvVar1;

        new (this) Array<unsigned char, BucketAllocatorEASTL>();
        *(undefined8*)(this + 24) = 0;
        Reserve(this, param_2);
        pvVar1 = (void*)data();
        _memcpy(pvVar1, param_1, param_2);
    }

    // 0x1002dbe40, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::sound::LazyWave::LazyWaveImpl>::type make_shared<oldscape::sound::LazyWave::LazyWaveImpl, decltype(nullptr), shared_ptr<oldscape::sound::Wave> const&>(decltype(nullptr)&&, shared_ptr<oldscape::sound::Wave> const&)
    jag* jag::make_shared<oldscape::sound::LazyWave::LazyWaveImpl, decltype(nullptr),
                          shared_ptr<oldscape::sound::Wave> const&>(_func_decltype_nullptr** param_1,
                                                                    shared_ptr* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        LazyWaveImpl* local_38[2];

        pvVar1 = (void*)aligned_alloc(128, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::sound::LazyWave::LazyWaveImpl, decltype(nullptr),
                              shared_ptr<oldscape::sound::Wave> const&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>, int,
                                   oldscape::sound::LazyWave::LazyWaveImpl*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1002dbef0, 128 bytes, inline, placed by debug map only (low confidence)
    // oldscape::sound::LazyWave::LazyWaveImpl* placement_new<oldscape::sound::LazyWave::LazyWaveImpl, decltype(nullptr), shared_ptr<oldscape::sound::Wave> const&>(void*, decltype(nullptr)&&, shared_ptr<oldscape::sound::Wave> const&)
    LazyWaveImpl* jag::placement_new<oldscape::sound::LazyWave::LazyWaveImpl, decltype(nullptr),
                                     shared_ptr<oldscape::sound::Wave> const&>(void* param_1,
                                                                               _func_decltype_nullptr** param_2,
                                                                               shared_ptr* param_3) {
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> asStackY_b8[128];
        shared_ptr in_stack_ffffffffffffffc8;
        shared_ptr in_stack_ffffffffffffffd8;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(asStackY_b8 + 128,
                                                                                 (_func_decltype_nullptr*)0);
        new ((asStackY_b8 + 144)) shared_ptr<oldscape::dash3d::Decor>(param_3);
        oldscape::sound::LazyWave::LazyWaveImpl::LazyWaveImpl(param_1, in_stack_ffffffffffffffc8,
                                                              in_stack_ffffffffffffffd8);
        ((asStackY_b8 + 144))->~shared_ptr();
        ((asStackY_b8 + 128))->~shared_ptr();
        return param_1;
    }

    // 0x1002dbf70, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>* placement_new<ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>, int, oldscape::sound::LazyWave::LazyWaveImpl*&>(void*, int&&, oldscape::sound::LazyWave::LazyWaveImpl*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>, int,
                                           oldscape::sound::LazyWave::LazyWaveImpl*&>(void* param_1, int* param_2,
                                                                                      LazyWaveImpl** param_3) {
        ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>::ref_counter_shared(param_1, (long)*param_2,
                                                                                        *param_3);
        return param_1;
    }

    // 0x1002dc070, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>::ref_counter_shared(unsigned long, oldscape::sound::LazyWave::LazyWaveImpl*): jumps straight to the base-object constructor

    // 0x1002dc080, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>::ref_counter_shared(unsigned long, oldscape::sound::LazyWave::LazyWaveImpl*)
    void ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>::ref_counter_shared(ulong param_1,
                                                                                         LazyWaveImpl* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76f0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LazyWaveImpl**)(this + 24) = param_2;
    }

    // 0x1002dc0c0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>::DeleteData()
    void ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~LazyWaveImpl();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 96;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1002dc400, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // LoadingScreenScript::TextLayer::~TextLayer()
    void LoadingScreenScript::TextLayer::~TextLayer() {
        field_0 = &PTR__TextLayer_100efa4e0;
        (&field_80)->~basic_string();
        ~AutoSingleton();
    }

    // 0x1002dc7a0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::math::AffineTransform3* placement_new<oldscape::math::AffineTransform3>(void*)
    AffineTransform3* placement_new<oldscape::math::AffineTransform3>(void* param_1) {
        oldscape::math::AffineTransform3::AffineTransform3(param_1);
        return param_1;
    }

    // 0x1002dc7c0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::math::AffineTransform3>* placement_new<ref_counter_shared_trivial<oldscape::math::AffineTransform3>, int, oldscape::math::AffineTransform3*&>(void*, int&&, oldscape::math::AffineTransform3*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::math::AffineTransform3>, int,
                                                   oldscape::math::AffineTransform3*&>(void* param_1, int* param_2,
                                                                                       AffineTransform3** param_3) {
        ref_counter_shared_trivial<oldscape::math::AffineTransform3>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002dc7e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::math::AffineTransform3>::ref_counter_shared_trivial(unsigned long, oldscape::math::AffineTransform3*): jumps straight to the base-object constructor

    // 0x1002dc7f0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::math::AffineTransform3>::ref_counter_shared_trivial(unsigned long, oldscape::math::AffineTransform3*)
    void ref_counter_shared_trivial<oldscape::math::AffineTransform3>::ref_counter_shared_trivial(
        ulong param_1, AffineTransform3* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7cf8 + 16;
    }

    // 0x1002de5f0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::PacketJ<Array<unsigned char, eastl::allocator> >* placement_new<oldscape::PacketJ<Array<unsigned char, eastl::allocator> >, unsigned long&>(void*, unsigned long&)
    PacketJ*
    jag::placement_new<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>, unsigned long&>(void* param_1,
                                                                                                  ulong* param_2) {
        param_1->PacketT(*param_2);
        return param_1;
    }

    // 0x1002de610, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::PacketJ<Array<unsigned char, eastl::allocator> >* placement_new<oldscape::PacketJ<Array<unsigned char, eastl::allocator> >, oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >(void*, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&&)
    PacketJ* jag::placement_new<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>,
                                oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>(void* param_1,
                                                                                           PacketJ* param_2) {
        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>::PacketJ(param_1, param_2);
        return param_1;
    }

    // 0x1002e0b70, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::jagex3::Js5LocalLoader::Js5Local* placement_new<oldscape::jagex3::Js5LocalLoader::Js5Local, oldscape::jagex3::Js5LocalLoader&, oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&>(void*, oldscape::jagex3::Js5LocalLoader&, oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&)
    Js5Local* jag::placement_new<oldscape::jagex3::Js5LocalLoader::Js5Local, oldscape::jagex3::Js5LocalLoader&,
                                 oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&>(
        void* param_1, Js5LocalLoader* param_2, Js5ArchiveId* param_3, bool* param_4, bool* param_5, bool* param_6) {
        oldscape::jagex3::Js5LocalLoader::Js5Local::Js5Local(param_1, param_2, *(undefined4*)param_3, *param_4,
                                                             *param_5, *param_6);
        return param_1;
    }

    // 0x1002e0ba0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>* placement_new<ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>, int, oldscape::jagex3::Js5LocalLoader::Js5Local*&>(void*, int&&, oldscape::jagex3::Js5LocalLoader::Js5Local*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>, int,
                                           oldscape::jagex3::Js5LocalLoader::Js5Local*&>(void* param_1, int* param_2,
                                                                                         Js5Local** param_3) {
        ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>::ref_counter_shared(param_1, (long)*param_2,
                                                                                           *param_3);
        return param_1;
    }

    // 0x1002e0ee0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>::ref_counter_shared(unsigned long, oldscape::jagex3::Js5LocalLoader::Js5Local*): jumps straight to the base-object constructor

    // 0x1002e0ef0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>::ref_counter_shared(unsigned long, oldscape::jagex3::Js5LocalLoader::Js5Local*)
    void ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>::ref_counter_shared(ulong param_1,
                                                                                            Js5Local* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7800 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Js5Local**)(this + 24) = param_2;
    }

    // 0x1002e0f30, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>::DeleteData()
    void ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 744;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape {
    class AppletConfig {
    public:
        ~AppletConfig();
        AppletConfig(eastl::string const&);
        AppletConfig(AppletConfig&&);

        // data members, from how the methods use this: 152 bytes
        char _unknown_0[152];
    };

    // 0x1002b2e10, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // AppletConfig::AppletConfig(eastl::string const&): jumps straight to the base-object constructor

    // 0x1002d9d30, 192 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AppletConfig::AppletConfig(eastl::string const&)
    void AppletConfig::AppletConfig(basic_string* param_1) {
        allocator local_30[8];

        new (this) eastl::string(param_1);
        eastl::allocator::allocator(local_30, "EASTL hash_map");
        new (&field_32, local_30) eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                  eastl::equal_to<eastl::string>, eastl::allocator, false>();
        eastl::allocator::allocator(local_30, "EASTL hash_map");
        new (&field_88, local_30) eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                  eastl::equal_to<eastl::string>, eastl::allocator, false>();
        eastl::allocator::allocator(local_30, "EASTL hash_map");
        new (&field_144, local_30) eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                   eastl::equal_to<eastl::string>, eastl::allocator, false>();
    }

    // 0x1002d9e20, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ConfigParameter::~ConfigParameter()
    void ConfigParameter::~ConfigParameter() {
        (&field_72)->~basic_string();
        (&field_32)->~basic_string();
        ~basic_string();
    }

    // 0x1002d9f60, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, eastl::allocator> >::PacketT(unsigned char const*, unsigned long)
    void PacketJ<Array<unsigned char, eastl::allocator>>::PacketT(PacketJ<Array<unsigned char, eastl::allocator>>* this,
                                                                  uchar* param_1, ulong param_2) {
        new (this) PacketT<Array<unsigned char, eastl::allocator>>(param_1, param_2);
    }

    // 0x1002daab0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(unsigned char const*, unsigned long)
    /* PacketT<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(unsigned char
   const*, unsigned long) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, uchar* param_1, ulong param_2) {
        PacketT(this, param_1, param_2);
    }

    // 0x1002dad00, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PacketJ<Array<unsigned char, eastl::allocator> >::PacketJ(PacketJ<Array<unsigned char, eastl::allocator> > const&)
    /* PacketT<Array<unsigned char, eastl::allocator>
   >::PacketT(PacketT<Array<unsigned char, eastl::allocator> > const&) */

    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  PacketT* param_1) {
        PacketT(this, param_1);
    }

    // 0x1002dd630, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LanguageMessage::LanguageMessage(int, eastl::string const&): jumps straight to the base-object constructor

    // 0x1002dd640, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LanguageMessage::LanguageMessage(int, eastl::string const&)
    /* game::GWCLocation::GWCLocation(int, eastl::string const&) */

    void game::GWCLocation::GWCLocation(int param_1, basic_string* param_2) {
        field_0 = param_1;
        new (&field_8, param_2) eastl::string();
    }

    // 0x1002dd720, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AppletConfig::AppletConfig(AppletConfig&&): jumps straight to the base-object constructor

    // 0x1002dd730, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AppletConfig::AppletConfig(AppletConfig&&)
    void AppletConfig::AppletConfig(AppletConfig* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (hash_map*)&param_1->field_32)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_88, (hash_map*)&param_1->field_88)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_144, (hash_map*)&param_1->field_144)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
    }

    // 0x1002de630, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PacketJ<Array<unsigned char, eastl::allocator> >::PacketJ(PacketJ<Array<unsigned char, eastl::allocator> >&&)
    /* PacketT<Array<unsigned char, eastl::allocator>
   >::PacketT(PacketT<Array<unsigned char, eastl::allocator> >&&) */

    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  PacketT* param_1) {
        PacketT(this, param_1);
    }

} // namespace jag::oldscape

namespace jag::oldscape::jagex3 {
    class Js5RequestKey {
    public:
        operator==(Js5RequestKey const&) const;
        bool operator<(Js5RequestKey const&) const;

        // data members, from how the methods use this: 12 bytes
        int field_0; // offset 0
        int field_4; // offset 4
        char _unknown_8[4];
    };

    // 0x1002da600, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Js5RemoteRequestData::Js5RemoteRequestData()
    void Js5RemoteRequestData::Js5RemoteRequestData() {
        _func_decltype_nullptr* in_RSI;

        new (field_28) callstack::Callstack();
        new ((field_28 + 12), in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1002da630, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Js5RemoteRequestData::~Js5RemoteRequestData()
    /* Js5DiskCache::QueueRequestItem::~QueueRequestItem() */

    void Js5DiskCache::QueueRequestItem::~QueueRequestItem() {
        (&field_40)->~shared_ptr();
    }

    // 0x1002da6a0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RAII_RequestFailureHandler::RAII_RequestFailureHandler(LockFreeStack<Js5RemoteRequestData>&, Js5RemoteRequestData*, int)
    void RAII_RequestFailureHandler::RAII_RequestFailureHandler(LockFreeStack* param_1, Js5RemoteRequestData* param_2,
                                                                int param_3) {
        field_0 = param_1;
        field_8 = param_2;
        m_code = param_3;
    }

    // 0x1002da6b0, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // RAII_RequestFailureHandler::~RAII_RequestFailureHandler()
    void RAII_RequestFailureHandler::~RAII_RequestFailureHandler() {
        if (field_8 != (Js5RemoteRequestData*)0) {
            new (field_8->field_28, m_code) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>();
            (field_0, field_8)->PushHead();
        }
    }

    // 0x1002df560, 48 bytes, inline, placed by debug map only (low confidence)
    // Js5RequestKey::operator<(Js5RequestKey const&) const
    /* Js5RequestKey::TEMPNAMEPLACEHOLDERVALUE(Js5RequestKey
   const&) const */

    bool Js5RequestKey::operator<(Js5RequestKey* param_1) {
        bool bVar1;

        bVar1 = true;
        if (param_1->field_0 <= field_0) {
            if (field_0 != param_1->field_0) {
                return false;
            }
            bVar1 = field_4 < param_1->field_4;
        }
        return bVar1;
    }

} // namespace jag::oldscape::jagex3

// 0x1002d9b90, 32 bytes, placed by debug map only (low confidence)
// fmod(float, float)
void fmod(float param_1, float param_2) {
    _fmodf(param_1, 1086918619);
}

// 0x1002da690, 16 bytes, placed by debug map only (low confidence)
// __libcpp_strchr(char const*, int)
void __libcpp_strchr(char* param_1, int param_2) {
    _strchr(param_1, 58);
}

// 0x1002dca30, 16 bytes, placed by debug map only (low confidence)
// asin(float)
void asin(float param_1) {
    _asinf();
}

// 0x1002dca40, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

// 0x1002dca50, 16 bytes, placed by debug map only (low confidence)
// atan2(float, float)
void atan2(float param_1, float param_2) {
    _atan2f();
}

namespace jag::oldscape::midi2 {
    class FadeInTask {
    public:
        // virtual methods in vtable order
        virtual ~FadeInTask();
        virtual ulong Execute();
        FadeInTask(shared_ptr<MidiTask> const&, shared_ptr<MidiRequest> const&, int);

        // data members, from how the methods use this: 120 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        undefined1 field_88; // offset 88
        undefined1 field_89; // offset 89
        char _unknown_90[6];
        shared_ptr field_96; // offset 96
        int field_112;       // offset 112
        char _unknown_116[4];
    };

    // 0x1002d9a50, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // FadeInTask::~FadeInTask(): jumps straight to the base-object destructor

    // 0x1002d9a60, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // FadeInTask::~FadeInTask()
    void FadeInTask::~FadeInTask() {
        ~FadeInTask(this);
        operator_delete(this);
    }

    // 0x1002dc5b0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // FadeInTask::~FadeInTask()
    void FadeInTask::~FadeInTask() {
        field_0 = &PTR__FadeInTask_100efa378;
        field_96->~shared_ptr();
        ~MidiTask();
    }

} // namespace jag::oldscape::midi2

namespace jag::game {
    // 0x1002dd630: the linker folded this into oldscape::LanguageMessage::LanguageMessage(int, eastl::string const&), which has identical code
    GWCLocation::GWCLocation(int, eastl::string const&);

    // 0x1002dd640: the linker folded this into oldscape::LanguageMessage::LanguageMessage(int, eastl::string const&), which has identical code
    GWCLocation::GWCLocation(int, eastl::string const&);

} // namespace jag::game

namespace jag::math {
    // 0x1002dc820, 512 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(std::array<float, 16ul> const&)
    /* Matrix44T<float>::Matrix44T(std::array<float, 16ul> const&) */

    void Matrix44T<float>::Matrix44T(array* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float* pfVar4;
        long lVar5;

        lVar5 = 0;
        do {
            new ((this + lVar5)) Vector4T<float>();
            lVar5 = lVar5 + 16;
        } while (lVar5 != 64);
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 0);
        fVar1 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 1);
        fVar2 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 2);
        fVar3 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 3);
        Set(fVar1, fVar2, fVar3, *pfVar4);
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 4);
        fVar1 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 5);
        fVar2 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 6);
        fVar3 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 7);
        ((this + 16))->Set(fVar1, fVar2, fVar3, *pfVar4);
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 8);
        fVar1 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 9);
        fVar2 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 10);
        fVar3 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 11);
        ((this + 32))->Set(fVar1, fVar2, fVar3, *pfVar4);
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 12);
        fVar1 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 13);
        fVar2 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 14);
        fVar3 = *pfVar4;
        pfVar4 = (float*)std::array<float, 16ul>::operator[]((array<float, 16ul>*)param_1, 15);
        ((this + 48))->Set(fVar1, fVar2, fVar3, *pfVar4);
    }

} // namespace jag::math
