// libs/oldscape/jagex3/sound/LazyWave.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::sound {
    class LazyWave {
    public:
        class LazyWaveImpl;
        ~LazyWave();
        uint8_t Empty() const;
        auto TryGet() const;
        auto ResolveWave() const;
        auto Get() const;
        LazyWave(shared_ptr<JagVorbis> jagVorbis);
        LazyWave(const LazyWave& lazyWave);
        LazyWave();
        LazyWave(shared_ptr<Wave> wave);
        LazyWave* operator=(LazyWave&& lazyWave);
        LazyWave* operator=(const LazyWave& lazyWave);
        LazyWave(LazyWave&& lazyWave);

    private:
        uint8_t _unknown_0[8];
        long field_8;
    };

    class LazyWave::LazyWaveImpl {
    public:
        LazyWaveImpl(shared_ptr<JagVorbis> jagVorbis, shared_ptr<Wave> wave);
        ~LazyWaveImpl();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint8_t _unknown_64[24];
    };

    // 0x1002a83f0
    LazyWave::LazyWave(shared_ptr<JagVorbis> jagVorbis) {
        void* local_20;

        if (jagVorbis->operator_cast_to_bool() == '\0') {
            new (this) shared_ptr();
        } else {
            local_20 = nullptr;
            make_shared<LazyWave::LazyWaveImpl, shared_ptr<JagVorbis> const&, decltype(nullptr)>((ReturnValue*)this,
                                                                                                 jagVorbis, &local_20);
        }
    }

    // 0x1002d8c00
    LazyWave* LazyWave::operator=(LazyWave&& lazyWave) {
        *this = lazyWave;
        return this;
    }

    // 0x1002d8c30
    LazyWave* LazyWave::operator=(const LazyWave& lazyWave) {
        *this = lazyWave;
        return this;
    }

    // 0x1002dba90
    LazyWave::LazyWave(const LazyWave& lazyWave) : shared_ptr(lazyWave) {}

    // 0x1002dbde0
    LazyWave::LazyWave() : shared_ptr() {}

    // 0x1002dbdf0
    LazyWave::LazyWave(shared_ptr<Wave> wave) {
        void* local_20;

        if (wave->operator_cast_to_bool() == '\0') {
            new (this) shared_ptr();
        } else {
            local_20 = nullptr;
            make_shared<LazyWave::LazyWaveImpl, decltype(nullptr), shared_ptr<Wave> const&>((ReturnValue*)this,
                                                                                            &local_20, wave);
        }
    }

    // 0x1002dbfa0
    LazyWave::LazyWaveImpl::LazyWaveImpl(shared_ptr<JagVorbis> jagVorbis, shared_ptr<Wave> wave)
        : field_48(0), field_56(0), field_32(0), field_40(0), field_16(0), field_24(0), field_0(0), field_8(0),
          std::mutex(), field_64(jagVorbis), field_80(wave) {
        bool bVar1 = *jagVorbis != nullptr;
        bool bVar2 = *wave != nullptr;
        if (bVar1 == bVar2) {
            LogAssert("(vorbis != nullptr) != (wave != nullptr)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "LazyWave.h",
                      30, "Either wave or vorbis exclusively must not be null.");
        }
    }

    // 0x1002dc120
    LazyWave::LazyWaveImpl::~LazyWaveImpl() {
        field_80.~shared_ptr();
        field_64.~shared_ptr();
    }

    // 0x1002e7050
    LazyWave::LazyWave(LazyWave&& lazyWave) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(lazyWave);
    }

} // namespace jag::oldscape::sound

namespace jag::oldscape::dash3d {
    // 0x1002dba90: OperationBuffer::OperationBuffer(OperationBuffer const&) has the same machine code as sound::LazyWave::LazyWave(sound::LazyWave const&)

    // 0x1002e7050: OperationBuffer::OperationBuffer(OperationBuffer&&) has the same machine code as sound::LazyWave::LazyWave(sound::LazyWave&&)

} // namespace jag::oldscape::dash3d
