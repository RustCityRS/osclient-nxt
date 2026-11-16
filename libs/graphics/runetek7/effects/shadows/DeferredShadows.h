// libs/graphics/runetek7/effects/shadows/DeferredShadows.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class DeferredShadows {
    public:
        // virtual methods in vtable order
        virtual ~DeferredShadows();
        virtual bool Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        void SetShadowBufferRT(shared_ptr<render::RenderTargets> const&);
        DeferredShadows(RT7Core&);

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        uint field_24;     // offset 24
        char _unknown_28[12];
    };

    // 0x100467d40, 16 bytes, inline, placed by class name and debug map
    // DeferredShadows::SetShadowBufferRT(shared_ptr<render::RenderTargets> const&)
    void DeferredShadows::SetShadowBufferRT(shared_ptr* param_1) {
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)&field_32, param_1);
    }

    // 0x100921eb0, 16 bytes, complete-object destructor, inline, placed by class name
    // DeferredShadows::~DeferredShadows(): jumps straight to the base-object destructor

    // 0x100921ec0, 32 bytes, deleting destructor, inline, placed by class name
    // DeferredShadows::~DeferredShadows()
    void DeferredShadows::~DeferredShadows() {
        ~DeferredShadows(this);
        operator_delete(this);
    }

    // 0x100923380, 48 bytes, base-object destructor, inline, placed by class name
    // DeferredShadows::~DeferredShadows()
    void DeferredShadows::~DeferredShadows() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__DeferredShadows_100f19270;
        (&field_32)->~shared_ptr();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::graphics

namespace jag::game {
    // 0x100468a20, 144 bytes, inline, placed by debug map only (low confidence)
    // LightShadowImportanceKeyGenerator::CalculateShadowCastingImportanceKey(math::Vector3T<float> const&, math::Sphere const&, float)
    ulong LightShadowImportanceKeyGenerator::CalculateShadowCastingImportanceKey(Vector3T* param_1, Sphere* param_2,
                                                                                 float param_3) {
        uint uVar1;
        vector* pvVar2;
        float fVar3;
        undefined8 local_38[2];
        float local_24;

        pvVar2 = param_2->SSOBeginPtr(param_1);
        local_38[0] = math::operator-(param_1, (Vector3T*)pvVar2);
        fVar3 = (float)local_38->Length();
        uVar1 = math::RoundFloatToInt(fVar3);
        local_24 = (float)~uVar1 * field_0;
        fVar3 = (float)param_2->GetOutlineRadiusAdjustment();
        return (long)(param_3 * field_8 + fVar3 * field_4 + local_24) & 4294967295;
    }

} // namespace jag::game
