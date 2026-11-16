// libs/math/matrix/Matrix43.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape {
    // 0x1001d21c0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // NoJs5ResourceProvider::~NoJs5ResourceProvider(): jumps straight to the base-object destructor

    // 0x1001d21d0, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // NoJs5ResourceProvider::~NoJs5ResourceProvider()
    void NoJs5ResourceProvider::~NoJs5ResourceProvider() {
        ~NoJs5ResourceProvider(this);
        operator_delete(this);
    }

    // 0x1001d21f0, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&)
    /* NoJs5ResourceProvider::GetIndex(Js5Index**, Js5ArchiveSettings const&)
    */

    undefined* NoJs5ResourceProvider::GetIndex(Js5Index** param_1, Js5ArchiveSettings* param_2) {
        return DataStatus::MISSING;
    }

    // 0x1001d21f0: the linker folded this into NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&), which has identical code
    NoJs5ResourceProvider::GroupPreloaded(Js5ArchiveSettings const&, unsigned int, bool, bool&);

    // 0x1001d21f0: the linker folded this into NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&), which has identical code
    NoJs5ResourceProvider::GetIndex(Js5Index const**, Js5ArchiveSettings const&);

    // 0x1001d21f0: the linker folded this into NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&), which has identical code
    NoJs5ResourceProvider::GetIndex(Js5Index**, Js5ArchiveSettings const&);

    // 0x1001d21f0: the linker folded this into NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&), which has identical code
    NoJs5ResourceProvider::FileReady(Js5ArchiveSettings const&, unsigned int, unsigned int, Priority const*, bool);

    // 0x1001d21f0: the linker folded this into NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&), which has identical code
    NoJs5ResourceProvider::GetMasterIndex(Js5MasterIndex const**) const;

    // 0x1001d22c0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::OSRenderCore_LogicThread_RSeven()
    void OSRenderCore_LogicThread_RSeven::OSRenderCore_LogicThread_RSeven() {
        undefined8* in_RSI;

        new (&field_16) dash3d::RSevenModelLitRenderer();
        field_0 = *in_RSI;
        std::unique_ptr<jag::graphics::MaterialManager, std::default_delete<jag::graphics::MaterialManager>>::
            unique_ptr<true, void>((unique_ptr<jag::graphics::MaterialManager,
                                               std::default_delete<jag::graphics::MaterialManager>>*)&field_672);
    }

} // namespace jag::oldscape

namespace jag::math {
    // 0x1001d2170, 80 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Matrix43T(float, float, float, float, float, float, float, float, float, float, float, float)
    void Matrix43T<float>::Matrix43T(float param_1, float param_2, float param_3, float param_4, float param_5,
                                     float param_6, float param_7, float param_8, float param_9, float param_10,
                                     float param_11, float param_12) {
        Matrix43T(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
                  param_11, param_12);
    }

} // namespace jag::math
