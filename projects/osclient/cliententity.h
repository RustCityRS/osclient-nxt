// projects/osclient/cliententity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ClientEntity : public jag::graphics::Drawable // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ClientEntity();
        virtual bool IsClientNPC();
        virtual uint64_t Ready() const;
        bool IsClientLocAnim() const;
        bool IsLit() const;
        bool IsUnlit() const;
        uint32_t GetScriptedOverlayIndex(int arg1);
        void SetScriptedOverlay(int arg1, int arg2);
        void RemoveScriptedOverlay(int arg1);
        void SetUnhidden();
        void SetHiddenBy(const ClientEntityID& clientEntityID);
        void ClearSpotAnims();
        void AbortRoute();
        void ClearPendingFacing();
        int* GetSpotAnims();
        uint32_t GetServerX() const;
        uint32_t GetServerZ() const;
        auto GetScriptedOverlays();
        void IsHiddenBelowOtherEntity() const;
        uint8_t* GetHiddenBy() const;
        unsigned long HasHitmark(int arg1) const;
        void AddSpotAnim(int arg1, int arg2, int arg3, int arg4, int arg5);
        void AddHitmark(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void AddHeadbar(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void ClearHeadbar(int arg1);
        void CombineWithSpotAnim(shared_ptr<dash3d::ModelLit>& modelLit);
        bool HasHeadbar() const;
        bool HasScriptedOverlays() const;
        ClientEntity();

    private:
        long field_16;
        uint64_t field_24;
        uint8_t _unknown_32[8];
        uint64_t field_40;
        uint32_t field_48;
        uint32_t field_52;
        uint32_t field_56;
        uint32_t field_60;
        uint32_t field_64;
        uint32_t field_68;
        uint32_t field_72;
        uint32_t field_76;
        uint32_t field_80;
        uint32_t field_84;
        uint32_t field_88;
        uint32_t field_92;
        uint32_t field_96;
        uint32_t field_100;
        uint32_t field_104;
        uint8_t _unknown_108[36];
        uint16_t field_144;
        uint8_t _unknown_146[2];
        uint64_t field_148;
        uint32_t field_156;
        uint8_t _unknown_160[48];
        uint8_t field_208;
        uint8_t _unknown_209[3];
        uint8_t field_212[16];
        uint8_t field_228[16];
        uint8_t field_244[16];
        uint8_t field_260[16];
        uint8_t field_276[16];
        uint8_t _unknown_292[36];
        uint32_t field_328;
        uint8_t field_332;
        uint8_t _unknown_333[3];
        uint32_t field_336;
        uint8_t _unknown_340[12];
        uint8_t field_352;
        uint8_t _unknown_353[3];
        uint64_t field_356;
        uint64_t field_364;
        uint32_t field_372;
        uint64_t field_376;
        uint64_t field_384;
        uint64_t field_392;
        uint64_t field_400;
        uint64_t field_408;
        uint64_t field_416;
        uint64_t field_424;
        uint64_t field_432;
        uint32_t field_440;
        uint8_t _unknown_444[92];
        uint64_t field_536;
        uint64_t field_544;
        uint32_t field_552;
        uint8_t _unknown_556[3];
        uint8_t field_559;
        uint8_t m_hiddenBy[8];
        uint8_t _unknown_568[384];
        int m_spotAnims;
        uint8_t _unknown_956[4];
    };

    class ClientEntityID {
    public:
        int GetSlotID() const;
        ClientEntityID();
        ClientEntityID(bool arg1, int arg2);
        bool IsValid() const;
        bool IsPlayer() const;

    private:
        uint16_t field_0;
        uint8_t _unknown_2[2];
        int m_slotID;
        uint8_t _unknown_8[4];
    };

    // 0x1000de5f0
    void ClientEntity::SetUnhidden() {
        uint64_t in_RAX;
        uint8_t local_18[8];

        local_18 = (uint8_t[8])in_RAX;
        new (local_18) ClientEntityID();
        *&m_hiddenBy = local_18;
    }

    // 0x1000de640
    void ClientEntity::SetHiddenBy(const ClientEntityID& clientEntityID) {
        uint16_t uVar1 = *(uint16_t*)&clientEntityID.field_2;
        int iVar2 = clientEntityID.m_slotID;
        *(uint16_t*)(m_hiddenBy + 0) = clientEntityID.field_0;
        *(uint16_t*)(m_hiddenBy + 2) = uVar1;
        *(int*)(m_hiddenBy + 4) = iVar2;
    }

    // 0x1000f8790
    void ClientEntity::ClearSpotAnims() {
        m_spotAnims.clear();
    }

    // 0x1000f9490
    int* ClientEntity::GetSpotAnims() {
        return &m_spotAnims;
    }

    // 0x1000fc670
    uint32_t ClientEntity::GetServerX() const {
        unsigned long in_RSI;

        uint32_t* puVar1 = &field_444[in_RSI];
        return *puVar1;
    }

    // 0x1000fc690
    uint32_t ClientEntity::GetServerZ() const {
        unsigned long in_RSI;

        uint32_t* puVar1 = &field_484[in_RSI];
        return *puVar1;
    }

    // 0x100110620
    void ClientEntity::IsHiddenBelowOtherEntity() const {
        m_hiddenBy->IsValid();
    }

    // 0x1001106c0
    uint8_t* ClientEntity::GetHiddenBy() const {
        return m_hiddenBy;
    }

    // 0x10011cd40
    bool ClientEntity::HasHeadbar() const {
        return field_296.empty() ^ 1;
    }

    // 0x10011cd60
    bool ClientEntity::HasScriptedOverlays() const {
        return field_568.empty() ^ 1;
    }

    // 0x100131e30
    ClientEntity::~ClientEntity() {
        field_568.~fixed_map();
        field_296.~list();
        field_160.~fixed_vector();
        field_112.~basic_string();
        destruct<highlight::NpcUID*>();
    }

    // 0x100153340
    ClientEntity::ClientEntity() : dash3d::UniqueModelSource(), field_24(0) {
        *(uint64_t*)((long)&field_24 + 5) = 0;
        field_40 = 1;
        field_48 = 4294967295;
        field_52 = 4294967295;
        field_56 = 4294967295;
        field_60 = 4294967295;
        field_64 = 4294967295;
        field_68 = 4294967295;
        field_72 = 4294967295;
        field_76 = 4294967295;
        field_80 = 4294967295;
        field_84 = 4294967295;
        field_88 = 4294967295;
        field_92 = 4294967295;
        field_92 = 4294967295;
        field_96 = 4294967295;
        field_100 = 4294967295;
        field_104 = 4294967295;
        new (&field_112) eastl::string();
        field_144 = 0;
        field_148 = 100;
        field_156 = 0;
        new (&field_160) eastl::fixed_vector<unsigned char, 8ul>();
        field_208 = 0;
        *&field_212 = (uint8_t[16])0;
        *&field_228 = (uint8_t[16])0;
        *&field_244 = (uint8_t[16])0;
        *&field_260 = (uint8_t[16])0;
        *&field_276 = (uint8_t[16])0;
        new (&field_296) eastl::list<shared_ptr<configdecoder::HeadbarQueue>>();
        field_328 = 4294967295;
        field_332 = 0;
        field_336 = 4294967295;
        new (&field_340) rs2lib::CoordGrid();
        field_352 = 0;
        field_356 = 4294967295;
        field_364 = 0;
        field_372 = 4294967295;
        field_376 = 0;
        field_384 = 0;
        field_392 = 0;
        field_400 = 0;
        field_408 = 0;
        field_416 = 0;
        field_424 = 200;
        field_432 = 137438953472;
        field_440 = 0;
        field_536 = 0;
        field_544 = 18446744073709551615;
        field_552 = 4294967295;
        field_559 = 0;
        new (m_hiddenBy) ClientEntityID();
        new (&field_568) eastl::fixed_map<int, unsigned long, 5ul>();
        new (&m_spotAnims) eastl::vector_map<int, SpotAnimClient>();
    }

    // 0x100154460
    void
    ClientEntity::ClearHeadbar(int)::$_23::operator()(shared_ptr<configdecoder::HeadbarQueue>& headbarQueue) const {
        shared_ptr<midi2::MidiRequest>* midiRequest1 = field_0;
        auto midiRequest2 = headbarQueue.operator->();
        *midiRequest1 == *midiRequest2;
    }

} // namespace jag::oldscape
