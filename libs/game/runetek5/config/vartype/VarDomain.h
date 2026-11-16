// libs/game/runetek5/config/vartype/VarDomain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag::game {
    class VarDomain {
    public:
        // virtual methods in vtable order
        virtual ~VarDomain();
        void operator=(const VarDomain& arg1);
        VarDomain(const VarDomain& arg1);
        VarDomain();
    };

    // 0x100009ca0: VarDomain::operator=(VarDomain const&) has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009e70: VarDomain::~VarDomain() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1004be5d0
    VarDomain::VarDomain(const VarDomain& arg1) {}

    // 0x1004be5d0: VarDomain::VarDomain() has the same machine code as VarDomain::VarDomain(VarDomain const&)

} // namespace jag::game
