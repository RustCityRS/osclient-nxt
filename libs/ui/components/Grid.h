// libs/ui/components/Grid.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Grid {
    public:
        // virtual methods in vtable order
        virtual ~Grid();
        virtual uint64_t GetType() const;
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void FlagLayoutDirty();
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual bool IsLayoutDirty() const;
        virtual uint64_t UpdateLayout(bool arg1);
        void SetGridParams(bool arg1, int arg2, int arg3);
        void UpdateComponentListLayout(const eastl::vector<ComponentContainer>& componentContainers, int& arg2,
                                       int& arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);
        unsigned long GetCellWidth() const;
        unsigned long GetCellHeight() const;
        unsigned long GetNumRows() const;
        unsigned long GetNumColumns() const;
        SeparatedIndexCount GetSizeEstimate(unsigned short arg1, unsigned short arg2, unsigned char arg3,
                                            unsigned char arg4, unsigned char arg5);
        void GetCellEstimate(unsigned short arg1, unsigned short arg2, unsigned short arg3, unsigned short arg4,
                             unsigned char arg5);

    private:
        unsigned short field_8;
        unsigned short field_10;
        uint8_t _unknown_12[76];
        int field_88;
        int field_92;
        uint8_t _unknown_96[336];
        unsigned int field_432;
        unsigned int field_436;
        uint8_t _unknown_440[128];
        unsigned int field_568;
        unsigned int field_572;
        unsigned int field_576;
        bool field_580;
        uint8_t m_layoutDirty;
        uint8_t _unknown_582[2];
    };

    // 0x1006ad710
    uint64_t Grid::GetType() const {
        return 21;
    }

    // 0x1006ad720
    void Grid::FlagLayoutDirty() {
        m_layoutDirty = 1;
    }

    // 0x1006ad730
    bool Grid::IsLayoutDirty() const {
        return m_layoutDirty;
    }

    // 0x1006b2db0
    Grid::~Grid() {}

} // namespace jag::ui

namespace jag::oldscape::dash3d {
    class GridRect {
    public:
        GridRect(int arg1, int arg2, int arg3, int arg4);
        GridRect();

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        uint8_t _unknown_16[4];
    };

    // 0x100326f10
    GridRect::GridRect() : field_0(-1), field_4(-1), field_8(0), field_12(0) {}

} // namespace jag::oldscape::dash3d
