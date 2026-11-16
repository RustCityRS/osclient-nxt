// libs/game/runetek5/scene/ChangeLocationRequest.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ChangeLocationRequest.h"

namespace jag::game {
    // 0x100009720: ChangeLocationRequest::GetSeqID() const has the same machine code as BaseApp::GetExitCode()

    // 0x100009d50: ChangeLocationRequest::GetCoordGrid() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100024170: ChangeLocationRequest::GetLevel() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100066b70: ChangeLocationRequest::GetServerGridZ() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1000b7a70: ChangeLocationRequest::GetSourceServerCycle() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetObjType() const

    // 0x1000e5d50, the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const
    uint64_t ChangeLocationRequest::GetServerGridX() const {
        return m_level;
    }

    // 0x100102fc0: ChangeLocationRequest::GetLocTypeCustomisation() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x10016b490: ChangeLocationRequest::GetSeqDelay() const has the same machine code as oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetMinMapZ() const

    // 0x10016b4a0: ChangeLocationRequest::GetLocationID() const has the same machine code as oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetAdvisedZoom() const

    // 0x1002f0710: ChangeLocationRequest::OverrideTransform() const has the same machine code as oldscape::dash3d::ModelRSevenCommon::IsDynamic() const

    // 0x100497ee0
    void ChangeLocationRequest::Destruct() {

        CoordGrid local_20;
        m_serverGridZ = local_20.field_8;
        m_level = local_20._0_8_;
        m_locData[1] = 0;
        m_locationID = 4294967295;
        field_80.reset();
        m_seqID = 4294967295;
    }

    // 0x100497f80
    uint64_t ChangeLocationRequest::ActionRequest(LocationContainer& locationContainer) {
        uint64_t uVar1;

        if (field_104 == 0) {
            LogAssert("m_changeLocationType != ChangeLocationRequestType::UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ChangeLocationRequest.cpp",
                      23, nullptr);
        }
        if (field_104 - 2 < 3) {
            if (m_locationID == 4294967295) {
                uVar1 = 0;
                locationContainer.DeleteLocation(*this, nullptr);
            } else {
                uVar1 = locationContainer.ChangeLocation(*this);
            }
        } else if (field_104 == 1) {
            uVar1 = locationContainer.AnimateLocation(*this);
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

} // namespace jag::game
