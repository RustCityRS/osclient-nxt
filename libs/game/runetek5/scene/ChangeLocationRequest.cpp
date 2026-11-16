// libs/game/runetek5/scene/ChangeLocationRequest.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ChangeLocationRequest.h"

namespace jag::game {
    // 0x100009720: the linker folded this into BaseApp::GetExitCode(), which has identical code
    ChangeLocationRequest::GetSeqID() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    ChangeLocationRequest::GetCoordGrid() const;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    ChangeLocationRequest::GetLevel() const;

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    uint ChangeLocationRequest::GetServerGridZ() const;

    // 0x1000b7a70: the linker folded this into oldscape::minimenu::MinimenuEntry::GetObjType() const, which has identical code
    ChangeLocationRequest::GetSourceServerCycle() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    ChangeLocationRequest::GetServerGridX() const;

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    ChangeLocationRequest::GetLocTypeCustomisation() const;

    // 0x10016b490: the linker folded this into oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetMinMapZ() const, which has identical code
    ChangeLocationRequest::GetSeqDelay() const;

    // 0x10016b4a0: the linker folded this into oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetAdvisedZoom() const, which has identical code
    uint ChangeLocationRequest::GetLocationID() const;

    // 0x1002f0710: the linker folded this into oldscape::dash3d::ModelRSevenCommon::IsDynamic() const, which has identical code
    ChangeLocationRequest::OverrideTransform() const;

    // 0x100497ee0, 80 bytes, placed by class name and debug map
    // ChangeLocationRequest::Destruct()
    void ChangeLocationRequest::Destruct() {
        CoordGrid local_20;

        new (&local_20) game::CoordGrid();
        m_serverGridZ = local_20.field_8;
        m_level = local_20._0_8_;
        m_locData[1] = 0;
        m_locationID = 4294967295;
        shared_ptr<LocTypeCustomisation>::reset();
        m_seqID = 4294967295;
    }

    // 0x100497f80, 144 bytes, placed by class name and debug map
    // ChangeLocationRequest::ActionRequest(LocationContainer&)
    undefined8 ChangeLocationRequest::ActionRequest(LocationContainer* param_1) {
        undefined8 uVar1;

        if (field_104 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_changeLocationType != ChangeLocationRequestType::UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ChangeLocationRequest.cpp",
                      23, (char*)0);
        }
        if (field_104 - 2 < 3) {
            if (m_locationID == 4294967295) {
                uVar1 = 0;
                param_1->DeleteLocation(this, 0);
            } else {
                uVar1 = param_1->ChangeLocation(this);
            }
        } else if (field_104 == 1) {
            uVar1 = param_1->AnimateLocation(this);
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

} // namespace jag::game
