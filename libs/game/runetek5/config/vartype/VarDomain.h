// libs/game/runetek5/config/vartype/VarDomain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag::game {
    class VarDomain {
    public:
        // virtual methods in vtable order
        virtual ~VarDomain();
        operator=(VarDomain const&);
        VarDomain(VarDomain const&);
        VarDomain();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    VarDomain::operator=(VarDomain const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    VarDomain::~VarDomain();

    // 0x1004be5d0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // VarDomain::VarDomain(VarDomain const&)
    /* VarDomain::VarDomain() */

    void VarDomain::VarDomain() {
        field_0 = PTR_vtable_100ee85f8 + 16;
    }

    // 0x1004be5d0: the linker folded this into VarDomain::VarDomain(VarDomain const&), which has identical code
    VarDomain::VarDomain();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    VarDomain::~VarDomain();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    VarDomain::~VarDomain();

} // namespace jag::game
