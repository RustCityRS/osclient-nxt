// projects/osclient/highlighting/HighlightChannelProperties.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class HighlightChannelProperties {
    public:
        bool IsEnabled() const;
        HighlightChannelProperties();
        void CreateHighlightData(const HighlightChannelProperties* highlightChannelProperties);

    private:
        uint8_t _unknown_0[10];
        uint8_t field_10;
    };

    // 0x10000e730
    bool HighlightChannelProperties::IsEnabled() const {
        bool cVar1 = HasModelHighlight();
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = HasTileHighlight();
        }
        return uVar2;
    }

    // 0x10002a860
    HighlightChannelProperties::HighlightChannelProperties() : dash3d::EntityHighlight(), field_10(255) {}

    // 0x1000de450
    void HighlightChannelProperties::CreateHighlightData(const HighlightChannelProperties* highlightChannelProperties) {
        uint8_t auVar1[16];
        EntityHighlight local_18;

        if (highlightChannelProperties == nullptr) {
            local_18.field_8 = 0;
            local_18.field_9 = '\0';
            local_18.m_colour = 0;
            local_18.field_2 = 0;
            local_18.field_4 = '\0';
            local_18._5_1_ = 0;
            local_18.field_6 = 0;
            local_18._7_1_ = 0;
            local_18 = dash3d::EntityHighlight();
        } else {
            local_18.field_8 = highlightChannelProperties->field_8;
            local_18.field_9 = highlightChannelProperties->field_9;
            local_18.m_colour = *(uint16_t*)&highlightChannelProperties->field_0;
            local_18.field_2 = *(short*)&highlightChannelProperties->field_2;
            local_18.field_4 = highlightChannelProperties->field_4;
            local_18._5_1_ = highlightChannelProperties->field_5;
            local_18.field_6 = highlightChannelProperties->field_6;
            local_18._7_1_ = highlightChannelProperties->field_7;
        }
        auVar1[8] = local_18.field_8;
        auVar1[9] = local_18.field_9;
        auVar1._0_2_ = local_18.m_colour;
        auVar1._2_2_ = local_18.field_2;
        auVar1[4] = local_18.field_4;
        auVar1[5] = local_18._5_1_;
        auVar1[6] = local_18.field_6;
        auVar1[7] = local_18._7_1_;
        auVar1._10_6_ = 0;
        return auVar1;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1000de620
    shared_ptr<oldscape::dash3d::ModelSource>
    static_pointer_cast<oldscape::dash3d::ModelSource, shared_ptr<oldscape::ClientPlayer>>(
        const shared_ptr<oldscape::ClientPlayer>& clientNpc) {
        shared_ptr<oldscape::dash3d::GroundDecor>* in_RSI;

        new (clientNpc) shared_ptr(in_RSI);
        return clientNpc;
    }

} // namespace jag
