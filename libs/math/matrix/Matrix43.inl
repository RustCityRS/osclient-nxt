// libs/math/matrix/Matrix43.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape {
    // 0x1001d21f0
    uint8_t* NoJs5ResourceProvider::IndexReady(const Js5ArchiveSettings& arg1) {
        return DataStatus::MISSING;
    }

    // 0x1001d21f0: NoJs5ResourceProvider::GroupPreloaded(Js5ArchiveSettings const&, unsigned int, bool, bool&) has the same machine code as NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&)

    // 0x1001d21f0: NoJs5ResourceProvider::GetIndex(Js5Index const**, Js5ArchiveSettings const&) has the same machine code as NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&)

    // 0x1001d21f0: NoJs5ResourceProvider::GetIndex(Js5Index**, Js5ArchiveSettings const&) has the same machine code as NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&)

    // 0x1001d21f0: NoJs5ResourceProvider::FileReady(Js5ArchiveSettings const&, unsigned int, unsigned int, Priority const*, bool) has the same machine code as NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&)

    // 0x1001d21f0: NoJs5ResourceProvider::GetMasterIndex(Js5MasterIndex const**) const has the same machine code as NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&)

    // 0x1001d22c0
    OSRenderCore_LogicThread_RSeven::OSRenderCore_LogicThread_RSeven() {
        new (&field_16) dash3d::RSevenModelLitRenderer();
        field_672.unique_ptr<true, void>();
    }

} // namespace jag::oldscape

namespace jag::math {
    // 0x1001d2170
    Matrix43T<float>::Matrix43T(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                                float arg8, float arg9, float arg10, float arg11, float arg12) {
        Matrix43T(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }

} // namespace jag::math
