// libs/oldscape/jagex3/sound/pcm_player.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class DummyPCMPlayer : public PCMPlayer // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DummyPCMPlayer();
        virtual void Service();

        // data members, from how the methods use this: 161 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[40];
        int field_48; // offset 48
        char _unknown_52[109];
    };

    class PCMPlayer {
    public:
        class PlayerTask;
        // virtual methods in vtable order
        virtual ~PCMPlayer();
        virtual void QueueAudioMuted(bool);
        virtual void QueueDiscardBuffer();
        virtual void QueueQuit();
        virtual void SetInput(shared_ptr<PCMStream> const&);
        virtual void __pure_slot_6() = 0;
        virtual SubclassInit();
        virtual AlreadyWritten();
        DiscardBufferInner();
        Lock();
        Open(int);
        Close();
        Unlock();
        PCMPlayer();
        void Generate(Array<int, eastl::allocator>&, int);
        void SetPCMPlayerFactory(std::unique_ptr<PCMPlayerFactory, std::default_delete<PCMPlayerFactory>>&&);
        void Init(int, bool);
        PCMPlayer* GetPlayer(int, int);
        void DoneUpdate();
        void PretendToGenerate(int);
        void ResetWantMix(PCMStream&);
        void AddToBands(shared_ptr<PCMStream> const&, int);
        static /* 8 bytes */ m_stereo;
        static /* 4 bytes */ m_frequency;
        static /* 1 bytes */ m_clipWarn;
        static /* 7 bytes */ m_alreadyWarnedSubstreamsW;
        static /* 8 bytes */ m_pcmPlayerFactory;

        // data members, from how the methods use this: 168 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[4];
        uint field_12; // offset 12
        char _unknown_16[24];
        undefined8 field_40;   // offset 40
        undefined4 field_48;   // offset 48
        undefined8 field_52;   // offset 52
        undefined8 field_60;   // offset 60
        mach_header* field_68; // offset 68
        undefined8 field_76;   // offset 76
        char _unknown_84[4];
        undefined8 field_88;  // offset 88
        shared_ptr field_96;  // offset 96
        shared_ptr field_112; // offset 112
        int field_128;        // offset 128
        char _unknown_132[36];
    };

    class PCMPlayer::PlayerTask : public MixerWorker // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~PlayerTask();
        virtual void OnInterval(float, unsigned long long);
        PlayerTask(PCMPlayer&);

        // data members, from how the methods use this: 456 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[168];
        TaskRunner* field_176; // offset 176
        undefined1 field_184;  // offset 184
        undefined1 field_185;  // offset 185
        bool field_186;        // offset 186
        bool field_187;        // offset 187
        undefined1 field_188;  // offset 188
        char _unknown_189[3];
        int field_192; // offset 192
        char _unknown_196[4];
        ulonglong field_200;  // offset 200
        undefined8 field_208; // offset 208
        int field_216;        // offset 216
        char _unknown_220[228];
        PCMPlayer* field_448; // offset 448
    };

    class PCMPlayerFactory {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual ~PCMPlayerFactory();
        PCMPlayerFactory();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100126da0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PCMPlayerFactory::PCMPlayerFactory()
    void PCMPlayerFactory::PCMPlayerFactory() {
        field_0 = PTR_vtable_100ee8958 + 16;
    }

    // 0x100126dc0, 64 bytes, inline, placed by debug map only (low confidence)
    // NXTPCMPlayerFactory::CreatePCMPlayer()
    NXTPCMPlayerFactory* NXTPCMPlayerFactory::CreatePCMPlayer() {
        unique_ptr local_20[8];

        std::make_unique<NXTPCMPlayer>();
        std::unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>::unique_ptr<
            NXTPCMPlayer, std::default_delete<NXTPCMPlayer>, void, void>(
            (unique_ptr<PCMPlayer, std::default_delete<PCMPlayer>>*)this, local_20);
        local_20->~unique_ptr();
        return this;
    }

    // 0x100293a30, 96 bytes, base-object destructor, inline, placed by class name
    // PCMPlayer::~PCMPlayer()
    void PCMPlayer::~PCMPlayer() {
        field_0 = &PTR__OptionStore_100ef9c70;
        (&field_160)->~Array();
        (&field_136)->~Array();
        field_112->~shared_ptr();
        field_96->~shared_ptr();
        (&field_16)->~Array();
        ~AutoSingleton();
    }

    // 0x1002a7500, 16 bytes, complete-object destructor, inline, placed by class name
    // PCMPlayer::PlayerTask::~PlayerTask(): jumps straight to the base-object destructor

    // 0x1002a7510, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PCMPlayer::PlayerTask::~PlayerTask()
    /* MixerWorker::~MixerWorker() */

    void MixerWorker::~MixerWorker() {
        ~MixerWorker(this);
        operator_delete(this);
    }

    // 0x1002a8580, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PCMPlayer::PlayerTask::~PlayerTask()
    /* Task::~Task() */

    void Task::~Task() {
        ~Task(this);
    }

    // 0x1002abdd0, 64 bytes, inline, placed by class name
    // PCMPlayer::SetInput(shared_ptr<PCMStream> const&)::$_1::operator()() const
    /* PCMPlayer::SetInput(shared_ptr<PCMStream>
   const&)::$_1::TEMPNAMEPLACEHOLDERVALUE() const */

    PlayerTask* PCMPlayer::SetInput(shared_ptr<PCMStream> const&)::$_1::operator()() {
        PCMPlayer* pPVar1;
        PlayerTask* this_00;

        pPVar1 = *(PCMPlayer**)this;
        this_00 = operator_new(456);
        PlayerTask::PlayerTask(this_00, pPVar1);
        return this_00;
    }

    // 0x1002abe10, 16 bytes, complete-object constructor, inline, placed by class name
    // PCMPlayer::PlayerTask::PlayerTask(PCMPlayer&): jumps straight to the base-object constructor

    // 0x1002abe20, 80 bytes, base-object constructor, inline, placed by class name
    // PCMPlayer::PlayerTask::PlayerTask(PCMPlayer&)
    void PCMPlayer::PlayerTask::PlayerTask(PCMPlayer* param_1) {
        new (this) Task(1);
        field_0 = &PTR__MixerWorker_100ef9d38;
        field_448 = param_1;
        SetInterval(1);
    }

} // namespace jag::oldscape::sound
