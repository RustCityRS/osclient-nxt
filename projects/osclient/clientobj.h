// projects/osclient/clientobj.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ClientObj {
    public:
        // virtual methods in vtable order
        virtual ~ClientObj();
        virtual ClientObj* GetTempModel(int arg1);
        virtual bool IsClientLocAnim() const;
        void SetHighlight(const HighlightChannelProperties* arg1);
        bool IsLit() const;
        bool IsUnlit() const;
        bool IsOpEnabled(int arg1) const;
        AuthLibWrapper* GetHighlight();
        void SetEnabledOpsBitMask(unsigned char arg1);
        ClientObj();

    private:
        uint8_t _unknown_8[8];
        long field_16;
        uint8_t _unknown_24[24];
        uint64_t m_pHighlight;
        uint8_t m_enabledOpsBitMask;
    };

    // 0x100013930
    void ClientObj::SetHighlight(const HighlightChannelProperties* arg1) {
        m_pLanguage = arg1;
    }

    // 0x100022b10: ClientObj::~ClientObj() has the same machine code as option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100029ea0: ClientObj::IsClientLocAnim() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ClientObj::IsLit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ClientObj::IsUnlit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100071b90
    bool ClientObj::IsOpEnabled(int arg1) const {
        bool bVar1 = true;
        if ((unsigned int)arg1 < 5) {
            bVar1 = (m_enabledOpsBitMask >> (arg1 & 31U) & 1) != 0;
        }
        return bVar1;
    }

    // 0x1000fcbb0
    AuthLibWrapper* ClientObj::GetHighlight() {
        return m_pAuthWrapper;
    }

    // 0x1001174c0
    void ClientObj::SetEnabledOpsBitMask(unsigned char arg1) {
        m_readyAnim = arg1;
    }

    // 0x100153050
    ClientObj::ClientObj() : dash3d::UniqueModelSource(), m_pHighlight(0), m_enabledOpsBitMask(31) {}

    // 0x1001530b0
    ClientObj* ClientObj::GetTempModel(int arg1) {
        uint32_t in_register_00000034;

        auto local_30 =
            configdecoder::ObjType::List(*(int*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 24));
        GetModelLit(local_30.operator->());
        return this;
    }

} // namespace jag::oldscape

namespace jag::oldscape::minimenu {
    // 0x100071d90
    uint16_t MinimenuOp::HasProperty(OpProperty opProperty) const {
        return (field_0 >> (opProperty & 31) & 1) != 0;
    }

    // 0x1000720a0
    GameTokenResult* MinimenuGlobalEntryData::operator=(MinimenuGlobalEntryData&& minimenuGlobalEntryData) {
        *this = minimenuGlobalEntryData;
        field_32 = *(uint32_t*)(minimenuGlobalEntryData + 32);
        return this;
    }

} // namespace jag::oldscape::minimenu

namespace jag::game {
    // 0x1000fcbb0: BaseConfigTypeList::GetModeGame() const has the same machine code as oldscape::ClientObj::GetHighlight()

} // namespace jag::game
