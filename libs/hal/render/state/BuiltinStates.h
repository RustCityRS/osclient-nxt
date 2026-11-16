// libs/hal/render/state/BuiltinStates.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class BuiltinStates {
    public:
        // virtual methods in vtable order
        virtual ~BuiltinStates();
        void GetShadowPassRS(CullMode) const;
        BuiltinStates();
        void SetAnisotropy(float);
        void CreateShadowSamplerState(SamplerState&);

        // data members, from how the methods use this: 2672 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[2664];
    };

    // 0x1008b0380, 48 bytes, inline, placed by class name and debug map
    // BuiltinStates::GetShadowPassRS(CullMode) const
    void BuiltinStates::GetShadowPassRS(undefined4 param_2) {
        int iVar1;

        iVar1 = GetCullModeIndex(param_2);
        std::array<RasteriserState, 4ul>::operator[]((array<RasteriserState, 4ul>*)&field_1344, (long)iVar1);
    }

    // 0x100bf6780, 16 bytes, complete-object destructor, inline, placed by class name
    // BuiltinStates::~BuiltinStates(): jumps straight to the base-object destructor

    // 0x100bf6790, 32 bytes, deleting destructor, inline, placed by class name
    // BuiltinStates::~BuiltinStates()
    void BuiltinStates::~BuiltinStates() {
        ~BuiltinStates(this);
        operator_delete(this);
    }

    // 0x100c0c180, 386 bytes, base-object destructor, inline, placed by class name
    // BuiltinStates::~BuiltinStates()
    void BuiltinStates::~BuiltinStates() {
        field_0 = PTR_vtable_100ee8660 + 16;
        (&field_2588)->~BlendState();
        (&field_2512)->~BlendState();
        (&field_2436)->~BlendState();
        (&field_2360)->~BlendState();
        (&field_2284)->~BlendState();
        (&field_2208)->~BlendState();
        (&field_2132)->~BlendState();
        (&field_2056)->~BlendState();
        (&field_1980)->~BlendState();
        (&field_1904)->~BlendState();
        (&field_1828)->~BlendState();
        (&field_1752)->~BlendState();
        (&field_1676)->~BlendState();
        (&field_1600)->~BlendState();
        (&field_1524)->~BlendState();
        (&field_1488)->~RasteriserState();
        (&field_1344)->~array();
        (&field_1308)->~RasteriserState();
        (&field_1272)->~RasteriserState();
        (&field_1236)->~RasteriserState();
        (&field_1200)->~RasteriserState();
        (&field_1140)->~DepthStencilState();
        (&field_1080)->~DepthStencilState();
        (&field_1020)->~DepthStencilState();
        (&field_960)->~DepthStencilState();
        (&field_900)->~DepthStencilState();
        (&field_840)->~DepthStencilState();
        (&field_780)->~DepthStencilState();
        (&field_720)->~DepthStencilState();
        ~AutoSingleton();
    }

} // namespace jag::render
