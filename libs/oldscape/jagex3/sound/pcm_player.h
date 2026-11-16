// libs/oldscape/jagex3/sound/pcm_player.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class DummyPCMPlayer : public PCMPlayer // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DummyPCMPlayer();
        virtual void Service();

    private:
        uint8_t _unknown_8[40];
        int field_48;
        uint8_t _unknown_52[109];
    };

    class PCMPlayer {
    public:
        class PlayerTask;
        // virtual methods in vtable order
        virtual ~PCMPlayer();
        virtual void QueueAudioMuted(bool arg1);
        virtual void QueueDiscardBuffer();
        virtual void QueueQuit();
        virtual void SetInput(const shared_ptr<PCMStream>& pcmStream);
        virtual void __pure_slot_6() = 0;
        virtual void SubclassInit();
        virtual uint32_t AlreadyWritten();
        void DiscardBufferInner();
        void Lock();
        void Open(int arg1);
        void Close();
        void Unlock();
        PCMPlayer();
        void Generate(Array<int>& arg1, int arg2);
        void SetPCMPlayerFactory(std::unique_ptr<PCMPlayerFactory>&& pcmPlayerFactory);
        void Init(int arg1, bool arg2);
        auto GetPlayer(int arg1, int arg2);
        void DoneUpdate();
        void PretendToGenerate(int arg1);
        void ResetWantMix(PCMStream& pcmStream);
        void AddToBands(const shared_ptr<PCMStream>& pcmStream, int arg2);
        static int64_t m_stereo;
        static int32_t m_frequency;
        static bool m_clipWarn;
        static bool m_alreadyWarnedSubstreamsW;
        static int64_t m_pcmPlayerFactory;

    private:
        uint8_t _unknown_8[4];
        unsigned int field_12;
        uint8_t _unknown_16[24];
        uint64_t field_40;
        uint32_t field_48;
        uint64_t field_52;
        uint64_t field_60;
        mach_header* field_68;
        uint64_t field_76;
        uint8_t _unknown_84[4];
        uint64_t field_88;
        uint8_t _unknown_96[32];
        int field_128;
        uint8_t _unknown_132[36];
    };

    class PCMPlayer::PlayerTask : public MixerWorker // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~PlayerTask();
        virtual void OnInterval(float arg1, unsigned long long arg2);
        PlayerTask(PCMPlayer& pcmPlayer);

    private:
        uint8_t _unknown_8[168];
        TaskRunner* field_176;
        uint8_t field_184;
        uint8_t field_185;
        bool field_186;
        bool field_187;
        uint8_t field_188;
        uint8_t _unknown_189[3];
        int field_192;
        uint8_t _unknown_196[4];
        unsigned long long field_200;
        unsigned long field_208;
        TaskThreadPriority field_216;
        uint8_t _unknown_220[228];
        PCMPlayer* field_448;
    };

    class PCMPlayerFactory {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual ~PCMPlayerFactory();
        PCMPlayerFactory();
    };

    // 0x100126da0
    PCMPlayerFactory::PCMPlayerFactory() {}

    // 0x100126dc0
    NXTPCMPlayerFactory* NXTPCMPlayerFactory::CreatePCMPlayer() {
        auto local_20 = std::make_unique<NXTPCMPlayer>();
        unique_ptr<NXTPCMPlayer, std::default_delete<NXTPCMPlayer>, void, void>(local_20);
        return this;
    }

    // 0x100293a30
    PCMPlayer::~PCMPlayer() {
        field_160.~Array();
        field_136.~Array();
        field_112.~shared_ptr();
        field_96.~shared_ptr();
        field_16.~Array();
    }

    // 0x1002a8580
    PCMPlayer::PlayerTask::~PlayerTask() {
        ~Task(this);
    }

    // 0x1002abdd0
    PlayerTask* PCMPlayer::SetInput(shared_ptr<PCMStream> const&)::$_1::operator()() const {
        PCMPlayer* pcmPlayer = *(PCMPlayer**)this;
        PlayerTask* this_00 = (PlayerTask*)operator new(456);
        new (this_00) PlayerTask(*pcmPlayer);
        return this_00;
    }

    // 0x1002abe20
    PCMPlayer::PlayerTask::PlayerTask(PCMPlayer& pcmPlayer) : Task(1), field_448(pcmPlayer) {
        SetInterval(1);
    }

} // namespace jag::oldscape::sound
