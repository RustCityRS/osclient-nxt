// libs/oldscape/jagex3/midi2/miditask/FadeInTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x1002d9f70
    PacketT<Array<unsigned char>>::PacketT(const unsigned char* arg1, unsigned long arg2) : Array<unsigned char>() {
        *(uint64_t*)(this + 24) = 0;
        Reserve(this, arg2);
        _memcpy((void*)data(), arg1, arg2);
    }

    // 0x1002daac0
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(const unsigned char* arg1, unsigned long arg2)
        : Array<unsigned char, BucketAllocatorEASTL>() {
        *(uint64_t*)(this + 24) = 0;
        Reserve(this, arg2);
        _memcpy((void*)data(), arg1, arg2);
    }

    // 0x1002dbe40
    shared_ptr_if_not_array<oldscape::sound::LazyWave::LazyWaveImpl>::type
    make_shared<oldscape::sound::LazyWave::LazyWaveImpl, decltype(nullptr), shared_ptr<oldscape::sound::Wave> const&>(
        decltype(nullptr)&& arg1, const shared_ptr<oldscape::sound::Wave>& wave) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        LazyWaveImpl* local_38[2];

        auto arg1_00 = aligned_alloc(128, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::sound::LazyWave::LazyWaveImpl>::type result;
        } else {
            local_38[0] =
                placement_new<oldscape::sound::LazyWave::LazyWaveImpl, decltype(nullptr),
                              shared_ptr<oldscape::sound::Wave> const&>((void*)((long)arg1_00 + 32), arg1, wave);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>, int,
                              oldscape::sound::LazyWave::LazyWaveImpl*&>(arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1002dbef0
    oldscape::sound::LazyWave::LazyWaveImpl*
    placement_new<oldscape::sound::LazyWave::LazyWaveImpl, decltype(nullptr), shared_ptr<oldscape::sound::Wave> const&>(
        void* arg1, decltype(nullptr)&& arg2, const shared_ptr<oldscape::sound::Wave>& wave) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        shared_ptr<oldscape::dash3d::Decor> local_28(wave);
        new (arg1) oldscape::sound::LazyWave::LazyWaveImpl(&local_38, &local_28);
        return arg1;
    }

    // 0x1002dbf70
    ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>*
    placement_new<ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>, int,
                  oldscape::sound::LazyWave::LazyWaveImpl*&>(void* arg1, int&& arg2,
                                                             oldscape::sound::LazyWave::LazyWaveImpl*& arg3) {
        new (arg1) ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002dc080
    ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>::ref_counter_shared(
        unsigned long arg1, oldscape::sound::LazyWave::LazyWaveImpl* lazyWaveImpl)
        : ref_counter_base() {}

    // 0x1002dc0c0
    void ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl>::DeleteData() {
        ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((LazyWaveImpl*)((long)&(this[3]._vptr)->_dtor + lVar2))->~LazyWaveImpl();
                    prVar1 =
                        (ref_counter_shared<oldscape::sound::LazyWave::LazyWaveImpl> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 96;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1002dc400
    LoadingScreenScript::TextLayer::~TextLayer() {
        field_80.~basic_string();
    }

    // 0x1002dc7a0
    oldscape::math::AffineTransform3* placement_new<oldscape::math::AffineTransform3>(void* arg1) {
        new (arg1) oldscape::math::AffineTransform3();
        return arg1;
    }

    // 0x1002dc7c0
    ref_counter_shared_trivial<oldscape::math::AffineTransform3>*
    placement_new<ref_counter_shared_trivial<oldscape::math::AffineTransform3>, int,
                  oldscape::math::AffineTransform3*&>(void* arg1, int&& arg2, oldscape::math::AffineTransform3*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::math::AffineTransform3>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002dc7f0
    ref_counter_shared_trivial<oldscape::math::AffineTransform3>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::math::AffineTransform3* affineTransform3)
        : ref_counter_base() {}

    // 0x1002de5f0
    oldscape::PacketJ<Array<unsigned char>>*
    placement_new<oldscape::PacketJ<Array<unsigned char>>, unsigned long&>(void* arg1, unsigned long& arg2) {
        arg1->PacketT(arg2);
        return arg1;
    }

    // 0x1002de610
    oldscape::PacketJ<Array<unsigned char>>*
    placement_new<oldscape::PacketJ<Array<unsigned char>>, oldscape::PacketJ<Array<unsigned char>>>(
        void* arg1, oldscape::PacketJ<Array<unsigned char>>&& packetJ) {
        new (arg1) oldscape::PacketJ(packetJ);
        return arg1;
    }

    // 0x1002e0b70
    oldscape::jagex3::Js5LocalLoader::Js5Local*
    placement_new<oldscape::jagex3::Js5LocalLoader::Js5Local, oldscape::jagex3::Js5LocalLoader&,
                  oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&>(
        void* arg1, oldscape::jagex3::Js5LocalLoader& js5LocalLoader, oldscape::jagex3::Js5ArchiveId& js5ArchiveId,
        bool& arg4, bool& arg5, bool& arg6) {
        new (arg1) oldscape::jagex3::Js5LocalLoader::Js5Local(js5LocalLoader, js5ArchiveId, arg4, arg5, arg6);
        return arg1;
    }

    // 0x1002e0ba0
    ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>*
    placement_new<ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>, int,
                  oldscape::jagex3::Js5LocalLoader::Js5Local*&>(void* arg1, int&& arg2,
                                                                oldscape::jagex3::Js5LocalLoader::Js5Local*& arg3) {
        new (arg1) ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e0ef0
    ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>::ref_counter_shared(
        unsigned long arg1, oldscape::jagex3::Js5LocalLoader::Js5Local* js5Local)
        : ref_counter_base() {}

    // 0x1002e0f30
    void ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 =
                        (ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local> _vtbl*)((long)&prVar2->_dtor +
                                                                                                1);
                    lVar1 = lVar1 + 744;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape {
    class AppletConfig {
    public:
        ~AppletConfig();
        AppletConfig(const eastl::string& str);
        AppletConfig(AppletConfig&& appletConfig);

        uint8_t _unknown_0[152];
    };

    // 0x1002d9d30
    AppletConfig::AppletConfig(const eastl::string& str) : eastl::string(str) {

        new (&field_32) eastl::hash_map(local_30);
        new (&field_88) eastl::hash_map(local_30);
        new (&field_144) eastl::hash_map(local_30);
    }

    // 0x1002d9e20
    ConfigParameter::~ConfigParameter() {
        field_72.~basic_string();
        field_32.~basic_string();
    }

    // 0x1002d9f60
    void PacketJ<Array<unsigned char>>::PacketT(const unsigned char* arg1, unsigned long arg2) {
        new (this) PacketT(arg1, arg2);
    }

    // 0x1002daab0
    void PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(const unsigned char* arg1, unsigned long arg2) {
        PacketT(this, arg1, arg2);
    }

    // 0x1002dad00
    PacketJ<Array<unsigned char>>::PacketJ(const PacketJ<Array<unsigned char>>& packetJ) {
        PacketT(this, (PacketT<Array<unsigned char> _>*)packetJ);
    }

    // 0x1002dd640
    LanguageMessage::LanguageMessage(int arg1, const eastl::string& str) : field_0(arg1), field_8(str) {}

    // 0x1002dd730
    AppletConfig::AppletConfig(AppletConfig&& appletConfig)
        : eastl::string(appletConfig), field_32(appletConfig.field_32), field_88(appletConfig.field_88),
          field_144(appletConfig.field_144) {}

    // 0x1002de630
    PacketJ<Array<unsigned char>>::PacketJ(PacketJ<Array<unsigned char>>&& packetJ) {
        PacketT(this, (PacketT<Array<unsigned char> _>*)packetJ);
    }

} // namespace jag::oldscape

namespace jag::oldscape::jagex3 {
    class Js5RequestKey {
    public:
        uint32_t operator==(const Js5RequestKey& point) const;
        bool operator<(const Js5RequestKey& js5RequestKey) const;

    private:
        int field_0;
        int field_4;
        uint8_t _unknown_8[4];
    };

    // 0x1002da600
    Js5RemoteRequestData::Js5RemoteRequestData() {
        new (field_28) callstack::Callstack();
        new ((field_28 + 12)) shared_ptr();
    }

    // 0x1002da630
    Js5RemoteRequestData::~Js5RemoteRequestData() {
        field_40.~shared_ptr();
    }

    // 0x1002da6a0
    RAII_RequestFailureHandler::RAII_RequestFailureHandler(LockFreeStack<Js5RemoteRequestData>& lockFreeStack,
                                                           Js5RemoteRequestData* js5RemoteRequestData, int arg3)
        : field_0(lockFreeStack), field_8(js5RemoteRequestData), m_code(arg3) {}

    // 0x1002da6b0
    RAII_RequestFailureHandler::~RAII_RequestFailureHandler() {
        if (field_8 != nullptr) {
            new (field_8->field_28) std::__cxx_atomic_base_impl(m_code);
            field_0->PushHead(field_8);
        }
    }

    // 0x1002df560
    bool Js5RequestKey::operator<(const Js5RequestKey& js5RequestKey) const {
        bool bVar1 = true;
        if (js5RequestKey.field_0 <= field_0) {
            if (field_0 != js5RequestKey.field_0) {
                return false;
            }
            bVar1 = field_4 < js5RequestKey.field_4;
        }
        return bVar1;
    }

} // namespace jag::oldscape::jagex3

// 0x1002d9b90
void fmod(float arg1, float arg2) {
    _fmodf(arg1, 1086918619);
}

// 0x1002da690
void __libcpp_strchr(const char* str, int arg2) {
    _strchr(str, 58);
}

// 0x1002dca30
void asin(float arg1) {
    _asinf();
}

// 0x1002dca40
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

// 0x1002dca50
void atan2(float arg1, float arg2) {
    _atan2f();
}

namespace jag::oldscape::midi2 {
    class FadeInTask {
    public:
        // virtual methods in vtable order
        virtual ~FadeInTask();
        virtual unsigned long Execute();
        FadeInTask(const shared_ptr<MidiTask>& midiTask, const shared_ptr<MidiRequest>& midiRequest, int arg3);

    private:
        uint8_t _unknown_8[80];
        uint8_t field_88;
        uint8_t field_89;
        uint8_t _unknown_90[22];
        int field_112;
        uint8_t _unknown_116[4];
    };

    // 0x1002dc5b0
    FadeInTask::~FadeInTask() {
        field_96.~shared_ptr();
    }

} // namespace jag::oldscape::midi2

namespace jag::math {
    // 0x1002dc820
    Matrix44T<float>::Matrix44T(const std::array<float, 16ul>& arg1) {
        long lVar5 = 0;
        do {
            new ((this + lVar5)) Vector4T();
            lVar5 = lVar5 + 16;
        } while (lVar5 != 64);
        float* pfVar4 = &arg1[0];
        float fVar1 = *pfVar4;
        pfVar4 = &arg1[1];
        float fVar2 = *pfVar4;
        pfVar4 = &arg1[2];
        float fVar3 = *pfVar4;
        pfVar4 = &arg1[3];
        Set(fVar1, fVar2, fVar3, *pfVar4);
        pfVar4 = &arg1[4];
        fVar1 = *pfVar4;
        pfVar4 = &arg1[5];
        fVar2 = *pfVar4;
        pfVar4 = &arg1[6];
        fVar3 = *pfVar4;
        pfVar4 = &arg1[7];
        ((this + 16))->Set(fVar1, fVar2, fVar3, *pfVar4);
        pfVar4 = &arg1[8];
        fVar1 = *pfVar4;
        pfVar4 = &arg1[9];
        fVar2 = *pfVar4;
        pfVar4 = &arg1[10];
        fVar3 = *pfVar4;
        pfVar4 = &arg1[11];
        ((this + 32))->Set(fVar1, fVar2, fVar3, *pfVar4);
        pfVar4 = &arg1[12];
        fVar1 = *pfVar4;
        pfVar4 = &arg1[13];
        fVar2 = *pfVar4;
        pfVar4 = &arg1[14];
        fVar3 = *pfVar4;
        pfVar4 = &arg1[15];
        ((this + 48))->Set(fVar1, fVar2, fVar3, *pfVar4);
    }

} // namespace jag::math

namespace jag::game {
    // 0x1002dd640: GWCLocation::GWCLocation(int, eastl::string const&) has the same machine code as oldscape::LanguageMessage::LanguageMessage(int, eastl::string const&)

} // namespace jag::game
