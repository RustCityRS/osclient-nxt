// libs/oldscape/jagex3/sound/LazyWave.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::sound {
    class LazyWave {
    public:
        class LazyWaveImpl;
        ~LazyWave();
        bool Empty() const;
        TryGet() const;
        ResolveWave() const;
        Get() const;
        LazyWave(shared_ptr<JagVorbis>);
        LazyWave(LazyWave const&);
        LazyWave();
        LazyWave(shared_ptr<Wave>);
        LazyWave* operator=(LazyWave&&);
        LazyWave* operator=(LazyWave const&);
        LazyWave(LazyWave&&);

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        long field_8; // offset 8
    };

    class LazyWave::LazyWaveImpl {
    public:
        LazyWaveImpl(shared_ptr<JagVorbis>, shared_ptr<Wave>);
        ~LazyWaveImpl();

        // data members, from how the methods use this: 88 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        char _unknown_64[24];
    };

    // 0x1002a70d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // LazyWave::LazyWave(shared_ptr<JagVorbis>): jumps straight to the base-object constructor

    // 0x1002a83f0, 80 bytes, base-object constructor, inline, placed by class name
    // LazyWave::LazyWave(shared_ptr<JagVorbis>)
    void LazyWave::LazyWave(shared_ptr param_1) {
        shared_ptr* in_RSI;
        _func_decltype_nullptr* local_20;

        if (shared_ptr::operator_cast_to_bool(in_RSI)) {
            local_20 = (_func_decltype_nullptr*)0;
            make_shared<LazyWave::LazyWaveImpl, shared_ptr<JagVorbis> const&, decltype(nullptr)>((jag*)this, in_RSI,
                                                                                                 &local_20);
        } else {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
    }

    // 0x1002d1fd0, 16 bytes, complete-object constructor, inline, placed by class name
    // LazyWave::LazyWave(LazyWave const&): jumps straight to the base-object constructor

    // 0x1002d8b40, 16 bytes, complete-object constructor, inline, placed by class name
    // LazyWave::LazyWave(): jumps straight to the base-object constructor

    // 0x1002d8bf0, 16 bytes, complete-object constructor, inline, placed by class name
    // LazyWave::LazyWave(shared_ptr<Wave>): jumps straight to the base-object constructor

    // 0x1002d8c00, 32 bytes, inline, placed by class name
    // LazyWave::operator=(LazyWave&&)
    /* LazyWave::TEMPNAMEPLACEHOLDERVALUE(LazyWave&&) */

    LazyWave* LazyWave::operator=(LazyWave* param_1) {
        shared_ptr<LazyWave::LazyWaveImpl>::operator=((shared_ptr<LazyWave::LazyWaveImpl>*)this, (shared_ptr*)param_1);
        return this;
    }

    // 0x1002d8c30, 32 bytes, inline, placed by class name
    // LazyWave::operator=(LazyWave const&)
    /* LazyWave::TEMPNAMEPLACEHOLDERVALUE(LazyWave const&)
    */

    LazyWave* LazyWave::operator=(LazyWave* param_1) {
        shared_ptr<LazyWave::LazyWaveImpl>::operator=((shared_ptr<LazyWave::LazyWaveImpl>*)this, (shared_ptr*)param_1);
        return this;
    }

    // 0x1002dba90, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LazyWave::LazyWave(LazyWave const&)
    /* dash3d::OperationBuffer::OperationBuffer(dash3d::OperationBuffer
   const&) */

    void dash3d::OperationBuffer::OperationBuffer(OperationBuffer* param_1) {
        new (this) shared_ptr<dash3d::Decor>(param_1);
    }

    // 0x1002dbde0, 16 bytes, base-object constructor, inline, placed by class name
    // LazyWave::LazyWave()
    void LazyWave::LazyWave() {
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
    }

    // 0x1002dbdf0, 80 bytes, base-object constructor, inline, placed by class name
    // LazyWave::LazyWave(shared_ptr<Wave>)
    void LazyWave::LazyWave(shared_ptr param_1) {
        shared_ptr* in_RSI;
        _func_decltype_nullptr* local_20;

        if (shared_ptr::operator_cast_to_bool(in_RSI)) {
            local_20 = (_func_decltype_nullptr*)0;
            make_shared<LazyWave::LazyWaveImpl, decltype(nullptr), shared_ptr<Wave> const&>((jag*)this, &local_20,
                                                                                            in_RSI);
        } else {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
    }

    // 0x1002dbf90, 16 bytes, complete-object constructor, inline, placed by class name
    // LazyWave::LazyWaveImpl::LazyWaveImpl(shared_ptr<JagVorbis>, shared_ptr<Wave>): jumps straight to the base-object constructor

    // 0x1002dbfa0, 208 bytes, base-object constructor, inline, placed by class name
    // LazyWave::LazyWaveImpl::LazyWaveImpl(shared_ptr<JagVorbis>, shared_ptr<Wave>)
    void LazyWave::LazyWaveImpl::LazyWaveImpl(shared_ptr param_1, shared_ptr param_2) {
        bool bVar1;
        bool bVar2;
        shared_ptr* in_RDX;
        shared_ptr* in_RSI;

        field_48 = 0;
        field_56 = 0;
        field_32 = 0;
        field_40 = 0;
        field_16 = 0;
        field_24 = 0;
        field_0 = 0;
        field_8 = 0;
        new (this) std::mutex();
        new (&field_64, in_RSI) shared_ptr<dash3d::Decor>();
        new (&field_80, in_RDX) shared_ptr<dash3d::Decor>();
        bVar1 = operator!=(in_RSI, (_func_decltype_nullptr*)0);
        bVar2 = operator!=(in_RDX, (_func_decltype_nullptr*)0);
        if (bVar1 == bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("(vorbis != nullptr) != (wave != nullptr)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "LazyWave.h",
                      30, "Either wave or vorbis exclusively must not be null.");
        }
    }

    // 0x1002dc110, 16 bytes, complete-object destructor, inline, placed by class name
    // LazyWave::LazyWaveImpl::~LazyWaveImpl(): jumps straight to the base-object destructor

    // 0x1002dc120, 48 bytes, base-object destructor, inline, placed by class name
    // LazyWave::LazyWaveImpl::~LazyWaveImpl()
    void LazyWave::LazyWaveImpl::~LazyWaveImpl() {
        (&field_80)->~shared_ptr();
        (&field_64)->~shared_ptr();
        ~mutex();
    }

    // 0x1002e7040, 16 bytes, complete-object constructor, inline, placed by class name
    // LazyWave::LazyWave(LazyWave&&): jumps straight to the base-object constructor

    // 0x1002e7050, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LazyWave::LazyWave(LazyWave&&)
    /* dash3d::OperationBuffer::OperationBuffer(dash3d::OperationBuffer&&)
    */

    void dash3d::OperationBuffer::OperationBuffer(OperationBuffer* param_1) {
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
    }

} // namespace jag::oldscape::sound

namespace jag::oldscape::dash3d {
    // 0x1002d1fd0: the linker folded this into sound::LazyWave::LazyWave(sound::LazyWave const&), which has identical code
    OperationBuffer::OperationBuffer(OperationBuffer const&);

    // 0x1002dba90: the linker folded this into sound::LazyWave::LazyWave(sound::LazyWave const&), which has identical code
    OperationBuffer::OperationBuffer(OperationBuffer const&);

    // 0x1002e7040: the linker folded this into sound::LazyWave::LazyWave(sound::LazyWave&&), which has identical code
    OperationBuffer::OperationBuffer(OperationBuffer&&);

    // 0x1002e7050: the linker folded this into sound::LazyWave::LazyWave(sound::LazyWave&&), which has identical code
    OperationBuffer::OperationBuffer(OperationBuffer&&);

} // namespace jag::oldscape::dash3d
