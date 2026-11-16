// libs/oldscape/jagex3/client/LocInfo.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class LocInfo {
    public:
        bool IsSet() const;
        unsigned char GetLevel() const;
        unsigned char GetX() const;
        unsigned char GetZ() const;
        char GetLayer() const;
        LocInfo(long long arg1);
        LocInfo* operator=(LocInfo&& locInfo);
        auto GetLocType() const;
        unsigned char GetRotate() const;
        LocInfo(unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4, LocLayer locLayer,
                shared_ptr<configdecoder::LocType> locType);
        ~LocInfo();
        LocInfo(LocInfo&& locInfo);
        LocInfo(const LocInfo& locInfo);
        LocInfo();
        LocInfo* operator=(const LocInfo& locInfo);

    private:
        unsigned char m_level;
        unsigned char m_x;
        unsigned char m_z;
        unsigned char m_rotate;
        char m_layer;
        uint8_t _unknown_5[11];
    };

    // 0x1000b7670
    bool LocInfo::IsSet() const {
        return m_layer != '\x04';
    }

    // 0x1000b7680
    unsigned char LocInfo::GetLevel() const {
        return m_shape;
    }

    // 0x1000b7690
    unsigned char LocInfo::GetX() const {
        return m_rot;
    }

    // 0x1000b76a0
    unsigned char LocInfo::GetZ() const {
        return m_directionMask;
    }

    // 0x1000b76f0
    char LocInfo::GetLayer() const {
        return m_stopExponent;
    }

    // 0x1000b7940
    LocInfo* LocInfo::operator=(LocInfo&& locInfo) {
        m_layer = locInfo.m_layer;
        unsigned char uVar1 = locInfo.m_x;
        unsigned char uVar2 = locInfo.m_z;
        unsigned char uVar3 = locInfo.m_rotate;
        m_level = locInfo.m_level;
        m_x = uVar1;
        m_z = uVar2;
        m_rotate = uVar3;
        field_8 = locInfo.field_8;
        return this;
    }

    // 0x10011ac80
    auto LocInfo::GetLocType() const {
        return auto(&field_8);
    }

    // 0x10011aca0
    unsigned char LocInfo::GetRotate() const {
        return m_deceleration;
    }

    // 0x10011c9a0: LocInfo::~LocInfo() has the same machine code as dash3d::ModelAppender::~ModelAppender()

    // 0x100125030
    LocInfo::LocInfo(long long arg1) {
        unsigned char uVar1 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(arg1);
        m_level = uVar1;
        uVar1 = dash3d::MousePickingHelper::GetEntityXFromTypecode(arg1);
        m_x = uVar1;
        uVar1 = dash3d::MousePickingHelper::GetEntityZFromTypecode(arg1);
        m_z = uVar1;
        m_rotate = '\0';
        m_layer = dash3d::MousePickingHelper::GetLocLayerFromTypecode(arg1);
        int arg1_00 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(arg1);
        auto groundDecor = configdecoder::LocType::List(arg1_00);
        new (&field_8) shared_ptr(groundDecor);
        if (!field_8 != nullptr) {
            LogAssert("m_locType != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/client/"
                      "LocInfo.h",
                      32, "Invalid LocType from typecode");
        }
    }

    // 0x10012a760: LocInfo::~LocInfo() has the same machine code as eastl::pair<Font const, shared_ptr<jstring::PixfontGeneric>>::~pair()

    // 0x1001307a0
    LocInfo::LocInfo(unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4, LocLayer locLayer,
                     shared_ptr<configdecoder::LocType> locType)
        : m_level(arg1), m_x(arg2), m_z(arg3), m_rotate(arg4) {
        m_layer = (char)locLayer;
        new (&field_8) shared_ptr(locType);
    }

    // 0x100146ad0
    LocInfo::LocInfo(LocInfo&& locInfo) : m_layer(locInfo.m_layer) {
        unsigned char uVar1 = locInfo.m_x;
        unsigned char uVar2 = locInfo.m_z;
        unsigned char uVar3 = locInfo.m_rotate;
        m_level = locInfo.m_level;
        m_x = uVar1;
        m_z = uVar2;
        m_rotate = uVar3;
        field_8.shared_ptr<FileRSevenDebugPresetProvider, void>(locInfo.field_8);
    }

    // 0x100147110
    LocInfo::LocInfo(const LocInfo& locInfo) : m_layer(locInfo.m_layer) {
        unsigned char uVar1 = locInfo.m_x;
        unsigned char uVar2 = locInfo.m_z;
        unsigned char uVar3 = locInfo.m_rotate;
        m_level = locInfo.m_level;
        m_x = uVar1;
        m_z = uVar2;
        m_rotate = uVar3;
        new (&field_8) shared_ptr(&locInfo.field_8);
    }

    // 0x1001a2fe0
    LocInfo::LocInfo() {
        m_layer = '\x04';
        new (&field_8) shared_ptr();
    }

    // 0x1001a31a0
    LocInfo* LocInfo::operator=(const LocInfo& locInfo) {
        m_layer = locInfo.m_layer;
        unsigned char uVar1 = locInfo.m_x;
        unsigned char uVar2 = locInfo.m_z;
        unsigned char uVar3 = locInfo.m_rotate;
        m_level = locInfo.m_level;
        m_x = uVar1;
        m_z = uVar2;
        m_rotate = uVar3;
        field_8 = locInfo.field_8;
        return this;
    }

} // namespace jag::oldscape

namespace jag::ui {
    // 0x10011aca0: ComponentSwipeConfig::GetDeceleration() const has the same machine code as oldscape::LocInfo::GetRotate() const

} // namespace jag::ui
