// libs/ui/components/Panel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Panel : public Grid // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Panel();
        virtual uint64_t GetType() const;
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void FlagLayoutDirty();
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual bool IsLayoutDirty() const;
        virtual uint64_t UpdateLayout(bool arg1);
        ReturnValue GetTotalRequiredSize() const;
        void UpdateComponentListLayout(const eastl::vector<ComponentContainer>& componentContainers, int arg2, int arg3,
                                       int arg4, const UIPoint& uiPoint, int& arg6);
        uint64_t GetRequiredSize(const eastl::vector<ComponentContainer>& componentContainers) const;

    private:
        unsigned short field_8;
        unsigned short field_10;
        uint8_t _unknown_12[60];
        int field_72;
        int field_76;
        uint8_t _unknown_80[8];
        int field_88;
        int field_92;
        uint8_t _unknown_96[336];
        unsigned int field_432;
        unsigned int field_436;
        uint8_t _unknown_440[128];
        uint8_t m_layoutDirty;
        vector<ComponentContainer> field_569;
        uint8_t _unknown_570[2];
        unsigned int field_572;
        uint8_t _unknown_576[4];
    };

    // 0x1006adfe0
    uint64_t Panel::GetType() const {
        return 20;
    }

    // 0x1006adff0
    void Panel::FlagLayoutDirty() {
        m_layoutDirty = 1;
    }

    // 0x1006ae000
    bool Panel::IsLayoutDirty() const {
        return m_layoutDirty;
    }

} // namespace jag::ui
